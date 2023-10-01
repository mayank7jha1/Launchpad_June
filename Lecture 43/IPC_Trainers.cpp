#include<iostream>
#include<queue>
#include<set>
using  namespace std;
const int N = 1e3 + 10;
#define	int long long


int IPC_Trainer() {
	int Total_Trainers, Days;
	cin >> Total_Trainers >> Days;

	int Start_Date[N] = {0}, Lectures[N] = {0};
	int Sadness[N] = {0};

	priority_queue<pair<int, int>>pq;
	for (int i = 0; i < Total_Trainers; i++) {
		cin >> Start_Date[i] >> Lectures[i] >> Sadness[i];
		pq.push({Sadness[i], i});
	}

	// while (!pq.empty()) {
	// 	pair<int, int>t = pq.top();
	// 	cout << "Trainer  No : " << t.second << " Sadness " << t.first << endl;
	// 	pq.pop();
	// }


	int Lectures_Taken[N] = {0};

	set<int>s;
	for (int i = 1; i <= Days; i++) {
		s.insert(i);
	}

	while (!pq.empty()) {

		pair<int, int>t = pq.top();
		pq.pop();

		int Index_of_teacher_we_are_taking = t.second;

		int Starting_Teacher_Date = Start_Date[Index_of_teacher_we_are_taking];
		int Ending_Teacher_Date = Starting_Teacher_Date +
		                          Lectures[Index_of_teacher_we_are_taking] - 1;

		for (int i = Starting_Teacher_Date; i <= Ending_Teacher_Date; i++) {
			auto f = s.lower_bound(i);
			if (f == s.end()) {
				break;
			} else {
				Lectures_Taken[Index_of_teacher_we_are_taking]++;
				s.erase(f);
			}
		}
	}

	int Total_sadness = 0;
	for (int i = 0; i < Total_Trainers; i++) {
		Total_sadness += (Lectures[i] - Lectures_Taken[i]) * Sadness[i];
	}

	return Total_sadness;
}

int32_t main() {
	int t;
	cin >> t;

	while (t--) {
		cout << IPC_Trainer() << endl;
		//IPC_Trainer();
	}
}