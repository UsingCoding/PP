#include <iostream>
#include "SAsyncBlurBMPSettings.h"
#include "BlurBmp.h"
#include <ctime>

int main(int argc, char* argv[])
{
	try
	{
		const std::string inputImage = "image.bmp";
		const std::string outputImage = "image-done.bmp";
		const int threadCount = 2;
		const int coreCount = 2;

		std::vector<int> priorities = {0 ,1};

		const SAsyncBlurBMPSettings settings(inputImage, outputImage, coreCount, threadCount, priorities);

		BlurBmp(settings);

		return 0;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;

		return 1;
	}
}
