#include<iostream>
using  namespace std;
int n;
char output[100];

void  Generate_Parenthesis(int i, int open_count, int close_count) {

	if (i == 2 * n) {
		output[i] = '\0';
		cout << output << endl;
		return;
	}

	//Main abhi output[i] par khada hu.
	if (close_count < open_count) {
		output[i] = ')';
		Generate_Parenthesis(i + 1, open_count, close_count + 1);
	}

	if (open_count < n) {
		output[i] = '(';
		Generate_Parenthesis(i + 1, open_count + 1, close_count);
	}

}

int main() {
	cin >> n;
	Generate_Parenthesis(0, 0, 0);
}