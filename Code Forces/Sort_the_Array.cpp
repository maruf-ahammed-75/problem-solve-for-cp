#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(full(b));
    ll sum=0;
    bool f=0;
    ll check=0;
    ll start=0,end=0;
    map<ll,ll>m;
    for(int i=0 ; i<n ; i++){
        if(a[i]!=b[i] && !f){
            start=i;
            f = 1;
        }
        if(a[i] != b[i]){
            end=i;
            check = a[i]+b[i];
            if(m[check]){
                m[check]-=1;
            }
            else{
                m[check]+=1;
            }
        }
    }
    f=0;
    for(int i=start+1 ; i<=(end) ; i++){
        if(a[i]>a[i-1]){
            cout<<"no"<<endl;
            return;
        }
    }
    if(a[start]>a[end+1] && end!=n-1){
            cout<<"no"<<endl;
            return;
    }   
    cout<<"yes"<<endl;
    cout<<start+1<<' '<<end+1<<endl;

}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
