/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-30 21:23:02
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
	/**
	 * void *memset(void *s, int ch, size_t n);
	 * memset: 头文件: memory 或者 string
	 * 注意，ch 只取后八位，每一次也是赋值 1 BYTE
	 * 所以，一般的，对 int 型，ch 为 0 或者 1 这种，后八位一致的，会有好的重置效果
	 * 当然，对于字符数组，无所谓了
	 * 小心字符常量，是无法修改的
	 *
	 * 总之，记住，按字节重置
	 */
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
