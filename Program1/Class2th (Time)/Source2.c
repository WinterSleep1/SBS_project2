#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int screenIndex;
HANDLE screen[2];

void Initialize() {
	CONSOLE_CURSOR_INFO cursor;

	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	cursor.dwSize = 1;
	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);
}
void Flip() {
	SetConsoleActiveScreenBuffer(screen[screenIndex]);

	screenIndex = !screenIndex;
}
void Clear() {
	COORD position = { 0, 0 };

	DWORD dword;

	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(handle, &consoleInfo);

	int w = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
	int h = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
	FillConsoleOutputCharacter(screen[screenIndex], ' ', w * h, position, &dword);
}

void Position(int x, int y) 
{
			//	x축 y축 설정
	COORD position = { x, y };
			//	커서 위치 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main() 
{ 
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(handle, &consoleInfo);
	// printf("%d, %d\n", consoleInfo.srWindow.Right, consoleInfo.srWindow.Bottom);	//	119 29

	char key;
	int x = 10, y = 5;

	Position(x, y);
	printf("■");

	while (1)
	{
		if (_kbhit()) {
			key = _getch();

			if (key == -32) {
				key = _getch();
				system("cls");
			}

			switch (key) {
			
			case UP:
				if (y == 0) Position(x, ++y);
				else		Position(x, --y);
				printf("■");
				break;

			case LEFT:
				if (x == 0) Position(++x, y);
				else		Position(--x, y);
				printf("■");
				break;

			case RIGHT:
				if (x == consoleInfo.srWindow.Right) Position(--x, y);
				else Position(++x, y);
				printf("■");
				break;

			case DOWN:
				if (y == consoleInfo.srWindow.Bottom) Position(x, --y);
				else Position(x, ++y);
				printf("■");
				break;

			default:
				x = 10, y = 5;
				Position(x, y);
				printf("■");
				break;
			}

		}

	}

	return 0;
}