#pragma once
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void initboard(char board[ROWS][COLS], int r, int c,char set);

void displayboard(char board[ROW][COL], int r, int c);//函数的声明，符号的定义都放到这个文件中

void SetMien(char board[ROWS][COLS], int row, int col);

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

