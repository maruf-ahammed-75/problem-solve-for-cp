// playlist 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void I_Am_Here() {
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i].second>>a[i].first;
    }
    sort(a.begin(),a.end());
    // cout<<endl;
    // for(int i=0 ; i<n ; i++){
    //     cout<<a[i].first<<' '<<a[i].second<<endl;
    // }
    ll ans = -1;
    priority_queue<int, vector<int>, greater<int>> q;
    // cout<<"working\n";
    ll sum=0;
    for(int i=n-1 ; i>=0 ; i--){
        if(q.size()==k){
            sum-=q.top();
            q.pop();
        }
        sum+=a[i].second;
        q.push(a[i].second);
        ans = max(ans,(sum*a[i].first));
    }
    cout<<ans<<endl;

}

int main() {
    int ts = 1;
    // cin >> ts;
    for (int xyz = 1; xyz <= ts; xyz++) {
        // cout << "Case " << xyz << ": ";
        I_Am_Here();
    }
    return 0;
}