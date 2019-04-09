/*
* @Author: cxy
* @Date:   2019-04-09 16:19:54
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-09 17:23:03
*/

#include <stdio.h>

int isLetter (char c) {
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int isHour (char c) {
	return (c >= 'A' && c <= 'N') || (c >= '0' && c <= '9');
}

int isDay (char c) {
	return c >= 'A' && c <= 'G';
}

int main(int argc, char const *argv[])
{
	const char DAY[][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

	char str[4][61];
	scanf("%s%s%s%s", str[0], str[1], str[2], str[3]);

	char *p = str[0];
	char *q = str[1];
	char findDay = 0;
	int day = 0;
	int hour = 0;
	for (; p[0] != '\0' && q[0] != '\0'; ++p, ++q) {
		// TODO: 找天
		if (!findDay && p[0] == q[0] && isDay(p[0])) {
			findDay = 1;
			day = (p[0] - 'G' + 7) % 7;
			continue;
		}

		// TODO: 找小时
		if (findDay && p[0] == q[0] && isHour(p[0])) {
			hour = p[0] >= '0' && p[0] <= '9'? p[0] - '0': p[0] - 'N' + 23;
			break;
		}
	}

	int minute = 0;
	for (p = str[2], q = str[3]; p[0] != '\0' && q[0] != '\0' && !(p[0] == q[0] && isLetter(p[0])); ++p, ++q, ++minute);

	printf("%s %02d:%02d\n", DAY[day], hour, minute);

	return 0;
}
