//버블정렬
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int inputLen, inputNum, temp;
	scanf("%d", &inputLen);

	int arr[1000] = {0,};

	for (int i = 0; i < inputLen; i++) {
		scanf("%d", &inputNum);
		arr[i] = inputNum;
	}

	for (int k = 0; k < inputLen - 1; k++) {
		for (int i = 0; i < inputLen - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < inputLen; i++) {
		printf("%d\n", arr[i]);
	}
}