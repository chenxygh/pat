/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-01 14:12:35
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 10;

	if (a ||(b = 99));
	printf("%d", a && (b = 99));
	// printf("%d, %d\n", a, b);
	return 0;
}
