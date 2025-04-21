#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
vector<int>a(2000000);
int n,k;
bool IsOk(int mid){
    set<int>s;
    int temp = k;
    for(int i=0 ; i<n ; i++){
        if(a[i]<mid){
            s.insert(a[i]);
        }
        if(s.size()==mid){
            temp--;
            s.clear();
        }
    }
    // cout<<"temp = "<<temp<<endl;
    return temp<=0;
}

void I_Am_Here() {
    cin>>n>>k;
    int x = INT_MIN;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        x = max(x,a[i]);
    }
    int l=0;
    int h =n;
    while(l<=h){
        int mid = (l+h)/2;
        // cout<<"mid = "<<mid<<endl;
        if(IsOk(mid)){
            l = mid + 1; 
        }
        else{
            h = mid - 1;
        }
        // cout<<l<<' '<<h<<endl;
    }
    cout<<l-1<<endl;
}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}