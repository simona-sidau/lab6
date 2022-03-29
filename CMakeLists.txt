cmake_minimum_required(VERSION 3.21)
project(lab6)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab6 main.cpp Domain/Rectangle.cpp Domain/Rectangle.h Domain/Point.cpp Domain/Point.h UI/Run_Menu.cpp UI/Run_Menu.h UI/Console.cpp UI/Console.h UI/option.h UI/option.cpp Repository/Repository.cpp "Repository/Repository.h")
