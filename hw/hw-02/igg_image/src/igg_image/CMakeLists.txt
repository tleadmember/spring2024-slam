#################### Import the 'io_tools' library here ########################

#################### Create a library 'image' below this line ##################
add_library(image image.cpp)

find_library(IO_TOOLS
            NAMES io_tools
            PATHS ${PROJECT_SOURCE_DIR}/lib)

target_link_libraries(image ${IO_TOOLS})