#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_1.3/RATIONAL.h"
#include "D:\1.3\Laboratory_1.3\RATIONAL.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational F;
			F.setA(69);
			int C = F.getA();
			Assert::AreEqual(C, 69);
		}
	};
}
