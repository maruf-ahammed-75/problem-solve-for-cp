#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;

void I_Am_Here() {
    string s;
    cin>>s;
    char a='a',b='b',c='c';
    for(int i=1 ; i<s.size() ; i++){
        if(s[i]==s[i-1]){
            if(i==s.size()-1){
                if(s[i]!=a){
                    s[i]=a;
                }else{
                    s[i]=b;
                }
            }
            else{
                if(s[i]!=a && s[i+1]!=a){
                    s[i]=a;
                }
                else if(s[i]!=b && s[i+1]!=b){
                    s[i]=b;
                }
                else if(s[i]!=c && s[i+1]!=c){
                    s[i]=c;
                }
            }
        }
        
    }
    cout<<s<<endl;
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