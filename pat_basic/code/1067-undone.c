/*
* @Author: cxy
* @Date:   2019-04-26 21:36:47
* @Last Modified by:   cxy
* @Last Modified time: 2019-05-06 13:29:26
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[100] = {'\0'};
	int cnt = 0;
	scanf("%s%d", str, &cnt);

	int wrongCount = 0;
	while (1) {
		char temp[100] = {'\0'};
		getchar();
		scanf("%[^\n]s", temp);
		if (temp[0] == '#') {
			break;
		}

		if (!strcmp(temp, str)) {
			printf("Welcome in\n");
			break;
		}

		printf("Wrong password: %s\n", temp);
		++wrongCount;
		if (wrongCount >= cnt) {
			printf("Account locked\n");
			break;
		}
	}

	return 0;
}
