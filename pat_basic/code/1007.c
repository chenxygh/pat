/*
* @Author: cxy
* @Date:   2019-05-16 09:22:02
* @Last Modified by:   cxy
* @Last Modified time: 2019-05-16 09:38:20
*/

#include <stdio.h>
#include <math.h>

bool isPrime(int num) {
	if (num <= 1) return false;

	int mid = (int)sqrt((double)num);
	if (!(num % 2)) return false;
	for (int i = 3; i <= mid; i += 2) {
		if (!(num % i)) return false;
	}

	return true;
}

int main(int argc, char const *argv[])
{
	int num = 0;
	scanf("%d", &num);

	int cnt = 0;
	int pre = 2;
	for (int i = 3; i <= num; i += 2) {
		if (isPrime(i)) {
			if (i - pre == 2) {
				++cnt;
			}
			pre = i;
		}
	}

	printf("%d\n", cnt);

	return 0;
}
