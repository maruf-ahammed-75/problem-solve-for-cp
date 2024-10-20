#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 10000;
int adjMat[N][N];
void addEdgeMatrix(int u,int v){
    adjMat[u][v]=1;
    adjMat[v][u]=1;
}
bool hasedge(int u,int v){
    return adjMat[u][v];
}
bool traverseMatrix(int u){
    cout<<"Neighbor of "<<u<<": ";
    for(int v=0 ; v<n ; v++){
        // cout<<hasedge(u,v)<<' ';//ata all matrix print korbe
        if(hasedge(u,v)){
            cout<<v<<' ';
        }
    }
    cout<<endl;
}
void adjMatrix(){
    addEdgeMatrix(1,3);
    addEdgeMatrix(1,2);
    addEdgeMatrix(3,2);
    addEdgeMatrix(4,2);
    addEdgeMatrix(5,2);
    addEdgeMatrix(3,2);
    addEdgeMatrix(3,2);
    addEdgeMatrix(2,2);
    // cout<<hasedge(1,2)<<endl;

    for(int i=0 ; i<n ; i++){
        traverseMatrix(i);
    }
}
int main(){
    cin>>n;
    adjMatrix();
}