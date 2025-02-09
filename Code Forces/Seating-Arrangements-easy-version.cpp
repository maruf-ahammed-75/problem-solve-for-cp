#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first 
#define ss second
#define endl '\n'
using namespace std;
void Solve(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    ll sum =0 ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i ; j++){
            if(a[i]>=a[j] )sum++;
        }
    }
    cout<<sum<<endl;

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
