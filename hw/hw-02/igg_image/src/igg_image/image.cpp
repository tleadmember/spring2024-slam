#include "image.h"
#include "io_tools.h"
using namespace igg;

Image::Image() { }
Image::Image(int rows, int cols): rows_{rows}, cols_{cols} { }

// const int& Image::rows() const { return rows_; }
// const int& Image::cols() const { return cols_; }
int& Image::rows() { return rows_; }
int& Image::cols() { return cols_; }
int& Image::max_val() { return max_val_; }
std::vector<int>& Image::data() { return data_; }

int& Image::at(int row, int col) { 
    int index = (row-1)*cols_ + (col-1);
    return data_[index]; 
}

bool Image::FillFromPgm(const std::string& file_name) {
    io_tools::ImageData imdata = io_tools::ReadFromPgm(file_name);
    this->rows() = imdata.rows;
    this->cols() = imdata.cols;
    this->max_val() = imdata.max_val;
    this->data() = imdata.data;
    // CONTINUE IF TIME
}


void Image::WriteToPgm(const std::string& file_name) {
    // CONTINUE IF TIME
}