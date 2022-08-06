//
//  main.cpp
//  Test_opencv
//
//  Created by 左成文 on 2022/8/6.
//

#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    cv::Mat a = cv::Mat::zeros(300, 300, CV_8UC3);
    cv::imshow("black", a);
    cv::waitKey();
    return 0;
}
