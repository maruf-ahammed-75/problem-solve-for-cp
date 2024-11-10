#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

// all cel dx[] = {0,0,-1,1,-1,-1,1,1}
        // dy[] = {0,0,-1,1,-1,1,-1,1}

const int N = 10000;
vector<vector<int> > dis(N, vector<int>(N, 1e9)); // distance grid
vector<vector<bool> > vis(N, vector<bool>(N, false)); // visited grid
int n, m; // grid dimensions (n x m)


bool isInSideGrid(int x,int y){
    return x>=0 && x<n && y>=0 && y<m;
}
void bfs(int s1,int s2){
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

            if(isInSideGrid(nx,ny) && !vis[nx][ny]){
                // cout<<"( "<<nx<<','<<ny<<")";
                dis[nx][ny] = dis[x][y] + 1;
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}
int main(){
    cout << "Enter grid dimensions (n rows and m columns): ";
    cin >> n >> m;
    bfs(1,1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dis[i][j] << " ";
        }
        cout << endl;
    }

}   