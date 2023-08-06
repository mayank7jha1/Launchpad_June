#include<iostream>
using  namespace std;

class node {
public:
	int data;
	node* next;//Self Referencing Pointer

	//Constructor to Initiliase these values;

	node(int inputdata) {
		data = inputdata;
		next = NULL;
	}
};

void InsertAtHead(node* &head, int value) {
	node* n = new node(value);
	n->next = head;
	head = n;
}


void Print(node* head) {
	while (head != NULL) {
		cout << head->data << " --> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}

void Print2(node* &head) {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " --> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int Length(node* head) {
	int count = 0;
	while (head != NULL) {//i<n
		count++;
		head = head->next;//i++
	}
	return count;
}

int midPoint(node* head) {
	int mid = Length(head) / 2;//5/2=2

	while (mid > 0) {
		head = head->next;
		mid--;
	}

	return head->data;
}

node* midPoint1(node* head) {
	int mid = Length(head) / 2;//5/2=2

	while (mid > 0) {
		head = head->next;
		mid--;
	}

	return head;
}

//For Second Mid Point in Even LL.
int midPoint3(node* head) {
	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
	}

	return slow->data;
}


//For First Mid Point in Even LL.
int midPoint4(node* head) {
	node* slow = head;
	node* fast = head->next;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
	}

	return slow->data;
}

//Linear Iterative Search
bool SearchIterative(node* head, int key) {

	while (head != NULL) {
		if (head->data == key) {
			return true;
		}
		head = head->next;
	}

	return false;
}

//Linear Recursive Search
bool SearchRecursive(node* head, int key) {

	if (head == NULL) {
		return false;
	}

	if (head->data == key) {
		return true;
	}

	bool ans = SearchRecursive(head->next, key);
	return ans;
}

void ReverseLL(node* &head) {
	node* current = head;
	node* prev = NULL;

	while (current != NULL) {
		node* n = current->next;
		current->next = prev;
		prev = current;
		current = n;
	}

	head = prev;
}

// 10 --> 20 --> 30 --> 40 --> 50 --> 60 --> 70 --> 80 --> 90 --> NULL
void Cycle_Creation(node* head) {
	/*
		You want to create a cycle from 90 to 40 .
	*/

	// Step 1:Reach the Last Node:

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	//Step 2: Connect the last node with 40.
	temp->next = head->next->next->next;
}

bool isCycle(node* head) {
	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) {
			return true;
		}
	}

	return false;
}

void Break_cycle(node* head) {

	if (isCycle(head) == 0) {
		return;
	}

	//Step 1: Find the Meeting Point.
	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) {
			break;
		}
	}

	cout << "Meeting Point is " << fast->data << endl;
	//cout << fast->data << " ";

	//When You are standing here: fast and slow are at the meeting point.

	/*
		Step 2: Distance from MP to Origin of Cycle is Same as the
		distance from the head to the Origin of Cycle using this property:

	*/

	slow = head;

	node* prev = head;//This pointer has to reach one node before the fast pointer or we say the Meeting Point.

	while (prev->next != fast) {
		prev = prev->next;
	}

	// Now You have 2 Pointers fast=MP, Slow=head and prev=fast se ek kadam pehle.

	while (fast != slow) {
		fast = fast->next;
		slow = slow->next;
		prev = prev->next;
	}

	cout << "Origin of Cycle is " << fast->data << endl;

	//Fast and Slow are now standing at the origin of Cycle and prev is standing
	//at the last node.

	prev->next = NULL;
}



int main() {
	node* head = NULL;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	Print2(head);
	Print2(head);
	cout << Length(head) << endl;
	cout << midPoint(head) << endl;

	node* midp = midPoint1(head);

	// cout << (*midp).data << endl;
	cout << midp->data << endl;
	cout << midp->next << endl;

	cout << midPoint1(head)->data << endl;
	cout << midPoint3(head) << endl;
	cout << midPoint4(head) << endl;
	int key;
	cin >> key;

	cout << SearchIterative(head, key) << endl;
	cout << SearchRecursive(head, key) << endl;

	ReverseLL(head);
	Print(head);
	ReverseLL(head);

	Cycle_Creation(head);
	cout << isCycle(head) << endl;
	Break_cycle(head);
	cout << isCycle(head) << endl;
}













