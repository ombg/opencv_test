#include <iostream>

#include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"

int main()
{
    cv::Mat a(100,100,CV_8UC3);
    cv::imwrite("test.png",a);
}
