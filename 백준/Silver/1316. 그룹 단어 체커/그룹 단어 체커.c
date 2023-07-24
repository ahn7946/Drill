#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int isnotword = 0; // 그룹단어가 아닌 단어의 수
	char warr[101];
	int inputsize;

	scanf("%d", &inputsize);

	for (int i = 0; i < inputsize; i++) {
		int wrdchecker = 0;        // 현 위치 기준 우측이 다른 문자일 경우
		int alphabetcnt[26] = { 0 }; // 그룹 종단 알파벳
		
		scanf("%s", warr); // 단어 입력

		for (int j = 0; warr[j] != '\0'; j++) {
			if (warr[j] != warr[j + 1]) {
				if (alphabetcnt[warr[j] - 'a'] > 0)
					wrdchecker++;
				alphabetcnt[warr[j] - 'a']++;
			}
		}
		if (wrdchecker > 0)
			isnotword++;
	}
	printf("%d", inputsize - isnotword);
	return 0;
}
