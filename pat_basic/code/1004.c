#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[11];
	char number[11];
	int score;
}Student;

void copy (Student *temp, Student *info) {
	strcpy(temp->name, info->name);
	strcpy(temp->number, info->number);
	temp->score = info->score;
}

int main(int argc, char const *argv[])
{
	Student *max = (Student *)calloc(1, sizeof(Student));
	Student *min = (Student *)calloc(1, sizeof(Student));

	int n = 0;
	scanf("%d", &n);
	int cnt = n;
	
	while (cnt--) {
		Student *info = (Student *)calloc(1, sizeof(Student));

		getchar();// 吸收换行符
		scanf("%s%s%d", info->name, info->number, &(info->score));

		// 第一次, 给 max 和 min 赋值
		if (cnt == n -1) {
			copy(max, info);
			copy(min, info);
		}

		if (info->score > max->score) {
			copy(max, info);
		}
		if (info->score < min->score) {
			copy(min, info);
		}

		free(info);
	}

	printf("%s %s\n", max->name, max->number);
	printf("%s %s\n", min->name, min->number);

	return 0;
}
