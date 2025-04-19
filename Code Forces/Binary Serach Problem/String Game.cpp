#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
string s,t;
int n,mm;
bool isok(vector<int> &a, int m){
    string x = s;
    for(int i=0 ; i<m ; i++){
        x[a[i]-1] = '0';
    }
    int j = 0;
    for(int i=0 ; i<n ; i++){
        // cout<<x[i]<<' '<<t[j]<<' ';
        if(x[i]== t[j]){
            j++;
        }
        // cout<<j<<' '<<endl;
        if(j == mm){
            return true;
        }
    }
    return false;
}
void I_Am_Here() {
    cin>>s>>t;
    n = s.size();
    mm = t.size();
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int l = 0;
    int h = n;
    while(l<=h){
        int mid = (l+h)/2;
        // cout<<"mid = "<<mid<<endl;
        if(isok(a,mid)){
            // cout<<"YES = "<<endl;
            l = mid+1;
        }
        else{
            // cout<<"no = "<<endl;
            h = mid-1;
        }
        // cout<<"l = "<<l<<endl;
        // cout<<"h = "<<h<<endl;
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