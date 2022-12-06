# ROS2 Software Development Environment (SDE)
This project aims to develop a shared platform for collabrative resesearch and development on the ROS2 by providing a robust, scalable, virtualized, and documented environment to all contributors.

## Contribution Guidelines
Carefully read the contribution guidelines before pushing new code or requesting a merge. Details can be found in the contribution guide:

## Reporting Issues
Please report any issue or future work by using the GitLab issue tracker:

## Getting Started
Follow this step-by-step guide to perform the initial setup of this project on a development machine running Ubuntu.

> Note 1: The whole development environment of this project is containerized/virtualized using Docker. This ensures that all the contributors work in the exact same software environment.


> Note 2: Simulator interfaces are primarily implemented with ROS.


> Note 3: This project relies heavily on both hardware 3D graphic acceleration and Nvidia CUDA, thus a discrete Nvidia GPU is highly recommended although Intel CPU graphic acceleration is also supported. In addition, virtual machines are only partially supported: 3D accelerated tools such as Rviz and Gazebo will crash at runtime unless the same virtual machine drivers are installed in both the Docker container and the virtual machine.


> Note 4: Although this initial setup is meant to be performed only once, you can run it again would you want to reset the development environment as the project evolves. However, make sure to backup your latest changes beforehand.

## Step 0: Verify the Prerequisites
### Mandatory:

- A development machine running Ubuntu 20.04 LTS (Focal Fossa) based on the AMD64 architecture.
- Access to administrator privileges (sudo) on the Ubuntu machine.

### Recommended:

- A Nvidia GPU capable of running CUDA 10.1 (compute capability >= 3.0), or newer, to accelerate 3D graphics and deep learning computing.
- A properly configured github.com account linked with your personal SSH key to push contributions to the project repository

## Step 1: Set up the Development Environment
Set up the environment of the development machine with the following instructions.

1. Install Git if necessary:  
```sudo apt-get update && sudo apt-get install -y git```


2. Clone the UR5e project repository in your home folder:  
```cd ~/ && git clone [https://gitlab.com/emlab/UR5e.git](https://github.com/ItoMasaki/ROS2Docker)```  
Enter your GitHub developer credentials if prompted.  


3. Configure the system environment:  
```cd ~/UR5e/ && bash ./SETUP-DEVEL-MACHINE.bash```  
The execution of SETUP-DEVEL-MACHINE.bash requires sudo permissions to install the tools that allow virtualization, i.e. Docker, Docker Compose, and Nvidia Docker 2. System changes made with sudo are kept to a strict minimum.


4. Reboot the system (or log out and back in) for the changes to users and groups to take effect:  
```sudo reboot```

> Note 5: The SETUP-DEVEL-MACHINE.bash script is actually divided into INCL-SUDO-ENV.bash and INCL-USER-ENV.bash. The execution of INCL-SUDO-ENV.bash makes system-wide changes and thus requires sudo permissions. However, if your system has already all the necessary tools installed, you can directly set up your local user environment with cd ~/UR5e/ && bash ./INCL-USER-ENV.bash which does not require sudo permissions.


> Note 6: You do not need to reboot if your local user has already been added to the docker group. If so, executing docker --version should not ask for sudo. In principle, you only need to reboot after the very first time you run SETUP-DEVEL-MACHINE.bash.


## Step 2: Build the Docker Image
Create a virtual environment using Docker (= Docker image) on the development machine with the following instructions.


1. Build the Docker image:  
```cd ~/UR5e/ && bash ./BUILD-DOCKER-IMAGE.bash```  
This script builds the image following the instructions found in ~/UR5e/docker/ur5e-devel/Dockerfile. Enter your GitLab developer credentials if prompted.


> Note 7: The script BUILD-DOCKER-IMAGE.bash first tries to download the image from the container registry of the project. If, for whatever reason, the image cannot be downloaded, the script will build it locally. The later process is slow and can take up to 1 hour. In both cases, avoid using a Wi-Fi connection to greatly accelerate the process. Note that future local builds will reuse cached data whenever possible.


