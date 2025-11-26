#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ull unsigned long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"

using namespace std;

vector<int>is_Prime(100001,1);
vector<int>prime;
void prime_sieve(){
    is_Prime[0]=is_Prime[1]=0;
    for(int i=2 ; i<=100000 ; i++){
        if(is_Prime[i]){
            for(int j=i*i ; j<=100000 ; j+=i){
                is_Prime[j]=0;
            }
        }
    }
    for(int i=2 ; i<=100000 ; i++){
        if(is_Prime[i]) prime.push_back(i);
    }
}

void I_Am_Here() {
    int n,l;
    cin>>n>>l;
    if(n>15){
        cout<<-1<<endl;
        return;
    }
    int mul=1;
    for(int i=0 ; i<n ; i++){
        mul*=prime[i];
    }
    if(mul>l){
        cout<<-1<<endl;
        return;
    }
    for(int i=0 ; i<n ; i++){
        cout<<mul/prime[i]<<" ";
    }
    cout<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    prime_sieve();
    // int mul=1;
    // for(int i=0 ; i<15 ; i++){
    //     mul*=prime[i];
    //     cout<<mul<<endl;
    // }
    


    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}