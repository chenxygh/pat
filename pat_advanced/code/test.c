/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-28 17:25:39
*/
#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int cin = 0;
    int add = 1;
    int n = digitsSize;
    while (n--) {
        int sum = digits[n] + cin + add;
        digits[n] = sum % 10;
        cin = sum / 10;
        if (add) add = 0;
    }
    *returnSize = digitsSize;
    if (cin) {
    	*returnSize = digitsSize + 1;
        int newLen = *returnSize;
        printf("newLen: %d\n", newLen);
        int *p = (int *)realloc(digits, newLen * sizeof(int));
        while (!p) p = (int *)realloc(digits, newLen * sizeof(int));
        printf("p's address: %p\n", p);
        printf("digits's address: %p\n", digits);
        // TODO: insert into new-digits's head
        // while (--newLen) p[newLen] = p[newLen - 1];
        // p[0] = cin;
        // for (int i = 0; i < newLen; ++i) printf("%d\n", p[i]);
        // exit(0);
        // return p;
    }
    
    return digits;
}

int main(int argc, char const *argv[])
{
	int *digits = (int *)malloc(3 * sizeof(int));
	digits[0] = 0;
	digits[1] = 1;
	digits[2] = 2;
	// int digits[] = {9, 9, 9};
	int digitsSize = 3;
	int returnSize = 20;
	// int *p = plusOne(digits, digitsSize, &returnSize);
	int *p = (int *)realloc(digits, 20 * sizeof(int));
	for (int i = 0; i < returnSize; ++i) printf("%d\n", p[i]);

	return 0;
}
