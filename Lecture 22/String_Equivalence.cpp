#include<iostream>
using  namespace std;
int n;
char output[15];

void String_Equivalence(int index, char Max_Character) {

	if (index == n) {
		output[index] = '\0';
		cout << output << endl;
		return;
	}

	for (char ch = 'a'; ch <= Max_Character; ch++) {
		output[index] = ch;

		if (ch == Max_Character) {
			String_Equivalence(index + 1, Max_Character + 1);
		} else {
			String_Equivalence(index + 1, Max_Character);
		}
	}

}

int main() {
	cin >> n;
	String_Equivalence(0, 'a');
}








