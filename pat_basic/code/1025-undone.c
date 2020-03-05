#include <stdio.h>

typedef struct Node {
	int Address;
	int Data;
	int Next;
} Node;

int main(int argc, char const *argv[])
{
	int s_addr = 0, n = 0, k = 0;
	scanf("%d%d%d", &s_addr, &n, &k);
	if (n <= 0) return 0;
	Node stack[n];
	Node nodes[n];

	for (int i = 0; i < n; ++i) {
		scanf("%d%d%d", &(stack[i].Address), &(stack[i].Data), &(stack[i].Next));
	}

	int length = k;
	int cnt = k - 1;
	for (int i = 0, find_addr = s_addr; i < n - 1; ++i) {
		int j = i;
		while (stack[j].Address != find_addr) ++j;
		if ((i + k))
		nodes[cnt] = stack[j];
	}

	int i = 0;
	for (; i + k - 1 < n; i += k) {
		int j = i;
		for (int w = i + k - 1; j < w; ++j, --w) {
			Node temp = nodes[j];
			nodes[j] = nodes[w];
			nodes[w] = temp;
			if (j > i) {nodes[j - 1].Next = nodes[j].Address;}
		}
		while (j < i + k) {nodes[j - 1].Next = nodes[j].Address; ++j;}
	}
	while (i < n) {nodes[i - 1].Next = nodes[i].Address; ++i;}
	nodes[n - 1].Next = -1;

	for (int i = 0; i < n - 1; ++i) {
		printf("%05d %d %05d\n", nodes[i].Address, nodes[i].Data, nodes[i].Next);
	}
	printf("%05d %d %d\n", nodes[n - 1].Address, nodes[n - 1].Data, nodes[n - 1].Next);

	return 0;
}
