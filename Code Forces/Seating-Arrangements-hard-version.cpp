#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first 
#define ss second
#define endl '\n'
#define full(x) x.begin(),x.end()
using namespace std;
void Solve(){
    int n,m;
    cin>>n>>m;
    
    vector<pair<int,int>>a(n*m);
    for(int i=0 ; i<(n*m) ; i++){
        // cout<<"x\n";
        cin >> a[i].ff;      
        a[i].ss = i + 1;    
        // cout << a[i].ff << ' ' << a[i].ss << endl;
    }
    // cout<<"y\n";
    sort(full(a));

    vector<vector<pair<int, int>>> b(n, vector<pair<int, int>>(m));
    
    int k=0;
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<m ; j++){
            b[i][j].ff=a[k].ff;
            b[i][j].ss=a[k].ss;
            k++;
        }
    }
    
    

    int sum = 0;

    for(int i=0 ; i<n ; i++){
        sort(b[i].begin(), b[i].end(),
         [](const pair<int, int>& a,
            const pair<int, int>& b) {
             return a.second < b.second;
         });

         for(int j=0 ; j<m ; j++){
            for( k=0 ; k<=j ; k++ ){
                if(b[i][j].ff>b[i][k].ff)sum++;
            }
         }
    }
    cout<<sum<<endl;
    // for(int i=0 ; i<n ;i++){
    //     for(int j=0 ; j<m ; j++){
    //        cout<<b[i][j].ff<<' '<<b[i][j].ss<<endl;
    //     }
    //     cout<<endl;
    // }
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int ts = 1;
    cin >> ts;
    while (ts--)
    {
        Solve();
    }

    return 0;

    
}
