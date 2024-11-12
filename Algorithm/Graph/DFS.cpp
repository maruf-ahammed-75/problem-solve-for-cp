// onok edge thakle stack over flow hoyte pare tokhn runtime error khabe
#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<bool>vis(N);
vector<vector<int> >adj(N);
void addEdge(int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(int s){
    cout<<s<<endl;
    vis[s]=true;
    for(int v : adj[s]){
        if(!vis[v]){
            dfs(v);
            // dis[v]=dis[s]+1,;///ata only tree ar time a kaj korbe
        }
    }
}
int main(){
    addEdge(1,2);
    addEdge(2,3);
    addEdge(3,4);
    addEdge(4,5);
    addEdge(5,6);
    addEdge(3,8);
    addEdge(8,9);
    addEdge(4,10);
    dfs(1);
    // dis[1]=0; ata only tree ar time a kaj korbe karon tree only aakta kore edge thake

}