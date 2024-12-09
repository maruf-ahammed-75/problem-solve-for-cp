#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    string  n;
    cin>>n;
    vector<int>a(4,0);
    ll sum=0;
    for(int i=0 ; i<n.size() ;i++){
        sum+=(n[i]-'0');
        if((n[i]-'0')<=3)a[(n[i]-'0')]++;
    }

    // cout<<sum<<endl;
   
    sum%=9;
    // cout<<a[2]<<' '<<a[3]<<endl;
    for(int i=0 ; i<=min(10,a[2]) ; i++){
        for(int j=0 ; j<=min(10,a[3]) ; j++){
            // cout<<i<<' '<<j<<' ';
            ll temp=(2*i + 6*j) + sum%9;
            // cout<<sum<<endl;
            if(temp%9==0){
                Y;
                return;
            }
        }
    }
    N;

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
