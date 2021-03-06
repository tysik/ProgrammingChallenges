cmake_minimum_required(VERSION 2.8)
project(programming_challenges)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (NOT CMAKE_BUILD_TYPE)
  message("Build type not provided: setting Release")
  set(CMAKE_BUILD_TYPE "Release" FORCE)
endif (NOT CMAKE_BUILD_TYPE)

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

add_executable(vector_operations vector_operations/vector_operations.cpp)

add_executable(radix_sort radix_sort/radix_sort.cpp)

add_executable(shift_register shift_register/shift_register.cpp)
