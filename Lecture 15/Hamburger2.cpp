#include<iostream>
#include<cstring>
using  namespace std;
#define int long long
char a[101];
int nb, ns, nc;
int pb, ps, pc;
int r;
int countB = 0, countS = 0, countC = 0;

bool KyaHumHamburgerBanaSakteHain(int mid) {

	int BreadKaPaisaRequired = 0;
	BreadKaPaisaRequired = (mid * countB - nb) * pb;

	if (BreadKaPaisaRequired < 0) {
		BreadKaPaisaRequired = 0;
	}

	int SausageKaPaisaRequired = 0;

	SausageKaPaisaRequired = (mid * countS - ns) * ps;
	if (SausageKaPaisaRequired < 0) {
		SausageKaPaisaRequired = 0;
	}

	int CheeseKaPaisaRequired = 0;

	CheeseKaPaisaRequired = (mid * countC - nc) * pc;
	if (CheeseKaPaisaRequired < 0) {
		CheeseKaPaisaRequired = 0;
	}

	int TotalPaisaRequired = BreadKaPaisaRequired +
	                         SausageKaPaisaRequired +
	                         CheeseKaPaisaRequired;


	if (TotalPaisaRequired <= r) {
		return true;
	} else {
		return false;
	}

}

int Hamburger() {
	int n = strlen(a);


	for (int i = 0; i < n; i++) {
		if (a[i] == 'B') {
			countB++;
		} else if (a[i] == 'S') {
			countS++;
		} else {
			countC++;
		}
	}

	int s = 0;
	int e = 1000000000200;
	int ans = 0;

	while (s <= e) {
		int mid = (s + e) / 2;

		//Check Karo Ki aap mid
		//amount of hamburger bana sakte ho ki nahi.
		if (KyaHumHamburgerBanaSakteHain(mid) == 1) {
			ans = mid;
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}

	return ans;
}

int32_t main() {
	cin >> a;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	cout << Hamburger() << endl;
}









