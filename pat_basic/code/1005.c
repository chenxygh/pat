#include <stdio.h>

void insertSort (int nums[], int numsSize) {
	nums[0] = nums[numsSize - 1];
	if (nums[numsSize - 1] > nums[numsSize - 2]) {
		int j = numsSize - 2;
		for (; nums[0] > nums[j]; --j) {
			nums[j + 1] = nums[j];
		}
		nums[j + 1] = nums[0];
	}
}

int main(int argc, char const *argv[])
{
	int dict[200] = {0};
	int n = 0;
	scanf("%d", &n);
	int res[n + 1];
	int length = 1;

	int data[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", data + i);
		int num = data[i];
		while (num != 1) {
			num = num % 2? (num * 3 + 1) / 2: num / 2;
			if (dict[num]) break;
			dict[num] = 1;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (dict[data[i]] == 0) {
			res[length++] = data[i];
			insertSort (res, length);
		}
	}
	
	if (length > 1) printf("%d", res[1]);
	for (int i = 2; i < length; ++i) printf(" %d", res[i]);

	return 0;
}
