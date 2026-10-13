#include "sudokuGame.h"

void Game::showMenu(){
            cout<<"1. Enter a move"<<endl;
            cout<<"2. Solve automatically"<<endl;
            cout<<"3. Quit"<<endl;
}
void Game::enterMove() {
            int row, col, val;
            cout << "Enter row (1-9), col (1-9), and number (1-9): ";
            cin>>row>>col>>val;
            row--;
            col--;
            if (board.isValidMove(row,col,val)) {
                board.setCell(row,col,val);
            }
            else {
                cout<<"Invaild move"<<endl;
            }
            if (isFull()) {
                cout<<"you've finished successfully"<<endl;
                isrunning=false;
            }
}
void Game:: solveAutomatically() {
            solver.solve(board);
            if (isFull()) {
                cout<<"finished successfully"<<endl;
                board.print();
            }
            else {
                cout<<"The board has no solution";
            }
}
bool Game:: isFull() {
            int n,m;
        for (n=0;n<9;n++) {
            for ( m=0;m<9;m++) {
                if (board.getCell(n,m)==0) {
                    return false;
                }
            }
        }
            return true;
}

void Game::run() {
            while(isrunning){
                board.print();
                showMenu();
                int choice;
                cin>>choice;
                switch(choice){
                    case 1:
                        enterMove();
                        break;
                    case 2:
                        solveAutomatically();
                        isrunning=false;
                        break;
                    case 3:
                        isrunning=false;
                        break;
                    default:
                        cout<<"Invalid choice. Please try again."<<endl;
                }
            }
}
