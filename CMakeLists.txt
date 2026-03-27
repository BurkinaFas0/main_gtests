cmake_minimum_required(VERSION 3.16)
project(MyProject VERSION 1.0.0 LANGUAGES CXX)

# Стандарт C++ и флаги компиляции
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Для отладки в CI полезно
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Опции сборки
option(BUILD_TESTS "Build unit tests" ON)

# Добавляем поддиректории
add_subdirectory(src)

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests) 
endif()