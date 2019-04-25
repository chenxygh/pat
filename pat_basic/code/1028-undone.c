/*
* @Author: cxy
* @Date:   2019-04-25 15:56:32
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-25 20:49:54
*/

#include <stdio.h>
#include <string.h>

int toInt(const char str[], int strSize) {
	int num = 0;
	while (str[0] != '\0') {
		num = num * 10 + str[0] - '0';
		++str;
	}
	return num;
}

int getAge(int year, int month, int day, int TODAY) {
	int age = 2014 - year;
	if (age < 0) return -1;
	if (age == 0) {
		if (month > 9) return -1;
		if ()
	}
	if (day <= 6) return age;
	return age - 1;
}

int isValid (char str[]) {
	// TODAY: 2014 年 9 月 6 日
	char *p = str;
	while (p[0] != ' ') ++p;
	p[0] = '\0';
	++p;
	int year = toInt(p);

	while (p[0] != '/') ++p;
	p[0] = '\0';
	++p;
	int month = toInt(p);

	while (p[0] != '/') ++p;
	p[0] = '\0';
	++p;
	int day = toInt(p);

	int age = getAge(year, month, day, 20140906);
}

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int valid = 0;
	char oldest[17] = {'\0'};
	char youngest = {'\0'};
	while (cnt--) {
		int str[17] = {'\0'};
		getchar();
		scanf("%[^\n]s", str);
		isValid(str);
	}

	return 0;
}
