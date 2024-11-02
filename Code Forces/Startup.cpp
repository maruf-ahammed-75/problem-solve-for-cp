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
    int n,k;
    cin>>n>>k;
    vector<ll>a(k+1,0);
    for(int i=0 ; i<k ; i++){
        int x,y;
        cin>>x>>y;
        a[x]+=y;
    }
    ll sum=0;
    sort(a.rbegin(),a.rend());
    for(int i=0 ; i<min(n,k) ; i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
}
int main(){

    int ts=1;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}