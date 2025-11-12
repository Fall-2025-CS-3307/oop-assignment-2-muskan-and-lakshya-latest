cmake_minimum_required(VERSION 3.16)
project(Assignment2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(Assignment2
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui

    core/User.cpp
    core/User.h
    core/Buyer.cpp
    core/Buyer.h
    core/Seller.cpp
    core/Seller.h
    core/Product.cpp
    core/Product.h
    core/Order.cpp
    core/Order.h
    core/Cart.cpp
    core/Cart.h
    core/DB.cpp
    core/DB.h
)

target_link_libraries(Assignment2 PRIVATE Qt6::Widgets)
