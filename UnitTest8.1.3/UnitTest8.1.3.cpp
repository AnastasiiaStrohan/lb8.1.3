#include "pch.h"
#include "CppUnitTest.h"
#include "../lb8.1.3/lb8.1.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		

		TEST_METHOD(TestMethod2_NoPattern)
		{
			char str[101] = "Hello world!";
			bool foundPattern = false;
			ReplacePatternWithAsterisks(str, foundPattern);

			Assert::IsFalse(foundPattern, L"Expected no pattern to be found");
			Assert::AreEqual("Hello world!", str, L"Expected no change in string");
		}

		

		TEST_METHOD(TestMethod4_EmptyString)
		{
			char str[101] = "";
			bool foundPattern = false;
			ReplacePatternWithAsterisks(str, foundPattern);

			Assert::IsFalse(foundPattern, L"Expected no pattern to be found in an empty string");
			Assert::AreEqual("", str, L"Expected no change in an empty string");
			
		}
	};
}
