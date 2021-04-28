cmake_minimum_required(VERSION 3.19)
project(nibbles)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(nibbles
        Casino.cpp
        Casino.h
        main.cpp
        nibAbstractView.h
        Nibbles.cpp
        Nibbles.h
        nibBoard.cpp
        nibBoard.h
        nibCoord.cpp
        nibCoord.h
        nibGame.cpp
        nibGame.h
        nibItem.cpp
        nibItem.h
        nibSnake.cpp
        nibSnake.h
        nibTextView.cpp
        nibTextView.h nibAbstractView.cpp)

