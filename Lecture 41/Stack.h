#include<bits/stdc++.h>
using namespace std;
const int N = 0;

template < typename T>
class Stack1 {
	T *arr;
	int top, total_size, current_size;
public:
	Stack1(int ts) {
		total_size = ts;
		current_size = 0;
		top = -1;
		arr = new T[ts];
	}

	void push(int data) {
		if (current_size == total_size) {
			cout << "Overflow!!!" << endl;
			return;
		} else {
			top = top + 1;
			arr[top] = data;
			current_size++;
		}
	}

	void pop() {
		if (current_size == 0) {
			return;
		}

		if (current_size == 1) {
			top = -1;
		}
		top = top - 1;
		current_size--;
	}

	int size() {
		return current_size;
	}

	bool empty() {
		if (current_size == 0) {
			return true;
		} else {
			return false;
		}
	}

	int top1() {
		return arr[top];
	}
};
