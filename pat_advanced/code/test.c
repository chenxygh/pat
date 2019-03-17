/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-17 15:01:23
*/
#include <stdio.h>
#include <string.h>

int a;

int main(int argc, char const *argv[])
{
	int a = 1;
	int b = 0;

	if (a || (b = 8));
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}
