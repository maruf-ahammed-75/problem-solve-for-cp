//predicate function is a funtion which return true or false
//TTTTFFFFF
//FFFFFTTTTTT
// monotonic predicate function amon akta function ja kisu point por true or flase kothay last end hoyse sayta return kore
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll m;//requird amount of wood
vector<ll>a(1000009);
///T T T T T T T F F F F 
bool isWoodMila(ll h){// ay function bolbe h hight a katle ami Need full fill hobe ki nah
                       // hoyle true r nah hoyle false
    ll Woodmila=0;
    for(int i=0 ; i<n ; i++){
        if(a[i]>=h){
            Woodmila+=(a[i]-h);
        }
    }
    // if(Woodmila>=h)return true;
    // else return false;
    // ay kaj tay akhan a hosse
    return Woodmila>=m;
}
int main(){
    cin>>n>>m;
    
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    ll low =0,high = 1000000000;
    ll mid;
    /////akhan a hight a binary search cholbe
    ///T T T T T T T F F F F 
    while(high-low>1){
        mid = (high+low)/2;
        if(isWoodMila(mid)){
            low = mid;
        }
        
        else{
            high = mid - 1;
        }
    }
    if(isWoodMila(high)){
        cout<<high<<endl;
    }
    // else if(isWoodMila(low)){
    //     ata true hole low print kora lagbe nah hole -1 print kora lagto
    //     but ay case kokhno asbay nah ans always thakbe
    // }
    else{
        cout<<low<<endl;
    }
    

}