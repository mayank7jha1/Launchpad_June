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
}














