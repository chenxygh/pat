/*
* @Author: cxy
* @Date:   2019-04-01 15:22:37
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 15:30:06
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int multi = a * b;
	if (!multi) {
		printf("%d", 0);
		return 0;
	}

	int isZero = 1;
	while (multi) {
		int digit = multi % 10;
		if (isZero && !digit) {
			multi /= 10;
			continue;
		}
		isZero = 0;
		printf("%d", multi % 10);
		multi /= 10;
	}
	if (isZero) printf("%d", 0);

	return 0;
}
