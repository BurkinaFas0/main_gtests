# Подключаем Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)

# Наш тест
add_executable(calculator_test calculator_test.cpp)
target_link_libraries(calculator_test 
    PRIVATE 
        calculator_lib
        gtest_main
)

# Добавляем тест в CTest
add_test(NAME CalculatorTest COMMAND calculator_test)

# Включаем предупреждения для тестов
target_compile_options(calculator_test PRIVATE -Wall -Wextra)