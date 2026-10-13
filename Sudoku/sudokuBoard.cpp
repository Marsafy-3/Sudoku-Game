#include<iostream>
#include <iomanip>
#include "sudokuBoard.h"
Board::Board(){
    grid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
          {6, 0, 0, 1, 9, 5, 0, 0, 0},
            {0, 9, 8, 0, 0, 0, 0, 6, 0},
            {8, 0, 0, 0, 6, 0, 0, 0, 3},
            {4, 0, 0, 8, 0, 3, 0, 0, 1},
            {7, 0, 0, 0, 2, 0, 0, 0, 6},
            {0, 6, 0, 0, 0, 0, 2, 8, 0},
            {0, 0, 0, 4, 1, 9, 0, 0, 5},
            {0, 0, 0, 0, 8, 0, 0, 7, 9}

    };
}
void Board::print(){
    for(int n =0;n<9;n++){
        if (n % 3 == 0 && n != 0)
            cout << "------|-------|-------\n";
        for(int m=0;m<9;m++){
            if (m % 3 == 0 && m != 0)
                cout << "| ";
            if(grid[n][m]==0){
                cout<<setw(2)<<".";
            }
            else{
                cout<<setw(2)<<grid[n][m];
            }

        }
        cout<<"\n";
    }
}
int Board::getCell(int row,int col)const{
    return grid[row][col];

}
void Board::setCell(int row,int col,int value){
    grid[row][col]=value;

}
bool Board::isValidMove(int row, int col, int value) const{
    for (int i=0;i<grid.size();i++){
        if(grid[row][i]==value){
            //cerr<<"Invalid row Location"<<endl;
            return false;
        }
    }

    for(int k=0;k<grid.size();k++){
        if (grid[k][col]==value){
            //cerr<<"Invalide Col Location";
            return false;
        }
    }

    int boxrow=(row/3)*3;
    int boxcol=(col/3)*3;
    for(int i=boxrow;i<boxrow+3;i++){
        for(int k=boxcol;k<boxcol+3;k++){
            if (grid[i][k]==value){
                //cerr<<"Invalid Box Location";
                return false;
            }

        }
    }
    return true;
}