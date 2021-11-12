#!/bin/bash

################################################################################

# Link the default shell 'sh' to Bash.
alias sh='/bin/bash'

################################################################################

# Configure the terminal.

# Disable flow control. If enabled, inputting 'ctrl+s' locks the terminal until inputting 'ctrl+q'.
stty -ixon

################################################################################

# Configure 'umask' for giving read/write/execute permission to group members.
umask 0002

################################################################################

# Display the Docker container version.

# If switched from Dockerfile-sensitive generation to folder-sensitive generation,
# then show latest commit of the 'thr-devel' folder with 'git log -n 1 --format="%h %aN %s %ad" -- $directory'.
DOCKERFILE_LATEST_HASH=$(git -C /root/ROS2Docker/ log -n 1 --no-merges --pretty=format:%h ./docker/ros2-devel/Dockerfile)
DOCKERFILE_LATEST_DATE=$(git -C /root/ROS2Docker/ log -n 1 --no-merges --pretty=format:%cd ./docker/ros2-devel/Dockerfile)
DOCKERFILE_CREATION_DATE=$(git -C /root/ROS2Docker/ show --no-patch --no-notes --pretty='%cd' ${DOCKER_IMAGE_VERSION})

echo -e "Container version: ros2-devel:${DOCKER_IMAGE_VERSION:0:7} from ${DOCKERFILE_CREATION_DATE}"
if [[ "${DOCKERFILE_CREATION_DATE}" != "${DOCKERFILE_LATEST_DATE}" ]]; then
  echo -e "Newer image available: ros2-devel:${DOCKERFILE_LATEST_HASH} from ${DOCKERFILE_LATEST_DATE}"
fi

################################################################################

# Source the ROS environment.
echo "Sourcing the ROS environment from '/opt/ros/foxy/setup.bash'."
source /opt/ros/foxy/setup.bash

# Source the Catkin workspace.
echo "Sourcing the Catkin workspace from '/root/ROS2Docker/ros2_ws/install/setup.bash'."
source /root/ROS2Docker/ros2_ws/install/setup.bash

################################################################################

# Add the Catkin workspace to the 'ROS_PACKAGE_PATH'.
export ROS_PACKAGE_PATH=${ROS_PACKAGE_PATH}:/root/ROS2Docker/ros2_ws/src/

################################################################################

# Set the ROS network interface.

if [ -z "${ROS_IP}" ]; then
  # If the local 'ROS_IP' is empty, default to the Docker network interface ('docker0').
  export ROS_IP=$(LANG=C /sbin/ifconfig docker0 | grep -Eo 'inet (addr:)?([0-9]*\.){3}[0-9]*' | grep -Eo '([0-9]*\.){3}[0-9]*')
fi
echo "ROS_IP is set to '${ROS_IP}'."

export ROS_HOME=~/.ros

################################################################################

# Move to the working directory.
cd /root/ROS2Docker/
