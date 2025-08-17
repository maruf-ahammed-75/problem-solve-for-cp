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
vector<vector<char>>a;
vector<vector<bool>>vis;
bool isValid(int i ,int j){
    if(i<0 || j<0)return false;
    if(i>=n || j>=m)return false;
    if(a[i][j] == '#')return false;
    
    return true;
}
 
void dfs(int i,int j){
    
    vis[i][j]=1;
    
    if(isValid(i-1,j) && !vis[i-1][j]){//up
        dfs(i-1,j);
    }
    
    if(isValid(i+1,j) && !vis[i+1][j]){//down
        dfs(i+1,j);
    }
    
    if(isValid(i,j+1) && !vis[i][j+1] ){//right
        dfs(i,j+1);
    }
    
    if(isValid(i,j-1) && !vis[i][j-1]){//left
        dfs(i,j-1);
    }
    
}
 
void I_Am_Here() {
    cin>>n>>m;
    a = vector<vector<char>>(n+1,vector<char>(m+1));
    vis = vector<vector<bool>>(n+1,vector<bool>(m+1,0));
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(a[i][j]=='.' && !vis[i][j]){
                dfs(i,j);
                ans++;
            }
        }
    }
    
    cout<<ans<<endl;
    
}
 
int32_t main() {
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}