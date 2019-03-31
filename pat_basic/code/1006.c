/*
* @Author: cxy
* @Date:   2019-03-31 20:23:39
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 20:31:06
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num = 0;
	int digits[3] = {0};
	scanf("%d", &num);

	int length = 0;
	while (num) {
		digits[length++] = num % 10;
		num /= 10;
	}

	if (length == 3) {
		while (digits[length - 1]--) printf("%c", 'B');
		--length;
	}
	if (length == 2) {
		while (digits[length - 1]--) printf("%c", 'S');
		--length;
	}
	if (length == 1) {
		for (int i = 0; i < digits[length - 1]; ++i) printf("%d", i + 1);
		--length;
	}

	return 0;
}
