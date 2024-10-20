//maximise the minimum sum or
// minimise the maximum sum
// ay rokom  kono kotha thakle sure 100%%
// binary search hobe


//predicate function amon ak function ja true or false return kore
//TTTTTFFFFFF
//FFFFFFFFFTTTTTTTTTTTT
//monotonic function amon ak function ja kono array or vector -
// ar first True or False kothay sas hosse sayta return kore



//=================================================================================


#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
vector<ll>a(10000000);

bool isWood(int h){
    ll wood=0;
    for(int i=0 ; i<n ; i++){
        if(a[i]>=h){
            wood+=abs(a[i]-h);
        }
    }

    return wood>=m;

    // if(wood>=m){
    //     return true;
    // }
    // else return false;
}
int main(){
    cin>>n>>m;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    ll high = 2000000000, low=0,mid;
    while(high-low>1){
        mid = (high-low)/2;
        if(isWood(mid)){
            low = mid;
        }
        else{
            high = mid-1;
        }

    }
    if(isWood(high)){
        cout<<high<<endl;
    }
    else{
        cout<<low<<endl;
    }
}