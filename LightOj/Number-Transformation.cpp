#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int n,m;
vector<int>factor;
vector<bool>vis(100000,false);
vector<int>dis(100000,1e9);

void bfs(int s){
    queue<int> q;
    vis[s] = true;
    q.push(s);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (int x : a[curr]) {
            if (!vis[x]) {
               
                vis[x] = true;
                q.push(x);
            }
        }
    }

}

void I_Am_Here(){
    cin>>n>>m;
    factor.clear();
    vis.clear();
    dis.clear();

}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        // cout<<"Case "<<xyz<<": ";
        I_Am_Here();
    }
}