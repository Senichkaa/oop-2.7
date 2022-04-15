#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 2.7/LongLong.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP27
{
	TEST_CLASS(UTOOP27)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong g(6,6), g1(6,6);
			
			Assert::AreEqual(operator==(g, g1), true);
		}
	};
}
