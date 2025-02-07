#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first 
#define ss second
#define endl '\n'
using namespace std;
void Solve(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>a;
    ll sum=0;
    ll cal=0;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        if(x<m)a.push_back(x);
        else{
            cal++;
            sum+=x;
        }
    }
    if(sum==0){
        cout<<0<<endl;
        return;
    }
    sort(a.rbegin(),a.rend());
    // cout<<"sum = "<<sum <<"  cal = "<<cal<<endl;
    // for(int i=0 ; i<a.size() ; i++){
    //     cout<<a[i]<<' ';
    // }
    // cout<<endl;
    for(int i=0 ; i<a.size() ; i++){
        sum+=a[i];
        // cout<<sum<<endl;
        if((sum/(cal+1)) >=m){
            cal++;
        }
        else{
            break;
        }
    }
    cout<<cal<<endl;

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
