#include<iostream>
#include<vector>
#include<string>
#ifndef SUDOKUBOARD_H
#define SUDOKUBOARD_H
using namespace std;
class Board{
private:
    vector<vector<int>>grid;
public:
    Board();
    void print();
    int getCell(int row, int col) const;
    void setCell(int row, int col, int value);
    bool isValidMove(int row, int col, int value) const;

};
#endif