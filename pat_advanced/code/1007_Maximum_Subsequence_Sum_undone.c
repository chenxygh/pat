/*
* @Author: cxy
* @Date:   2019-03-16 19:52:27
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-16 20:21:53
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	int thisSum = 0;
	int maxSum = 0;
	int firstNum = 0;
	int lastNum = 0;
	int thisFirst = 0;
	int thisLast = 0;
	int head = 0;
	int rear = 0;
	int isFirst = 1;

	while (cnt--) {
		int temp = 0;
		scanf("%d", &temp);
		if (isFirst) {head = temp; isFirst = 0;}
		rear = temp;
		thisSum += temp;
		if (thisSum <= 0) {
			thisSum = 0;
			thisFirst = 0;
			thisLast = 0;
			continue;
		}
		if (!thisFirst) thisFirst = temp;
		thisLast = temp;
		if (thisSum > maxSum) {
			maxSum = thisSum;
			firstNum = thisFirst;
			lastNum = thisLast;
		}
	}
	if (!maxSum) {
		firstNum = head;
		lastNum = rear;
	}

	printf("%d %d %d", maxSum, firstNum, lastNum);

	return 0;
}
