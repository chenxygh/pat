/*
* @Author: cxy
* @Date:   2019-03-21 22:15:42
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-21 22:51:47
*/

/**
 * scanf("%*s", str); 输入忽略
 * printf("%*.*s", 10, 2, str); 宽度 精度 动态输出控制
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[81] = {};
	scanf("%s", str);
	int length = strlen(str);
	int verticalLen = (length + 2) / 3;
	int bottomLen = (length + 2) % 3 + verticalLen;
	
	int headIndex = 0;
	int rearIndex = length - 1;
	for (int i = verticalLen - 1; i; --i) printf("%c%*s%c\n", str[headIndex++], bottomLen - 2, "", str[rearIndex--]);
	printf("%.*s\n",bottomLen, str + headIndex);

	return 0;
}
