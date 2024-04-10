#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <chrono>
#include <string>
#include <algorithm>    // find
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <random>

// OpenCV:
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/viz.hpp> // Viz & VTK visualization
#include <opencv2/viz/types.hpp>


// Open3D:
#include "open3d/Open3D.h"

// Eigen
#include <Eigen/Dense>
#include <Eigen/Geometry>

// SFM
// #include "frame.h"


// ----------------------------------------------------------------------------
int main() {

// rgbd data
std::string base_name = "cloud_bin_";
const std::string file_dir = "../data/rgbd/"; 

// lidar data
// std::string base_name = "Hokuyo_";
// const std::string file_dir = "../data/lidar/"; 

const int num_files = 10; // number of point clouds in the dataset

// file names
std::vector<std::string> file_names;
for (int i = 0; i < num_files; ++i) {   
    std::string name = base_name + std::to_string(i) + ".ply";
    file_names.emplace_back(name);
}


// load point clouds and display them
for (int i = 0; i < num_files; ++i) {
    std::string file_path = file_dir + file_names[i];  

    // read point cloud data
    auto point_cloud_ptr = std::make_shared<open3d::geometry::PointCloud>();
    open3d::io::ReadPointCloud(file_path, *point_cloud_ptr);

    // create visualization window
    open3d::visualization::Visualizer visualizer;
    visualizer.CreateVisualizerWindow("Point Cloud Viewer", 1024, 768);

    // add point cloud to the window
    visualizer.AddGeometry(point_cloud_ptr);

    // run the visualization
    visualizer.Run();
}

return 0;
}
