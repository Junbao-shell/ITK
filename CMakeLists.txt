# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

project(ITK_DEMO_0420)

find_package(ITK REQUIRED)
if (ITK_FOUND)
    message(STATUS "ITK found")
    message(STATUS "itk include: ${ITK_INCLUDE_DIRS}")
    include_directories(${ITK_INCLUDE_DIRS})
    include(${ITK_USE_FILE})
endif()

add_subdirectory(${CMAKE_SOURCE_DIR}/Practice/20220420/)