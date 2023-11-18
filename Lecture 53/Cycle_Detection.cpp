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


	bool dfs_helper(T scr, map<T, bool>&visited, T parent) {
		//cout << scr << " ";
		visited[scr] = 1;

		for (auto nbr : mp[scr]) {
			if (!visited[nbr]) {
				bool cycle = dfs_helper(nbr, visited, scr);
				if (cycle == 1) {
					return true;
				}
			} else if (nbr != parent) {
				return true;
			}
		}
		return false;
	}

	bool dfs(T scr) {

		map<T, bool>visited;
		for (auto x : mp) {
			visited[x.first] = 0;
		}

		return dfs_helper(scr, visited, -1);
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
	cout << gr.dfs(scr);
}





