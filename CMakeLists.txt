cmake_minimum_required (VERSION 2.6)
project (TimeReport)

set (CMAKE_BUILD_TYPE Debug)
set (PROJECT_SOURCE_DIR src)

# The version number.
set (TimeReport_VERSION_MAJOR 0)
set (TimeReport_VERSION_MINOR 2)

# configure a header file to pass some of the CMake settings to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/TimeReportConfig.h.in"
  "${PROJECT_BINARY_DIR}/TimeReportConfig.h"
)

# add the binary tree to the search path for include files
include_directories("${PROJECT_BINARY_DIR}")

add_executable(tr src/tr.cpp)
