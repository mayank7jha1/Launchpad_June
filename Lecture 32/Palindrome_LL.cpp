/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

	ListNode* midPoint3(ListNode* head) {
		ListNode* slow = head;
		ListNode* fast = head->next;

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

	bool isPalindrome(ListNode* head) {
		ListNode* m = midPoint3(head);
		ListNode* h = head;
		ListNode* h1 = m->next;
		m->next = NULL;
		ReverseLL(h1);

		while (h != NULL and h1 != NULL) {
			if (h1->val != h->val) {
				return false;
			}

			h = h->next;
			h1 = h1->next;
		}
		return true;
	}
};