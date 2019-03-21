/*
* @Author: cxy
* @Date:   2019-03-21 20:36:57
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-21 21:06:59
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	const char dict[][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	char num[101] = {};
	scanf("%s", num);// 以字符串形式获取数字

	int sum = 0;
	char *str = num;
	while (*str != '\0') sum += *(str++) - '0';// 求和

	char res[4] = {};
	sprintf(res, "%d", sum);// 获取结果字符串

	// 输出
	int i = 0;
	for (i = 0; res[i + 1] != '\0'; ++i) printf("%s ", dict[res[i] - '0']);
	printf("%s", dict[res[i] - '0']);

	return 0;
}
