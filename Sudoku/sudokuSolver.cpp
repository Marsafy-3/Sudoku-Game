#include "sudokuSolver.h"
Solver::Solver() {}

bool Solver::findEmptyCell(Board &board,int&row,int&col) {
    for (row=0;row<9;row++) {
        for ( col=0;col<9;col++) {
            if (board.getCell(row,col)==0) {
                return true;
            }
        }
    }
    return false;
    }
bool Solver::solve(Board &board) {
    int row;
    int col;
    if (!findEmptyCell(board,row,col)) {
        return true;
    }
    for (int value=1;value<=9;value++) {
        if (board.isValidMove(row,col,value)) {
            board.setCell(row,col,value);
            if (solve(board)){
                return true;
            }

            board.setCell(row,col,0);
        }
    }
        return false;
    }
