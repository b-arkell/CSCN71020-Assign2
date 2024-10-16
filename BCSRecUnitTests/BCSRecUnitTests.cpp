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
			// testing the getPerimeter function using length = 2 and width = 4
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
			// testing getarea function with length = 5 and width = 4
			int length = 5;
			int width = 4;
			int result = 0;
			result = getArea(&length, &width);
			Assert::AreEqual(20, result);

		}
	};

	TEST_CLASS(setLengthFunctionality)
	{
	public:

		TEST_METHOD(NegativeNumberTest)
		{
			// testing for negative number acception with -42 
			int input = -42;
			int length = 1;
			
			setLength(input, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(LengthUpperRange)
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
		TEST_METHOD(LengthLowerRange)
		{
			// testing lower limit with 0 & 1 for inclusive value
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

	TEST_CLASS(setWidthFunctionality)
	{
	public:

		TEST_METHOD(NegativeNumberTest)
		{
			// testing for negative number acception with -24
			int input = -24;
			int length = 1;

			setLength(input, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(WidthUpperRange)
		{
			// testing upper limit with 100 & 99 for inclusive value 
			int input = 99;
			int input2 = 100;
			int length = 1;
			int length2 = 1;
			setWidth(input, &length);
			setWidth(input2, &length2);
			Assert::AreEqual(99, length);
			Assert::AreEqual(1, length2);
		}
		TEST_METHOD(WidthLowerRange)
		{
			// testing lower limit with 0 & 1 for inclusive value
			int input = 0;
			int width = 1;
			int input2 = 1;
			int width2 = 50;

			setWidth(input, &width);
			setWidth(input2, &width2);
			Assert::AreEqual(1, width);
			Assert::AreEqual(1, width2);
		}
	};
}
