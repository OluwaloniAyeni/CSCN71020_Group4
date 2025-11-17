#include "pch.h"
#include "CppUnitTest.h"
	extern "C"{
#include "../PolygonChecker/triangleSolver.h"
#include "../PolygonChecker/rectangleSolver.h"
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
			Assert::IsTrue(strstr(result, "Not a triangle") != nullptr);
		}
		TEST_METHOD(Test_InvalidTriangle_BoundarySum)
		{
			const char* result = analyzeTriangle(2, 3, 5);
			Assert::IsTrue(strstr(result, "Not a triangle") != nullptr);
		}
		TEST_METHOD(Test_EquilateralTriangle)
		{
			const char* result = analyzeTriangle(3, 3, 3);
			Assert::AreEqual("Equilateral Triangle", result);
		}

		TEST_METHOD(Test_IsoscelesTriangle)
		{
			const char* result = analyzeTriangle(3, 3, 4);
			Assert::IsTrue(strstr(result, "Acute") != nullptr);
		}
		TEST_METHOD(Test_ScaleneTriangle)
		{
			const char* result = analyzeTriangle(4, 5, 6);
		    Assert::IsTrue(strstr(result, "Acute") != nullptr);
		}
		TEST_METHOD(Test_RightAngledTriangle)
		{
			const char* result = analyzeTriangle(3, 4, 5);
			Assert::IsTrue(strstr(result, "Right-angled") != nullptr);
		}
		TEST_METHOD(Test_AcuteTriangle)
		{
			const char* result = analyzeTriangle(6, 7, 8);
			Assert::IsTrue(strstr(result, "Acute") != nullptr);
		}
		TEST_METHOD(Test_ObtuseTriangle)
		{
			const char* result = analyzeTriangle(2, 3, 4);
			Assert::IsTrue(strstr(result, "Obtuse") != nullptr);
		}
		TEST_METHOD(ValidRectangle_Returns1)
		{
			int result = isRectangle(2, 5, 7, 5, 7, 9, 2, 9);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(AnotherValidRectangle_Returns1)
		{
			int result = isRectangle(3, 2, 8, 2, 8, 6, 3, 6);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(InvalidShape_Returns0)
		{
			int result = isRectangle(1, 1, 6, 1, 5, 3, 2, 4);
			Assert::AreEqual(0, result);
		}
		TEST_METHOD(DuplicatePoints_Returns0)
		{
			int result = isRectangle(4, 4, 4, 4, 9, 7, 9, 3);
			Assert::AreEqual(0, result);
		}
		TEST_METHOD(Parallelogram_Returns0)
		{
			int result = isRectangle(2, 3, 6, 4, 8, 6, 4, 5);
			Assert::AreEqual(0, result);
		}
		TEST_METHOD(RectangleArea_ReturnsIncorrectValue_Fails)
		{
			float area = calculateArea(2, 5, 7, 5, 7, 9, 2, 9);
			Assert::AreEqual(30.0f, area, 0.001f);
		}

	};
}
