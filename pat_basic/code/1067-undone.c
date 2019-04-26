/*
* @Author: cxy
* @Date:   2019-04-26 21:36:47
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-26 22:56:56
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[21] = {'\0'};
	int cnt = 0;
	scanf("%s%d", str, &cnt);
	int strSize = strlen(str);

	int wrongCount = 0;
	char typed[cnt][21] = {'\0'};
	char isCorrect = 0;
	char isOverflow = 0;
	int i = 0;
	for (; 1; ++i) {
		char temp[21] = {'\0'};
		char *p = temp;
		if (!isCorrect && !isOverflow) {
			if (i >= cnt) {
				isOverflow = 1;
			} else {
				p = typed[i];
			}
			// 三元运算符似乎在不同类型的赋值下，会有错误
			// i >= cnt? isOverflow = 1: p = typed[i];
		}
		getchar();
		scanf("%[^\n]s", p);
		if (!strcmp("#", p)) break;
		if (!isCorrect && !isOverflow && !strcmp(str, p)) {
			isCorrect = 1;
		}
	}

	if (isCorrect) {
		for (int j = 0; typed[j + 1][0] != '\0'; ++j) {
			printf("Wrong password: %s\n", typed[j]);
		}
		printf("Welcome in\n");
	} else {
		int j = 0;
		for (; j < cnt && typed[j][0] != '\0'; ++j) {
			printf("Wrong password: %s\n", typed[j]);
		}
		if (i > cnt) {
			printf("Account locked\n");
		}
	}

	return 0;
}
