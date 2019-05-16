/*
* @Author: cxy
* @Date:   2019-05-16 10:40:24
* @Last Modified by:   cxy
* @Last Modified time: 2019-05-16 11:02:31
*/

#include <stdio.h>
int getRes(int num) {
	return (int)(num / 2) + (int)(num / 3) + (int)(num / 5);
}

int main(int argc, char const *argv[])
{
	int num = 0;
	scanf("%d", &num);

	int length = getRes(num);
	bool res[length + 1] = {0};

	int cnt = 0;
	for (int i = 1; i <= num; ++i) {
		int temp = getRes(i);
		if (!res[temp]) {
			res[temp] = true;
			++cnt;
		}
	}

	printf("%d\n", cnt);

	return 0;
}
