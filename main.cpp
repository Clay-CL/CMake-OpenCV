#include <iostream>
#include "lib/math/operations.hpp"

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
    std::cout << "Praise the Lord" << std::endl;

    math::operations op;
    int sum = op.sum(5, 4);
    std::cout << "Sum of 5 + 4 :" << sum << std::endl;

    cv::Mat image;
	cv::VideoCapture capture;
	capture.set(cv::CAP_PROP_FRAME_WIDTH, 640);
	capture.set(cv::CAP_PROP_FRAME_HEIGHT, 480);
	capture.open(1);

	while(true) {
		capture >> image;
		cv::imshow("test", image);

		int c = cv::waitKey(10);
		if (c == 27) break;
	}

    return 0;
}