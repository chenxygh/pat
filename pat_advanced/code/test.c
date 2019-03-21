/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-21 21:53:52
*/
#include <stdio.h>
#include <string.h>

int a;

int main(int argc, char const *argv[])
{
	const char marsColor[][2] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C"};
	char res[8] = {};
	res[0] = '#';
	int decimalColor = 56;
	strcat(res, marsColor[decimalColor / 13]);
	printf("%s\n", res);

	return 0;
}
