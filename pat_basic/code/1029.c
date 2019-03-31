/*
* @Author: cxy
* @Date:   2019-04-01 00:10:20
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 00:23:31
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[81] = {'\0'};
	char typed[81] = {'\0'};
	scanf("%s%s", str, typed);

	char status[81] = {'\0'};
	int length = 0;
	char *p = str;
	char *q = typed;

	while (p[0] != '\0' || q[0] != '\0') {
		if (p[0] >= 'a' && p[0] <= 'z') p[0] = p[0] - 32;
		if (q[0] >= 'a' && q[0] <= 'z') q[0] = q[0] - 32;
		if (q[0] == p[0]) {
			++q;
		} else {
			int hasPrint = 0;
			for (int i = 0; i < length; ++i) {
				if (status[i] == p[0]) {
					hasPrint = 1;
					break;
				}
			}
			if (!hasPrint) {
				printf("%c", p[0]);
				status[length++] = p[0];
			}
		}
		++p;
	}

	return 0;
}
