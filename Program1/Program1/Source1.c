#include <stdio.h>
#include <Windows.h>

enum State 
{
	IDLE,		//	0
	ATTACK,		//	1
	DEAD		//	2
};

void Text_Color() {
	printf("\n=======================================\n");
	printf("1 : Dark_blue\n2 : Dark_green\n3 : Dark_sky_blue\n4 : Dark_red\n5 : Dark_purple\n");
	printf("6 : Dark_yellow\n7 : Gray\n8 : Dark_gray\n0 : 종료\n");
	printf("=======================================\n");
}

int main() 
{
#pragma region 열거형
			//	고유한 상수 값에 연결된 기호 이름의 집합
	// enum State state = IDLE;
	// 
	// switch (state) 
	// {
	// case IDLE : printf("IDLE\n");
	// 	break;
	// 
	// case ATTACK : printf("ATTACK\n");
	// 	break;
	// 
	// case DEAD : printf("DEAD\n");
	// 	break;
	// 
	// default:
	// 	printf("Exception\n");
	// 	break;
	// }
#pragma endregion

#pragma region 텍스트 색
	// int bool = 1;
	// int input;
	// 
	// while (bool) {
	// 	Text_Color();
	// 
	// 	printf("색상을 입력하세오 : ");
	// 	scanf_s("%d", &input);
	// 
	// 	switch (input) {
	// 	case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), input);
	// 		break;
	// 	case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), input);
	// 		break;
	// 	case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), input);
	// 		break;
	// 	case 4: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), input);
	// 		break;
	// 	case 5: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), input);
	// 		break;
	// 	case 6: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), input);
	// 		break;
	// 	case 7: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), input);
	// 		break;
	// 	case 8: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), input);
	// 		break;
	// 	case 0:
	// 		bool = !bool;
	// 		break;
	// 	default:
	// 		break;
	// 	}
	// 	system("cls");
	// }
#pragma endregion

	return 0;
}