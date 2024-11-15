
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void I_Am_Here() {
    string s;
    cin>>s;
    vector<int>a(10,0);
    for (char c : s) {
        a[c - '0']++;
    }

    int maxnumber = *max_element(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            if (i == j) continue;

            int count = 0;
            bool temp = true;

            for (char c : s) {
                

                if(temp==true && (c - '0' == i)){
                    count++;
                    temp=0;
                }
                else if(temp=false && (c-'0' == j)){
                    count++;
                    temp=1;
                }
            }
            ans = max(ans, count / 2 * 2); 
        }
    }


    int max_len = max(maxnumber, ans);
    cout << s.size() - max_len << endl;
}

int main() {
    int ts = 1;
    cin >> ts;
    for (int xyz = 1; xyz <= ts; xyz++) {
        I_Am_Here();
    }
    return 0;
}