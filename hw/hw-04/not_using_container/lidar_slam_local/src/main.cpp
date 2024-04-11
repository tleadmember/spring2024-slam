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

using namespace open3d;

// Type definitions
typedef std::shared_ptr<geometry::PointCloud> ptCloudPtr;
typedef std::vector<ptCloudPtr> ptCloudVec;

// Visualize point clouds while also returning a vector of point clouds passed to function
ptCloudVec visualizeAndGroupPtClouds(const int& num_files,
                                     const std::string& file_dir,
                                     const std::vector<std::string>& file_names) {
    ptCloudVec pc_vec;

    for (int i = 0; i < num_files; ++i) {
        std::string file_path = file_dir + file_names[i];  

        // read point cloud data
        ptCloudPtr point_cloud_ptr = std::make_shared<geometry::PointCloud>();
        io::ReadPointCloud(file_path, *point_cloud_ptr);

        // add to vector of point clouds to return
        pc_vec.emplace_back(point_cloud_ptr);

        // // create visualization window
        // visualization::Visualizer visualizer;
        // visualizer.CreateVisualizerWindow("Point Cloud Viewer", 1024, 768);

        // // add point cloud to the window
        // visualizer.AddGeometry(point_cloud_ptr);

        // // run the visualization
        // visualizer.Run();
    }

    return pc_vec;
}

// Visualize point clouds
void visualizePtClouds(const int& count,
                       const ptCloudVec pc_vec) {
    for (int i = 0; i < count; ++i) {
        // read point cloud data
        ptCloudPtr point_cloud_ptr = pc_vec[i];

        // create visualization window
        visualization::Visualizer visualizer;
        visualizer.CreateVisualizerWindow("Point Cloud Viewer", 1024, 768);

        // add point cloud to the window
        visualizer.AddGeometry(point_cloud_ptr);

        // run the visualization
        visualizer.Run();
    }
}

// Visualize a registration
void VisualizeRegistration(const geometry::PointCloud &source,
                           const geometry::PointCloud &target,
                           const Eigen::Matrix4d &Transformation) {
    ptCloudPtr source_transformed_ptr(new geometry::PointCloud);
    ptCloudPtr target_ptr(new geometry::PointCloud);
    *source_transformed_ptr = source;
    *target_ptr = target;
    source_transformed_ptr->Transform(Transformation);
    visualization::DrawGeometries({source_transformed_ptr, target_ptr},
                                  "Registration result");
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

    // load point clouds and display them, and group into vectors
    ptCloudVec rgbd_pc_vec, lidar_pc_vec;
    rgbd_pc_vec = visualizeAndGroupPtClouds(num_files, rgbd_file_dir, rgbd_file_names);
    lidar_pc_vec = visualizeAndGroupPtClouds(num_files, lidar_file_dir, lidar_file_names);

    // downsample
    ptCloudVec rgbd_pc_vec_down = rgbd_pc_vec; // initialize
    ptCloudVec lidar_pc_vec_down = lidar_pc_vec;
    for (int i = 0; i < num_files; ++i) {   
        rgbd_pc_vec_down[i] = rgbd_pc_vec[i]->VoxelDownSample(0.05);
        lidar_pc_vec_down[i] = lidar_pc_vec[i]->VoxelDownSample(0.1);
    }

    // // visualize point clouds after downsampling
    // visualizePtClouds(num_files, rgbd_pc_vec_down);
    // visualizePtClouds(num_files, lidar_pc_vec_down);

    // register rgbd point clouds using ICP
    std::vector<Eigen::Matrix4d> trans_vec;
    for (int i = 0; i < num_files; ++i) {
        trans_vec.emplace_back(Eigen::Matrix4d::Identity()); // initialize)
    }
    for (int i = 0; i < num_files-1; ++i) {
        ptCloudPtr source_down = rgbd_pc_vec_down[i];
        ptCloudPtr target_down = rgbd_pc_vec_down[i+1];
    }
    
    // visualize the registration above


    // register lidar point clouds using ICP


    // visualize the registration above


    // register rgbd point clouds using RANSAC with FPFH correspondence


    // visualize the registration above


    // register lidar point clouds using RANSAC with FPFH correspondence


    // visualize the registration above


    return 0;
}
