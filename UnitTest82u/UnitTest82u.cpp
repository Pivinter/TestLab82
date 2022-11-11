#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab82/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82u
{
	TEST_CLASS(UnitTest82u)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
