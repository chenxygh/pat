#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showPinYin (char *str) {
	int sum = 0;
	// 拼音表
	const char pinYinDict[][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

	// 获取数字和
	for (int i = 0; str[i] != '\0'; i++) {
		sum += (str[i] - '0');
	}

	// 数字结果字符化
	char res[10] = {};
	sprintf(res, "%d", sum);

	// 根据结果字符输出对应的拼音
	int i = 0;
	for (i = 0; res[i + 1] != '\0'; i++) {
		printf("%s ", pinYinDict[res[i] - '0']);
	}
	printf("%s\n", pinYinDict[res[i] - '0']);
}

int main () {
	char str[101];
	scanf("%s", str);
	showPinYin(str);
}
