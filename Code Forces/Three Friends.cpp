#include <bits/stdc++.h>
using namespace std;


int main () {
//freopen ("/Users/nafiulislam/Desktop/in.txt", "r", stdin);
	int q;
	cin >> q;
	while (q--) {
		int a, b, c;
		cin >> a >> b >> c;
		int ans = (abs(a - b) + abs(a - c) + abs(b - c));
		if ( ans <= 4) cout << "0" << endl;
		else cout << ans - 4 << endl;
	}
	return 0;
}
