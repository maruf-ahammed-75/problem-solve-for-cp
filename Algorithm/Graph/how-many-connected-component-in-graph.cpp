// how-many-connected-component-in-graph using bfs

#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
vector< vector<int> >a(N);
vector<bool>vis(N,0);
vector<int>dis(N);
int n;
void addEdge(int u,int v){
    a[u].push_back(v);
    a[v].push_back(u);
}
void bfs(int s){
    queue<int> q;
    for(int i=0 ; i<=n ; i++){
        dis[i]=1e9;
    }

    dis[s]=0;
    vis[s] = true;
    q.push(s);

     while(!q.empty()){
        int curr = q.front();
        q.pop();
        
        for (int x : a[curr] ) {
            if (!vis[x]) {
                dis[x]=dis[curr]+1;
                vis[x] = true;
                q.push(x);
            }
        }
    }
}
int connectedCompo(){
    int total=0;

    for(int i=0 ; i<n ; i++){
        if(!vis[i]){
            bfs(i);
            total++;
        }
    }
    return total;

}
int main(){
    n=10;
    addEdge(1,2);
    addEdge(1,3);
    addEdge(2,4);
    addEdge(3,5);
    addEdge(4,5);
    addEdge(4,6);
    addEdge(10,11);
    addEdge(9,8);
    addEdge(9,7);
    addEdge(7,8);
    // for(int i=1 ; i<=n ; i++){
    //     cout<< "distance of : " << dis[i] <<endl;
    // }
    cout<<connectedCompo()<<endl;
}