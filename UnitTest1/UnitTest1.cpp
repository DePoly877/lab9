#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
using namespace std;
#include "../9.2/macros.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab92Test
{
    TEST_CLASS(MacrosTest)
    {
    public:
        TEST_METHOD(TestSqr) { Assert::AreEqual(9.0, (double)SQR(-3.0)); }
        TEST_METHOD(TestMin) { Assert::AreEqual(2.0, (double)MIN(2.0, 5.0)); }
        TEST_METHOD(TestMax) { Assert::AreEqual(5.0, (double)MAX(2.0, 5.0)); }
        TEST_METHOD(TestSqrExpr) { Assert::AreEqual(16.0, (double)SQR(1.0 + 3.0)); }
    };
}