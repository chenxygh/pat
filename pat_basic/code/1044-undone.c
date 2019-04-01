/*
* @Author: cxy
* @Date:   2019-04-01 00:45:46
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 01:51:28
*/

#include <stdio.h>
#include <string.h>

const char *MarsCodeLow[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
const char *MarsCodeHigh[] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

// 本题，只有两次递归，函数不具有普适性，慎用
int toEarchCode (char *str, int *num) {
	if (str[0] == '\0') return 1;
	char *p = str;
	while (p[0] != ' ' && p[0] != '\0') ++p;
	p[0] = '\0';
	int lowFlag = toEarchCode(p + 1, num);
	if (lowFlag) {
		for (int i = 0; i < 13; ++i) {
			if (!strcmp(str, MarsCodeLow[i])) {
				*num = i;
				return 0;
			}
		}
	} else {
		for (int i = 0; i < 12; ++i) {
			if (!strcmp(str, MarsCodeHigh[i])) {
				*num += (i + 1) * 13;
				return 0;
			}
		}
	}

	return 0;
}

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);
	getchar();
	char res[cnt][10];
	memset(res, 0, sizeof(cnt * 10));

	for (int i = 0; i < cnt; ++i) {
		char str[10] = {'\0'};
		scanf("%[^\n]s", str);
		getchar();
		char *p = str;
		// TODO: EarthCode -> MarsCode
		if (p[0] <= '9' && p[0] >= '0') {
			int num = 0;
			while (p[0] != '\0') {
				num = num * 10 + p[0] - '0';
				++p;
			}
			if (num / 13) {
				sprintf(res[i], "%s %s", MarsCodeHigh[num / 13], MarsCodeLow[num % 13]);
			} else {
				sprintf(res[i], "%s", MarsCodeLow[num % 13]);
			}
			continue;
		}
		// TODO: MarsCode -> EarthCode
		int num = 0;
		toEarchCode(p, &num);
		sprintf(res[i], "%d", num);
	}

	for (int i = 0; i < cnt; ++i) {
		printf("%s\n", res[i]);
	}

	return 0;
}
