#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n  = 4;
			int r[n] = { 20, 1, -5, 6 };
			t = Sum(r, n);
			Assert::AreEqual(t, 7);
		}
	};
}
