/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-22 13:22:48
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int a = 2;
	int b = 10111;
	char str[] = "helloworld";
	sprintf(str, "%d", b);
	printf("%d\n", strlen(str));
	printf("%s\n", str + 6);

	return 0;
}
