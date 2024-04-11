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
typedef std::vector<std::shared_ptr<open3d::geometry::PointCloud>> ptCloudVector;

ptCloudVector visualize_and_group_pt_cloud(const int& num_files,
                                  const std::string& file_dir,
                                  const std::vector<std::string>& file_names) {
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

    return 
}

void visualize_pt_cloud(const int& num_files,
                                  const std::string& file_dir,
                                  const std::vector<std::string>& file_names) {
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
}

// ----------------------------------------------------------------------------
int main() {

    // rgbd data
    std::string rgbd_base_name = "cloud_bin_";
    const std::string rgbd_file_dir = "../data/rgbd/"; 

    // lidar data
    std::string lidar_base_name = "Hokuyo_";
    const std::string lidar_file_dir = "../data/lidar/"; 

    const int num_files = 10; // number of point clouds in the dataset

    // file names
    std::vector<std::string> rgbd_file_names;
    for (int i = 0; i < num_files; ++i) {   
        std::string name = rgbd_base_name + std::to_string(i) + ".ply";
        rgbd_file_names.emplace_back(name);
    }

    std::vector<std::string> lidar_file_names;
    for (int i = 0; i < num_files; ++i) {   
        std::string name = lidar_base_name + std::to_string(i) + ".ply";
        lidar_file_names.emplace_back(name);
    }

    // load point clouds and display them
    visualize_pt_cloud(num_files, rgbd_file_dir, rgbd_file_names);
    visualize_pt_cloud(num_files, lidar_file_dir, lidar_file_names);

    // downsample
    


    return 0;
}
