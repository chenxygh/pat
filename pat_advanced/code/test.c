/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-31 00:40:48
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  int stackSize = 0;
  int totalNums = 0;
  int waitForChecked = 0;
  scanf("%d%d%d", &stackSize, &totalNums, &waitForChecked);
  int status[waitForChecked] = {0};
  
  int *stack = (int *)calloc(stackSize + 1, sizeof(int));
  int top = 0;
  stack[top] = 0;
  for (int i = 0; i < waitForChecked; ++i) {
  	top = 0;
  	int cnt = 1;
    for (int j = 1; j <= totalNums; ++j) {
    	int temp = 0;
    	scanf("%d", &temp);
    	while (stack[top] != temp && cnt <= totalNums) {
    		// if (stack[top] > temp) {
    		// 	status[i] = 0;
    		// 	break;
    		// }
    		stack[++top] = cnt;
    		++cnt;
    	}
    	if (stack[top] != temp && cnt > totalNums) {
    		status[i] = 0;
    		break;
    	}
    	--top;
    }
    if (!top) {
    	status[i] = 1;
    }
  }
  
  for (int i = 0; i < waitForChecked; ++i) printf("%s\n", status[i]? "YES": "NO");
  
  return 0;
}
