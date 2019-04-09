/*
* @Author: cxy
* @Date:   2019-04-09 16:02:24
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-09 16:10:09
*/

#include <stdio.h>

typedef struct {
	int ID;
	int score;
} member;

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	member winner, loser;
	winner.score = 0;
	loser.score = 20000;
	while (cnt--) {
		member temp;
		int x, y;
		scanf("%d%d%d", &(temp.ID), &x, &y);
		temp.score = x * x + y * y;
		winner = temp.score > winner.score? temp: winner;
		loser = temp.score < loser.score? temp: loser;
	}

	printf("%04d %04d\n", loser.ID, winner.ID);

	return 0;
}
