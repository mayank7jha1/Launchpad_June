#include<iostream>
using  namespace std;

int main() {
	int n = 7;
	int a[] = {3, 5, 3, 3, 5, 5, 3};


	//Aap Har index par jaoge and jo value us index
	//par padi hain uski frequency ka count
	//dhundoge.

	for (int i = 0; i < n; i++) {
		int target = a[i];
		int count = 0;
		if (target != -1) {
			//Iski Frequeency poore array me calculate
			//karo.

			for (int j = 0; j < n; j++) {
				if (a[j] == target) {
					count = count + 1;
					a[j] = -1;
				}
			}

			cout << "Frequency of " << target << " is " << count << endl;
		}
	}
}













