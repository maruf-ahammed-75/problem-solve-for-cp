#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    string s;
    cin>>s;
    ll n = s.size();
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        a[i]=(s[i]-'0');
    }
    int j;
    for(int i=1 ; i<n ; i++){
        j=i;
        
        // for(auto x:a){
        //   cout<<x;
        // }
        // cout<<endl;  

        while(j>=1 && a[j]>0 && a[j]-1>a[j-1]){
            // cout<<j<<' '<<a[j-1]<<' '<<a[j]<<endl;
            int val = a[j];
            a[j]=a[j-1];
            a[j-1]=val-1;
            j--;
        } 
    }
    for(auto x:a){
        cout<<x;
    }
         
    cout<<endl;
    
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
