#include<iostream>
using  namespace std;


int Length(char* ch) {

	int x = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		x++;
	}
	return x;
}

void Append(char* ch, char* ch1) {
	char ch3[100];//Ch+ch1 size will be less than 100

	int size = Length(ch);
	int size1 = Length(ch1);


	for (int i = 0; ch1[i] != '\0'; i++) {
		ch3[i] = ch1[i];
	}

	for (int i = 0; ch[i] != '\0'; i++) {
		ch3[i + size1] = ch[i];
	}

	ch3[size1 + size] = '\0';

	for (int i = 0; ch3[i] != '\0'; i++) {
		cout << ch3[i];
	}

}

char* Append2(char* ch, char* ch1) {
	char ch3[100];//Ch+ch1 size will be less than 100

	int size = Length(ch);
	int size1 = Length(ch1);


	for (int i = 0; ch1[i] != '\0'; i++) {
		ch3[i] = ch1[i];
	}

	for (int i = 0; ch[i] != '\0'; i++) {
		ch3[i + size1] = ch[i];
	}

	ch3[size1 + size] = '\0';

	for (int i = 0; ch3[i] != '\0'; i++) {
		cout << ch3[i];
	}
	return ch3;
}

int main() {
	char ch[100];
	cin >> ch;

	int x = Length(ch);
	cout << x << endl;

	char ch1[100];
	cin >> ch1;

	cout << ch << endl;
	cout << ch1 << endl;

	Append(ch, ch1);
	cout << endl;
	char* copy = Append2(ch, ch1);
	cout << copy << endl;

}















