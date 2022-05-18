cmake_minimum_required(VERSION 3.21)
project(Exercicio10_c)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Exercicio10_c
        Ex10_clientes1.dat
        Ex10_clientes2.dat
        main.c
        main.exe)
