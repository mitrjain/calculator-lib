#include <gtest/gtest.h>
#include "Calculator.h"
using namespace std;

TEST(CalculatorTest, AddTest) {
    Calculator calc;
    EXPECT_EQ(calc.add(1, 1), 2);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(-1, -1), -2);
}

TEST(CalculatorTest, SubtractTest) {
    Calculator calc;
    EXPECT_EQ(calc.subtract(1, 1), 0);
    EXPECT_EQ(calc.subtract(-1, 1), -2);
    EXPECT_EQ(calc.subtract(-1, -1), 0);
}

TEST(CalculatorTest, MultiplyTest) {
    Calculator calc;
    EXPECT_EQ(calc.multiply(2, 3), 6);
    EXPECT_EQ(calc.multiply(-2, 3), -6);
    EXPECT_EQ(calc.multiply(0, 3), 0);
}

TEST(CalculatorTest, DivideTest) {
    Calculator calc;
    EXPECT_DOUBLE_EQ(calc.divide(6, 3), 2.0);
    EXPECT_DOUBLE_EQ(calc.divide(1, 2), 0.5);
    
    EXPECT_THROW(calc.divide(1, 0), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
