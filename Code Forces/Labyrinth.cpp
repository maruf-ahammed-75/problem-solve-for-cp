#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
int n,m;
vector<vector<char>>a;
vector<vector<bool>> vis;
vector<vector<pair<int,pair<int,char>>>>next_state;
bool f=0;
int findI = -1 , findJ = -1;

bool valid(int i,int j){
    if(i<0 || j<0 || i>=n || j>=m) return false;
    if(a[i][j]=='#')return false;
    if(vis[i][j]) return false;
    return true;
}

void bfs(int i,int j){
    vis[i][j]=1;

    queue<pair<int,int>>q;
    q.push({i,j});
    int x=i,y=j;

    while(!q.empty()){
        pair<int,int> curr = q.front();
        q.pop();

        x = curr.ff;
        y = curr.ss;

        if(a[x][y]=='B'){
            f=1;
            findI = x;
            findJ = y;
            return;
        }


        //right 
        if(valid(x,y+1)){
            q.push({x,y+1});
            vis[x][y+1] = 1;
            next_state[x][y+1] = {x,{y,'R'}};
        }

        //left
        if(valid(x,y-1)){
            q.push({x,y-1});
            vis[x][y-1] = 1;
            next_state[x][y-1] = {x,{y,'L'}};
        }



         //up
        if(valid(x-1,y)){
            q.push({x-1,y});
            vis[x-1][y] = 1;
            next_state[x-1][y] = {x,{y,'U'}};
        }

        //down
        if(valid(x+1,y)){
            q.push({x+1,y});
            vis[x+1][y] = 1;
            next_state[x+1][y] = {x,{y,'D'}};
        }


       
    }
}


void I_Am_Here() {
    cin>>n>>m;
    a = vector<vector<char>>(n, vector<char>(m));
    vis = vector<vector<bool>>(n, vector<bool>(m, false));
    next_state = vector<vector<pair<int,pair<int,char>>>>(n, vector<pair<int,pair<int,char>>>(m));

    int inI =-1 , inJ=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='A'){
                inI = i;
                inJ = j;
            }
        }
    }

    bfs(inI,inJ);
    if(!f){
        N;
        return;
    }

   Y;
   int ans=0;
   string path = "";

   while(findI != inI || findJ != inJ){
       path += next_state[findI][findJ].ss.ss;
       findI = next_state[findI][findJ].ff;
       findJ = next_state[findI][findJ].ss.ff;
   }
   reverse(full(path));
   cout<<path.size()<<"\n"<<path;
}
 
int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}