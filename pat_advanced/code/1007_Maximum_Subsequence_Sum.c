/*
* @Author: cxy
* @Date:   2019-03-16 19:52:27
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-17 15:14:40
*/

#include <stdio.h>

// 子序列相关数据结构
typedef struct {
	int sum = 0;
	int first = 0;
	int last = 0;
} MSS;

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	MSS active;// 当前活动的子序列
	MSS max;// 最终结果子序列
	int head = 0;// 总序列头
	int rear = 0;// 总序列尾
	char isFirst = 1;// 判总序列头标志
	char hasNonNegative = 0;// 判非负数标志

	while (cnt--) {
		int temp = 0;
		scanf("%d", &temp);
		if (!hasNonNegative && temp >= 0) hasNonNegative = 1;// 有一个非负数，hasNonNegative 为真
		if (isFirst) {head = temp; isFirst = 0;}// 存储总序列头
		rear = temp;// 更新总序列尾
		active.sum += temp;// 更新活动序列和
		if (active.sum <= 0) {// 在活动序列和 <= 0 时，丢弃，对后续序列和无益处
			active.sum = 0;
			active.first = 0;
			active.last = 0;
			continue;
		}
		// 此时，活动序列和 > 0， 对后续序列和有益处
		if (!active.first) active.first = temp;// 存储活动序列和
		active.last = temp;// 更新活动序列尾
		if (active.sum > max.sum) {// 如果活动序列和 > 大于结果序列和，更新结果
			max.sum = active.sum;
			max.first = active.first;
			max.last = active.last;
		}
	}
	if (!hasNonNegative) {// 如果全为负数，取总序列头尾，结果序列和为 0
		max.first = head;
		max.last = rear;
	}

	printf("%d %d %d", max.sum, max.first, max.last);

	return 0;
}
