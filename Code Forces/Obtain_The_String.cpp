#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200000+100][26];
void I_Am_Here() {
    string s,t;
    cin>>s>>t;
    int n = s.size();

    for(int i=0 ; i<=n+2 ; i++){
        for(int j=0 ; j<26 ; j++){
            a[i][j]=-1;
        }
    }
    
    // store the index number of next charchter
    for(int i=s.size()-1 ; i>=0 ; i--){
        for(int j=0 ; j<26 ; j++){
            if(s[i]-'a'==j){
                a[i][s[i]-'a']=i;
                continue;
            }
            a[i][j]=a[i+1][j];
        }
        
    }
    // for(int i=0 ; i<n ; i++){
    //     cout<<s[i]<<' ';
    //     for(int j=0 ; j<26 ; j++){
    //         cout<<a[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    int ans = 0;
    int i = 0; 
    int pos = 0;

    while(i<t.size()){
        int ind = t[i]-'a';
        if(a[pos][ind]==-1){
            if(pos==0){
                cout<<-1<<endl;
                return;
            }
            pos=0;
            ans++;
        }
        else{
            pos = a[pos][ind] + 1;
            i++;  
        }
    }
    cout<<ans+1<<endl;
    
}

int main() {

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t=1;
    cin >> t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
