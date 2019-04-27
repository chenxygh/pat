/*
* @Author: cxy
* @Date:   2019-04-06 22:01:45
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-27 20:13:37
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int ASCII[256] = {0};

	char temp = 0;
	int total = 0;
	while ((temp = getchar()) != '\n') {
		++ASCII[temp];
		++total;
	}


	int deficient = 0;
	while ((temp = getchar()) != '\n') {
		if (ASCII[temp]) {
			--ASCII[temp];
			--total;
		} else {
			++deficient;
		}
	}

	deficient? printf("No %d\n", deficient): printf("Yes %d\n", total);

	return 0;
}
