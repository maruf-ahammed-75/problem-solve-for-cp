#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first 
#define ss second
#define endl '\n'
using namespace std;
void Solve(){
    string s;
    cin>>s;
    int n= s.size();
    if(s[n-1]=='s'&&s[n-2]=='u'){
        for(int i=0 ; i<n-2 ; i++)cout<<s[i];
        cout<<'i';
    }
    else cout<<s;
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
