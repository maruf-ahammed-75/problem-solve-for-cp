#include <bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    string s;
    cin>>s;
    for(int i=s.size()-1 ; i>=0 ; i--){
        if( s[i]=='p')s[i]='q';
        else if(s[i]=='q')s[i]='p';
        cout<<s[i];
    }
    cout<<endl;
     
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
