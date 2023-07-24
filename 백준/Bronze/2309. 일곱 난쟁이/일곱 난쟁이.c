#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //integer 로 0, 1 을 나타내도 되지만 명시화를 위해 boolean 추가
int main()
{
	int totalLen = 0, dwarf[9] = { 0, };
	
	for (int i = 0; i < 9; i++) {
		scanf("%d", &dwarf[i]);
		totalLen += dwarf[i];
	}
	totalLen -= 100;
	bool outIteration = false;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (dwarf[i] + dwarf[j] == totalLen && i != j && outIteration == false) {
				//totalLen이 40 이라면 17 + 23 == 40 이므로 17과 23을 0으로 바꿔준다
				//같은 idx 번호 방지, 140 - 40 = 40 일때 한 idx 가 20 * 2 = 40 이라면 오류발생
				//이미 조합을 찾았다면 더이상 난쟁이 색출은 하지 않음, 40 일 때, 17 + 23, 20 + 20 두 조건 모두 색출한다면 난쟁이는 5명이 된다.
				dwarf[i] = 0, dwarf[j] = 0;
				outIteration = true; // 이미 존재하는 조합이 발견되면 반복문이 종료되도록 상태를 변경
				//주의, 오름차순은 계속 진행되고 있으므로 이중 for문을 종료해선 안된다.
			}
			if (dwarf[i] < dwarf[j]) { //버블정렬, 오름차순
				int temp = dwarf[i];
				dwarf[i] = dwarf[j];
				dwarf[j] = temp;
			}
		}
	}

	for (int i = 0; i < 9; i++) // 난쟁이 출력
		if (dwarf[i] != 0) // 0 이 아닌 참인 난쟁이만 출력
			printf("%d\n", dwarf[i]);
}