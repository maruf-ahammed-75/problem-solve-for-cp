// Find_Minimum_Operations_Codeforces_Round_976
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void IAmHere(){
    int n,k;
    cin>>n>>k;
    ll mul=k;
    ll ans=0;
    if(k==1){
        cout<<n<<endl;
        return;
    }
    while(1){
        mul = 1;
        for(int i=0 ; ; i++){
            if(n<mul){
                break;
            }
            mul*=k;
        }
        ans+=1;
        n-=(mul/k);
        if(n<k){
            ans+=n;
            break;
        }
        if(n==0)break;
    }
    cout<<ans<<endl;
}
int main(){
    // freopen("div7.in", "r", stdin);
    // freopen("div7.out", "w", stdout);
    int T=1;
    cin>>T;
    for(int TT=1 ; TT<=T ; TT++){
        IAmHere();
    }
    
}