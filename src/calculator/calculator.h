#pragma once
#include <stdexcept>


namespace calculator {

class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;
    
    // Простое сложение
    int add(int a, int b);

    double divide(int numerator, int denominator);
};

} // namespace calculator