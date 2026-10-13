cmake_minimum_required(VERSION 4.2)
project(Sudoku)

set(CMAKE_CXX_STANDARD 20)

add_executable(Sudoku main.cpp
        sudokuBoard.cpp
        sudokuBoard.h
        sudokuSolver.cpp
        sudokuSolver.h
        sudokuGame.h
        sudokuGame.cpp
        sudokuGame.cpp)
