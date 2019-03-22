/*
* @Author: cxy
* @Date:   2019-03-21 21:39:13
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-21 23:28:58
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	const char marsColor[][2] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C"};
	int cnt = 3;
	char res[8] = {};
	res[0] = '#';
	while (cnt--) {
		int decimalColor = 0;
		scanf("%d", &decimalColor);
		strcat(res, marsColor[decimalColor / 13]);
		strcat(res, marsColor[decimalColor % 13]);
	}
	printf("%s\n", res);

	return 0;
}
