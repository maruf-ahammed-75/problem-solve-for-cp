#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define endl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
// struct DSU {  
//     vector<int> parent, component_size,rank;
//     // O(N)
//     DSU(int _n) {
//         parent = vector<int>(_n);
//         component_size = vector<int>(_n);
//         for(int i = 0; i < _n; i++) {
//             parent[i] = i;
//             component_size[i] = 1;
//         }
//     }
//     int find_parent(int a) {
//         if(parent[a] == a) return a;
//         else {
//             int temp = find_parent(parent[a]);
//             parent[a] = temp;
//             return parent[a];
//         }
//     }

//     // by size
//     bool unite(int a, int b) {
//         a = find_parent(a);
//         b = find_parent(b);
//         if(a == b) return false;

//         // if(component_size[b] > component_size[a]) swap(a, b);
//         // component_size[a] += component_size[b];
//         parent[b] = a;  // now the components of a and b have been merged

//         return true;
//     }
        
// };
void I_Am_Here() {
    int n;
    cin>>n;
    int q;
    cin>>q;
    vector<int> a(n+1);
    vector<set<int>>stor(100000+10);
    // DSU dsu(100000+11);

    for(int i=1 ; i<=n ; i++){
        cin>>a[i];
        stor[a[i]].insert(i);
        // dsu.unite(a[i],i);
    }

    // for(int i=1 ; i<=n ; i++){
    //     cout<<i<<"  = "<<dsu.find_parent(i)<<endl;
    // }

    // int op = 1;
    // while(q--){
    //     // int test;
    //     // cin>>test;
    //     // int x,y;
    //     // if(test == 1){
            
    //     //     cin>>x>>y;
    //     //     if (stor[x].size() > stor[y].size())
    //     //         swap(stor[x], stor[y]);
    //     //     for(auto i:stor[x]){
    //     //         stor[y].insert(i);
    //     //         dsu.unite(y,i);
    //     //     }
    //     //     stor[x].clear();
    //     // }
    //     // else{
    //     //     cin>>x;
    //     //     cout<<dsu.find_parent(x)<<endl;
    //     // }

    //     // if(op== 3){
    //     //     cout<<x<<" = ";
    //     //     for(auto i:stor[x]){
    //     //         cout<<i<<"  ";
    //     //     }
    //     //     cout<<endl<<endl;
    //     // }

    //     // cout<<"after op: "<<op++<<endl;
    //     // for(int i=1 ; i<=n ; i++){
    //     //     cout<<i<<"  = "<<dsu.find_parent(i)<<endl;
    //     // }
    //     // cout<<endl;


    //     if(test == 1){
    //         cin >> x >> y;

    //         if(x == y) continue;

    //         for(auto i: stor[x]){
    //             a[i] = y;
    //             stor[y].insert(i);
    //         }

    //         stor[x].clear();
    //     }
    //     else{
    //         cin >> x;
    //         cout << a[x] << endl;
    //     }

        
    // }


    while(q--){
        int test;
        cin >> test;

        if(test == 1){
            int x, y;
            cin >> x >> y;

            if(x == y) continue;

            for(auto i: stor[x]){
                a[i] = y;
                stor[y].insert(i);
            }

            stor[x].clear();
        }
        else{
            int x;
            cin >> x;
            cout << a[x] << endl;
        }
    }
        
    


}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t;   
    for (int T = 1; T <= t; T++) {
        cout<<"Case "<<T<<":\n";
        I_Am_Here();
    }
    return 0;
}