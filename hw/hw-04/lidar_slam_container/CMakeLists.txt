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

##################### Open3D ######################
# Open3D library
option(GLIBCXX_USE_CXX11_ABI "Set -D_GLIBCXX_USE_CXX11_ABI=1" ON)

include(ExternalProject)
ExternalProject_Add(
    external_open3d
    PREFIX open3d
    GIT_REPOSITORY https://github.com/intel-isl/Open3D.git
    GIT_TAG v0.18.0
    GIT_SHALLOW ON
    UPDATE_COMMAND ""
    # Check out https://github.com/intel-isl/Open3D/blob/master/CMakeLists.txt
    # For the full list of available options.
    CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
        -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
        -DGLIBCXX_USE_CXX11_ABI=${GLIBCXX_USE_CXX11_ABI}
        -DBUILD_SHARED_LIBS=ON
        -DBUILD_PYTHON_MODULE=OFF
        -DBUILD_EXAMPLES=OFF
        -DUSE_SYSTEM_JPEG=ON # otherwise stomps on opencv, breaks
                              # compressed image_transport (imdecode).
                              # Alternatively, just make this a static lib.
        -DBUILD_UNIT_TESTS=OFF
        -DPYTHON_EXECUTABLE=/usr/bin/python3
)

# Simulate importing Open3D::Open3D
ExternalProject_Get_Property(external_open3d INSTALL_DIR)
add_library(Open3DHelper INTERFACE)
add_dependencies(Open3DHelper external_open3d)
target_compile_features(Open3DHelper INTERFACE cxx_std_14)
target_compile_definitions(Open3DHelper INTERFACE _GLIBCXX_USE_CXX11_ABI=$<BOOL:${GLIBCXX_USE_CXX11_ABI}>)
target_include_directories(Open3DHelper INTERFACE "${INSTALL_DIR}/include" "${INSTALL_DIR}/include/open3d/3rdparty")
target_link_directories(Open3DHelper INTERFACE "${INSTALL_DIR}/lib")
target_link_libraries(Open3DHelper INTERFACE Open3D)
add_library(Open3D::Open3D ALIAS Open3DHelper)


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
add_executable(lidarslam ${SOURCES})

target_link_libraries(lidarslam 
                      ${OpenCV_LIBS} 
                      Open3D::Open3D 
                      Eigen3::Eigen
                      )
