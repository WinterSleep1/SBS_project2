#include <stdio.h>

#define H 10
#define V 10

char maz[V][H] =
{
	{'1', '0', '1', '1', '1', '1', '1', '1', '1', '1'},
	{'1', '0', '1', '1', '1', '1', '1', '1', '1', '1'},
	{'1', '0', '1', '1', '1', '0', '0', '0', '1', '1'},
	{'1', '0', '1', '1', '1', '1', '0', '1', '1', '1'},
	{'1', '0', '0', '0', '0', '0', '0', '1', '1', '1'},
	{'1', '0', '1', '1', '1', '1', '0', '1', '1', '1'},
	{'1', '0', '0', '0', '1', '1', '0', '1', '1', '1'},
	{'1', '1', '1', '0', '0', '0', '0', '0', '1', '1'},
	{'1', '1', '1', '1', '0', '1', '1', '0', '1', '1'},
	{'1', '1', '1', '1', '0', '1', '1', '1', '1', '1'},

};

void Render() {
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < H; j++) {

			if (maz[i][j] == '1') printf("■");
			else {
				if (maz[i][j] == maz[i][j + 1] && maz[i][j] == '0') printf(" ");
				else printf("  ");
			}
		}
		printf("\n");
	}
}

int main()
{
#pragma region 이차원 배열
				//	int ary[열][행]
	// int ary[3][3] =			
	// {
	// 	{1, 2, 3},
	// 	{4, 5, 6},
	// 	{7, 8, 9}
	// };
	// 
	// for (int i = 0; i < 3; i++) {
	// 	for (int j = 0; j < 3; j++) {
	// 		printf("%d ", ary[i][j]);
	// 	}
	// 	printf("\n");
	// }
#pragma endregion

	Render();
	return 0;
}