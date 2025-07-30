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
    int k;
    cin>>k;
    string s;
    cin>>s;

    map<char,int>m;
    for(auto i:s){
        m[i]++;
    }
    int temp=k;
    for(char i = 'a' ; i<='z' ; i++){
        if(m[i]>=k){
            m[i]-=k;
            break;
        }
        else{
            k-=m[i];
            m[i]=0;
        }
    }
    k = temp;
    string ss="";
    for(int i=n-1 ; i>=0 ; i--){
        if(m[s[i]]){
            ss+=s[i];
            m[s[i]]--;
        }
    }
    // cout<<s<<endl;
    if(ss.size()==0){
        // cout<<endl;
        return;
    }
    for(int i=ss.size()-1 ; i>=0 ; i--){
        cout<<ss[i];
    }
    cout<<endl;
    
    
    
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif



    // string b = "abcdfes";
    // reverse(b.begin()+0,b.begin()+2);
    // cout<<b<<endl;



    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}