#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;

Mat src, erosion_dst, dilation_dst;

int erosion_elem = 0;
int erosion_size = 0;
int const max_elem = 2;
int const max_kernel_size = 21;

void Erosion(int,void*) {
	int erosion_type = 0;

	//![kernel]
	Mat element = getStructuringElement(erosion_type,
		Size(2 * erosion_size + 1, 2 * erosion_size + 1),
		Point(erosion_size, erosion_size));
	//![kernel]

}