#include<bits/stdc++.h>
using namespace std;
const int N = 0;

//Implementing Stack Using two Queues
template<typename T>
class Stack1 {
	queue<T>input, output;
public:
	Stack1() {

	}

	void push(T data) {
		input.push(data);
	}

	T pop() {

		while (input.size() > 1) {
			int x = input.front();
			output.push(x);
			input.pop();
		}

		int Top_Element = input.front();
		input.pop();

		while (!output.empty()) {
			int x = output.front();
			input.push(x);
			output.pop();
		}
	}

	int Top() {

		while (input.size() > 1) {
			int x = input.front();
			output.push(x);
			input.pop();
		}
		int Top_Element = input.front();
		output.push(Top_Element);
		input.pop();

		while (!output.empty()) {
			int x = output.front();
			input.push(x);
			output.pop();
		}

	}

	bool empty() {
		if (input.size() == 0) {
			return true;
		} else {
			return false;
		}
	}
};

