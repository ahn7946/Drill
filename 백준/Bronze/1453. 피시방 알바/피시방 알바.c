#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int seat[101] = { 0, };
	int inputSize, num, rejectCnt = 0;

	scanf("%d", &inputSize);

	for (int i = 0; i < inputSize; i++) {
		scanf("%d", &num);
		if (seat[num] > 0)
			rejectCnt++;
		seat[num]++;
	}
	printf("%d", rejectCnt);
}