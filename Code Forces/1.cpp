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
    cin>> n>> m;
    vector<vector<int>>a(max(n,m),vector<int>(min(n,m)));
    cout<<min(2 * min(n, m), max(n, m))<<endl;
    int x= min(n,m)+1;
    for(int i=0 ; i<max(n,m) ; i++){
        // for(int j=0 ; j<min(n,m) ; j++){
            if(i+1<=min(n,m)){
                for(int j=0 ; j<=i ; j++){
                    a[i][j]=1;
                }
                int t=2;
                for(int j=i+1 ; j<min(n,m) ; j++){
                    a[i][j]=t;
                    t++;
                }
            }
            else{
                
                for(int j=0 ; j<min(n,m) ; j++){
                    a[i][j]=x;
                }
                x++;
            }
    }
    if(n>=m)
    for(int i=0 ; i<max(n,m) ; i++){
        for(int j=0 ; j<min(n,m) ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int j=0 ; j<min(n,m) ; j++){
            for(int i=0 ; i<max(n,m) ; i++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    for(int T=1 ; T<=t ; T++){
        I_Am_Here();
    }

    return 0;
}