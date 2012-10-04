#include <iostream>
#include "cv.h"
#include "highgui.h"

using namespace cv;

int main( int argc, char** argv )
{ 
	IplImage *source = cvLoadImage( argv[1]);
	int percent = atoi(argv[3]);
	IplImage *destination = cvCreateImage
	(cvSize((int)((source->width*percent)/100), (int)((source->height*percent)/100)), source->depth, source->nChannels);
	cvResize(source, destination);
	cvSaveImage(argv[2], destination);
	cvShowImage("Resized Image",destination);
	waitKey(0);
	return 0;
}
