/*
* @Author: cxy
* @Date:   2019-03-31 23:45:08
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 23:53:45
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char num[1001] = {'\0'};
	int res[10] = {0};
	scanf("%s", &num);
	char *p = num;

	while (p[0] != '\0') {
		++res[p[0] - '0'];
		++p;
	}

	for (int i = 0; i < 10; ++i) {
		if (res[i]) printf("%d:%d\n", i, res[i]);
	}

	return 0;
}
