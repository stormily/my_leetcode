// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode *cur, *prev, *tmp;
	if (!head)
		return NULL;
	if (!head->next)
		return head;

	cur = head;
	prev = head;

	while (cur && cur->next) {
		tmp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = tmp;

		if (prev == head)
			prev->next = NULL;
	}
	cur->next = prev;

	return cur;
}


int main() {
	struct ListNode *head;
	struct ListNode nodes[3] = {
		{0, NULL},
		{1, NULL},
		{2, NULL}
	};

	nodes[0].next = nodes + 1;
	nodes[1].next = nodes + 2;
	nodes[2].next = NULL;
	head = reverseList(nodes);
	return 0;
}