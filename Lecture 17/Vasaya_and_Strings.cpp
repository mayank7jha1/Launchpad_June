#include<iostream>
#include<algorithm>
#include<string>
using  namespace std;
int k;

int Solve(string s, char x) {
	int start = 0;
	int maximum_substring_length = 0;
	int end;
	int Current_Number_of_Changes = 0;


	for (end = 0; end < s.length(); end++) {
		if (s[end] != x) {
			Current_Number_of_Changes++;
		}

		while (Current_Number_of_Changes > k and start <= end) {

			if (s[start] != x) {
				Current_Number_of_Changes--;
			}

			start++;
		}

		int current_window_length = end - start + 1;

		if (current_window_length > maximum_substring_length) {
			maximum_substring_length = current_window_length;
		}
	}
	return maximum_substring_length;
}

int main() {
	int n;
	cin >> n >> k;

	// char ch[n];
	// cin >> ch;

	// cout << ch << endl;

	string s;
	cin >> s;
	// cout << s << endl;

	//I have two types of change

	//1. b->a
	//2. a->b

	//You want the character b to change to a.

	//b->a
	int ans1 = Solve(s, 'a');

	//You want the character a to change to b.
	//a->b
	int ans2 = Solve(s, 'b');

	cout << max(ans1, ans2) << endl;
}














