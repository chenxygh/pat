/*
* @Author: cxy
* @Date:   2019-04-01 01:01:12
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-15 20:46:06
*/

#include <stdio.h>

struct stu {
	int score;
	int age;
	int id[10];
};

int main(int argc, char const *argv[])
{
	struct stu temp = {
		.score = 10,
		.age = 11,
		.id = {22}
	};
	printf("%d\n", temp.score);
	printf("%d\n", temp.age);
	printf("%d\n", temp.id[0]);

	return 0;
}
