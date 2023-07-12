#include "opencv2\opencv.hpp"

using namespace cv;

extern "C" __declspec(dllexport) int Flip(void *img, short Width, short Height, int FlipMode)
{
	try{
		Mat Image(Size(Width, Height), CV_8U, img, Width);
		flip(Image, Image, FlipMode);
	}
	catch (Exception e){
		const char* err_msg = e.what();
		return 1; //OpenCV Error occurred
	}
	return 0;
}