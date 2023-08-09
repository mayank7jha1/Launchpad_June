#include<bits/stdc++.h>
using namespace std;
const int N = 0;


class ListNode {
public:
	int val;
	ListNode *next;

	ListNode() {
		val = 0;
		next = NULL;
	}

	ListNode(int x) {
		val = x;
		next = NULL;
	}

	ListNode(int x, ListNode* n1) {
		val = x;
		next = n1;
	}

	// ListNode() : val(0), next(nullptr) {}
	// ListNode(int x) : val(x), next(nullptr) {}
	// ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void InsertAtHead(ListNode* &head, int value) {
	ListNode* n = new ListNode(value);
	n->next = head;
	head = n;
}

class Solution {
public:
	ListNode* midPoint3(ListNode* head) {
		ListNode* slow = head;
		ListNode* fast = head;

		while (fast != NULL and fast->next != NULL) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}


	void ReverseLL(ListNode* &head) {
		ListNode* current = head;
		ListNode* prev = NULL;

		while (current != NULL) {
			ListNode* n = current->next;
			current->next = prev;
			prev = current;
			current = n;
		}

		head = prev;
	}

	void reorderList(ListNode* &head) {
		ListNode* m = midPoint3(head);
		ListNode* h1 = m->next;
		ListNode* h = head;
		m->next = NULL;
		ReverseLL(h1);

		ListNode *x, *y;

		while (h1 != NULL) {
			x = h->next;
			y = h1->next;

			h->next = h1;
			h = x;
			h1->next = h;
			h1 = y;
		}
	}
};


void Print(ListNode* head) {
	while (head != NULL) {
		cout << head->val << " --> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}


int main() {
	Solution obj;
	int n;
	cin >> n;
	ListNode* head = NULL;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	obj.reorderList(head);
	Print(head);
}