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
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/shri/ros_hw/src/message_ui"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/shri/ros_hw/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/shri/ros_hw/install/lib/python3/dist-packages:/home/shri/ros_hw/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/shri/ros_hw/build" \
    "/usr/bin/python3" \
    "/home/shri/ros_hw/src/message_ui/setup.py" \
     \
    build --build-base "/home/shri/ros_hw/build/message_ui" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/shri/ros_hw/install" --install-scripts="/home/shri/ros_hw/install/bin"
