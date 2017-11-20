cmake_minimum_required(VERSION 2.8)
project(programming_challenges)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Armadillo REQUIRED)
include_directories(/usr/include/python2.7)

add_executable(temperature_converter temperature_converter/temperature_converter.cpp)

add_executable(line_count line_count/line_count.cpp)

add_executable(file_size file_size/file_size.cpp)

add_executable(string_permutations string_permutations/string_permutations.cpp)

add_executable(factorial_zeros factorial_zeros/factorial_zeros.cpp)

add_executable(string_search string_search/string_search.cpp)

add_executable(bisection bisection/bisection.cpp)

add_executable(newton_method newton_method/newton_method.cpp)
add_executable(roman_numbers roman_numbers/roman_numbers.cpp)

add_executable(prime_numbers prime_numbers/prime_numbers.cpp)

add_executable(decimal_to_binary decimal_to_binary/decimal_to_binary.cpp)

add_executable(lotka_volterra lotka_volterra/lotka_volterra.cpp)
target_link_libraries(lotka_volterra ${ARMADILLO_LIBRARIES} libpython2.7.so)

add_executable(numbers_to_words numbers_to_words/numbers_to_words.cpp)