## Step 3: Run the Docker Container
Enter a virtual instance of the Docker image (= Docker container) on the development machine with the following instructions.


1. Run the Docker container:  
```cd ~/UR5e/ && bash ./RUN-DOCKER-CONTAINER.bash```  
This script creates or updates the container following the instructions found in ~/UR5e/docker/docker-compose.yml. It allows the container to share system resources, such as volumes and devices, with the host machine.


2. Use ctrl+d to exit the container at any time.



> Note 8: If no Nvidia drivers are present, the script RUN-DOCKER-CONTAINER.bash sets the Docker runtime to runc, instead of nvidia, to bypass nvidia-docker2 when entering the container. In this case, most 3D accelerated tools, including the UR5e simulator, will be extremely slow to run.


> Note 9: Be careful if you need to modify docker-compose.yml as the container will be recreated from scratch the next time you run RUN-DOCKER-CONTAINER.bash.


## Step 4: Test the Catkin Workspace
Build and test the ROS environment (= Catkin workspace) inside the Docker container with the following instructions.


1. Enter the Docker container if necessary:  
```cd ~/UR5e/ && bash ./RUN-DOCKER-CONTAINER.bash```

2. Initialize the Catkin workspace:  
```cd /root/ROS2/ && bash ./docker/ros2-devel/scripts/reset-catkin-workspace.bash```  
This script will remove any existing Catkin workspace and build a new one inside /root/ROS2/catkin_ws/.

3. Make sure that the new Catkin workspace is sourced:  
```cd /root/ROS2/ && source ./catkin_ws/devel/setup.bash```

4. Launch a couple of publisher and subscriber test nodes from the ros2_launch package:  
```roslaunch ros2_launch ros2_chatter_default.launch```  
If everything has installed correctly, you should see a node ur5e_listener that subscribes to a publisher node called ros2_talker in a Rqt GUI.



> Note 10: The script reset-catkin-workspace.bash will build the Catkin workspace using catkin build instead of the older but still official catkin_make compiler. Please be sure to build using catkin build to avoid strange issues.


## Step 5: Learn the Advanced Functions
The development environment inside the Docker container offers several useful functions that you should be aware of. These advanced functions will help you increase both the convenience and the quality of your work for the UR5e project.

### Custom Bash Functions
The development environment contains the several useful Bash functions, all starting with the prefix ur5e-, to make your work more convenient. Including, but not limited to:


ros2-download-model-data: Download from the cloud all the large binary files required at runtime (models, datasets, dictionaries, weights, etc.).

ros2-initialize-catkin-workspace: Initialize, build, and source the Catkin workspace on top of the system ROS environment.

ros2-reset-catkin-workspace: Remove built artifacts, then cleanly rebuild and source the Catkin workspace on top of the system ROS environment (to use after, for example, switching branches).

ros2-fix-permission-issues: Fix the various permission issues that may appear when manipulating, on the host machine, files generated by the root user of the Docker container.

ros2-get-fully-started: Execute several of the aforementioned functions to quickly get started when entering a freshly built Docker container.


> Note 11: These Bash functions are based on helper scripts that can be found in /root/ROS2/docker/ros2-devel/scripts/ in the Docker container or in ~/ROS2/docker/ros2-devel/scripts/ in the host machine. You can see their definitions in ~/.bashrc inside the container.


## Multiple Terminal Operation
You can simultaneously run multiple terminals using RUN-TERMINATOR-TERMINAL.bash. This script opens Terminator with the default layout configuration stored in ~/UR5e/terminator/config. Each sub-terminal automatically executes RUN-DOCKER-CONTAINER.bash with a predefined ROS launch file for convenience. You can then select execution options by pressing specific keys as shown in the example below:

```
Run 'example_roslaunch_file.launch'? Press:
'r' to run with the robot,
'l' to run in the simulator,
'c' to enter a child shell,
```
