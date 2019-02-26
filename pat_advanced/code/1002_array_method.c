/*
* @Author: cxy
* @Date:   2019-02-26 11:28:46
* @Last Modified by:   cxy
* @Last Modified time: 2019-02-26 11:36:52
*/
#include <stdio.h>

void getPoly(double expo[]) {
	int cnt = 0;
	scanf("%d", &cnt);

	while (cnt--) {
		int e = 0;
		double c = 0.0;
		scanf("%d%lf", &e, &c);
		expo[e] += c;
	}
}

int main(int argc, char const *argv[])
{
	double expo[1001] = {0};
	getPoly(expo);
	getPoly(expo);

	int cnt = 0;
	for (int i = 1000; i >= 0; --i) if (expo[i] != 0) cnt++;
	printf("%d", cnt);

	for (int i = 1000; i >= 0; --i) if (expo[i] != 0) printf(" %d %.1lf", i, expo[i]);

	return 0;
}
