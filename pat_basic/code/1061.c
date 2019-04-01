/*
* @Author: cxy
* @Date:   2019-04-01 14:14:29
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 14:21:47
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int stdTotals = 0;
	int qstTotals = 0;
	scanf("%d%d", &stdTotals, &qstTotals);

	int score[qstTotals] = {0};
	int ans[qstTotals] = {0};
	int stdScore[stdTotals] = {0};

	for (int i = 0; i < qstTotals; ++i) scanf("%d", score + i);
	for (int i = 0; i < qstTotals; ++i) scanf("%d", ans + i);

	for (int i = 0; i < stdTotals; ++i) {
		for (int j = 0; j < qstTotals; ++j) {
			int temp = 0;
			scanf("%d", &temp);
			if (temp == ans[j]) stdScore[i] += score[j];
		}
	}
	for (int i = 0; i < stdTotals; ++i) printf("%d\n", stdScore[i]);

	return 0;
}
