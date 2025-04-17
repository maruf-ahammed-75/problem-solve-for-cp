#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

int n;
int x;
bool isok(vector<int> &a, int m){
    int cnt = 0;
    for(int i=n/2 ; i<n ; i++){
        cnt += abs(a[i]-m);
    }
    if(cnt <= x) return false;
    return true;
}
void I_Am_Here() {
    cin>>n;
    cin>>x;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++) cin>>a[i];
    sort(full(a));
    int ans = 0;
    int l = 0; 
    int h = a[n/2]+x;
    while(l<=h){
        int mid = (l+h)/2;
        if(!isok(a, mid)){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    cout<<l-1<<endl;

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