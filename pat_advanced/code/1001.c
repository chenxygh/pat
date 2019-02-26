/*
* @Author: cxy
* @Date:   2019-02-25 20:07:35
* @Last Modified by:   cxy
* @Last Modified time: 2019-02-25 21:49:36
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 0;

	// 获取 a, b
	scanf("%d%d", &a, &b);

	// 计算和转换 sum
	int sum = a + b;
	char buffer[100] = {};
	sprintf(buffer, "%d", sum);

	char *p = buffer;

	// 负号处理
	if (buffer[0] == '-') printf("%c", *p++);

	// cnt 初始值计算
	int length = strlen(p);
	int cnt = 3 - length % 3;
	cnt %= 3;

	// 循环打印
	while (*p != '\0') {
		// 短路计算，避免 cnt == 0 的情况
		if(cnt != 0 && !(cnt %= 3)) printf(",");
		printf("%c", *p++);
		cnt++;
	}
	printf("\n");

	return 0;
}
