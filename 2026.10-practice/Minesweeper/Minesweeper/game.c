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
void displayboard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	printf("--------扫雷游戏--------\n");
	for (i = 0;i <= col;i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++) {
		printf("%d ", i);
		int j = 0;
		for (j = 1;j <= col;j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}