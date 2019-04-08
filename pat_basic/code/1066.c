/*
* @Author: cxy
* @Date:   2019-04-08 22:26:26
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-08 22:34:37
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int row = 0;
	int column = 0;
	int left = 0;
	int right = 0;
	int replaceVal = 0;
	scanf("%d%d%d%d%d", &row, &column, &left, &right, &replaceVal);

	int nums[row][column];
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			int temp = 0;
			scanf("%d", &temp);
			nums[i][j] = temp >= left && temp <= right? replaceVal: temp;
		}
	}

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			!j? printf("%03d", nums[i][j]): printf(" %03d", nums[i][j]);
		}
		printf("\n");
	}

	return 0;
}
