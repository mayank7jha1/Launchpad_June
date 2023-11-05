#include<iostream>
#include<climits>
#include<list>
#include<queue>
#include<map>
using  namespace std;

template<typename T>
class Graph {
	map<T, list<T>>mp;
public:
	void addEdge(T x, T y) {
		mp[x].push_back(y);
		mp[y].push_back(x);
	}


	void dfs_helper(T scr, map<T, bool>&visited) {
		cout << scr << " ";
		visited[scr] = 1;

		for (auto nbr : mp[scr]) {
			if (visited[nbr] == 0) {
				dfs_helper(nbr, visited);
			}
		}
	}

	void dfs(T scr) {
		map<T, bool>visited;
		for (auto x : mp) {
			visited[x.first] = 0;
		}
		int count = 1;

		for (auto x : mp) {
			if (!visited[x.first]) {
				cout << "Component No: " << count << " -----> ";
				dfs_helper(x.first, visited);
				cout << endl;
				count++;
			}
		}

		cout << endl << "Total Components " << count - 1 << endl;
	}

};



int main() {
	Graph<int>gr;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gr.addEdge(x, y);
	}
	int scr;
	cin >> scr;
	gr.dfs(scr);
}





