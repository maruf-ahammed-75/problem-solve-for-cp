#include <iostream>
#include <string>
using namespace std;

int min_operations(const string& s) {
    int n = s.size();
    string target;
    for (int i = 0; i < n; ++i)
        target += (i % 2 == 0) ? '0' : '1';

    string temp = s;
    int res = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (temp[i - 1] != target[i - 1]) {
            for (int d = -1; d <= 1; ++d) {
                int idx = i + d;
                if (idx >= 0 && idx < n)
                    temp[idx] = (temp[idx] == '0') ? '1' : '0';
            }
            ++res;
        }
    }
    if (temp == target)
        return res;
    else
        return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << min_operations(s) << endl;
    }
    return 0;
}
