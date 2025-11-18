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

void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<pair<int,int>>b(n);
    for(int i =0 ; i<n ; i++){
        cin>>a[i];
        b[i] = {a[i],i};
    }
    sort(full(b));

    for(int i=0 ; i<n ; i++){
        cout<<b[i].ff<<" "<<b[i].ss<<endl;
    }
    cout<<endl;

    int sum=0;

    for(int i=0 ; i<n ; i++){
        int id = b[i].ss;
        cout<<"id = "<<id<< "     ";
        if(id==0){
            int x = max(a[id],a[id+1]);
            int y = max(a[id],a[n-1]);
            int z = min(x,y);
            sum += z;
            if(x<y){
                cout<<"1 if"<<endl;    
                a[id]=z;
                a[id+1]=z;
            }
            else{
                cout<<"1 else"<<endl; 
                a[id]=z;
                a[n-1]=z;
            }
        }
        else if(id==n-1){
              
            int x = max(a[id],a[0]);
            int y = max(a[id],a[id-1]);
            int z = min(x,y);
            sum += z;
            if(x<y){
                cout<<"2 if"<<endl;   
                a[id]=z;
                a[0]=z;
            }
            else{
                cout<<"2 else"<<endl;
                a[id]=z;
                a[id-1]=z;
            }
        }
        else{
            int x = max(a[id],a[id-1]);
            int y = max(a[id],a[id+1]);
            int z = min(x,y);
            sum += z;
            if(x<y){
                cout<<"3 if"<<endl;    
                a[id]=z;
                a[id-1]=z;
            }
            else{
                cout<<"3 else"<<endl;
                a[id]=z;
                a[id+1]=z;
            }
        }
        cout<<"sum = "<<sum<<endl;
    }
    cout<<sum<<endl;
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
        I_Am_Here();
    }
    return 0;
}