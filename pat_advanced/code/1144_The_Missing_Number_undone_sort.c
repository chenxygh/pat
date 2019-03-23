/*
* @Author: cxy
* @Date:   2019-03-23 14:44:36
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-23 14:46:24
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int max = 0;
	while (cnt--) {
		int num = 0;
		scanf("%d", &num);
		if (num > max) max = num;
	}
	printf("%d", max + 1);

	return 0;
}
