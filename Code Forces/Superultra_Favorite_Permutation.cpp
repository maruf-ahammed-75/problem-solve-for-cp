#include <bits/stdc++.h>
#define ll long long
using namespace std;
void I_Am_Here() {
    ll n;
    cin>>n;
    if(n<5){
        cout<<-1;
    }
    else{
        for(int i=1 ; i<=n ; i+=2){
            if(i==5)continue;
            cout<<i<<' ';
        }
        cout<<5<<' '<<4<<' ';
        for(int i=2 ; i<=n ; i+=2){
            if(i==4)continue;
            cout<<i<<' ';
        }
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
