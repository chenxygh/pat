/*
* @Author: cxy
* @Date:   2019-03-31 22:16:11
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 22:51:03
*/

#include <stdio.h>

/**
 * A1 = 能被 5 整除的数字中所有偶数的和；
 * A2 = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n1​​ −n​2​​ +n​3​​ −n​4​​ ⋯；
 * A3 = 被 5 除后余 2 的数字的个数；
 * A4 = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
 * A5 = 被 5 除后余 4 的数字中最大数字。
 */

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int A1 = 0;
	int A2 = 0;
	int A2Cnt = 0;
	char A2HasChange = 0;
	int A3 = 0;
	int A4Cnt = 0;
	int A4Sum = 0;
	int A5 = 0;
	for (int i = 0; i < cnt; ++i) {
		int num = 0;
		scanf("%d", &num);
		switch (num % 5) {
			case 0:
				A1 += num % 2? 0: num;
				break;
			case 1: {
				char sign = A2Cnt % 2? -1: 1;
				A2 += sign * num;
				++A2Cnt;
				A2HasChange = 1;
				break;
			}
			case 2:
				++A3;
				break;
			case 3:
				++A4Cnt;
				A4Sum += num;
				break;
			case 4:
				A5 = num > A5? num: A5;
				break;
			default: break;
		}
	}

	if (A1) printf("%d ", A1);
	else printf("%c ", 'N');
	if (A2HasChange) printf("%d ", A2);
	else printf("%c ", 'N');
	if (A3) printf("%d ", A3);
	else printf("%c ", 'N');
	if (A4Sum) printf("%.1f ", (float)A4Sum / A4Cnt);
	else printf("%c ", 'N');
	if (A5) printf("%d", A5);
	else printf("%c", 'N');

	return 0;
}
