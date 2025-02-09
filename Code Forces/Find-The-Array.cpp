#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first 
#define ss second
#define endl '\n'
using namespace std;
void Solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    int val = *max_element(a.begin(),a.end());
    val/=2;
    if(val<1){
        val = 1;
    }
    for(int i=0 ; i<n ; i++){
        cout<<val<<' ';
    }
    cout<<endl;

}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int ts = 1;
    cin >> ts;
    while (ts--)
    {
        Solve();
    }

    return 0;

    
}
