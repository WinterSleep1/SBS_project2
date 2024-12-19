#include <stdio.h>
#include <stdlib.h>

#define SIZE 9000

void File_read(const char* fileName) {
	FILE* file = fopen(fileName, "r");		//	r : read (읽기)

	char buffer[SIZE] = { 0 };

		//	첫 매개변수 : 읽은 데이터를 저장할 메모리 버퍼의 포인터 변수
		//	매개변수 2  : 각 데이터 항목 크기
		//	매개변수 3  : 데이터를 읽어올 데이터 항목의 수
		//	매개변수 4  : 데이터를 읽어올 파일의 포인터 변수

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);
}

int main() {

#pragma region 파일 쓰기

	// FILE* file = fopen("player.txt", "w");			//	w = write (쓰기모드)
	// 
	// fputs("NAME : lIIlIlIIlIlI\nHP : 10\nLV : 1\n", file);
	// 
	// fclose(file);

#pragma endregion

#pragma region 파일 읽기

	File_read("dog.TXT");

#pragma endregion

	return 0;
}