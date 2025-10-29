#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
#define i128 __int128_t
using namespace std;
int n;
int kk;
vector<int>count2,count5;

// int product(int id , int k , int sum2 , int sum5){
//     cout<<sum2<<' '<<sum5<<' '<< k<<endl;
//     if(k==0){
//         return min(sum5,sum2);
//     }
//     if(id==n)return 0;
    
//     //take
//     int x=0 ,y=0;
//     if(k){
//        x = product(id+1,k-1,sum2+count2[id],sum5+count5[id]); 
//     }
//     //not take
//     y = product(id+1,k,sum2,sum5);

//     return max(x,y);
// }

void I_Am_Here() {
    cin>>n>>kk;
    count2 = vector<int>(n);
    count5 = vector<int>(n);
    int sum22=0,sum55=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        int temp=c;
        int co2=0,co5=0;
        while(c%2==0 && c){
            co2++;
            c/=2;
        }
        c = temp;
        while(c%5==0 && c){
            co5++;
            c/=5;
        }
        count2[i]=co2;
        count5[i]=co5;
        sum22+=co2;
        sum55+=co5;
    }   
    int dp[2][2][sum2+1][sum5+1]=0;
    for(int id = n ; id>=0 ; id--){
        for(int k = 0 ; k<=kk ; k++){
            for(int sum2 = 0 ; sum2<=sum22 ; sum2++){
                for(int sum5 = 0 ; sum5<=sum55 ; sum5++){
                    if(k==0){
                        dp[id%2][k%2][sum2][sum5] = min(sum5,sum2);
                    }
                    else if(id==n){
                        dp[id%2][k%2][sum2][sum5] = 0;
                    }
                    else{
                        int x=0 ,y=0;
                        // product(id+1,k-1,sum2+count2[id],sum5+count5[id]); 
                        x = dp[(id+1)%2][(k-1)%2][sum2+count2[id]][sum5+count5[id]];
                        //not take
                        y = dp[(id+1)%2][k%2][sum2][sum5];
                        dp[id%2][k%2][sum2][sum5] = max(x,y);
                    }
                }
            }
        }
    }
    cout<<dp[0][kk%2][sum22][sum55]<<endl;
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


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