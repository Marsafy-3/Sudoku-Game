#include "sudokuSolver.h"
class Game {
private:
    Board board;
    Solver solver;
    bool isrunning=true;
    void showMenu();
    void enterMove();
    void solveAutomatically();
    bool isFull();

public:
    void run();

};