
 
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n,m;
string a,b;

// int edit(int i,int j){

//     if(i==n)return m-j;
//     if(j==m)return n-i;


//     int ans=INT_MAX;

//     if(a[i]==b[j])ans = min(ans,edit(i+1,j+1)); 
//     else{
//         ans = min(ans,edit(i+1,j)+1);// delete s1[i]
//         ans = min(ans,edit(i,j+1)+1);// insert s2[j] to s1
//         ans = min(ans,edit(i+1,j+1)+1);//replace
//     }

//     return ans;
// }
void I_Am_Here() {
    
    cin>>a>>b;
    n = a.size(),m=b.size();

    // cout<<edit(0,0)<<endl;

    vector<vector<int>>edit(n+1,vector<int>(m+1,INT_MAX));

    if(a[i]==b[j]){
        edit[i][j]=min(edit[i][j],edit[i+1][j+1]);
    }
    else{
        edit[i][j]=min(edit[i][j],edit[i][j+1]+1);
        edit[i][j]=min(edit[i][j],edit[i+1][j]+1);
        edit[i][j]=min(edit[i][j],edit[i+1][j+1]+1);
    }
    if(i==n-1 && j!=m-1){

    }
    if(j==m-1 && i!=n-1){

    }

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