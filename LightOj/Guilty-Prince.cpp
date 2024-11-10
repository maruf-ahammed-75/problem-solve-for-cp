#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

const int N = 1000;
int n, m;
ll ans=0;

bool isInSideGrid(int x,int y){
    return x>=0 && x<n && y>=0 && y<m;
}
void bfs(int s1,int s2,vector<vector<char>>&grid,vector<vector<bool> > &vis,vector<vector<int> > &dis){
    queue<pair<int,int> >q;
    dis[s1][s2]=0;
    vis[s1][s2]=true;
    q.push({s1,s2});

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        //traverse
        for(int k=0 ; k<4 ; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(isInSideGrid(nx,ny) && !vis[nx][ny] && grid[nx][ny]=='.'){
                // cout<<"( "<<nx<<','<<ny<<")";
                dis[nx][ny] = dis[x][y] + 1;
                vis[nx][ny] = true;
                ans++;
                q.push({nx, ny});
            }
        }
    }
}

void I_Am_Here(int xyz){
    vector<vector<int> > dis(N, vector<int>(N, 0)); 
    vector<vector<bool> > vis(N, vector<bool>(N, false)); 
    vector<vector<char>>grid(N,vector<char>(N));

    cin >> m >> n;
    ans=0;

    int k=0,l=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>grid[i][j];
            if(grid[i][j]=='@'){
                k=i;l=j;
            }
        }
    }
    // cout<<k<<' '<<l<<endl;
    bfs(k,l,grid,vis,dis);
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0 ; j<m ; j++){
    //         cout<<dis[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    cout<<"Case "<<xyz<<": ";
    cout<<ans+1<<endl;

}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here(xyz);
    }
}   