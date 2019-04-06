/*
* @Author: cxy
* @Date:   2019-04-06 22:07:52
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-06 22:50:04
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	const char dict[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};

	char strA[101] = {'\0'};
	char strB[101] = {'\0'};
	scanf ("%s%s", strA, strB);
	
	int aLen = strlen(strA);
	int bLen = strlen(strB);
	int maxLen = aLen > bLen? aLen: bLen;
	for (int i = 1, temp; i <= maxLen; ++i) {
		int digitA = i <= aLen? strA[aLen - i] - '0': 0;
		int digitB = i <= bLen? strB[bLen - i] - '0': 0;
		strB[maxLen - i] = i % 2? dict[(digitA + digitB) % 13]: dict[(temp = digitB - digitA) < 0? temp += 10: temp];
	}

	printf("%s\n", strB);

	return 0;
}
