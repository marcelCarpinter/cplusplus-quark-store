cmake_minimum_required(VERSION 3.24)
project(Mayorista)

set(CMAKE_CXX_STANDARD 17)

add_executable(Mayorista main.cpp Model/Seller.cpp Model/Seller.h Model/Quote.cpp Model/Quote.hpp)
