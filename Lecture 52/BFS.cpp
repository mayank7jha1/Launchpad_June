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


	void bfs(T scr) {
		map<T, bool>visited;

		for (auto x : mp) {
			visited[x.first] = 0;
		}

		queue<T>q;
		q.push(scr);
		visited[scr] = 1;

		while (!q.empty()) {
			T node = q.front();
			cout << node << " ";
			q.pop();

			for (auto nbrs : mp[node]) {
				if (visited[nbrs] == 0) {
					q.push(nbrs);
					visited[nbrs] = 1;
				}
			}
		}
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
	gr.bfs(scr);
}