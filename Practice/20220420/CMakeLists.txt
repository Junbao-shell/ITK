# Hello/CMakeLists.txt

include_directories(/usr/local/include/ITK-5.3/)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/)

set(SRC_LIST
    hello_itk.cpp)

add_executable(ITK_Hello ${SRC_LIST})
target_link_libraries(ITK_Hello ${ITK_LIBRARIES})