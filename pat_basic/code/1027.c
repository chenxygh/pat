/*
* @Author: cxy
* @Date:   2019-04-12 20:33:45
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-12 21:17:13
*/

#include <stdio.h>

int printStar(int *total, int printNums, char c) {
	if (*total - printNums < 0) return 0;

	*total -= printNums;
	int temp = printStar(total, printNums + 2, c);
	printf("%*s", temp, "");
	while (printNums--) printf("%c", c);
	printf("\n");

	return temp + 1;
}

int main(int argc, char const *argv[])
{
	int total = 0;
	char c = '\0';
	scanf("%d %c", &total, &c);

	int half = (total - 1) / 2 + 1;
	int spaceNUms = printStar(&half, 1, c) - 2;
	int left = half * 2 + (total - 1) % 2;
	for (int i = spaceNUms, j = 3; i >= 0; --i, j += 2) {
		printf("%*s", i, "");
		int temp = j;
		while (temp--) printf("%c", c);
		printf("\n");
	}
	printf("%d\n", left);

	return 0;
}
