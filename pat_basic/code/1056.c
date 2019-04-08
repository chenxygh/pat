/*
* @Author: cxy
* @Date:   2019-04-08 21:54:25
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-08 21:59:15
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int nums[cnt] = {0};
	for (int i = 0; i < cnt; ++i) scanf("%d", nums + i);

	int sum = 0;
	for (int i = 0; i < cnt; ++i) {
		for (int j = 0; j < cnt; ++j) {
			if (i == j) continue;
			sum += nums[i] * 10 + nums[j];
		}
	}

	printf("%d\n", sum);

	return 0;
}
