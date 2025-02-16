#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;

void I_Am_Here(){
    int n,m,k;
    cin>>n>>m>>k;
    // cout<<n<<' '<<m<<' '<<k<<endl;
    if(abs(m-n)>k){
        cout<<-1<<endl;
        return;
    }
    else if(m>=n){
        string s="";
        for(int i=0 ; i<k ; i++){
            s+='1';
            m--;
            // cout<<s<<endl;
        }
        // cout<<s<<endl;
        if(m<0){
            cout<<-1<<endl;
            return;
        }
        else{
            while(m || n){
                if(n){
                    s+='0';
                    n--;
                    
                }
                if(m){
                    s+='1';
                    m--;
                    
                }
                // cout<<s<<endl;
            }
        }
        cout<<s<<endl;
    }
    else{
        string s = "";
        for(int i=0 ; i<k ; i++){
            s+='0';
            n--;
        }
        if(n<0){
            cout<<-1<<endl;
            return;
        }
        else{
            while(n || m){
                if(m){
                    m--;
                    s+='1';
                }
                if(n){
                    n--;
                    s+='0';
                }
            }
        }
        cout<<s<<endl;
    }
    
}

int32_t main() {
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