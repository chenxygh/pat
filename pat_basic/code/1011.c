/*
* @Author: cxy
* @Date:   2019-03-31 22:08:56
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 22:13:09
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d",&cnt);
	bool status[cnt] = {0};

	for (int i = 0; i < cnt; ++i) {
		long int a = 0;
		long int b = 0;
		long int c = 0;
		scanf("%ld%ld%ld", &a, &b, &c);
		status[i] = a + b > c;
	}

	for (int i = 0; i < cnt; ++i) printf("Case #%d: %s\n", i + 1, status[i]? "true": "false");

	return 0;
}
