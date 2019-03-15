/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-15 12:17:07
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int arr[] = {0, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 0, 11, 12, 13};
	int length = 0;
	for (int i = 0; i < 15; arr[i] != 0? arr[length++] = arr[i++]: ++i);
	while (length--) printf("%d\n", arr[length]);
	return 0;
}
