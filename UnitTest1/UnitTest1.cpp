#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1/Array.h"
#include "../6.1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array t(5);
			Assert::AreEqual(t.Suma(), 0.0);
		}
	};
}
