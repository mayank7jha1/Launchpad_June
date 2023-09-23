#include<bits/stdc++.h>
using namespace std;
const int N = 0;
template<typename T>
class queue1 {
	T *arr;
	int total_size, current_size, back, front;
public:
	queue1(int ts) {
		total_size = ts;
		arr = new T[ts];
		current_size = 0;
		back = front = -1;//Indices the!!
	}

	void push(T data) {
		if (current_size == total_size) {
			cout << "Overflow!!!" << endl;
			return;
		}
		if (current_size == 0) {
			front = 0;
		}
		back = (back + 1) % total_size;
		arr[back] = data;
		current_size++;
	}

	void pop() {
		if (current_size == 0) {
			return;
		}

		if (current_size == 1) {
			//This means after pop queue becomes empty.
			front = -1, back = -1;
		}
		front = (front + 1) % total_size;
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

	T front1() {
		return arr[front];
	}
};

