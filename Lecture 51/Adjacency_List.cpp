#include<iostream>
#include<map>
#include<list>
using  namespace std;
template<typename T>

class Graph {
	map <T, list<T>>mp;
public:
	void addEdge(T x, T y, int bidirection) {
		mp[x].push_back(y);

		if (bidirection == 0) {
			mp[y].push_back(x);
		}
	}

	void Print() {
		for (pair<T, list<T>> x : mp) {
			T node = x.first;
			list<T>nbr = x.second;

			cout << node << " ----> ";
			for (T y : nbr) {
				cout << y << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};


int main() {
	Graph<int>gr;
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x, y, bidirection;
		cin >> x >> y >> bidirection;
		gr.addEdge(x, y, bidirection);
	}

	gr.Print();
}



// pair<node,neighbors>


// Node:             Neighbor(List)
// 1      ------->   2,4,3
// 2      ------->   1,3
// 3      ------->   2,4,1
// 4      ------->   3,1,5
// 5      ------->   4,6
// 6      ------->   5
