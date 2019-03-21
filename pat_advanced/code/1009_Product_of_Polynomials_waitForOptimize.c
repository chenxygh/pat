/*
* @Author: cxy
* @Date:   2019-03-21 19:42:22
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-21 20:21:28
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
	int expo = 0;
	float coef = 0.0;
	struct LNode *next;
}LNode, *LList;

int main(int argc, char const *argv[])
{
	LList L1 = (LList)malloc(sizeof(LNode));
	L1->next = NULL;
	LNode *head = L1;
	LNode *rear = L1;

	int cnt = 0;
	scanf("%d", &cnt);
	while (cnt--) {// 获取第一个多项式，链表存储
		LList temp = (LList)malloc(sizeof(LNode));
		temp->next = NULL;
		scanf("%d%f", &(temp->expo), &(temp->coef));
		rear->next = temp;
		rear = temp;
	}

	float res[2001] = {0.0};// 结果多项式，数组存储，方便合并同指数项，牺牲空间
	scanf("%d", &cnt);
	while (cnt--) {// 获取第二个多项式，并同时实施乘法操作
		int expo = 0;
		float coef = 0.0;
		scanf("%d%f", &expo, &coef);

		LNode *p = L1->next;
		for (; p; res[expo + p->expo] += coef * p->coef, p = p->next);// 乘法，存储到 res[] 中
	}

	int length = 0;
	for (int i = 2000; i >= 0; --i) if (res[i] != 0) ++length;
	printf("%d", length);

	for (int i = 2000; i >= 0; --i) if (res[i] != 0) printf(" %d %.1f", i, res[i]);

	return 0;
}
