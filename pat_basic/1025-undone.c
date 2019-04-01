/*
* @Author: cxy
* @Date:   2019-04-01 22:14:14
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-01 22:45:03
*/

#include <stdio.h>

typedef struct Node {
	int Address;
	int Data;
	int Next;
} Node;

void swap (Node *a, Node *b) {
	Node temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{
	int start = 0;
	int cnt = 0;
	int reverseCnt = 0;
	scanf("%d%d%d", &start, &cnt, &reverseCnt);

	// TODO: 获取链表
	Node list[cnt];
	for (int i = 0; i < cnt; ++i) {
		scanf("%d%d%d", &(list[i].Address), &(list[i].Data), &(list[i].Next));
	}

	// TODO: 整理链表
	int i = 0;
	for (; list[i].Address != start && i < cnt; ++i);
	swap(list + i, list);
	for (int i = 0; i < cnt - 1; ++i) {
		int j = i + 1;
		for (; list[j].Address != list[i].Next && j < cnt; ++j);
		if (j == i + 1) continue;
		swap(list + j, list + i + 1);
	}

	// TODO: 排序链表
	for (int i = 0, j = reverseCnt - 1; i < j; ++i, --j) swap(list + i, list + j);
	reverseCnt = reverseCnt == cnt? reverseCnt - 1: reverseCnt;
	for (int i = 0; i < reverseCnt; ++i) {
		list[i].Next = list[i + 1].Address;
	}
	list[cnt - 1].Next = -1;

	// TODO: print
	for (int i = 0; i < cnt - 1; ++i) printf("%05d %d %05d\n", list[i].Address, list[i].Data, list[i].Next);
	printf("%05d %d %d\n", list[cnt - 1].Address, list[cnt - 1].Data, list[cnt - 1].Next);

	return 0;
}
