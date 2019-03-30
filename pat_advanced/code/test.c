/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-30 21:19:20
*/
#include <stdio.h>
#include <memory.h>

typedef struct {
  int start = 0;
  int end = 0;
  int sum = 0;
  char str[10];
} MSS;

int main(int argc, char const *argv[])
{
	MSS thisSum = {1, 2, 3, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
	printf("%d\n", thisSum.start);
	printf("%d\n", thisSum.end);
	printf("%d\n", thisSum.sum);
	for (int i = 0; i < 10; ++i) printf("%d\n", thisSum.str[i]);

	printf("\n");

	memset(&thisSum, 0, sizeof(MSS));
	printf("%d\n", thisSum.start);
	printf("%d\n", thisSum.end);
	printf("%d\n", thisSum.sum);
	for (int i = 0; i < 10; ++i) printf("%d\n", thisSum.str[i]);

	return 0;
}
