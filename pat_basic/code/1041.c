/*
* @Author: cxy
* @Date:   2019-04-27 20:23:30
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-27 20:37:58
*/

#include <stdio.h>
#include <string.h>

typedef struct {
	char examRegistrationNumber[17];
	int examNumber;
} info;

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	info dict[cnt + 1] = {{'\0'}, 0};
	while (cnt--) {
		getchar();
		char temp[17] = {'\0'};
		int tnumber = 0;
		int enumber = 0;
		scanf("%s%d%d", &temp, &tnumber, &enumber);
		strcpy(dict[tnumber].examRegistrationNumber, temp);
		dict[tnumber].examNumber = enumber;
	}

	scanf("%d", &cnt);
	while (cnt--) {
		int temp = 0;
		scanf("%d", &temp);
		printf("%s %d\n", dict[temp].examRegistrationNumber, dict[temp].examNumber);
	}

	return 0;
}
