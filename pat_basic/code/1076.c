/*
* @Author: cxy
* @Date:   2019-04-01 14:30:35
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 14:40:05
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	const char dict[4] = {'A', 'B', 'C', 'D'};

	int cnt = 0;
	scanf("%d", &cnt);
	getchar();

	char res[cnt + 1] = {'\0'};
	for (int i = 0; i < cnt; ++i) {
		char str[16] = {'\0'};
		scanf("%[^\n]s", str);
		getchar();
		
		char *p = str;
		while (p[0] != 'T' && p[0] != '\0') ++p;
		p -= 2;

		int j = 0;
		while (dict[j] != p[0] && j < 4) ++j;
		res[i] = j + 1 + '0';
	}

	printf("%s\n", res);

	return 0;
}
