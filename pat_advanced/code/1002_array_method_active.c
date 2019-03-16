/*
* @Author: cxy
* @Date:   2019-03-16 12:46:40
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-16 12:55:42
*/

#include <stdio.h>

void getPoly (float coef[]) {
	int cnt = 0;
	scanf("%d", &cnt);
	while (cnt--) {
		int expo = 0;
		float value = 0.0;
		scanf("%d%f", &expo, &value);
		coef[expo] += value;
	}
}

int main(int argc, char const *argv[])
{
	float coef[1001] = {0.0};

	getPoly(coef);
	getPoly(coef);
	int length = 0;
	for (int i = 0; i < 1001; ++i) if (coef[i] != 0) ++length;
	printf("%d", length);
	for (int i = 1000; i >= 0; --i) if (coef[i] != 0) printf(" %d %.1f", i, coef[i]);

	return 0;
}
