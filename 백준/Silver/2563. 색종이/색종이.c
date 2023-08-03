#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int canvas[100][100] = { 0, };
	int n, x, y, count = 0;
	scanf("%d", &n);

	for (int k = 0; k < n; k++) {
		scanf("%d %d", &x, &y);
		for (int i = 100 - y - 10; i < 100 - y; i++) {
			for (int j = x; j < x + 10; j++) {
				canvas[i][j]++;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (canvas[i][j] > 0) {
				//printf("%d", canvas[i][j]);
				count++;
			}
			//printf("\n");
		}
	}
	printf("%d", count);
}