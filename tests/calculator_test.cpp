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