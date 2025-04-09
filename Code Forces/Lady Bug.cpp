#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    string x="",y="";
    for(int i=0 ; i<n ; i++){
        if(i%2==0){
            x+=a[i];
        }
        else{
            x+=b[i];
        }
    }
    for(int i=0 ; i<n ; i++){
        if(i%2!=0){
            y+=a[i];
        }
        else{
            y+=b[i];
        }
    }
    // cout<<x<<' '<<y<<endl;
    ll sum1=0;
    ll sum2=0;
    for(int i=0 ; i<x.size() ; i++){
        if(x[i]=='0')sum1++;
    }
    for(int i=0 ; i<y.size() ; i++){
        if(y[i]=='0')sum2++;
    }
    // cout<<sum1<<
    if(sum1>=(n+1)/2 && sum2>=(n/2))cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
