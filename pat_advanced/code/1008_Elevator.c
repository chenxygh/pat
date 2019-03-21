/*
* @Author: cxy
* @Date:   2019-03-21 19:24:12
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-21 19:33:08
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d",&cnt);

	int preFloor = 0;
	int totalTime = 0;
	while (cnt--) {
		int floor = 0;
		scanf("%d", &floor);
		int distance = floor - preFloor;
		preFloor = floor;
		int interval = (distance > 0? distance * 6: distance < 0? -distance * 4: 0) + 5;
		totalTime += interval;
	}

	printf("%d", totalTime);

	return 0;
}
