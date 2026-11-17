#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>

#include "../9.1/var.cpp"
#include "../9.1/dod.cpp"
#include "../9.1/sum.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsSum;
using namespace nsDod;

namespace Lab91Test
{
    TEST_CLASS(Lab91Test)
    {
    public:

        // Перевірка одного кроку рекурентності:
        // x = 2, n = 1, a0 = 2/3  ->  a1 = 2/81
        TEST_METHOD(TestDod)
        {
            x = 2;
            n = 1;
            a = 2.0 / 3;
            dod();
            Assert::AreEqual(2.0 / 81, a, 1e-12);
        }

        // x = 1: ln(1) = 0, перший доданок нульовий
        TEST_METHOD(TestSumAtOne)
        {
            x = 1;
            e = 1e-6;
            sum();
            Assert::AreEqual(0.0, s, 1e-12);
        }

        // x = 2: порівняння з бібліотечним log
        TEST_METHOD(TestSumAtTwo)
        {
            x = 2;
            e = 1e-6;
            sum();
            Assert::AreEqual(std::log(2.0), s, 1e-5);
            Assert::IsTrue(n > 0);
        }

        // x = 10: ряд збігається повільніше
        TEST_METHOD(TestSumAtTen)
        {
            x = 10;
            e = 1e-6;
            sum();
            Assert::AreEqual(std::log(10.0), s, 1e-5);
        }

        // x = 0.5: x < 1, значення від'ємне
        TEST_METHOD(TestSumBelowOne)
        {
            x = 0.5;
            e = 1e-6;
            sum();
            Assert::AreEqual(std::log(0.5), s, 1e-5);
        }
    };
}