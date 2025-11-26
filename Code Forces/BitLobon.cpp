#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;


void I_Am_Here() {
    int aa,b;
    cin>>aa>>b;
    b++;
    vector<int>a(61,0);
    int p=1;
    for(int i=0 ; i<61 ; i++){
        //for a
        int total_a = (aa/(p*2))*p + max(0LL,(aa%(p*2))-p);
        int total_b = (b/(p*2))*p + max(0LL,(b%(p*2))-p);
        a[i] = total_b - total_a;
        p*=2;
    
    }
    int and_v=0;
    int or_v = 0;
    int xor_v = 0;
    p=1;
    // for(int i=0 ; i<10 ; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // cout<<a[3]<< ' '<<(b-1-aa+1)<<endl;
    for(int i=0 ; i<61 ; i++){
        if(a[i]==(b-1-aa+1))and_v+=p;
        if(a[i]>0) or_v+=p;
        if(a[i]%2==1) xor_v+=p;
        p*=2;
    }
    cout<<and_v<<" "<<or_v<<" "<<xor_v<<endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}