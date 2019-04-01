/*
* @Author: cxy
* @Date:   2019-04-01 22:56:26
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 23:01:20
*/

#include <stdio.h>

#define CLK_TCK 100

int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int interval = b - a;
	int second = (int)(interval * 1.0 / CLK_TCK + 0.5);
	char str[9] = {'\0'};
	sprintf(str, "%02d:%02d:%02d", second / 60 / 60, second / 60 % 60, second % 60);

	printf("%s\n", str);

	return 0;
}
