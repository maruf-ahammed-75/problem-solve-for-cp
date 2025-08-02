



#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int way[10][1000000 + 1];
//recursion
// int n,m;
// vector<int>a,b;


// int page(int index,int total){//index,total taka return max page

//     if(index==n)return 0;
//     if(total==0)return 0;

//     int ans=0;
//     if(total-a[index]>=0)ans= max(ans,b[index]+page(index+1,total-a[index]));
//     ans= max(ans,page(index+1,total));

//     return ans;
// }
void I_Am_Here() {
    int n,m;
    vector<int>a,b;
    cin>>n>>m;
    a = vector<int>(n);
    b = vector<int>(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }
    // cout<<page(0,m)<<endl;
    

    vector<vector<int>>page(3,vector<int>(m+1,0));
    page[n%3][0]=0;
    for(int i=n-1 ; i>=0 ; i--)
        for(int j=0 ; j<=m ; j++){

        if(j==0){
            page[i%3][j]=0;
        }
        else{
            if(j-a[i]>=0)page[i%3][j]= max(page[i%3][j],page[(i+1)%3][j-a[i]] + b[i]);
            page[i%3][j]= max(page[i%3][j],page[(i+1)%3][j]);
        }
    }

    cout<<page[(0)%3][m]<<endl;




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