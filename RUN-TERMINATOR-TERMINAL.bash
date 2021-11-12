#!/bin/bash

mkdir -p .config/terminator

cp ./terminator/config ~/.config/terminator/config

################################################################################    
    
function on_signal_interrupt() {    
  DOCKER_PROJECT=$1    
  if [ -z "${DOCKER_PROJECT}" ]; then    
    DOCKER_PROJECT=${USER}    
  fi    
  DOCKER_CONTAINER="docker_rione_1"
  docker exec -i ${DOCKER_CONTAINER} bash -c "~/ROS2Docker/docker/ros2-devel/scripts/kill-all-ros-nodes.bash"
  echo "Killed all ros nodes"    
}    
    
trap on_signal_interrupt 2    
    
################################################################################

terminator -m -l ros2-terminator
sleep 1

on_signal_interrupt "$@"

clear
