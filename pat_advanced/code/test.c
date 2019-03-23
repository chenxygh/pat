/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-23 15:06:32
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num[] = {0, 2, 1, 5, 6, 7, 3, 4, 9, 8};
	int length = 10;
	for (int i = 0; i < length - 1; ++i) {
		char isChange = 0;
		for (int j = length - 1; j >= i + 1; --j) {
			if (num[j] < num[j - 1]) {
				int temp = num[j];
				num[j] = num[j - 1];
				num[j - 1] = temp;
				isChange = 1;
			}
		}
		if (!isChange) break;
	}

	for (int i = 0; i < length; ++i) printf("%d\n", num[i]);

	return 0;
}
