#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	void setLength(int input, int* length);
	void setWidth(int input, int* width);
	int getPerimeter(int* length, int* width);
	int getArea(int* length, int* width);
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecUnitTests
{
	TEST_CLASS(getPerimeterFunction)
	{
	public:
		
		TEST_METHOD(PerimeterCalculationTest)
		{
			// testing the get perimeter function using length = 2 and width = 4
			int length = 2;
			int width = 4;
			int result = 0;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(12, result);

		}
	};

	TEST_CLASS(getAreaFunction)
	{
	public:

		TEST_METHOD(AreaCalculationTest)
		{
			// testing getarea function with A = L X W
			int length = 5;
			int width = 4;
			int result = 0;
			result = getArea(&length, &width);
			Assert::AreEqual(20, result);

		}
	};
}
