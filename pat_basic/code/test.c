/*
* @Author: cxy
* @Date:   2019-04-01 01:01:12
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-13 00:39:28
*/

#include <stdio.h>

int myStrcmp (const char *src, const char *des) {
	int res = 0;
	while (!(res = src[0] - des[0]) && des[0] != '\0') {
		++src;
		++des;
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int a = -2;
	printf("%d\n", a);
	printf("%d\n", a >> 4);

	return 0;
}
