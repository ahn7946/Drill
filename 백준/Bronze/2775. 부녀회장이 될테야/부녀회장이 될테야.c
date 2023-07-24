#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[15][15] = {0,}; //[K][N]
	int testCase, K, N; // 테스트, 층, 호

	for (int x = 1; x < 15; x++)
		arr[0][x] = x;
	for (int y = 0; y < 15; y++)
		arr[y][1] = 1;

	for (int y = 1; y < 15; y++) {
		for (int x = 1; x < 15; x++) {
			arr[y][x] = arr[y - 1][x] + arr[y][x - 1];
			//printf("%d ", arr[y][x]);
		}
		//printf("\n");
	}

	scanf("%d", &testCase);
	for (int i = 0; i < testCase; i++) {
		scanf("%d %d", &K, &N);
		printf("%d\n", arr[K][N]);
	}
}