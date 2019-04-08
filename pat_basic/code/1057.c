/*
* @Author: cxy
* @Date:   2019-04-08 22:03:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-08 22:21:07
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char str[100001] = {'\0'};
	scanf("%[^\n]s", str);

	char *p = str;
	int sum = 0;
	while (p[0] != '\0') {
		if (p[0] >= 'A' && p[0] <= 'Z') {
			sum += p[0] + 26 - 'Z';
		} else if (p[0] >= 'a' && p[0] <= 'z') {
			sum += p[0] + 26 - 'z';
		}
		++p;
	}

	int oneCount = 0;
	int zeroCount = 0;
	while (sum) {
		sum & 1? ++oneCount: ++zeroCount;
		sum >>= 1;
	}
	// zeroCount += (int)(!zeroCount && !oneCount);

	printf("%d %d\n", zeroCount, oneCount);

	return 0;
}
