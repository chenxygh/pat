/*
* @Author: cxy
* @Date:   2019-04-22 23:21:54
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-22 23:41:07
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[1001] = {'\0'};
	char *p = str;
	scanf("%[^\n]s", str);
	int res[26] = {0};

	while (p[0] != '\0') {
		if (p[0] >= 'a' && p[0] <= 'z' || (p[0] >= 'A' && p[0] <= 'Z')) {
			++res[(p[0] >= 'A' && p[0] <= 'Z')? p[0] - 'A': p[0] - 'a'];
		}
		++p;
	}

	int max = 0;
	for (int i = 0; i < 26; ++i) {
		if (res[i] > res[max]) max = i;
	}

	printf("%c %d\n", max + 'a', res[max]);

	return 0;
}
