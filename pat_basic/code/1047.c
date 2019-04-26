/*
* @Author: cxy
* @Date:   2019-04-26 20:44:07
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-26 20:47:40
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int score[1001] = {0};
	int max = 0;
	int index = 0;
	while (cnt--) {
		int group = 0, member = 0, value = 0;
		scanf("%d-%d%d", &group, &member, &value);
		score[group] += value;
		if (score[group] > max) {
			max = score[group];
			index = group;
		}
	}

	printf("%d %d\n", index, max);

	return 0;
}
