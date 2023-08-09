#include<iostream>
using  namespace std;

class node {
public:
	int data;
	node* next;//Self Referencing Pointer
	node* prev;

	//Constructor to Initiliase these values;

	node(int inputdata) {
		data = inputdata;
		next = NULL;
		prev = NULL;
	}
};

void InsertAtHead(node* &head, int value) {
	node* n = new node(value);
	n->next = head;

	if (head != NULL) {
		head->prev = n;
	}

	head = n;
}


void Print(node* head) {
	while (head != NULL) {
		cout << head->data << " --> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}


void Print2(node* head) {
	node* temp = head;

	while (temp->next != NULL) {
		temp = temp->next;
	}
	while (temp != NULL) {
		cout << temp->data << " --> ";
		temp = temp->prev;
	}

	cout << "NULL" << endl;
}


int main() {


	int n;
	cin >> n;
	node* head = NULL;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	Print(head);
	Print2(head);
}