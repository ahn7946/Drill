// 소인수분해, 소수인 인수들만의 곱으로 나타내기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int iptNum, devideNum = 2;
	scanf("%d", &iptNum);

	do {
		if (iptNum % devideNum == 0) { // 2^3 * 3^2 일 때, 2를 모두 소진시킴
			iptNum /= devideNum;
			printf("%d\n", devideNum); // 나눌 숫자가 소수가 아니라면 출력할 필요가 없으므로 해당 조건문 안에 삽입
		}
		if (iptNum % devideNum != 0) // 2^3 * 3^2 일 때, 2가 모두 소진된다면 3으로 넘어감
			devideNum++;
	} while (devideNum <= iptNum); // 5의 약수는 5를 가지므로 자신 또한 순회 대상이다.
}