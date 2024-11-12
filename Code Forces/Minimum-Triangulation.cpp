#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>a(501,0);
void cal(){
    for(int i=3 ; i<=500 ; i++){
        a[i]+=a[i-1]+(i*(i-1));
        // cout<<a[i]<<' '<<a[i-1]<<' '<<i-1<<' '<<i<<endl;
    }
    // for(int i=0 ; i<8 ; i++){
    //     cout<<a[i]<<' ';
    // }
}
int main(){
    ll n;
    cal();

    cin>>n;
    cout<<a[n]<<endl;

}