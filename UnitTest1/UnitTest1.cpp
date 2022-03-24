#include "pch.h"
#include "CppUnitTest.h"
#include "C:/Users/apple/source/repos/Laba1.2/Laba1.2/large_integers.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			large_integers l;
			int r;
			l.init(4000, 6000);
			r = l.sum();
			Assert::AreEqual(r, 10000);
		}
	};
}
