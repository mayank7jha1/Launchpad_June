#include<iostream>
using  namespace std;

void Permutations(char ch[], int i) {

	if (ch[i] == '\0') {
		cout << ch << endl;
		return;
	}

	for (int j = i; ch[j] != '\0'; j++) {
		swap(ch[i], ch[j]);
		Permutations(ch, i + 1);
		swap(ch[i], ch[j]);//Backtracking
	}
}

void Permutations2(string ch, int i) {

	if (i == ch.length()) {
		cout << ch << endl;
		return;
	}

	for (int j = i; j < ch.length(); j++) {
		swap(ch[i], ch[j]);
		Permutations2(ch, i + 1);
	}
}

int main() {
	char ch[100];
	cin >> ch;
	string s;
	cin >> s;
	Permutations(ch, 0);
	cout << endl << endl;
	Permutations2(s, 0);
}