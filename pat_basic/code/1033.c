/*
* @Author: cxy
* @Date:   2019-04-27 19:43:30
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-27 19:57:34
*/

#include <stdio.h>

void initASCII (int ASCII[]) {
	for (int i = 'A'; i <= 'Z'; ++i) ASCII[i] = 1;
	for (int i = '0'; i <= '9'; ++i) ASCII[i] = 1;
	ASCII['_'] = 1;
	ASCII[','] = 1;
	ASCII['.'] = 1;
	ASCII['-'] = 1;
	ASCII['+'] = 1;
}

int main(int argc, char const *argv[])
{
	int ASCII[256] = {0};
	initASCII(ASCII);

	char temp = 0;
	while ((temp = getchar()) != '\n') ASCII[temp] = 0;

	while ((temp = getchar()) != '\n') {
		if (temp >= 'A' && temp <= 'Z') {
			if (ASCII['+'] && ASCII[temp]) printf("%c", temp);
		} else if (temp >= 'a' && temp <= 'z') {
			if (ASCII[temp - 32]) printf("%c", temp);
		} else if (ASCII[temp]) printf("%c", temp);
	}

	return 0;
}
