#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void Position(int x, int y) 
{
			//	x축 y축 설정
	COORD position = { x, y };
			//	커서 위치 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main() 
{ 
	char key;
	int x = 10, y = 5;

	Position(x, y);
	printf("■");

	while (1)
	{
		key = _getch();

		if (key == -32) {
			key = _getch();
			system("cls");
		}

		switch (key) 
		{
		case UP:
			if (y == 0) Position(x, ++y);
			else		Position(x, --y);
			printf("■");
			break;

		case LEFT:
			if(x == 0) Position(++x, y);
			else	   Position(--x, y);
			printf("■");
			break;

		case RIGHT:
			if (x == 20) Position(--x, y);
			else		 Position(++x, y);
			printf("■");
			break;

		case DOWN:
			if (y == 10) Position(x, --y);
			else		 Position(x, ++y);
			printf("■");
			break;

		default:
			x = 10, y = 5;
			Position(x, y);
			printf("■");
			break;
		}
	}

	return 0;
}