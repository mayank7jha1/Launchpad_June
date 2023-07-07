#include<iostream>
using  namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string keyboard, word;
		cin >> keyboard >> word;

		int map[256] = {0};
		int  n = keyboard.length();
		int final_ans = 0;
		//cout << keyboard << endl << word << endl;

		//Create a Mapping between character and its position in
		//keyboard.
		//Position starts from 1.//i.e why i+1 not i as position.

		for (int i = 0; i < n; i++) {
			map[keyboard[i]] = i + 1;
		}

		for (int i = 0; i < word.length() - 1; i++) {
			//i=0,word[i]--->h
			final_ans += abs(map[word[i]] - map[word[i + 1]]);
		}

		cout << final_ans << endl;
	}
}