# Can get the latest CMake from https://apt.kitware.com/.
cmake_minimum_required(VERSION 3.22)

project(hw4 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

SET(CMAKE_CXX_FLAGS "-D DEBUG -Wall -Wfatal-errors -Wextra -Wno-unused-variable")
# SET(CMAKE_CXX_FLAGS "-DOpen3D_ROOT=${HOME}/open3d_install") # Still needs in command line


##################### Open3D ######################
# Open3D library
find_package(Open3D REQUIRED) # need cmake flag -DOpen3D_ROOT=${HOME}/open3d_install


##################### Eigen ######################
find_package(Eigen3 REQUIRED)
message(STATUS "Eigen Version: ${EIGEN3_VERSION_STRING} ${EIGEN3_VERSION}")


##################### OpenCV ######################
# Find installed OpenCV
set(OpenCV_DIR "/usr/local/include/opencv4")
find_package(OpenCV 4 REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )

message(STATUS "OpenCV Version: " ${OpenCV_VERSION})
message(STATUS "OpenCV Version: " ${OpenCV_VERSION})
message(STATUS "OpenCV_INSTALL_PATH = ${OpenCV_INSTALL_PATH}")
message(STATUS "OpenCV_INCLUDE_DIRS = ${OpenCV_INCLUDE_DIRS}")
message(STATUS "OpenCV_LIBS = ${OpenCV_LIBS}")


##########################################
include_directories(include/)

set(SOURCES
    src/main.cpp    
    )

add_executable(lidarslam ${SOURCES})

target_link_libraries(lidarslam 
                      ${OpenCV_LIBS} 
                      Open3D::Open3D 
                      Eigen3::Eigen
                      )
