#include <gtest/gtest.h>
#include "calculator/calculator.h"

using namespace calculator;

class CalculatorTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Инициализация перед каждым тестом
        calc = std::make_unique<Calculator>();
    }
    
    void TearDown() override {
        // Очистка после каждого теста
        calc.reset();
    }
    
    std::unique_ptr<Calculator> calc;
};

TEST_F(CalculatorTest, AddTwoPositiveNumbers) {
    int result = calc->add(2, 3);
    EXPECT_EQ(result, 5);
}

TEST_F(CalculatorTest, DivideByZeroThrowsException) {
    EXPECT_THROW(calc->divide(10, 0), std::invalid_argument);
}

TEST_F(CalculatorTest, DivideValidNumbers) {
    double result = calc->divide(10, 2);
    EXPECT_DOUBLE_EQ(result, 5.0);
}