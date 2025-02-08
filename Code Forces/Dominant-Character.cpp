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
    string a;
    cin>>a;
    int ans = 1e9;
    for(int i=0 ; i<n-1 ; i++){
        if(a[i]=='a' &&  a[i+1]=='a'){
            ans = min(ans,2LL);
            break;
        }
    }
    for(int i=0 ; i<n-2 ; i++){
        if(a[i]=='a' && a[i+2]=='a' && a[i]!=a[i+1]){
            ans = min(ans,3LL);
            break;
        }
    }
    for(int i=0 ; i<n-3 ; i++){
        if(a[i]=='a' && a[i+3]=='a' && a[i+1]!=a[i+2]){
            ans = min(ans,4LL);
            break;
        }
    }
    for(int i=0 ; i<n-6 ; i++){
        if(a[i]=='a'&&a[i+1]==a[i+2]&&a[i+3]=='a'&&a[i+4]==a[i+5]&&a[i+6]=='a' && a[i+1]!=a[i+4]){
            ans = min(ans,7LL);
            break;
        }
    }
    if(ans==1e9){
        cout<<-1<<endl;
    }
    else cout<<ans<<endl;

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
