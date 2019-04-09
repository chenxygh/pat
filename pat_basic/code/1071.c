/*
* @Author: cxy
* @Date:   2019-04-08 22:41:40
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-09 14:36:24
*/

#include <stdio.h>
#include <string.h>

typedef struct Result {
	int status;
	int token;
	int total;
} Result;

int main(int argc, char const *argv[])
{
	int total = 0;
	int cnt = 0;
	scanf("%d%d", &total, &cnt);

	Result res[cnt];
	for (int i = 0; i < cnt; ++i) {
		int n1, b, t, n2;
		scanf("%d%d%d%d", &n1, &b, &t, &n2);
		if (!total) {
			res[i].status = -999;
			continue;
		}
		if (t > total) {
			res[i].status = 0;
			res[i].total = total;
			continue;
		}

		int sign = b? (n2 > n1? 1: -1): (n2 < n1? 1: -1);
		total += sign * t;
		res[i].status = sign;
		res[i].token = t;
		res[i].total = total;
	}

	for (int i = 0; i < cnt; ++i) {
		if (res[i].status == 1) {
			printf("Win %d!  Total = %d.\n", res[i].token, res[i].total);
		} else if (res[i].status == -1) {
			printf("Lose %d.  Total = %d.\n", res[i].token, res[i].total);
		} else if (res[i].status == 0) {
			printf("Not enough tokens.  Total = %d.\n", res[i].total);
		} else if (res[i].status == -999) {
			printf("Game Over.\n");
			break;
		}
	}
	
	return 0;
}
