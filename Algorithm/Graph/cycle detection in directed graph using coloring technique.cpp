#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> a(1e6, vector<int>());
vector<int> val(1e6, 0);
bool f=0;
void dfs(int s){
    val[s]=1;
    for (auto x : a[s]){
        if(val[x]==1){
            f=1;
            continue;
        }
        if(val[x]==0)dfs(x);
    }
    val[s]=2;
}
void I_Am_Here(){
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    dfs(1);
    if (f)cout << "Found Cycle\n";
    else cout<<"no\n";
}
int32_t main(){
    I_Am_Here();
    return 0;
}