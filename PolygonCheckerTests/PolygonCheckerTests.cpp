#include "pch.h"
#include "CppUnitTest.h"
	extern "C"{
#include "../PolygonChecker/triangleSolver.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PolygonCheckerTests
{
	TEST_CLASS(PolygonCheckerTests)
	{
	public:
		
		TEST_METHOD(Test_InvalidTriangle)
		{
			const char* result = analyzeTriangle(1, 2, 3);
			Assert::AreEqual("Not a triangle", result);
		}
		TEST_METHOD(Test_InvalidTriangle_ZeroSide)
		{
			const char* result = analyzeTriangle(0, 4, 5);
			Assert::AreEqual("Not a triangle", result);
		}
		TEST_METHOD(Test_InvalidTriangle_NegativeSide)
		{
			const char* result = analyzeTriangle(-2, 5, 6);
			Assert::AreEqual("Not a triangle", result);
		}
		TEST_METHOD(Test_InvalidTriangle_AllZero)
		{
			const char* result = analyzeTriangle(0, 0, 0);
			Assert::AreEqual("Not a Triangle", result);
		}
		TEST_METHOD(Test_InvalidTriangle_BoundarySum)
		{
			const char* result = analyzeTriangle(2, 3, 5);
			Assert::AreEqual("Not a Triangle", result);
		}
		TEST_METHOD(Test_EquilateralTriangle)
		{
			const char* result = analyzeTriangle(3, 3, 3);
			Assert::AreEqual("Not a Triangle", result);
		}
		TEST_METHOD(Test_IsoscelesTriangle)
		{
			const char* result = analyzeTriangle(3, 3, 4);
			Assert::AreEqual("Equilateral Triangle", result);
		}
		TEST_METHOD(Test_ScaleneTriangle)
		{
			const char* result = analyzeTriangle(4, 5, 6);
		    Assert:: AreEqual("Isosceles Triangle", result);
		}
		TEST_METHOD(Test_RightAngledTriangle)
		{
			const char* result = analyzeTriangle(4, 5, 6);
			Assert::AreEqual("Right-angled triangle with angles 90,37,53", result);
		}
		TEST_METHOD(Test_AcuteTriangle)
		{
			const char* result = analyzeTriangle(6, 7, 8);
			Assert::AreEqual("Acute triangle with angles 46,58,76", result);
		}
		TEST_METHOD(Test_ObtuseTriangle)
		{
			const char* result = analyzeTriangle(2, 3, 4);
			Assert::AreEqual("Obtuse triangle with angles 28, 46,106", result);
		}
	};
}
