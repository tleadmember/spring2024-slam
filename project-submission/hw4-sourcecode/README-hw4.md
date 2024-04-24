# To build, NOT using Open3D as a CMake External Project
mkdir build
cd build
cmake -DOpen3D_ROOT=directory/where/Open3D/is/installed ..
make -j

# To run, in build/ directory
./lidarslam
