#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=1 ;
    int j = n;
    int k = n-2;
    vector<int> ans;
    while(i<j && k>=0){
        if(s[k] == '<'){
            ans.push_back(i);
            i++;
        }
        else{
            ans.push_back(j);
            j--;
        }
        k--;
    }
    ans.push_back(i);
    for(int i=n-1 ; i>=0 ; i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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