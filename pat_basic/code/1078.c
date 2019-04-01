/*
* @Author: cxy
* @Date:   2019-04-01 14:58:23
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 15:18:19
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c = '\0';
	c = getchar();
	getchar();

	char str[1001] = {'\0'};
	scanf("%[^\n]s", str);
	char *p = str;
	if (c == 'C') {
		char *pre = str;
		int preCnt = 0;
		while (p[0] != '\0') {
			if (p[0] == pre[0]) {
				++preCnt;
			} else {
				preCnt > 1? printf("%d%c", preCnt, pre[0]): printf("%c", pre[0]);
				preCnt = 1;
			}
			pre = p;
			++p;
		}
		preCnt > 1? printf("%d%c", preCnt, pre[0]): printf("%c", pre[0]);
	} else if (c == 'D') {
		while (p[0] != '\0') {
			if (p[0] >= '0' && p[0] <= '9') {
				int cnt = 0;
				while (p[0] >= '0' && p[0] <= '9') {
					cnt = cnt * 10 + p[0] - '0';
					++p;
				}
				while (cnt--) printf("%c", p[0]);
			} else {
				printf("%c", p[0]);
			}
			++p;
		}
	}

	return 0;
}
