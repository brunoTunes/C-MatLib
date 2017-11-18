cmake_minimum_required(VERSION 3.8)
project(MathLibs)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Vector3D/Vector3D.cpp Vector3D/Vector3D.h Matrix3D/Matrix3D.cpp Matrix3D/Matrix3D.h)
add_library(MathLibs ${SOURCE_FILES})