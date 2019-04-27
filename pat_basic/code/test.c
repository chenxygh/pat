/*
* @Author: cxy
* @Date:   2019-04-01 01:01:12
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-26 23:28:22
*/

#include <stdio.h>

int findComplement(int num) {
    int temp = num;
    int assist = 1;
    temp >>= 1;
    while (temp) {
        assist = (assist << 1) | 1;
        printf("%d\n", assist);
        temp >>= 1;
        printf("%d\n", temp);
    }
    return (~num) & assist;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", findComplement(5));

	return 0;
}
