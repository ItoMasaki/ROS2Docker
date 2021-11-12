#!/bin/bash    
    
# This script runs a Docker container instance with a name based on [docker-project].    
#    
# Usage: bash RUN-DOCKER-CONTAINER.bash [docker-project] [ros-launch]    
#    
# [docker-project]: Used to name the Docker container and create multiple instances if needed. Default value is '$USER'.    
# [ros-launch]: Used to automatically preload a ROS launch file when entering the Docker container for convenience. Format is 'filename.launch'.    
    
#################################################################################    
    
# Set the default Docker runtime to use in './docker/docker-compose.yml'.    
if [ -e /proc/driver/nvidia/version ]; then    
  export DOCKER_RUNTIME=nvidia    
else    
  export DOCKER_RUNTIME=runc    
fi    
    
################################################################################    
    
# Set the Docker container name from the [docker-project] argument.    
# If no [docker-project] is given, use the current user name as the Docker project name.    
DOCKER_PROJECT=$1    
if [ -z "${DOCKER_PROJECT}" ]; then    
  DOCKER_PROJECT=${USER}    
fi    
DOCKER_CONTAINER="${DOCKER_PROJECT}"
echo "$0: DOCKER_PROJECT=${DOCKER_PROJECT}"    
echo "$0: DOCKER_CONTAINER=${DOCKER_PROJECT}"
    
# Run the Docker container in the background.    
# Any changes made to './docker/docker-compose.yml' will recreate and overwrite the container.    
docker-compose -p ${DOCKER_PROJECT} -f ./docker/docker-compose.yml up -d

################################################################################    
    
# Display GUIs through X Server by granting full access to any external client.    
xhost +    
    
################################################################################

echo ${DOCKER_PROJECT}

# Run docker container
if [ ! $1 ]; then
  docker exec -i -t ${DOCKER_PROJECT}_ros2docker_1 bash
else
  docker exec -i -t ${DOCKER_CONTAINER_NAME} bash -i -c "source ~/ROS2Docker/docker/ros2-devel/scripts/run-roslaunch-repeatedly.bash $1"
fi
