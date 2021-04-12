#include <stdio.h>
#include <stdlib.h>

/* define a linklist node */
typedef struct Link{
	int val;
	struct Link *next;
}link;

/* init linklist */
link *init_link(void)
{
	link *head = (link *)malloc(sizeof(link));
	head->val = 0;
	link *tmp = head;

	for (int i = 0; i < 20; i++) {
		link *ptr = (link *)malloc(sizeof(link));
		ptr->val = i;
		ptr->next = NULL;

		tmp->next = ptr;
		tmp = tmp->next;
	}

	return head;
}

/* 遍历单链表 */
void traverse_linklist(link *head)
{
	link *tmp = head->next;

	for (tmp;;tmp = tmp->next) {
		if (tmp->next) 
			printf("%d\n", tmp->val);
		else {
			printf("%d\n", tmp->val);
			break;	/* 到达链表末尾 */
		}
	}
}

int get_index(link *head, int index)
{
	link *node = head->next;

	if (index <= 20) {
		for (int i = 1; i != index; i++)
			node = node->next;

		return node->val;
	} else 
		return -1;
}

int main(void)
{
	link *head;

	/* 初始化单链表 */
	head = init_link();

	/* 遍历单链表 */
	traverse_linklist(head);

	/* 获取链表中第index个节点的值，若index无效则返回-1 */
	int index_val = get_index(head, 15);
	printf("%d\n", index_val);

	return 0;
}
