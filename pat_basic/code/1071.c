/*
* @Author: cxy
* @Date:   2019-04-08 22:41:40
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-08 23:10:32
*/

#include <stdio.h>

typedef struct Result {
	int status;
	int token;
	int total;
}Result;

int main(int argc, char const *argv[])
{
	int total = 0;
	int cnt = 0;
	scanf("%d%d", &total, &cnt);

	Result res[cnt];
	int length = 0;
	for (; length < cnt; ++length) {
		int n1 = 0;
		int b = 0;
		int t = 0;
		int n2 = 0;
		scanf("%d%d%d%d", &n1, &b, &t, &n2);

		if (!total) {
			res[length].total = total;
			continue;
		}
		if (t > total) {
			res[length].status = 0;
			res[length].total = total;
			continue;
		}

		int status = b? (n1 > n2? 1: -1): (n1 < n2? 1: -1);
		total += status * t;
		res[length].status = status;
		res[length].token = t;
		res[length].total = total;
	}

	int i = 0;
	for (; i < length && res[i].total; ++i) {
		if (res[i].status == 1) {
			printf("Win %d!  Total = %d.\n", res[i].token, res[i].total);
		} else if (res[i].status == -1) {
			printf("Lose %d!  Total = %d.\n", res[i].token, res[i].total);
		} else {
			printf("Not enough tokens.  Total = %d.\n", res[i].total);
		}
	}
	if (i < length) {
		printf("Game Over.");
		printf("Game Over.");
	}

	return 0;
}
