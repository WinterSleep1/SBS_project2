#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#define SIZE 5

void UpDown() {

	srand(time(NULL));

	int input;
	int hp = 5;
	int random = rand() % 50 + 1;

	printf("< 1 ~ 50 ������ ���� >\n\n");

	for (int i = hp; i > 0; --i) {

		for (int j = 0; j < hp; j++) {

			if (i > j) printf("��");
			else printf("��");

		}

		printf("\n�� �Է� : ");
		scanf_s("%d", &input);

		if (input < random) printf("Up\n\n");
		else if (input > random) printf("Down\n\n");
		else {
			printf("*** ���� ***\n");
			break;
		}

		if (i == 1) {
			printf("** ��ȸ ���� **\n");
			printf("���� : %d\n", random);
			break;
		}

	}
}
void Dice() {
	srand(time(NULL));

	int count = 0;
	int dices[SIZE];

	for (int i = 0; i < SIZE; i++) {
		dices[i] = rand() % 6 + 1;
		printf("%d ", dices[i]);
	}

}

int main() {

	// UpDown();

	return 0;
}