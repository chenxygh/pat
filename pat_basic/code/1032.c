/*
* @Author: cxy
* @Date:   2019-04-15 21:06:02
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-15 21:13:03
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int score[cnt] = {0};
	int index = 0;
	int max = 0;
	while (cnt--) {
		int id, value;
		scanf("%d%d", &id, &value);
		score[id] += value;
		if (score[id] > max) {
			max = score[id];
			index = id;
		}
	}

	printf("%d %d", index, max);

	return 0;
}
