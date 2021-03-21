#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab2.3\Lab2.3\Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex A(5, 7);
			Complex B(3, 5);

			Complex C = A + B;
			int S = C.GetRe();
			Assert::AreEqual(S, 8);
		}
	};
}