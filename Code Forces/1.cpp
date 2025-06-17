#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0; i<n; i++) {    
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    vector<pair<int, pair<int, pair<int,int>>>> r;
//row
    for(int i=0 ; i<n ; i++){
        vector<pair<int, pair<int, pair<int,int>>>> row;
        map<int, int> mp;
        for(int j=0 ; j<m ; j++)mp[a[i][j]]++;
        for(int j=0 ; j<m ; j++){
            
            row.push_back({a[i][j], {mp[a[i][j]], {i+1, j+1}}});
        }
        sort(row.rbegin(), row.rend());
        r.push_back({row[0].ff,{row[0].ss.ff, {row[0].ss.ss.ff, row[0].ss.ss.ss}}});
    }

    // sort(r.rbegin(), r.rend());

    //


    // vector<pair<int, pair<int, int>>> c;

    for(int j=0 ; j<m ; j++){   
        vector<pair<int, pair<int,pair<int,int>>>> col;
        map<int, int> mp;
        for(int i=0 ; i<n ; i++)mp[a[i][j]]++;
        for(int i=0 ; i<n ; i++){
            col.push_back({a[i][j], {mp[a[i][j]], {i+1,j+1}}});
        }
        sort(col.rbegin(), col.rend());
        r.push_back({col[0].ff,{col[0].ss.ff, {col[0].ss.ss.ff, -1*col[0].ss.ss.ss}}});
    }
    sort(r.rbegin(), r.rend());
    //print
    // for(auto i:r){
    //     cout<<i.ff<<' '<<i.ss.ff<<' '<<i.ss.ss.ff<<' '<<i.ss.ss.ss<<endl;
    // }   
    int row=-1, col=-1;
    if(r[0].ss.ss.ss<0){
        col = -1 *r[0].ss.ss.ss;
    } else {
        row = r[0].ss.ss.ff;
    }
    //first
    // cout<<row << ' '<<col<<endl;

    if(row==-1){
        for(auto i:r){
            if( i.ss.ss.ss<0){
               continue;
            }
            else {
                // cout<<i.ff<<' '<<i.ss.ff<<' '<<i.ss.ss.ff<<' '<<i.ss.ss.ss<<endl;

                row = i.ss.ss.ff;
                break;
            }
        }
    }
    // cout<<row << ' '<<col<<endl;
    
    if(col==-1){
        for(auto i:r){
            if( i.ss.ss.ss<0){
               col = -1 * i.ss.ss.ss;
               break;
            }
        }
    }

    cout<<row << ' '<<col<<endl;
    
    
    
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}
