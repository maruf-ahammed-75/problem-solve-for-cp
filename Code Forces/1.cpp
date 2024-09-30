#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int minin=0,mi=10000;
    int maxin= 0,mx=-1;
    for(int i=1; i<=n ; i++){
        int x;
        cin>>x;
        if(x>mx){
            maxin=i;
            mx=x;
        }
        if(x<=mi){
            minin=i;
            mi=x;
        }

    }
    int ans = (maxin-1)+(n-minin);
    if(maxin>minin)ans--;
    cout<<ans<<endl;

}