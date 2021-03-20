#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------扫雷游戏---------------\n");
	printf("\n");
	//打印行号
	for (i = 0; i <= row; i++)
	{
		if (i == 0)
		{
			printf("   ", i);
		}
		else
		{
			printf("  %d ", i);
		}
	}
	printf("\n");

	//打印第一行分割符
	for (i = 0; i <= row; i++)
	{
		if (i == 0)
		{
			printf("  -");
		}
		else if (i == row )
		{
			printf("|---|-");
		}
		else
		{
			printf("|---");
		}
	}
	printf("\n");

	//打印棋盘
	for (i = 1; i <= row; i++)
	{
		
		for (j = 0; j <= col; j++)
		{
			if (j == 0)
			{
				printf(" %d ", i);//放列号
			}
		    else if (j == col)
			{
				printf("| %c |", board[i][j]);
				
			}
			else
			{
				printf("| %c ", board[i][j]);
			}
		}
		printf("\n");
		//分割符
		for (j = 0; j <=col; j++)
		{
			if (j == 0)
			{
				printf("  -");
			}
			else if (j == col)
			{
				printf("|---|-");
			}
			else
			{
				printf("|---");
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("-------------扫雷游戏---------------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		//1-9
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			//x,y坐标处没有雷
			mine[x][y] = '1';
			count--;//布置成功再-1
		}
	}
}

//统计（x，y）坐标周围雷的个数
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	//根据ASCLL码表
	//'1'-'0'=1; '0'-'0'=0
	 //   return mine[x - 1][y] +
		//mine[x - 1][y - 1] +
		//mine[x - 1][y + 1]+
		//mine[x][y - 1] +
		//mine[x][y + 1] +
		//mine[x + 1][y - 1] +
		//mine[x + 1][y + 1] +
		//mine[x + 1][y] - 8 * '0';
	int i = 0;
	int j = 0;
	int sum = 0;
	int len = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			sum += mine[i][j];
			len++;
		}
	}
	return sum - len * '0';
}

void SetBlank(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	int count = GetMine(mine, x, y);
	if (count == 0)
	{
		show[x][y] = ' ';
		if (x - 1 >= 0 && x <= ROW && y >= 0 && y <= COL && show[x - 1][y] == '*')
			SetBlank(show, mine, x - 1, y);
		if (x + 1 >= 0 && x + 1 <= ROW&&y >= 0 && y <= COL && show[x + 1][y] == '*')
			SetBlank(show, mine, x + 1, y);
		if (x >= 0 && x <= ROW && y - 1 >= 0 && y - 1 <= COL && show[x][y - 1] == '*')
			SetBlank(show, mine, x, y - 1);
		if (x >= 0 && x <= ROW && y + 1 >= 0 && y + 1 <= COL && show[x][y + 1] == '*')
			SetBlank(show, mine, x, y + 1);
	}
	else
	{
		show[x][y] = count + '0';//存放的数字字符
	}
	
}
int CountMine(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				count++;
		}
	}
	return count;
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	
	//9*9-10=71不是雷的个数
	while (1)
	{
		printf("请输入要排查的坐标（两个坐标用空格隔开）：->");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		//1.坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//2.该坐标处是不是雷？不是雷，统计周围雷的个数
				//3.扩展空白
					SetBlank(show,mine,x,y);
					int count = CountMine(show,row,col);
					if (count == EASY_COUNT)
					{
						printf("恭喜你，排雷成功！\n");
						DisplayBoard(show, row, col);
						break;
					}
					DisplayBoard(show, row, col);
					
				}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	
}