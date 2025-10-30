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
	};
}
