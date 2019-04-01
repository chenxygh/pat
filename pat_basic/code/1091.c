/*
* @Author: cxy
* @Date:   2019-04-01 15:36:27
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 15:55:11
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);
	char res[cnt][10];
	memset(res, 0, sizeof(char) * cnt * 10);

	for (int i = 0; i < cnt; ++i) {
		int num = 0;
		scanf("%d", &num);
		int j = 1;
		for (; j < 10; ++j) {
			int multi = j * num * num;
			int temp = multi;
			int src = num;
			for (; src && temp && (src % 10 == temp % 10); src /= 10, temp /= 10);
			if (!src) {
				sprintf(res[i], "%d %d", j, multi);
				break;
			}
		}
		if (j >= 10) sprintf(res[i], "%s", "No");
	}

	for (int i = 0; i < cnt; ++i) printf("%s\n", res[i]);

	return 0;
}
