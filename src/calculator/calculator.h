#pragma once

namespace calculator {

class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;
    
    // Простое сложение
    int add(int a, int b);
};

} // namespace calculator