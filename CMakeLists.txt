cmake_minimum_required(VERSION 3.24)
project(Mayorista)

set(CMAKE_CXX_STANDARD 17)

add_executable(Mayorista main.cpp Model/Seller.cpp Model/Seller.hpp Model/Quote.cpp Model/Quote.hpp Enum/Quality.hpp Model/Store.cpp Model/Store.hpp Model/Clothes.cpp Model/Clothes.hpp Model/Clothes/Shirt.cpp Model/Clothes/Shirt.hpp Model/Clothes/Pant.cpp Model/Clothes/Pant.hpp Interface/IView.hpp View/View.cpp View/View.hpp Presentation/Presentation.cpp Presentation/Presentation.hpp)
