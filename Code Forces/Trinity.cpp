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
    ll n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)cin >> a[i];

    sort(a.begin(), a.end());

    int ans = INT_MAX;
    for (int i = 0; i < n - 2; i++){
        int x = a.end() - lower_bound(a.begin(), a.end(), a[i] + a[i + 1]);
        ans = min(ans, x + i);
    }
    cout << ans << endl;
}
int main(){

    int ts=1;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}