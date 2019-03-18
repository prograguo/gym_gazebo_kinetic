#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/src/vision_opencv/cv_bridge"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/install/lib/python2.7/dist-packages:/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/build" \
    "/home/zzl/anaconda3/envs/gym/bin/python" \
    "/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/src/vision_opencv/cv_bridge/setup.py" \
    build --build-base "/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/build/vision_opencv/cv_bridge" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/install" --install-scripts="/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/install/bin"
