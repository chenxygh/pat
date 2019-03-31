/*
* @Author: cxy
* @Date:   2019-03-31 21:48:11
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 22:04:57
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int coef[1001] = {0};

	char c = ' ';
	while (c != '\n') {
		int val = 0;
		int expo = 0;
		scanf("%d%d%c", &val, &expo, &c);
		if (expo) coef[expo - 1] += val * expo;
	}

	int i = 1000;
	char hasPrint = 0;
	for (; i >= 0; --i) if (coef[i]) {
		printf("%d %d", coef[i], i);
		hasPrint = 1;
		break;
	}
	for (--i; i >= 0; --i) if (coef[i]) {
		printf(" %d %d", coef[i], i);
		hasPrint = 1;
	}
	if (!hasPrint) printf("%d %d", 0, 0);

	return 0;
}
