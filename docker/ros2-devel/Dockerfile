# This docker image is for ros2 environment

# Define arguments
ARG nvidia_cudagl_version=11.2.0-devel-ubuntu20.04
ARG nvidia_cudnn_version=8.1.0.77-1+cuda11.2

# Pull the official parent image from the Nvidia repository.
FROM nvidia/cudagl:${nvidia_cudagl_version}
ARG nvidia_cudagl_version
ENV NVIDIA_CUDAGL_VERSION=${nvidia_cudagl_version}


# Install the Nvidia cuDNN 8 library missing in the parent image.
ARG nvidia_cudnn_version
ENV NVIDIA_CUDNN_VERSION=${nvidia_cudnn_version}
RUN apt-get update && apt-get install -y --no-install-recommends \
  libcudnn8\
  libcudnn8-dev\
  && apt-mark hold libcudnn8 \
  && rm -rf /var/lib/apt/lists/*

ENV DEBIAN_FRONTEND=noninteractive

# Support Intel 3D acceleration when no Nvidia drivers are found:
# If the argument 'nvidia_gl' is 'false', remove the configuraion files related to the GL library provided by Nvidia and re-generate '/etc/ld.so.cache' by executing 'ldconfig'.
# This is required to avoid problems occurring when the host system does not have the GL library provided by Nvidia.
# In addition, remove the value of the environment variable 'LD_LIBRARY_PATH' which will be inherited from the base image.
# The variable is not necessary as long as the same information is provided by '/etc/ld.so.cache'.
ARG nvidia_gl="true"
RUN if [ "${nvidia_gl}" = "false" ]; then \
    rm /etc/ld.so.conf.d/nvidia.conf /etc/ld.so.conf.d/glvnd.conf; \
    ldconfig; \
  fi

ENV LD_LIBRARY_PATH=


# Set the default Docker runtime.
# By default, the 'nvidia/cudagl' image comes with Nvidia GL support.
# If no Nvidia GPU drivers are installed on the host, the image needs to be started with the runtime argument '--env DOCKER_RUNTIME=runc'.
# This is done at the container start-up by './scripts/initialize-docker-container.bash'.
ENV DOCKER_RUNTIME="nvidia"


# Install curl , git , lsb-release
RUN apt-get update && \
    apt-get install -y curl git lsb-release software-properties-common libsensors4-dev


# Install Python3
RUN apt-get update && \
    apt-get install -y python3-dev python3-pip


# Install ROS noetic
# Reference : http://wiki.ros.org/noetic/Installation/Ubuntu

# Add ros repository to file
RUN echo "deb http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros2-latest.list


# Registry ros repository to apt
RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | apt-key add -


# Install python packages
RUN apt-get update && apt-get install -y --no-install-recommends --allow-downgrades \
    python-pip-whl=20.0.2-5ubuntu1.5 \
    python3-pip=20.0.2-5ubuntu1.5 \
    python3-colcon-common-extensions=0.2.1-1 \
    && rm -rf /var/lib/apt/lists/*


# Install ros2 packages
RUN apt-get update && apt-get install -y --no-install-recommends --allow-downgrades \
    ros-foxy-desktop=0.9.2-1focal.20211012.200812 \
    && rm -rf /var/lib/apt/lists/*

# Write command to bashrc
RUN echo "source /opt/ros/foxy/setup.bash" >> ~/.bashrc

# Change path of python3
RUN ln /usr/bin/python3 /usr/bin/python

# Remove the value of the environment variable 'LD_LIBRARY_PATH' which will be inherited from the base image.
# The variable is not necessary as long as the same information is provided by '/etc/ld.so.cache' but is breaking 'glxgears'.
ENV LD_LIBRARY_PATH=

# Force color prompt in terminal.
RUN sed -i 's/#force_color_prompt=yes/force_color_prompt=yes/' /root/.bashrc

RUN echo "export PATH='/root/ROS2Docker/docker/ros2-devel/scripts:$PATH'" >> /root/.bashrc

# RUN echo "export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/Rione/catkin_ws/src/tmc_gazebo_worlds/models" >> /root/.bashrc

# Copy script and add permission of execution
WORKDIR /root/
COPY ./docker/ros2-devel/scripts /root/ROS2Docker/docker/ros2-devel/scripts
RUN chmod -R +x /root/ROS2Docker/docker/ros2-devel/scripts/*

# Setup the Bash shell environment with '/root/.bashrc'.
RUN echo "source /root/ROS2Docker/docker/ros2-devel/scripts/initialize-bash-shell.bash" >> /root/.bashrc

ENTRYPOINT []

CMD ["/bin/bash"]
