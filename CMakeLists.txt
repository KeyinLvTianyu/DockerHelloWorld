# set minimum cmake version
cmake_minimum_required(VERSION 3.0)

# set project name
project(cpptest)

find_package(OpenCV REQUIRED)
find_package(Eigen3 REQUIRED)

# bring the include dir to project
INCLUDE_DIRECTORIES(${EIGEN3_INCLUDE_DIR})
include_directories(include)


# bring the src dir to project
# set(SOURCES src/bird.cpp src/main.cpp)  # method1: add cxx file one by one
file(GLOB SOURCES "src/*.cpp" "./*.cpp")  # method2: add cxx file once for all

# set the executable binary target
add_executable(cpptest ${SOURCES})
target_link_libraries(cpptest ${OpenCV_LIBS})
