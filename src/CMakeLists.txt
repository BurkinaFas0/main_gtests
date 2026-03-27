# Наша библиотека
add_library(calculator_lib STATIC
    calculator/calculator.cpp
)

target_include_directories(calculator_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Указываем, что это интерфейсная библиотека для удобства
target_compile_features(calculator_lib PUBLIC cxx_std_17)