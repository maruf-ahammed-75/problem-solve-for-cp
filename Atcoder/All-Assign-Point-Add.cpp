#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    map<ll,ll>m;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    ll q;
    cin>>q;
    ll temp=-1;
    ll query=0;
    ll use=0;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            ll bx;
            cin>>bx;
            temp=bx;
            query=1;
            m.clear();
            use=1;
        }
        if(x==2){
            ll in,val;
            cin>>in>>val;
            
            if(temp!=-1 && !m[in-1])a[in-1]=temp;
            m[in-1]=1;
            a[in-1]+=val;
            query=2;
        }
        if(x==3){
            ll in;
            cin>>in;
            if(query==1)cout<<temp<<endl;
             
            else{
                if(use==0)cout<<a[in-1]<<endl;
                else if(m[in-1])cout<<a[in-1]<<endl;
                else{
                    cout<<temp<<endl;
                }
            }
            query=3;
            
        }
    }

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
