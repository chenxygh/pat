/*
* @Author: cxy
* @Date:   2019-04-01 01:01:12
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-15 23:07:50
*/

#include <stdio.h>

int isLeapYear (int year) {
	return !(year % 400) || (!(year % 4) && year % 100);
}

int main(int argc, char const *argv[])
{
	const int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int dateA = 0;
	int dateB = 0;
	while (scanf("%d%d", &dateA, &dateB) != EOF) {
		int operandA = dateA > dateB? dateA: dateB;
		int operandB = dateA < dateB? dateA: dateB;

		int yearA = operandA / 10000;
		int yearB = operandB / 10000;
		int days = 0;
		for (int i = yearB; yearA >= i; ++i) days += isLeapYear(i)? 366: 365;

		int monthA = operandA / 100 % 100;
		int monthB = operandB / 100 % 100;
		for (int i = 1; i < monthB; ++i) {
			days -= month[i - 1];
			if (i == 2 && isLeapYear(yearB)) --days;
		}
		for (int i = 12; i > monthA; --i) {
			days -= month[i - 1];
			if (i == 2 && isLeapYear(yearA)) --days;
		}

		int temp = monthA == 2 && isLeapYear(yearA)? 29: month[monthA - 1];
		days = days - (operandB % 100 - 1);
		days = days - (temp - operandA % 100);

		printf("%d\n", days);
	}

	return 0;
}
