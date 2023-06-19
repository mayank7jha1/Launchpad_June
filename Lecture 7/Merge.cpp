#include<iostream>
using  namespace std;

int main() {
	int a[] = {1, 2, 2, 3, 3, 3, 3, 3, 9, 8, 8, 8, 3, 3, 3, 3, 3, 3, 3, 6, 8, 9};

	//Agar mujhe first occurrence nikalna hai toh main
	// ke har ek bucket par jaunga and jab bhi mujhe pehla 3 mil jayega
	//main program rok dunga.

	int occurrence = -1;

	for (int i = 0; i < 22; i++) {

		if (a[i] == 3) {
			occurrence = i;
			break;
		}

	}

	cout << occurrence << endl;



	int last_Occurrence = -1;

	for (int i = 0; i < 22; i++) {
		if (a[i] == 3) {
			last_Occurrence = i;
			//cout << last_Occurrence << " ";
		}
	}
	cout << last_Occurrence << endl;
}