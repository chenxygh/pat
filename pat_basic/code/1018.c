/*
* @Author: cxy
* @Date:   2019-04-25 14:57:28
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-25 15:44:41
*/

#include <stdio.h>

typedef struct {
	int pos[3];
	int total;
} gesture;

typedef struct {
	gesture win;
	int tie;
	int lose;
} member;

int indexOf (const char dict[], char value) {
	int i = 0;
	for (; dict[i] != value && dict[i] != '\0'; ++i);
	return i;
}

int maxGesturePos (int pos[], int posSize) {
	int max = 0;
	int maxPos = 0;
	for (int i = 0; i < posSize; ++i) {
		if (pos[i] >= max) {
			max = pos[i];
			maxPos = i;
		}
	}

	return maxPos;
}

int main(int argc, char const *argv[])
{
	const char dict[] = "JCB";

	int cnt = 0;
	scanf("%d", &cnt);

	member alpha = {{{0, 0, 0}, 0}, 0, 0}, bravo = {{{0, 0, 0}, 0}, 0, 0};
	while (cnt--) {
		char str[4] = {'\0'};
		getchar();
		scanf("%[^\n]s", str);
		int posA = indexOf(dict, str[0]);
		int posB = indexOf(dict, str[2]);
		if (posA == posB) {
			++alpha.tie;
			++bravo.tie;
			continue;
		}
		if ((posA > posB && posA - posB == 1) || (posB > posA && posB - posA >= 2)) {
			++alpha.win.total;
			++alpha.win.pos[posA];
			++bravo.lose;
			continue;
		}
		++bravo.win.total;
		++bravo.win.pos[posB];
		++alpha.lose;
	}	

	printf("%d %d %d\n", alpha.win.total, alpha.tie, alpha.lose);
	printf("%d %d %d\n", bravo.win.total, bravo.tie, bravo.lose);
	printf("%c %c\n", dict[maxGesturePos(alpha.win.pos, 3)], dict[maxGesturePos(bravo.win.pos, 3)]);

	return 0;
}
