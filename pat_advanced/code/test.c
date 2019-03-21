/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-21 20:44:19
*/
#include <stdio.h>
#include <string.h>

int a;

int main(int argc, char const *argv[])
{
	char num[101] = {};
	char *str = num;

	scanf("%s", num);
	while (*str != '\0') {
		printf("%c\n", *(str++));
	}
	printf("%s\n", num);

	return 0;
}
