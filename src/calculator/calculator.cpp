#include "calculator/calculator.h"

namespace calculator {

int Calculator::add(int a, int b) {
    return a + b;
}

double Calculator::divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Division by zero is not allowed");
    }
    return static_cast<double>(numerator) / denominator;
}

} // namespace calculator