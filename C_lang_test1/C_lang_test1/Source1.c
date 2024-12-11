#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Shuffle(int ary[], int size) {
	int a;
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		int a1 = rand() % size;
		int a2 = rand() % size;

		a = ary[a1];
		ary[a1] = ary[a2];
		ary[a2] = a;
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", ary[i]);
	}

	printf("\n");
}

int main() {
	int size = 5;
	int list[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < size; i++) {
		Shuffle(list, size);
	}

	return 0;
}