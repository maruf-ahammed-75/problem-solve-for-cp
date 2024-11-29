#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;
    double l;
    cin>>l;
    vector<double>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    sort(full(a));
    double mx = INT_MIN;
    for(int i=1 ; i<n ; i++){
        mx = max(mx,abs(a[i]-a[i-1]));
    }
    mx/=2;
    mx = max(mx,abs(a[0]-0.0));
    mx = max(mx,abs(a[n-1]-l));
    cout<<fixed<<setprecision(10)<<mx<<endl;
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
