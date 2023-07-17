#include<iostream>
using  namespace std;
char output[100];
char input[100];
int count = 0;

void Subsequences(int i, int j) {

	//Base Condition:
	if (input[i] == '\0') {
		output[j] = '\0';
		count++;
		cout << output << endl;
		return;
	}

	//Take:
	output[j] = input[i];
	Subsequences(i + 1, j + 1);

	//Not  Take
	Subsequences(i + 1, j);
}

int main() {
	cin >> input;
	Subsequences(0, 0);
	cout << "Total Number of Subsequences "
	     << count << endl;
}




