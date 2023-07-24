#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	int len = num1 < num2 ? num1 : num2;
	int divideVar = 1;

	int i = 2;
	do {
		if (num1 % i == 0 && num2 % i == 0) {
			num1 /= i;
			num2 /= i;
			divideVar *= i;
		}
		else
			i++;
	} while (i < len + 1);

	printf("%d\n", divideVar); //최대공약수
	printf("%d\n", num1 * num2 * divideVar); //최소공배수
}
