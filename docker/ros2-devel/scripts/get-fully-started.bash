#!/bin/bash

# Download submodule packages
git submodule update --init --recursive

# neovim installs packages and changes init file path
# nvim -E -s -u "/root/.vimrc" +PlugInstall +qall +slient

cd ~/Rione/catkin_ws && catkin_make
