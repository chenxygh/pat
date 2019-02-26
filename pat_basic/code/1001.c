#include <stdio.h>

// int callatzNum (int n, int cnt) {
// 	if (n == 1) return cnt;
// 	cnt++;
// 	return n % 2? callatzNum((3 * n + 1) / 2, cnt): callatzNum(n / 2, cnt);
// }

int callatzNum (int n) {
	int cnt = 0;
	while (n != 1) {
		cnt++;
		n = n % 2? (3 * n + 1) / 2: n / 2;
	}

	return cnt;
}

int main () {
	int num = 0;
	int res = 0;
	
	scanf("%d", &num);
	res = callatzNum(num);
	printf("%d\n", res);
}
