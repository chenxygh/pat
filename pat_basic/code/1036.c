/*
* @Author: cxy
* @Date:   2019-04-01 00:29:09
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 00:37:14
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int length = 0;
	char c = '\0';
	scanf("%d %c", &length, &c);
	int row = (int)(length / 2.0 + 0.5);
	for (int i = 0; i < row; ++i) {
		if (i == 0 || i == row - 1) {
			int cnt = length;
			while (cnt--) printf("%c", c);
			printf("\n");
			continue;
		}
		printf("%c%*c\n", c, length - 1, c);
	}

	return 0;
}
