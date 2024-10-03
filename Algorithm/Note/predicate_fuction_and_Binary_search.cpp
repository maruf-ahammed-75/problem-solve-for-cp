// predicate2_and_binary_search
// -----------------------------------------------------

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll n,cow;

bool canPlaceCow(ll minimumDistance,vector<ll>&a){////monotonic function return korbe T or F
    ll lastcowPos = -1;
    ll cows_count = cow;
    for(int i=0 ; i<n ; i++){
        if(a[i]-lastcowPos>=minimumDistance ||lastcowPos==-1){
            cows_count--;
            lastcowPos=i;
        }
        if(cows_count==0){
            break;
        }
    }
    if(cows_count==0)return true;
    else return false;
}
void I_Am_Here(){
    cin>>n>>cow;
    vector<ll>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll high = 1e9,low=0,mid=0;
    while(high-low>1){
        mid = (high+low)/2;
        ///mid jokhon ans hote pare tokhon mid+1/mid-1 kora jabe nah
        if(canPlaceCow(mid , a)){
            low = mid;
        }
        else{
            high = mid-1;
        }
    }
    if(canPlaceCow(high,a)){
        cout<<high<<endl;
    }
    else{
        cout<<low<<endl;
    }

}
int main(){
    int T;
    cin>>T;
    while(T--){
        I_Am_Here();
    }
}
// 1
// 5 3
// 1
// 2
// 8
// 4
// 9