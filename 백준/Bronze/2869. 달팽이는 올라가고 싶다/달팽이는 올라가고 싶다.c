#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int up, down, height;
	scanf("%d %d %d", &up, &down, &height);

	double cal = (double)(height - down) / (double)(up - down);
	int int_cal = (int)cal;
	if (int_cal < cal) int_cal++;
	printf("%d", int_cal);
}