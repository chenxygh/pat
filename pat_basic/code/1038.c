/*
* @Author: cxy
* @Date:   2019-04-26 15:40:33
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-26 16:02:00
*/

#include <stdio.h>

/**
 * 数组下标法
 * 这种方法很妙，空间只要 0(101)，时间是 O(1)
 * 相当舒服。
 * 在多项式加法也出现过。
 */
int main(int argc, char const *argv[])
{
	int nums[101] = {0};
	int cnt = 0;
	scanf("%d", &cnt);
	while (cnt--) {
		int temp = 0;
		scanf("%d", &temp);
		++nums[temp];
	}

	scanf("%d", &cnt);
	while (--cnt) {
		int temp = 0;
		scanf("%d", &temp);
		printf("%d ", nums[temp]);
	}
	int temp = 0;
	scanf("%d", &temp);
	printf("%d", nums[temp]);

	return 0;
}

/**
 * 最开始简单的想法，双重循环，两个数组，但是这样最后一个测试点不通过
 */
// int main(int argc, char const *argv[])
// {
// 	int cnt = 0;

// 	scanf("%d", &cnt);
// 	int nums[cnt] = {0};
// 	int numsSize = cnt;
// 	for (int i = 0; i < cnt; ++i) scanf("%d", nums + i);

// 	scanf("%d", &cnt);
// 	int target[cnt] = {0};
// 	int targetSize = cnt;
// 	for (int i = 0; i < cnt; ++i) scanf("%d", target + i);

// 	int res[cnt] = {0};
// 	for (int i = 0; i < numsSize; ++i) {
// 		for (int j = 0; j < targetSize; ++j) {
// 			if (nums[i] == target[j]) {
// 				++res[j];
// 				break;
// 			}
// 		}
// 	}

// 	printf("%d", res[0]);
// 	for (int i = 1; i < targetSize; ++i) printf(" %d", res[i]);

// 	return 0;
// }
