/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1e4 + 7;
void I_Am_Here(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<vector<int>> a(k, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> a[j][i];
        }
    } // n*k
 
    for (int j = 0; j < k; j++) {
        for (int i = 1; i < n; i++) {
            a[j][i] |= a[j][i - 1];
        }
    }
    // cout<<endl;
    // for(int i=0 ; i<n ; i ++){
    //     for(int j=0 ; j<k ; j++){
    //         cout<<a[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }


    while(q--){
        int m;
        cin>>m;
        int lo = 0, hi = n - 1;
        while(m--){
            int r, c;
            char o;
            cin >> r >> o >> c;
            r--;
            if (o == '<') {
                int i = lower_bound(a[r].begin(), a[r].end(), c) - a[r].begin(); //>=c //logn
                hi = min(hi, i - 1);
            } else {
                int i = upper_bound(a[r].begin(), a[r].end(), c) - a[r].begin(); //>c //logn
                lo = max(lo, i);
            }
        }
        if (lo > hi) {
            cout << "-1\n";
        } 
        else
            cout << lo + 1 << '\n';
    }
}
int main(){
    int ts=1;
    // cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}