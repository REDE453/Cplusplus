#ifndef __GAME_H__
#define __GAMEH__
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define MINE_NUM 10
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void InitBoard(char board[][COLS], int rows, int cols, char set);
void ShowBoard(char board[][COLS], int row, int col);
void SetMine(char mine[][COLS], int row, int col);
void ShowBoard(char mine[][COLS],int row,int col);
void FindMine(char mine[][COLS], char mineInfo[][COLS], int row, int col);
#endif
