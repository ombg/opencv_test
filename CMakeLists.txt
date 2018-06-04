cmake_minimum_required (VERSION 2.8.11)
project (opencv_test)

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add OpenCV 3.2 or higher
find_package( OpenCV 3.2 REQUIRED core highgui imgproc imgcodecs)

include_directories(${OpenCV_INCLUDE_DIRS})
message(STATUS "OpenCV_INCLUDE_DIRS: " ${OpenCV_INCLUDE_DIRS} )
message(STATUS "OpenCV_LIBS: " ${OpenCV_LIBS} )
message(STATUS "OpenCV_INSTALL_PATH: " ${OpenCV_INSTALL_PATH} )

add_executable(opencv_test opencv_test.cpp)

#target_link_libraries(opencv_test ${OpenCV_LIBS}  stdc++fs )
target_link_libraries(opencv_test ${OpenCV_LIBS} )
