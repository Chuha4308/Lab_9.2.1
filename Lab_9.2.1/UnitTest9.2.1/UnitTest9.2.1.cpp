#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_9.2.1/9.2.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int x, y, z, w;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMacroFunctionality)
        {
            int x = 5, y = 8, z = 10;
            int w;

            w = SQR(MIN(x * CUBE(y), x + z));
            Assert::AreEqual(225, w);

            w = MAX(x - y * z, x * y + z);
            Assert::AreEqual(50, w);
        }
    };
}
