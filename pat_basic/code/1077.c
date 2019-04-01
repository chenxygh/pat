/*
* @Author: cxy
* @Date:   2019-04-01 14:43:54
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 14:54:09
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	int range = 0;
	scanf("%d%d", &cnt, &range);

	int score[cnt] = {0};
	for (int i = 0; i < cnt; ++i) {
		int teacherScore = 0;
		scanf("%d", &teacherScore);

		int sum = 0;
		int validCnt = 0;
		int max = 0;
		int min = range;
		for (int j = 1; j < cnt; ++j) {
			int temp = 0;
			scanf("%d", &temp);
			if (temp <= range && temp >= 0) {
				max = temp > max? temp: max;
				min = temp < min? temp: min;
				sum += temp;
				++validCnt;
			}
		}

		score[i] = (int)(((sum - max - min) * 1.0 / (validCnt - 2) + teacherScore) / 2.0 + 0.5);
	}

	for (int i = 0; i < cnt; ++i) printf("%d\n", score[i]);

	return 0;
}
