/*
* @Author: cxy
* @Date:   2019-05-16 10:19:47
* @Last Modified by:   cxy
* @Last Modified time: 2019-05-16 10:33:17
*/

#include <stdio.h>

void multiPrint(int num, int count) {
	for (int i = 0; i < count; ++i) printf("%d", num);
}

int main(int argc, char const *argv[])
{
	int cnt[10] = {0};
	for (int i = 0; i < 10; ++i) {
		scanf("%d", cnt + i);
	}

	int index = 0;
	if (cnt[0]) {
		++index;
		while (!cnt[index]) ++index;
		printf("%d", index);
		multiPrint(0, cnt[0]);
		multiPrint(index, cnt[index] - 1);
	}

	++index;
	for (int i = index; i < 10; ++i) {
		if (cnt[i]) multiPrint(i, cnt[i]);
	}

	return 0;
}
