/*
* @Author: cxy
* @Date:   2019-03-31 23:04:19
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 23:37:41
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char digits[1001] = {'\0'};
	int divisor = 0;
	scanf("%s%d", digits, &divisor);

	char quotient[1001] = {'\0'};
	int length = 0;
	int remainder = 0;
	for (int i = 0; digits[i] != '\0'; ++i) {
		int divident = remainder * 10 + digits[i] - '0';
		int temp = divident / divisor;
		quotient[length++] = temp? temp + '0': '0';
		remainder = divident % divisor;
	}

	int i = 0;
	for (; quotient[i] == '0' && i < length; ++i);
	if (i == length) {
		printf("%d %d\n", 0, remainder);
		return 0;
	}

	printf("%s %d\n", quotient + i, remainder);

	return 0;
}
