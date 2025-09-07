#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void I_Am_Here(){
    int a,b;
    cin>>a>>b;
    if(a%2==0 && b%2==0){
        cout<<(a*(b/2))+2<<endl;
    }
    else if(a%2==0 && b%2!=0){
        cout<<-1<<endl;
    }
    else if(a%2!=0 && b%2==0){
        int x = b/2;
        if(x%2==0){
            cout<<a*x + 2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<a*b +1<<endl;
    }
}
 
int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}