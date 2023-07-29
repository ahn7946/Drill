//N번째 큰 수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LENGTH 10
#define N 3
int main()
{
	int testTimes = 0, testCase;
	int testArray[LENGTH];
	int temp, max, innerIdx, outterIdx;
	scanf("%d", &testCase);

	do {
		for (int idx = 0; idx < LENGTH; idx++)
			scanf("%d", &testArray[idx]); // 배열 초기화

		for (outterIdx = 0; outterIdx < LENGTH; outterIdx++) {
			max = outterIdx;
			for (innerIdx = outterIdx + 1; innerIdx < LENGTH; innerIdx++) {
				if (testArray[max] < testArray[innerIdx]) {
					max = innerIdx; // 내림차순 선택정렬
				}
			}
			temp = testArray[outterIdx];
			testArray[outterIdx] = testArray[max];
			testArray[max] = temp;
		}
		printf("%d\n", testArray[N - 1]); // N번째로 큰 값 출력

		testTimes++;
	} while (testTimes < testCase);
}
