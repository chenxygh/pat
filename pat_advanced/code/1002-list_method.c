/*
* @Author: cxy
* @Date:   2019-02-25 21:52:56
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-15 23:57:55
*/

/**
 * 2019-03-15 23:13:12
 * re-done
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
	int expo;
	float coef;
	struct LNode *next;
}LNode, *LList;

int attachNode (LNode **rear, int expo, float coef) {
	if (!coef) return 0;
	LList temp = (LNode *)malloc(sizeof(LNode));
	temp->next = NULL;
	temp->expo = expo;
	temp->coef = coef;
	(*rear)->next = temp;
	*rear = temp;
	return 1;
}

LList getPoly () {
	LList L = (LNode *)malloc(sizeof(LNode));
	L->next = NULL;
	LList head = L;
	LNode *rear = L;
	int cnt = 0;
	scanf("%d", &cnt);
	while (cnt--) {
		int expo = 0;
		float coef = 0.0;
		scanf("%d%f", &expo, &coef);
		attachNode(&rear, expo, coef);
	}

	L = head->next;
	free(head);
	return L;
}

LList addPoly(LList L1, LList L2, int *resLength) {
	LList L = (LNode *)malloc(sizeof(LNode));
	L->next = NULL;
	LList head = L;
	LNode *rear = L;

	while (L1 && L2) {
		if (L1->expo > L2->expo) {
			(*resLength) += attachNode(&rear, L1->expo, L1->coef);
			L1 = L1->next;
		} else if (L1->expo < L2->expo) {
			(*resLength) += attachNode(&rear, L2->expo, L2->coef);
			L2 = L2->next;
		} else {
			(*resLength) += attachNode(&rear, L1->expo, L1->coef + L2->coef);
			L1 = L1->next;
			L2 = L2->next;
		}
	}

	LList temp = L1? L1: L2;
	for (; temp; (*resLength) += attachNode(&rear, temp->expo, temp->coef), temp = temp->next);

	L = head->next;
	free(head);
	return L;
}

void Print (LList L) {
	for (; L; printf(" %d %.1f", L->expo, L->coef), L = L->next);
}

int main(int argc, char const *argv[])
{
	// TODO: 获取两个多项式
	LList L1 = getPoly();
	LList L2 = getPoly();
	
	// TODO: 相加
	int resLength = 0;
	LList L3 = addPoly(L1, L2, &resLength);

	// TODO: 输出
	printf("%d", resLength);
	Print(L3);
	return 0;
}
