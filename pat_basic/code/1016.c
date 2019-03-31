/*
* @Author: cxy
* @Date:   2019-03-31 22:56:13
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 23:01:17
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int num = 0;
	int digit = 0;
	unsigned int PA = 0;
	scanf("%d%d", &num, &digit);
	while (num) {
		PA = num % 10 == digit? PA * 10 + digit: PA;
		num /= 10;
	}

	unsigned int PB = 0;
	scanf("%d%d", &num, &digit);
	while (num) {
		PB = num % 10 == digit? PB * 10 + digit: PB;
		num /= 10;
	}

	printf("%d", PA + PB);

	return 0;
}
