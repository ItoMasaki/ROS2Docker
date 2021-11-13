import rclpy
from rclpy.node import Node
import smach
import smach_ros
import sys
#import actionlib

from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Quaternion
from std_msgs.msg import Header
from nav2_msgs.action import NavigateToPose
from action_msgs.msg import GoalStatus
from rclpy.action import ActionClient
import time
class SendGoal(smach.State):  #Create state SendGoal
    def __init__(self):
        smach.State.__init__(self, 
                             outcomes=['success','failed'],
                             input_keys=['move_base_goals_in','from_goal','goal_order'],
                             output_keys=['from_goal'])
        self.goal_msgs = NavigateToPose.Goal()
        self.node_ = rclpy.create_node('nav2_client')
        self.node_.get_logger().info('Created node')
        self.action_client = ActionClient (self.node_,NavigateToPose,'navigate_to_pose')
    def execute(self, userdata):
        if self.action_client.wait_for_server(20)!=1:
            self.node_.get_logger().error('Action server not available after waiting.')
            self.destory_node()
            return 'failed'
        move_base_goal = userdata.move_base_goals_in[userdata.goal_order[userdata.from_goal]].split(';')
        userdata.from_goal+=1
        self.goal_msgs.pose.header.frame_id='map'
        self.goal_msgs.pose.header.stamp=self.node_.get_clock().now().to_msg()
        self.goal_msgs.pose.pose.position.x=float(move_base_goal[0])
        self.goal_msgs.pose.pose.position.y=float(move_base_goal[1])
        self.goal_msgs.pose.pose.position.z= 0.0

        self.goal_msgs.pose.pose.orientation.x = 0.0
        self.goal_msgs.pose.pose.orientation.y = 0.0
        self.goal_msgs.pose.pose.orientation.z = float(move_base_goal[2])
        self.goal_msgs.pose.pose.orientation.w = float(move_base_goal[3])
        goal_handle_future=self.action_client.send_goal_async(self.goal_msgs)
        rclpy.spin_until_future_complete(self.node_,goal_handle_future)
        goal_handle = goal_handle_future.result()
        if not goal_handle.accepted:
            self.node_.get_logger().info('Goal rejected :(')
            self.destory_node()
            return 'failed'
        get_result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self.node_,get_result_future)
        result = get_result_future.result().result
        status = get_result_future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.node_.get_logger().info('Succeeded!')
        elif status == GoalStatus.STATUS_ABORTED:
            self.node_.get_logger().error('Goal was aborted')
            self.destory_node()
            return 'failed'
        elif status == GoalStatus.STATUS_CANCLED:
            self.node_.get_logger().error('Goal was canceled')
            self.destory_node()
            return 'failed'
        else: 
            self.node_.get_logger().error('Unknown result code')
            self.destory_node()
            return 'failed'
        if userdata.from_goal == len(userdata.goal_order):
            self.destory_node()
        return 'success'
    def destory_node(self):
        self.action_client.destroy()
        self.node_.destroy_node()



class Wait(smach.State):  #Create state Wait
    def __init__(self):
        smach.State.__init__(self, 
                             outcomes=['continue_sending_goal','finished'],
                             input_keys=['count_goal_in','goal_num','count_goal_out'],
                             output_keys=['count_goal_out'])
        
    def execute(self, userdata):  
        time.sleep(2)
        userdata.count_goal_out=userdata.count_goal_in+1;
        if userdata.count_goal_out < userdata.goal_num:
            return 'continue_sending_goal'
        else:
            return 'finished'
        


def main():
    rclpy.init(args=None)
    # Create SMACH state machine
    sm = smach.StateMachine(outcomes=['finished','failed'])

    # Define userdata
    sm.userdata.move_base_goals = ['-0.579;-1.341;0.0;1.0','5.214;-1.533;0.0;1.0','1.588;1.253;0.0;1.0']   #Set all the goals you want to sent to the robot.
    sm.userdata.goal_order = [0,2,1,0,1,2,1,0]
    sm.userdata.goal_num = len(sm.userdata.goal_order)
    sm.userdata.from_goal = 0
    sm.userdata.count_goal = sm.userdata.from_goal


    with sm:
        smach.StateMachine.add('SendGoal', SendGoal(),
                               transitions={'success':'Wait',
                                            'failed':'failed',},
                               remapping={'move_base_goals_in':'move_base_goals',
                                            'from_goal':'from_goal',
                                            'goal_order':'goal_order'})
        smach.StateMachine.add('Wait', Wait(),
                               transitions={'continue_sending_goal':'SendGoal',
                                            'finished':'finished'},
                               remapping = {'count_goal_in':'count_goal','count_goal_out':'count_goal','goal_num':'goal_num'})

    # Create and start introspection server
    sis = smach_ros.IntrospectionServer('smach_server', sm, '/SM_ROOT')
    sis.start()

    # Execute SMACH plan
    sm.execute()

    # Wait for interrupt and stop introspection server
    sis.stop()
#
if __name__=="__main__":
    main()
