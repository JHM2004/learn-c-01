//game.h
#pragma once

//头文件的包含：
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

//符号的定义：
#define ROW 3
#define COL 3
//函数的声明:
//初始化棋盘：
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMore(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);


//game.c
#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x;
	int y;
	printf("玩家走:>");
	while (1)
	{	
		printf("请输入坐标:>");
	    scanf("%d %d", &x, &y);
		//坐标合法：
		if(x >= 1 && x <= 3 && y >= 1 && y <= 3)
	    {  
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已占用，请重新选择：\n");
			}
	    }
		else
		{
			printf("坐标不合法，请重新选择：\n");
		}
		
	}
}

void ComputerMore(char board[ROW][COL], int row, int col)
{   
	printf("电脑走:\n");
	Sleep(1000);
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断平局/继续：
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'C';
		}
	}
	return 1;
}

//判断游戏是否有输赢：
//玩家赢：‘*’
//电脑赢：‘#’
//平局  ：‘Q’
//继续游戏‘C’
char IsWin(char board[ROW][COL], int row, int col)
{
    //判断谁赢：
	int i = 0;
	//1.三行：
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][1];
	}
	//2.三列：
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//3.对角线：
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	
	//判断平局\继续：
	int ret = IsFull(board,ROW,COL);
	if (ret == 1)
		return 'Q';
	else
		return 'C';
}



test.c 
#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("******  1.star  ******\n");
	printf("******  0.exit  ******\n");
	printf("**********************\n");
}

void game()
{   //存储数据，二维数组：
	char board[ROW][COL];
	//初始化棋盘，初始化空格：
	InitBoard(board, ROW, COL);
	//打印一下棋盘：
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家下棋：
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL); 
		//判断是否赢：
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋：
		ComputerMore(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断是否赢：
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择:>\n");
			break;
		}
	} while (input);
	return 0;
}