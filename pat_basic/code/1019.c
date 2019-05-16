/*
* @Author: cxy
* @Date:   2019-05-16 11:12:44
* @Last Modified by:   cxy
* @Last Modified time: 2019-05-16 13:49:06
*/

#include <stdio.h>

void selectSort(int nums[], int length) {
	for (int i = 0; i < length - 1; ++i) {
		int min = nums[i];
		int index = i;
		for (int j = i + 1; j < length; ++j) {
			if (nums[j] < min) {
				min = nums[j];
				index = j;
			}
		}
		if (index != i) {
			int temp = nums[i];
			nums[i] = nums[index];
			nums[index] = temp;
		}
	}
}

int toInt(int nums[], int length) {
	int temp = 0;
	for (int i = 0; i < length; ++i) {
		temp = temp * 10 + nums[i];
	}
	return temp;
}

void reverse(int nums[], int length) {
	for (int i = 0, j = length - 1; i < j; ++i, --j) {
		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
}

void intToArray(int nums[], int temp, int length) {
	for (int i = length - 1; i >= 0; --i) {
		nums[i] = temp % 10;
		temp /= 10;
	}
}

int main(int argc, char const *argv[])
{
	int nums[4] = {0};
	int temp = 0;
	scanf("%d", &temp);
	intToArray(nums, temp, 4);

	while (1) {
		selectSort(nums, 4);

		int operandA = toInt(nums, 4);
		reverse(nums, 4);
		int operandB = toInt(nums, 4);

		int res = operandB - operandA;
		printf("%04d - %04d = %04d\n", operandB, operandA, res);
		if (res == 6174 || res == 0) break;

		intToArray(nums, res, 4);
	}

	return 0;
}
