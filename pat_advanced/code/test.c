/*
* @Author: cxy
* @Date:   2019-02-25 20:53:17
* @Last Modified by:   cxy
* @Last Modified time: 2019-03-29 23:55:19
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
    char val;
    struct LNode *next;
    struct LNode *pre;
} LNode;

bool isValid(char* s) {
    struct LNode *head = (struct LNode *)malloc(sizeof(struct LNode));
    head->next = NULL;
    head->pre = NULL;
    head->val = -1;
    struct LNode *top = head;
    
    while (s[0] != '\0') {
        if (s[0] == '(' || s[0] == '{' || s[0] == '[') {
            // push
            struct LNode *temp = (struct LNode *)malloc(sizeof(struct LNode));
            temp->val = s[0];
            temp->next = NULL;
            temp->pre = top;
            top->next = temp;
            top = temp;
            ++s;
            continue;
        }
        
        char right = top->val == '('? ')': top->val == '{'? '}': ']';
        if (right != s[0]) return false;
        
        // pop
        struct LNode *temp = top;
        top = top->pre;
        top->next = NULL;
        free(temp);
        ++s;
    }
    
    return top == head;
}

int main(int argc, char const *argv[])
{
	char s[] = "()[]{";
	printf("%d\n", isValid(s));

	return 0;
}
