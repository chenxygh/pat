/*
* @Author: cxy
* @Date:   2019-04-09 14:51:59
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-09 15:47:07
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char radices[21] = {'\0'};
	scanf("%s", radices);
	getchar();
	int length = strlen(radices);

	char strA[21] = {'\0'};
	char strB[21] = {'\0'};
	scanf("%s%s", strA, strB);	
	int aLen = strlen(strA);
	int bLen = strlen(strB);

	char res[22] = {'\0'};
	res[0] = '1';
	int carry = 0;
	for (int i = 0; i < length; ++i) {
		int radix = radices[length - i - 1] - '0';
		radix = !radix? 10: radix;
		int operandA = aLen - i - 1 >= 0? strA[aLen - i - 1] - '0': 0;
		int operandB = bLen - i - 1 >= 0? strB[bLen - i - 1] - '0': 0;
		int sum = operandA + operandB + carry;
		res[length - i] = sum % radix + '0';
		carry = sum / radix;
	}

	char *p = res;
	if (!carry) {
		++p;
		while (p[0] == '0') ++p;
	}
	if (p[0] == '\0') printf("0\n");
	else printf("%s\n", p);

	return 0;
}
