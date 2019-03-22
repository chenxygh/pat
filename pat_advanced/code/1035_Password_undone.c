/*
* @Author: cxy
* @Date:   2019-03-21 23:02:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-22 00:01:24
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	char* *info = (char* *)calloc(cnt, sizeof(char *));
	while (cnt--) {
		char user[11] = {};
		char password[11] = {};
		scanf("%s%s", user, password);
		bool modified = false;
		for (int i = 0; password[i] != '\0'; ++i) {
			if (password[i] == '1') {
				password = '@';
				modified = true;
			} else if (password[i] == '0') {
				password = '%';
				modified = true;
			} else if (password[i] == 'l') {
				password = 'L';
				modified = true;
			} else if (password[i] == 'O') {
				password = 'o';
				modified = true;
			}
		}
		if (modified) {
			char *temp = (char *)calloc(22, sizeof(char));
			sprintf(temp, )
		}
	}

	return 0;
}
