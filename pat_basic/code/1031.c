/*
* @Author: cxy
* @Date:   2019-04-27 19:16:13
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-27 19:37:22
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	const int power[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	const char dict[] = "10X98765432";
	int cnt = 0;
	scanf("%d", &cnt);

	char hasInvalid = 0;
	while (cnt--) {
		char str[19] = {'\0'};
		getchar();
		scanf("%[^\n]s", str);

		int sum = 0;
		int i = 0;
		for (; str[i + 1] != '\0'; ++i) {
			if (str[i] >= '0' && str[i] <= '9') {
				sum += power[i] * (str[i] - '0');
				continue;
			}
			break;
		}

		if (str[i + 1] != '\0' || dict[sum % 11] != str[17]) {
			hasInvalid = 1;
			printf("%s\n", str);
		}
	}

	if (!hasInvalid) printf("All passed\n");

	return 0;
}
