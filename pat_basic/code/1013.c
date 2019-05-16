/*
* @Author: cxy
* @Date:   2019-05-16 09:42:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-05-16 10:06:45
*/

#include <stdio.h>
#include <math.h>

bool isPrime(int num) {
	if (num <= 1) return false;
	if (num == 2) return true;
	if (!(num % 2)) return false;

	int mid = (int)sqrt((double)num);
	for (int i = 3; i <= mid; i += 2) {
		if (!(num % i)) return false;
	}

	return true;
}

int main(int argc, char const *argv[])
{
	int left = 0, right = 0;
	scanf("%d%d", &left, &right);

	bool canPrint = false;
	int cnt = 0;
	int row = 0;
	for (int i = 2; cnt < right; ++i) {
		if (isPrime(i)) {
			++cnt;
			if (!canPrint && cnt >= left) {
				canPrint = true;
			}

			if (canPrint) {
				++row;
				if (row == 10 || cnt == right) {
					row = 0;
					printf("%d\n", i);
				} else {
					printf("%d ", i);
				}
			}
		}
	}

	return 0;
}
