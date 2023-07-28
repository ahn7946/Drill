#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int startPoint, endPoint;
	int total = 0, numPosi = 0;

	scanf("%d %d", &startPoint, &endPoint);

	for (int i = 1; i < 1000 + 1; i++) {
		for (int j = 1; j < i + 1; j++) {
			numPosi++; // 배열을 이용해 숫자들을 생성해 풀 수 있지만, 메모리 공간을 최적화하고자 넘버포지션이라는 개념을 도입
			if (numPosi >= startPoint && numPosi <= endPoint) {
				total += i; // 시작 구간부터 종료 구간에 들어오는 값만을 연산한다
			}
		}
		if (numPosi > endPoint) {
			break; // 시간 최적화를 위해 넘버 포지션이 종료 구간을 넘어간다면 반복문을 종료한다.
		}
	}
	printf("%d", total);
}