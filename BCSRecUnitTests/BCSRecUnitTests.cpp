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

	TEST_CLASS(setLengthFunction)
	{
	public:

		TEST_METHOD(NegativeNumberTest)
		{
			// testing negative numbers 
			int input = -42;
			int length = 1;
			
			setLength(input, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(UpperRangeFunctionality)
		{
			// testing upper limit with 100 & 99 for inclusive value 
			int input = 99;
			int input2 = 100;
			int length = 1;
			int length2 = 1;
			setLength(input, &length);
			setLength(input2, &length2);
			Assert::AreEqual(99, length);
			Assert::AreEqual(1, length2);
		}
		TEST_METHOD(LowerRangeFunctionality)
		{
			// testing lower limit with 0 & 1 for inclusive value
			// test lower limit with 0
			int input = 0;
			int length = 1;
			int input2 = 1;
			int length2 = 50;

			setLength(input, &length);
			setLength(input2, &length2);
			Assert::AreEqual(1, length);
			Assert::AreEqual(1, length2);
		}
	};
}
