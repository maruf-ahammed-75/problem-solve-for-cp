#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 10000;
vector<int>adjList[N];
void AddEdgeList(int u,int v){
    adjList[u].push_back(v);
    adjList[v].push_back(u);
} 
bool hasEdge(int u,int v){
   for(int i=0 ; i<adjList[u].size() ; i++){
        if(adjList[u][i]==v){
            return true;
        }
       
   }
    return false;
}
bool traverselist(int u){
    cout<<"Neighbor of "<<u<<": ";
     for(int i=0 ; i<adjList[u].size() ; i++){
        cout<<adjList[u][i]<<" ";
    }
    cout<<endl;
}
void adjMatrix(){
    AddEdgeList(1,2);
    AddEdgeList(1,4);
    AddEdgeList(2,3);
    AddEdgeList(2,4);
    AddEdgeList(2,5);
    AddEdgeList(4,5);

    // cout<<hasedge(1,2)<<endl;

    for(int i=0 ; i<n ; i++){
        traverselist(i);
    }
}
int main(){
    cin>>n;
    adjMatrix();
}