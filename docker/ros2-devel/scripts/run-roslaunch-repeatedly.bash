#!/bin/bash    
    
################################################################################            
function on_signal_interrupt( ){            
  :    
}            
            
trap on_signal_interrupt 2    
    
################################################################################    
    
LAUNCH=$1    
    
if [ -z "${LAUNCH}" ]; then    
  echo "No launch file is specified."    
  echo "Usage: $0 LAUNCH_FILE"    
  exit 1    
fi    
    
PROMPT_START=$'\e[4m\e[1m'    
PROMPT_END=$'\e[0m'    
KEY_START=$'\e[7m'    
KEY_END=$'\e[0m'${PROMPT_START}    
PROMPT="${PROMPT_START}Run '${LAUNCH}'? Press:"$'\n'"'${KEY_START}r${KEY_END}' to run with the robot,"$'\n'"'${KEY_START}s${KEY_END}' to run in the simulator,"$'\n'"'${KEY_START}c${KEY_END}' to enter a child shell,"$'\n'"${PROMPT_END}"    
    
while true; do    
  read -n 1 -s -p "${PROMPT}" input;    
  if [ "${input}" = "r" ]; then    
    robot_mode;    
  elif [ "${input}" = "s" ]; then    
    simulation_mode;    
  elif [ "${input}" = "c" ]; then    
    cat <<EOF    
    
Starting a new shell process.    
You will return to the above prompt when you exit from this shell.    
Note: The new process does not inherit the mode ('robot_mode' or 'simulation_mode') from the previously executed 'roslaunch' process.    
    
EOF    
    bash -i    
    continue;    
  else    
    continue;    
  fi;    
  echo "ROS_MASTER_URI: ${ROS_MASTER_URI}";    
  roslaunch ur5e_launch ${LAUNCH};    
  echo "" # Display an empty line.    
done    
    
cat <<EOF    
    
Starting a new shell process.    
Note: The new process does not inherit the mode ('robot_mode' or 'simulation_mode') from the previously executed 'roslaunch' process.    
    
EOF    
    
exec bash -i
