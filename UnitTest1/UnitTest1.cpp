#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorythmization Lab 10_1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student newSt = {"test", 2, COMPSI, 33025055};
			Assert::IsTrue(isLower(newSt, 88));
		}
	};
}
