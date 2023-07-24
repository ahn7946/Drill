#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdbool.h> //boolean type

int main()
{
	char input[1000000];
	int alphabetCnt[26] = { 0, };
	scanf("%s", input);

	for (int i = 0; i < 1000000; i++) {
		if (input[i] > 64 && input[i] < 91)
			alphabetCnt[input[i] - 65]++;
		else if (input[i] > 96 && input[i] < 123) {
			input[i] = input[i] - 32; // 65~90, 26개
			alphabetCnt[input[i] - 65]++;
		}
		else if (input[i] == '\0')
			break;
	}

	int tempPosi = 0; //최빈출 위치
	char tempApbt; //최빈출 알파벳의 정보
	char questionMark = 0; //최빈수 중복여부

	for (int i = 0; i < 26; i++) {
		if (tempPosi == alphabetCnt[i])
			questionMark = 1;
		else if (tempPosi < alphabetCnt[i]) { // 최빈수 판별
			tempPosi = alphabetCnt[i]; //최빈 위치 업데이트
			tempApbt = i + 65; //최빈 알파벳 정보 업데이트
			questionMark = 0;
		}
	}

	if (questionMark == 1)
		printf("?");
	else printf("%c", tempApbt);

	return 0;
}