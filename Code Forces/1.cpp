/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
//#define pb push_back
//#define mp make_pair
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define full(x) x.begin(), x.end()

using namespace std;


void I_Am_Here(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    map<ll,ll>m;
    for(int i=0 ; i<k ; i++){
        int x,y;
        cin>>x;
        cin>>y;
        m[x]+=y;
    }
    ll sum=0;
    for(auto i:m){
        sum+=i.ss;
        n--;
        if(n==0)break;
    }
    cout<<sum<<endl;
    // 
    // sort(a.rbegin(),a.rend());
    // for(int i=0 ; i<n ; i++){
    //     sum+=a[i];
    // }
    // cout<<sum<<endl;
}
int main(){

    int ts=1;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}