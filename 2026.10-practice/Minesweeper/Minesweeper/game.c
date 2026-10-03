#include"game.h"
void initboard(char board[ROWS][COLS], int r, int c,char set) {
	int i = 0;
	int j = 0;
	for (i = 0;i < r;i++) {
		for (j = 0;j < c;j++) {
			board[i][j] = set;
		}
	}

}
void displayboard(char board[ROWS][COLS], int r, int c) {

}