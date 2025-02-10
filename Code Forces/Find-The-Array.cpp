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
    int odd=0,even=0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        if(i%2){
            odd+=a[i];
        }
        else{
            even+=a[i];
        }
    }
    if(odd>even){
        bool f=1;
        for(int i=0 ; i<n ; i++){
            if(f){
                cout<<1<<' ';
                f=0;
            }
            else{
                cout<<a[i]<< ' ';
                f=1;
            }
        }
    }
    else{
        bool f=1;
        for(int i=0 ; i<n ; i++){
            if(f){
                cout<<a[i]<<' ';
                f=0;
            }
            else{
                cout<<1<<' ' ;
                f=1;
            }
        }
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
    while (ts--){
        Solve();
    }

    return 0;
}
