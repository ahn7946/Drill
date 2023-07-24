#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int np5, np4, np3, np2, np1;
	int num, dNum;
	char arr[10000] = { 0, };
	
	for (int num = 1; num < 10001; num++) { // 1 ~ 10000
		np5 = num / 10000;
		np4 = (num - 10000 * np5) / 1000;
		np3 = (num - 10000 * np5 - 1000 * np4) / 100;
		np2 = (num - 10000 * np5 - 1000 * np4 - 100 * np3) / 10;
		np1 = (num - 10000 * np5 - 1000 * np4 - 100 * np3 - 10 * np2) / 1;
		
		dNum = num + np5 + np4 + np3 + np2 + np1;
		if (dNum < 10001)
			arr[dNum - 1] = 1;
	}
	for (int i = 0; i < 10000; i++) { // 0 ~ 9999
		if (arr[i] == 0)
			printf("%d\n", i + 1);
	}
}