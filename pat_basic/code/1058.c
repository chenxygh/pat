/*
* @Author: cxy
* @Date:   2019-05-27 12:49:45
* @Last Modified by:   cxy
* @Last Modified time: 2019-05-30 11:38:43
*/

#include <stdio.h>

typedef struct {
	int score;
	int itemsTotal;
	int itemsValidTotal;
	char items[5];
} question;

bool includes (char str[], char val) {
	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == val) return true;
	}

	return false;
}

int main(int argc, char const *argv[])
{
	int studentTotal = 0, questionTotal = 0;
	scanf("%d%d", &studentTotal, &questionTotal);

	question answer[questionTotal] = {0, 0, 0, {'\0'}};
	for (int i = 0; i < questionTotal; ++i) {
		getchar();
		scanf("%d%d%d", &(answer[i].score), &(answer[i].itemsTotal), &(answer[i].itemsValidTotal));
		for (int j = 0; j < answer[i].itemsValidTotal; ++j) {
			getchar();
			scanf("%c", answer[i].items + j);
		}

		// printf("%d %d %d %s\n", answer[i].score, answer[i].itemsTotal, answer[i].itemsValidTotal, answer[i].items);
	}

	int wrong[questionTotal] = {0};
	for (int i = 0; i < studentTotal; ++i) {
		int score = 0;
		for (int j = 0; j < questionTotal; ++j) {
			int num = 0;
			getchar();// 吸收换行符/空格符
			getchar();// 吸收'('
			scanf("%d", &num);

			bool isValid = true;
			for (int k = 0; k < num; ++k) {
				getchar();// 吸收空格符
				char temp = getchar();

				if (isValid && (num != answer[j].itemsValidTotal || !includes(answer[j].items, temp))) {
					isValid = !isValid;
				}
			}
			getchar();// 吸收')'

			if (isValid) {
				score += answer[j].score;
			} else {
				++wrong[j];
			}
		}

		printf("%d\n", score);
	}

	// 统计结果输出
	int max = 0;
	for (int i = 0; i < questionTotal; ++i) {
		if (max < wrong[i]) max = wrong[i];
	}
	if (!max) {
		printf("Too simple\n");
	} else {
		printf("%d", max);
		for (int i = 0; i < questionTotal; ++i) {
			if (wrong[i] == max) {
				printf(" %d", i + 1);
			}
		}
	}

	return 0;
}
