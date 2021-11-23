cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

#adaug libraria
add_library(
    spune-hello 
    hello.hpp
    hello.cpp)

add_executable(TEMA2-IEP main.cpp)

#link ui libraria "spune-hello" in executabilul "TEMA2-IEP"
target_link_libraries(TEMA2-IEP PRIVATE spune-hello)