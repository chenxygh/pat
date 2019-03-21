/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-21 22:52:14
*/
#include <stdio.h>
#include <string.h>

int a;

int main(int argc, char const *argv[])
{
	char str[10] = {};
	char str2[10] = {};
	int a = 0;
	scanf("%*s%s", str, str2);
	printf("%*s;1212\n", 10, " ");
	printf("%*d%*.*s%s\n", 10, a, 10, 2, str, str2);

	return 0;
}
