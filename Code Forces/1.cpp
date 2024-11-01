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
    vector<ll>a(n);
    ll sum=0;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(full(a));
    sum/=n;
    // for(int i=0 ; i<n ; i++){
    //     cout<<a[i]<<' '
    //     ;
    // }
    ll up = lower_bound(a.begin(),a.end(),(a[n-1]+1)/2) - a.begin();
    ll low = upper_bound(a.begin(),a.end() , a[(n-1)/2]) - a.begin();
   

    // cout<<"up = "<<up<<endl;
    // cout<<"low = "<<low<<endl;
    cout<<min(low,up)<<endl;
    // cout<<sum;
}
int main(){

    int ts=1;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}