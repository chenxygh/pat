/*
* @Author: cxy
* @Date:   2019-05-15 09:22:03
* @Last Modified by:   cxy
* @Last Modified time: 2019-05-15 10:52:03
*/

#include <stdio.h>

// 字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
// 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
// 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

/**
 * 分析：
 * 在 1 满足时，满足 2 ，得到基本正确模式 - version 1
 * 根据 version 1 和 条件 3 ，可以推出更多的正确模式
 *
 * 综合递推， a * b == c ，a b c 是对应位置的A的个数
 * P T 唯一，且必须有，且 P 前，T 后
 *
 * 0. PAT 中
 * 1. P T 唯一，且 P 前 T 后
 * 2. P T 间的 A 不为空
 * 3. left * mid == right
 */

bool includes(const char dict[], int length, char value) {
	for (int i = 0; i < length; ++i) {
		if (dict[i] == value) return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int cnt = 0;
	scanf("%d", &cnt);

	while (cnt--) {
		getchar();
		char str[101] = {'\0'};
		scanf("%[^\n]s", str);

		int left = 0, mid = 0, right = 0;
		bool status = true, hasP = false, hasT = false;
		for (int i = 0; str[i] != '\0'; ++i) {
			// PAT 外，不符合
			if (!includes("PAT", 3, str[i])) {
				status = false;
				break;
			}

			switch (str[i]) {
				case 'P':
					if (hasP) {
						status = false;
					} else {
						hasP = true;
					}
					break;
				case 'A':
					if (!hasP) {
						++left;
					} else if (!hasT) {
						++mid;
					} else {
						++right;
					}
					break;
				case 'T':
					if (!hasP || hasT) {
						status = false;
					} else {
						hasT = true;
					}
					break;
			}

			if (!status) {
				break;
			}
		}
		if (!hasP || !hasT || !mid  || left * mid != right) {
			status = false;
		}
		status? printf("YES\n"): printf("NO\n");
	}

	return 0;
}
