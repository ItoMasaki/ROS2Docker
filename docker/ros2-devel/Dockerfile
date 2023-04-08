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

# Install editor
RUN apt-get update && apt-get install -y --no-install-recommends --allow-downgrades \
    neovim \
    nano \
    && rm -rf /var/lib/apt/lists/*

# Install Python3
RUN apt-get update && \
    apt-get install -y python3-dev python3-pip

# Now add the ROS 2 GPG key with apt.
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

# Then add the repository to your sources list.
RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null


# Install python packages
RUN apt-get update && apt-get install -y --no-install-recommends --allow-downgrades \
    python3-pip \
    && rm -rf /var/lib/apt/lists/*


# Install ros2 packages
RUN apt-get update && apt-get install -y --no-install-recommends --allow-downgrades \
    ros-galactic-desktop \
    ros-dev-tools \
    && rm -rf /var/lib/apt/lists/*

#####################################################################################

# Install ignition gazebo

RUN apt-get update && apt-get install -y --no-install-recommends --allow-downgrades \
    wget \
    && rm -rf /var/lib/apt/lists/*

RUN sh -c 'echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable `lsb_release -cs` main" > /etc/apt/sources.list.d/gazebo-stable.list'

RUN wget http://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -

RUN apt-get update && sudo apt-get install -y --no-install-recommends --allow-downgrades \
    ignition-edifice \
    && rm -rf /var/lib/apt/lists/*

#####################################################################################

# Install Turtlebot4 simulation

RUN apt-get update && apt-get install -y --no-install-recommends --allow-downgrades \
    ros-galactic-turtlebot4-simulator \
    ros-galactic-irobot-create-nodes \
    && rm -rf /var/lib/apt/lists/*

#####################################################################################

# Write command to bashrc
RUN echo "source /opt/ros/galactic/setup.bash" >> ~/.bashrc

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
RUN mkdir -p /root/ROS2Docker/docker/ros2-devel/scripts
COPY ./docker/ros2-devel/scripts /root/ROS2Docker/docker/ros2-devel/scripts
RUN chmod -R +x /root/ROS2Docker/docker/ros2-devel/scripts/*

# Setup the Bash shell environment with '/root/.bashrc'.
RUN echo "source /root/ROS2Docker/docker/ros2-devel/scripts/initialize-bash-shell.bash" >> /root/.bashrc

ENTRYPOINT []

CMD ["/bin/bash"]
