#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
string a,b;
string lcs(int i,int j){
    if(i==a.size() || j==b.size())return "";
    string s = "";
    if(a[i] == b[j]){
        s+=a[i]+lcs(i+1,j+1);
    }
    else{
        string s1 = lcs(i+1,j);
        string s2 = lcs(i,j+1);
        if(s1.size()>s2.size()){
            s+=s1;
        }
        else{
            s+=s2;
        }
    }
    return s;
}
void I_Am_Here() {

    cin>>a>>b;
    cout<<lcs(0,0)<<endl;

}

int32_t main() {
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
