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
#include <opencv2/calib3d.hpp>


// // Open3D:
// #include "open3d/Open3D.h"

// Eigen
#include <Eigen/Dense>
#include <Eigen/Geometry>

struct Options{
    // SIFT params
    int num_features = 1000;          // number of best features to retain
    int num_octave_layers = 3;        // number of layers in each octave
    double contrast_threshold = 0.04; // threshold used to filter out weak features in low-contrast regions; the larger, the less features
    double edge_threshold = 10;       // threshold used to filter out edge-like features; the larger, the more features
    double sigma = 1.6;               // sigma of the Gaussian applied to the input image; reduce for weak soft images
};

Options options;


// ----------------------------------------------------------------------------
int main() {

// camera interinsic params    
cv::Mat intrinsic_mat = cv::Mat(3,3, CV_64F);  // camera intrinsic matrix (aka calibration matrix)
cv::Mat distortion_coeff = cv::Mat::zeros(5,1, CV_64F); // camera distortion coefficients
intrinsic_mat.at<double>(0,0) = 359.035;
intrinsic_mat.at<double>(1,1) = 260.546;
intrinsic_mat.at<double>(0,2) = 352.779;
intrinsic_mat.at<double>(1,2) = 354.609;

// ----------------------------------------
// load images
int num_images = 3;

const std::string image_dir = "../data/"; // image paths
std::vector<std::string> image_names;
std::vector<cv::Mat> images;
for (int i = 0; i <3; ++i) {       
    std::string image_name = "img" + std::to_string(i) + ".png";
    image_names.emplace_back(image_name);

    std::string image_path = image_dir + image_names[i]; 
    cv::Mat image = cv::imread(image_path, cv::IMREAD_GRAYSCALE);
    images.emplace_back(image);

    cv::imshow(image_name, image);
    cv::waitKey(0);
}

// ----------------------------------------
// extract sift features
auto image = images[0];
auto detector = cv::SiftFeatureDetector::create(options.num_features,
                                                options.num_octave_layers,
                                                options.contrast_threshold,
                                                options.edge_threshold,
                                                options.sigma);
std::vector<cv::KeyPoint> keypoints;  // exteracted image features
detector->detect(image, keypoints);

auto extractor = cv::SiftDescriptorExtractor::create();
cv::Mat descriptors;  // feature descriptors
extractor->compute(image, keypoints, descriptors);

cv::Mat image_keypoints;
cv::drawKeypoints(image, keypoints, image_keypoints);
cv::imshow("Image with SIFT Keypoints", image_keypoints);
cv::waitKey(0);


// ----------------------------------------
// find relative pose between images using ransac


// ----------------------------------------
// triangulate



// ----------------------------------------
// match scale of landmarks



// ----------------------------------------
// display 3D landmarks




return 0;
}
