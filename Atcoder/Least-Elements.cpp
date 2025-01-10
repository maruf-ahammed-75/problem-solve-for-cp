#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here(){
    ll n,m,k;cin>>n>>m>>k;
    vector<ll>a(n);
    for(auto &i:a){
        cin>>i;
    }

    // if(m==1){
    //     for(auto i:a){
    //         cout<<i<<' ' ;
    //     }
    //     cout<<endl;
    //     return;
    // }

    vector<pair<ll,ll>>b(m);
    for(int i=0 ; i<m ; i++)b[i]={a[i],i};

    sort(full(b));
    set<pair<ll,ll>>sl,sr;
    ll sum=0;

    for(int i=0 ; i<k ; i++){
        sl.insert({b[i].ff,b[i].ss});
        sum+=b[i].ff;
    }
    for(int i=k ; i<m ; i++){
        sr.insert({b[i].ff,b[i].ss});
    }
    // cout<<"sl = ";
    // for(auto i:sl)cout<<i.ff<<' '<<i.ss<<endl;
    // cout<<endl;
    // cout<<"sr = ";
    // for(auto i:sr)cout<<i.ff<<' '<<i.ss<<endl;
    // cout<<endl;
    // cout<<"sum  = ";
    cout<<sum<<' ';
    if(k==1){
        for(int i=1 ; i<n-m+1 ; i++){
            auto it = sl.find({a[i-1],i-1});
            if(it != sl.end()){
                sum-=a[i-1];
                sl.erase({a[i-1],i-1});
            }
            sl.insert({a[i-1+m],i-1+m});
            cout<<sl.begin()->ff<<' ';
        }
        return;
    }
    for(int i=1 ; i<n-m+1 ; i++){
        // cout<<"a[i ] = "<<a[i-1+m]<<endl;
        auto it = sl.find({a[i-1],i-1});
        
        if(it != sl.end()){
            sum-=a[i-1];
            sl.erase({a[i-1],i-1});
        }
        else{
            sr.erase({a[i-1],i-1});
        }
        // cout<<"sum1 = "<<sum<<endl;

        if(sl.rbegin()->first < a[i+m-1]){
            sr.insert({a[i-1+m],i-1+m});
            // sum+=a[i-1+m];
        }
        else{
            sum+=a[i-1+m];
            sl.insert({a[i-1+m],i-1+m});
        }
        // cout<<"sum2 = "<<sum<<endl;


        while(sl.size()<k){
            sl.insert({sr.begin()->ff,sr.begin()->ss});
            sum+=sr.begin()->ff;
            sr.erase({sr.begin()->ff,sr.begin()->ss});
        }
        // cout<<"sum3 = "<<sum<<endl;

        while(sl.size()>k){
            sum-=sl.rbegin()->first;
            sr.insert({sl.rbegin()->ff,sl.rbegin()->ss});
            sl.erase({sl.rbegin()->ff,sl.rbegin()->ss});
        }
        // cout<<"sum4 = "<<sum<<endl;

        // cout<<"sl = ";
        // for(auto i:sl)cout<<i.ff<<' '<<i.ss<<endl;
        // cout<<endl;
        // cout<<"sr = ";
        // for(auto i:sr)cout<<i.ff<<' '<<i.ss<<endl;
        // cout<<endl;
        // cout<<"sum  = ";
        cout<<sum<<' ';
    }
}

int32_t main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
