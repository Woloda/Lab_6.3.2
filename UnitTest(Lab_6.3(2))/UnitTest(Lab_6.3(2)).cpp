#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3(2)/Lab_6.3(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab632
{
	TEST_CLASS(UnitTestLab632)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int masuv_b[6] = { 6, 8, 3, 4, 5, 6 };
			int sum = suma(masuv_b, 6, 0, 0);
			Assert::AreEqual(sum, 32);
		}
	};
}
