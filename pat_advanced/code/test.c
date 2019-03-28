/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-28 16:20:41
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int nums[] = {0, 2, 1, 5, 6, 7, 3, 4, 9, 8};
	int length = 10;
	for (int i = 0; i < length - 1; ++i) {
		char hasChange = 0;
		for (int j = length - 1; j >= i + 1; --j) {
			if (nums[j] < nums[j - 1]) {
				int temp = nums[j];
				nums[j] = nums[j - 1];
				nums[j - 1] = temp;
				hasChange = 1;
			}
		}
		if (!hasChange) break;
	}

	for (int i = 0; i < length; ++i) printf("%d\n", nums[i]);
	printf("\n");
	
	length = 12;
	// realloc 要使用一个新的指针来接收新内存的地址！ 因为可能不是 append, 而是 new space
	int *p = (int *)realloc(nums, length * sizeof(int));
	for (int i = 0; i < length; ++i) printf("%d\n", nums[i]);
	printf("\n");

	int a = 10;
	int b = 1;
	int c = 0;
	c = b = a;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	return 0;
}
