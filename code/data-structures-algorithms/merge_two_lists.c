#include <stdio.h> 
#include <stdlib.h> 

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode *create_l1(void)
{
	struct ListNode *l1;
	
	struct ListNode *node11 = (struct ListNode *)malloc(sizeof(struct ListNode));
	l1 = node11;
	node11->val = 1;
	
	struct ListNode *node12 = (struct ListNode *)malloc(sizeof(struct ListNode));
	node11->next = node12;
	node12->val = 2;
	
	struct ListNode *node13 = (struct ListNode *)malloc(sizeof(struct ListNode));
	node12->next = node13;
	node13->val = 4;
	node13->next = NULL;
	
	return l1;
}

struct ListNode *create_l2(void)
{
	struct ListNode *l2;
	
	struct ListNode *node21 = (struct ListNode *)malloc(sizeof(struct ListNode));
	l2 = node21;
	node21->val = 0;
	
	struct ListNode *node22 = (struct ListNode *)malloc(sizeof(struct ListNode));
	node21->next = node22;
	node22->val = 0;
	
	struct ListNode *node23 = (struct ListNode *)malloc(sizeof(struct ListNode));
	node22->next = node23;
	node23->val = 3;
	node23->next = NULL;
	
	return l2; 
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){        
        if (l1->next == NULL && l2->next == NULL)  /* l1、l2都没有节点元素 */
                return l1;
                
        if (l1->next == NULL && l2->next != NULL)  /* l1没有节点元素 */
                return l2;
                
        if (l1->next != NULL && l2->next == NULL) /* l2没有节点元素 */
                return l1;
        
        /* ok，接下来可以判断l1和l2都有节点的情况 */
        struct ListNode *start, *end, *tmp, *curr;
        curr = l1;
        start = end = l2;
        while (curr->next != NULL && l2 != NULL) {
                if (l2->val < curr->val) {
                        while (end->next != NULL) {
                        	if (end->next->val < curr->val)
                        		end = end->next;
                        	else {
                        		l2 = end->next;
                        		break;
				}
                	}
                        end->next = curr;
                        l1 = start;
                } else {
                        tmp = l2;
                        l2 = l2->next;
                        while (tmp->val > curr->next->val) {
                        	curr = curr->next;
                        		
                        	if (curr->next == NULL)
                        		break;
			}
                        	
                        tmp->next = curr->next;
                        curr->next = tmp;
                        curr = curr->next;
                }
        }
        /* l1长度短于l2 */  
        if (!curr->next)
                curr->next = l2;
        
        return l1;
}

void traverse(struct ListNode *list)
{
	struct ListNode *curr = list;
	
	for (curr; curr->next != NULL; curr = curr->next)
		printf("%d\n", curr->val);
	printf("%d\n", curr->val);
}

int main(void)
{
	struct ListNode *l1 = create_l1();
	struct ListNode *l2 = create_l2();
	
	struct ListNode *node = mergeTwoLists(l1, l2);
	
	traverse(node);
	
	return 0;
}

