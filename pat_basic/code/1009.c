/*
* @Author: cxy
* @Date:   2019-03-31 20:48:22
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 21:21:31
*/

#include <stdio.h>

int printStr(char *str) {
	if (str[0] == '\0') return 0;

	char *p = str;
	while (p[0] != ' ' && p[0] != '\0') ++p;;
	p[0] = '\0';

	printStr(p + 1)? printf(" %s", str): printf("%s", str);

	return 1;
}

int main(int argc, char const *argv[])
{
	char str[100] = {'\0'};
	scanf("%[^\n]s", str);
	printStr(str);

	return 0;
}
