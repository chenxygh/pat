/*
* @Author: cxy
* @Date:   2019-03-22 17:03:04
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-22 17:17:07
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int res[37] = {0};
	int length = 0;
	while (cnt--) {
		int num = 0;
		int sum = 0;
		scanf("%d", &num);
		while (num) {
			sum += num % 10;
			num /= 10;
		}
		if (sum) res[sum] = 1;
	}

	for (int i = 1; i < 37; ++i) if (res[i]) ++length;
	printf("%d\n", length);
	int i = 1;
	for (; i < 37; ++i) if (res[i]) {printf("%d", i++); break;}
	for (; i < 37; ++i) if (res[i]) printf(" %d", i);

	return 0;
}
