#include <bits/stdc++.h>
using namespace std;
string s;

int main () {
//freopen ("/Users/nafiulislam/Desktop/in.txt", "r", stdin);
	int q;
	cin >> q;
	while (q--) {
		cin >> s;
		int u = 0, d = 0, l = 0, r = 0;
		for (int i = 0; i < s.length(); i++) {
			if(s[i] == 'U') u++;
			if(s[i] == 'D') d++;
			if(s[i] == 'L') l++;
			if(s[i] == 'R') r++;
		}
		l = min(l, r); r = l; u = min(u, d); d = u;
		//cout << l << " " << r << " " << u << " " << d << " " << s << endl;
		if ((l == 0 && u > 1)) {
			cout << "2" << endl << "UD" << endl;
			continue;
		}
		 if (u == 0 && l > 1) {
			cout << "2" << endl << "LR" << endl;
			continue;
		}
		cout << l + r + u + d << endl;
		for (int i = 0; i < l; i++) cout << "L";
		for (int i = 0; i < u; i++) cout << "U";
		for (int i = 0; i < r; i++) cout << "R";
		for (int i = 0; i < d; i++) cout << "D";
		cout << endl;
	}
	return 0;
}
