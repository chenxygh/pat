/*
* @Author: cxy
* @Date:   2019-02-25 21:52:56
* @Last Modified by:   cxy
* @Last Modified time: 2019-02-25 23:53:07
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
	int expo;
	float coef;
	struct LNode *next;
}LNode, *List;

void Print(List L, int total) {
	List p = L;
	printf("%d", total);
	while (p) {
		printf(" %d %.1f", p->expo, p->coef);
		p = p->next;
	}
	// printf("\n");
}

void insertNode(LNode **rear, int expo, float coef) {
	LNode *temp = (LNode *)malloc(sizeof(LNode));
	temp->next = NULL;
	temp->expo = expo;
	temp->coef = coef;
	(*rear)->next = temp;
	*rear = temp;
}

List getPoly() {
	List L = (LNode *)malloc(sizeof(LNode));
	L->next = NULL;
	List head = L;
	List rear = head;

	int total = 0;
	scanf("%d", &total);

	while (total--) {
		int expo;
		float coef;
		scanf("%d%f", &expo, &coef);

		insertNode(&rear, expo, coef);
	}

	L = head->next;
	free(head);
	return L;
}

int main(int argc, char const *argv[])
{
	// 获取两个 polynomial
	List L1 = getPoly();
	List L2 = getPoly();
	List L = (LNode *)malloc(sizeof(LNode));
	L->next = NULL;
	List head = L;
	List rear = head;

	int cnt = 0;
	while (L1 && L2) {
		if ( L1->expo > L2->expo ) {
			insertNode(&rear, L1->expo, L1->coef);

			L1 = L1->next;
		} else if ( L1->expo < L2->expo ) {
			insertNode(&rear, L2->expo, L2->coef);

			L2 = L2->next;
		} else {
			float coef = L1->coef + L2->coef;
			if ( coef ) insertNode(&rear, L1->expo, coef);

			L1 = L1->next;
			L2 = L2->next;
		}
		cnt++;
	}

	List L3 = L1? L1: L2;
	while (L3) {
		insertNode(&rear, L3->expo, L3->coef);

		L3 = L3->next;
		cnt++;
	}

	Print(head->next, cnt);
	free(head);

	return 0;
}
