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
    string s;
    cin>>s;
    stack<char> st;
    int ans=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(!st.empty()){
                st.pop();
                ans+=2;
            }
            
        }
    }
    cout<<ans<<endl;
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

