/*
* @Author: cxy
* @Date:   2019-03-31 20:32:26
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 20:41:40
*/

#include <stdio.h>

void reverseArray (int *nums, int numsSize) {
	int i = 0;
	int j = numsSize - 1;
	while (i < j) {
		int temp = nums[i];
		nums[i++] = nums[j];
		nums[j--] = temp;
	}
}

int main(int argc, char const *argv[])
{
	int length = 0;
	int reverseSize = 0;
	scanf("%d%d", &length, &reverseSize);
	reverseSize %= length;
	int nums[length] = {0};

	for (int i = 0; i < length; ++i) {
		int temp = 0;
		scanf("%d", &temp);
		nums[i] = temp;
	}

	reverseArray(nums, length - reverseSize);
	reverseArray(nums + length - reverseSize, reverseSize);
	reverseArray(nums, length);

	printf("%d", nums[0]);
	for (int i = 1; i < length; ++i) printf(" %d", nums[i]);

	return 0;
}
