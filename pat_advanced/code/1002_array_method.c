/*
* @Author: cxy
* @Date:   2019-02-26 11:28:46
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-15 12:31:17
*/
#include <stdio.h>

void getPoly(double expo[]) {
	int cnt = 0;
	scanf("%d", &cnt);

	while (cnt--) {
		int e = 0;
		double c = 0.0;
		scanf("%d%lf", &e, &c);
		expo[e] += c;
	}
}

int main(int argc, char const *argv[])
{
	double expo[1001] = {0};
	getPoly(expo);
	getPoly(expo);

	// 1. 再遍历全部
	int cnt = 0;
	for (int i = 1000; i >= 0; --i) if (expo[i] != 0) cnt++;
	printf("%d", cnt);
	for (int i = 1000; i >= 0; --i) if (expo[i] != 0) printf(" %d %.1lf", i, expo[i]);



	// 2. 在第一次统计之时，则前移 result                ------> 错误！！！
	/**
	 * 自作聪明！！！ 数组法的本质就是把指数和数组的下标联系起来！！！
	 * 如果动了数组元素的位置，那么这个方法就完全失效了！
	 */
	// 大错特错！！！
	// int length = 0;
	// for (int i = 0; i <= 1000; expo[i] != 0? expo[length++] = expo[i++]: ++i);
	// printf("%d", length);
	// while (length--) printf(" %d %.1lf", length, expo[length]);

	return 0;
}
