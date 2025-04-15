#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.hegin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
bool check(vector<pair<int,int>>b,int x,int mid){
    int temp = x;
    for(int i=0 ; i<min(x,b.size()*1LL) ; i++){
        if(temp <=0 )return true;
        temp -= b[i].ff/mid;
    }
    return (temp <= 0?true:false);
}
void I_Am_Here() {
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>a(n);
    map<int,int>m;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    vector<pair<int,int>>b;
    for(auto i:m){
        b.push_back({i.ss,i.ff});
    }
    sort(b.rbegin(),b.rend());
    int l =1;
    int r = 1e10;
    int ans=0;
    // for(int i=0 ; i<x ; i++){
        // cout<<b[i].ss<<' '<<b[i].ff<<endl;
    // }
    while(l<=r){
        int mid = (l+r)/2;
        // cout<<"mid = "<<mid<<endl;
        if(check(b,x,mid)){
            // cout<<"True = ";
            l = mid + 1;
            ans=mid;
            // cout<<l-1<<endl;
        }
        else{
            // cout<<"False =";
            r = mid - 1;
            // cout<<r+1<<endl;
        }
    }
    // cout<<ans<<endl;
    int i=0;
    while(x>0){
        int p = b[i].ff/ans;
        // cout<<p<<endl;
        x-=p;
        if(x>0){
            for(int j=0 ; j<p ; j++){
                cout<<b[i].ss<<' ';
            }
        }
        else{
            x+=p;
            for(int j=0 ; j<x ; j++){
                cout<<b[i].ss<<' ';
            }
            break;
        }
        i++;
    }
}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}