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
int z;
int countZero(int n){
    if(n<5)return 0;
    return n/5 + countZero(n/5);
}

// int binarysearch(int low,int high){
//     if(high-low<=1){
//         if(countZero(low)==z)return low;
//         else if(countZero(high)==z)return high;
//         return ans;
//     }
//     int mid = (high + low)/2;
//     int zero = countZero(mid);
//     // cout<<low<<" "<<high<<" "<<mid<<" "<<zero<<" "<<z<<endl;
//     if(zero==z)ans=mid;
//     if(zero>z)binarysearch(low,mid);
//     else binarysearch(mid,high);
// }

int findTrailingnumber(int n){
    int high = n*5;
    int low = 0;
    int ans = -1;

    while(high - low > 1){
        int mid = (high + low)/2;
        int zero = countZero(mid);

        if(zero == n){
            ans = mid;      // store possible answer
            high = mid;     // continue searching smaller N
        }
        else if(zero < n){
            low = mid;      // need bigger N
        }
        else{               // zero > n
            high = mid-1;     // need smaller N
        }

        // cout << low << " " << high << " " << mid << " " << zero << " " << n << endl;
    }

    // check remaining low and high
    if(countZero(low) == n) ans = low;
    else if(countZero(high) == n) ans = high;

    return ans;
}

void I_Am_Here(int T) {
    cin>>z;
    int ans = findTrailingnumber(z);
    cout<<"Case "<<T<<": ";
    if(ans==-1)cout<<"impossible"<<endl;
    else{
        cout<<ans<<endl;
    }

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here(T);
    }
    return 0;
}