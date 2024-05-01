# Can get the latest CMake from https://apt.kitware.com/.
cmake_minimum_required(VERSION 3.22)

project(calib LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

SET(CMAKE_CXX_FLAGS "-D DEBUG -Wall -Wfatal-errors -Wextra -Wno-unused-variable")

# if(NOT CMAKE_BUILD_TYPE)
#     message(STATUS "No CMAKE_BUILD_TYPE specified, default to Release.")
#     set(CMAKE_BUILD_TYPE "Release")
# endif()

##################### Eigen ######################
find_package(Eigen3 REQUIRED)
message(STATUS "Eigen Version: ${EIGEN3_VERSION_STRING} ${EIGEN3_VERSION}")


##################### OpenCV ######################
# Find installed OpenCV
set(OpenCV_DIR "/usr/local/include/opencv4")
find_package(OpenCV 4 REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )

message(STATUS "OpenCV Version: " ${OpenCV_VERSION})
# message(STATUS "OpenCV Version: " ${OpenCV_VERSION})
# message(STATUS "OpenCV_INSTALL_PATH = ${OpenCV_INSTALL_PATH}")
# message(STATUS "OpenCV_INCLUDE_DIRS = ${OpenCV_INCLUDE_DIRS}")
# message(STATUS "OpenCV_LIBS = ${OpenCV_LIBS}")


##########################################
include_directories(include)

set(SOURCES
    src/main.cpp    
    )
add_executable(cameraslam ${SOURCES})

target_link_libraries(cameraslam 
                      ${OpenCV_LIBS} 
                      Eigen3::Eigen
                      )
