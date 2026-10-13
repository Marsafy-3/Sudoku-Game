#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H
#include"sudokuBoard.h"
class Solver {

public:
    Solver();
    bool solve(Board& board);
    bool findEmptyCell(Board& board,int&row,int&col);
};
#endif