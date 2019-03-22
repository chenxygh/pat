/*
* @Author: cxy
* @Date:   2019-03-21 23:44:11
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-22 13:48:57
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int *res = (int *)calloc(cnt, sizeof(int));
	int resLen = 0;
	while (cnt--) {
		int num = 0;
		scanf("%d", &num);
		char strNum[11] = {};
		sprintf(strNum, "%d", num);
		int length = strlen(strNum);
		
		double division = pow(10.0, (double)length / 2);

		// test
		res[resLen++] = (num % ((num / (int)(division + 0.5)) * (num % (int)(division + 0.5))));
		// printf("%d\n", (int)(division));
		// printf("%d\n", (num % ((num / (int)division) * (num % (int)division))));
		// exit(0);
	}
	for (int i = 0; i < resLen; ++i)
		if (res[i]) printf("NO\n");
		else printf("YES\n");

	return 0;
}
