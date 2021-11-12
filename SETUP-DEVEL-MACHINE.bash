#!/bin/bash

################################################################################

# Set up the system environment that requires 'sudo' privileges.
sudo -E ./INCL-SUDO-ENV.bash

################################################################################

# Set up the user environment that does not require 'sudo' privileges.
./INCL-USER-ENV.bash
