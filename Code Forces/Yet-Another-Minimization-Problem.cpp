#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int cal(int id,vector<int>&a , vector<int>&b){
    
    if(id==n)return 0;
    
    int ans1 = 0;
    int ans2 = 0;
    //not swap
    for(int i=0 ; i<a.size() ; i++){
        for(int j=i+1 ; j<a.size() ; j++)ans1+=(a[i]+a[j])*(a[i]+a[j]);
    }
    for(int i=0 ; i<b.size() ; i++){
        for(int j=i+1 ; j<b.size() ; j++)ans1+=(b[i]+b[j])*(b[i]+b[j]);
    }
    cal(id+1,a ,b);


    swap(a[id],b[id]);
    for(int i=0 ; i<a.size() ; i++){
        for(int j=i+1 ; j<a.size() ; j++)ans2+=(a[i]+a[j])*(a[i]+a[j]);
    }
    for(int i=0 ; i<b.size() ; i++){
        for(int j=i+1 ; j<b.size() ; j++)ans2+=(b[i]+b[j])*(b[i]+b[j]);
    }
    cal(id+1,a ,b);
    return min(ans1,ans2);

    
}

void I_Am_Here() {
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}