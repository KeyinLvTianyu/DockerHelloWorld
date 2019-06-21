#include <iostream>
#include <opencv2/opencv.hpp>
#include <Eigen/Dense>  

#include "bird.h"
using namespace std;
using namespace cv;
int main(int argc, char** argv)
{
	Eigen::Vector4d vec4d(1.0, 2.0, 3.0, 4.0);
	cout << vec4d << endl;
	bird b;
    b.fly();
	if (argc != 2)
	{
		cout<<"usage: DisplayImage.out <Image_Path>"<<endl;
		return -1;
	}

	Mat image;
	image = imread(argv[1], 1);

	if (!image.data)
	{
		cout << "No image data"<<endl;
		return -1;
	}
	namedWindow("Display Image", WINDOW_AUTOSIZE);
	imshow("Display Image", image);

	waitKey(0);

	return 0;

}

