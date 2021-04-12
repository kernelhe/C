#include <stdio.h>
#include <stdlib.h>

typedef struct Link{
	int val;
	struct Link *next;
}link;

link *init_link(unsigned cnt)
{
	link *p = (link *)malloc(sizeof(link));
	p->val = 0;
	link *tmp = p;

	for (int i = 0; i < cnt; i++) {
		link *ptr = (link *)malloc(sizeof(link));
		ptr->val = i;
		ptr->next = NULL;

		tmp->next = ptr;
		tmp = tmp->next;
	}

	return p;
}

int main(void)
{
	unsigned cnt = 8;
	link *head, *tmp;

	head = init_link(cnt);
	tmp = head->next;

	/* 遍历单链表 */
	for (tmp;; tmp = tmp->next) {
		if (tmp->next)
			printf("%d\n", tmp->val);
		else {
			printf("%d\n", tmp->val);
			break;
		}
	}

	return 0;
}
