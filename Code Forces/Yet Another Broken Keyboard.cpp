#include <bits/stdc++.h>
using namespace std;
string s = "", lt = "";
long long ans = 0;
int ok (char c) {
	for (int i = 0; i < lt.size(); i++) {
		if (lt[i] == c) return 1;
	}
	return 0;
} 
int main () {
//freopen ("/Users/nafiulislam/Desktop/in.txt", "r", stdin);
	long long ls, llt;
	cin >> ls >> llt;
	cin >> s;
	char inp;
	for (long long i = 0; i < llt; i++) {
		cin >> inp;
		lt += inp;
	}
	s += "?";
	long long cnt = 0;
	for (long long i = 0; i < s.length(); i++) {
		if (ok(s[i])) cnt++;
		else if (cnt > 0) {
			ans += (cnt * (cnt + 1) / 2);
			cnt = 0;
		}
	}
	cout << ans << endl;
	return 0;
}
