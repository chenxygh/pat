/*
* @Author: cxy
* @Date:   2019-04-26 20:35:30
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-26 20:39:54
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int alpha = 0;
	int bravo = 0;
	while (cnt--) {
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		int target = a + c;
		if (b == d) continue;
		if (b == target) {
			++bravo;
			continue;
		}
		if (d == target) ++alpha;
	}

	printf("%d %d\n", alpha, bravo);

	return 0;
}
