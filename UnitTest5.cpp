#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_1/Lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double p = 1.0;
			double q = 1.0;

			double result;
			result = pow(h(abs(p - q), sqrt(abs(p - q))), 2) + h(1, pow(q, 2) - pow(p, 2));
			Assert::AreEqual(result, -1.0);
		}
	};
}