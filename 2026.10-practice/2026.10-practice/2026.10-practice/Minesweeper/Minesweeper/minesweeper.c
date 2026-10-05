#include<stdio.h>
#include"game.h"
void menu() {
	printf("--------------------------\n");
	printf("-----------1.paly---------\n");
	printf("-----------0.exit---------\n");
	printf("--------------------------\n");

}
void game() {
	int mine[ROWS][COLS];
	int show[ROWS][COLS];
	initboard(mine,ROWS,COLS,'0');
	initboard(show, ROW, COL,'*');
}
int main() {
	int input = 0;
	do {
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}