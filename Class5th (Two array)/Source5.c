#include <stdio.h>
#include <stdlib.h>

#define SIZE 9000

void File_read(const char* fileName) {
	FILE* file = fopen(fileName, "r");		//	r : read (�б�)

	char buffer[SIZE] = { 0 };

		//	ù �Ű����� : ���� �����͸� ������ �޸� ������ ������ ����
		//	�Ű����� 2  : �� ������ �׸� ũ��
		//	�Ű����� 3  : �����͸� �о�� ������ �׸��� ��
		//	�Ű����� 4  : �����͸� �о�� ������ ������ ����

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);
}

int main() {

#pragma region ���� ����

	// FILE* file = fopen("player.txt", "w");			//	w = write (������)
	// 
	// fputs("NAME : lIIlIlIIlIlI\nHP : 10\nLV : 1\n", file);
	// 
	// fclose(file);

#pragma endregion

#pragma region ���� �б�

	File_read("dog.TXT");

#pragma endregion

	return 0;
}