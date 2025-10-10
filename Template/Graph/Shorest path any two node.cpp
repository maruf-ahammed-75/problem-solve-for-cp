//shorest path between any two nodes in a weighted graph
#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<vector<int>>a;
int32_t main(){
    int n,m,q;
    cin>>n>>m>>q;
    
    const int INF = 1e15;
    a = vector<vector<int>>(n+1, vector<int>(n+1, INF));
 
    for(int i=0 ; i<m ; i++){
        int x,y,w;
        cin>>x>>y>>w;
        if( a[x][y] > w ){
            a[x][y]=w;
            a[y][x]=w;
        }
    }
    
    for(int i=0 ; i<=n ; i++){
        a[i][i]=0;
    }
    
    
    // Floyd-Warshall algorithm
    for(int k=1 ; k<= n ; k++){
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                if(a[i][k] < INF && a[k][j] < INF){//if (a[i][k] < INF && a[k][j] < INF) also can use this
                    a[i][j] = min(a[i][j],a[i][k]+a[k][j]);
                }
            }
        }
    }
    
    while(q--){
        int x,y;
        cin>>x>>y;
        if(a[x][y]!=INF){
            cout<<a[x][y]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}