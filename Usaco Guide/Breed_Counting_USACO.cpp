#include<bits/stdc++.h>
#define ll long long
using namespace std;
void IAmHere(){
    int n,q;
    cin>>n>>q;
    vector<ll>a(n+1,0),b(n+1,0),c(n+1,0);
    for(int i=1 ; i<=n ; i++){
        int x;
        cin>>x;
        if(x==1){
            a[i]+=a[i-1]+1;
            b[i]+=b[i-1];
            c[i]+=c[i-1];
        }
        else if(x==2){
            a[i]+=a[i-1];
            b[i]+=b[i-1]+1;
            c[i]+=c[i-1];
        }
        else{
            a[i]+=a[i-1];
            b[i]+=b[i-1];
            c[i]+=c[i-1]+1;
        }
    }
    for(int i=0 ; i<q ; i++){
        int x,y;
        cin>>x>>y;
        // cout<<a[x-1]<<' '<<a[y]<<endl;
        cout<<abs(a[x-1]-a[y])<<' '<<abs(b[x-1]-b[y])<<' '<<abs(c[x-1]-c[y])<<endl;
    }
}
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    freopen("bcount.in","r",stdin);
    freopen("bcount.out","w",stdout);
    int T=1;
    // cin>>T;
    for(int TT=1 ; TT<=T ; TT++){
        IAmHere();
    }
    
}