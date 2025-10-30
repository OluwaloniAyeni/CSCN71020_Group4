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
	};
}
