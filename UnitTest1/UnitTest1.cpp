#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_6.1/Array.h"
#include "../oop_6.1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array arr(5);
			arr[0] = -16;
			arr[1] = 2;
			arr[2] = -35;
			arr[3] = 43;
			arr[4] = -47;

			Assert::AreEqual(-16.0, arr[0]);
			Assert::AreEqual(2.0, arr[1]);
		}
	};
}
