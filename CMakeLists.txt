cmake_minimum_required(VERSION 3.13.4)

project(Test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)
# message(${CMAKE_BINARY_DIR})
set(MATH_LIB_NAME math)
add_library(${MATH_LIB_NAME} STATIC lib/math/operations.cpp)

set(SOURCES main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} 
                            ${MATH_LIB_NAME} 
                            ${OpenCV_LIBS}
                        )