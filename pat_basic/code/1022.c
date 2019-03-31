/*
* @Author: cxy
* @Date:   2019-03-31 23:57:14
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 00:02:59
*/

#include <stdio.h>

void radixPrint(int num, int radix) {
	if (!num) return;
	radixPrint(num / radix, radix);
	printf("%d", num % radix);
}

int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 0;
	int radix = 0;
	scanf("%d%d%d", &a, &b, &radix);
	int sum = a + b;
	if (!sum) {
		printf("%d", 0);
		return 0;
	}

	radixPrint(sum, radix);

	return 0;
}
