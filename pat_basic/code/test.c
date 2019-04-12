/*
* @Author: cxy
* @Date:   2019-04-01 01:01:12
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-12 22:29:58
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
	printf("%*sss\n", 5, "c");

	return 0;
}
