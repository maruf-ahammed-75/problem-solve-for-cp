#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

//recursion
// int steps(int num){
//     if(num==0) return 0;
//     if(num<0)return INT_MAX;


//     int temp = num;
//     int ans=INT_MAX;
//     while(temp){
//         int x = temp%10;
//         if(x)ans = min(ans,1+steps(num-x));
//         temp/=10;
//     }
//     return ans;

// }
void I_Am_Here() {
    int n;
    cin>>n;
    // cout<<steps(n)<<endl;
    vector<int>steps(n+1,INT_MAX);

    steps[0]=0;
    for(int num=0 ; num<=n ; num++){
        int temp = num;
        while(temp){
            int x = temp%10;
            if(x && num-x>=0) steps[num] = min(steps[num],1+steps[num-x]);
            temp/=10;
        }
    }
    cout<<steps[n]<<endl;

}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}