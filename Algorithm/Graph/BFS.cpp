//BFS
#include<bits/stdc++.h>
using namespace std;
const int M = 10000;
vector<vector<int>>a(M);
vector<int>dis(M);
int n; 

// Initially mark all the vertices as not visited
// When we push a vertex into the q, we mark it as 
// visited
vector<bool>vis(a.size(),false);


// Function to add an edge to the graph
void addEdge(int u,int v){
    a[u].push_back(v);
    a[v].push_back(u);
}



void bfs(int s){
    // Create a queue for BFS
    queue<int> q;
    for(int i=0 ; i<=n ; i++){
        dis[i]=1e9;
    }

    // Mark the source node as visited and 
    // enqueue it
    dis[s]=0;
    vis[s] = true;
    q.push(s);


    while (!q.empty()) {
        
        // Dequeue a vertex from queue and print it
        int curr = q.front();
        q.pop();
        // cout << curr << " ";

        // Get all adjacent vertices of the dequeued 
        // vertex curr If an adjacent has not been 
        // visited, mark it visited and enqueue it
        for (int x : a[curr]) {
            if (!vis[x]) {
                dis[x]=dis[curr]+1;
                vis[x] = true;
                q.push(x);
            }
        }
    }

}

int main(){
    n=6;
    addEdge(1,2);
    addEdge(1,3);
    addEdge(2,4);
    addEdge(3,5);
    addEdge(4,5);
    addEdge(4,6);
    addEdge(5,6);
    addEdge(6,7);
    bfs(1);


    for(int i=1 ; i<=n ; i++){
        cout<< "distance of : " << dis[i] <<endl;
    }
}