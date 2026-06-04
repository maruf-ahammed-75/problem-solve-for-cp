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
    int n;
    cin>>n;
    vector<int>b(n),a;
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }

    for(int i=n-1 ; i>=0 ; i--){
        if(a.size()==0 && b[i]<0)continue;
        a.push_back(b[i]);
    }
    n = a.size();

    if(n==0){
        cout<<"0\n\n";
        return;
    }
    reverse(full(a));
    


    int sum =0;
    for(int i=0 ; i<n ; i++){
        if(a[i]>0)sum+=a[i];
    }
    vector<int>ans;
    vector<int>prefix(n,0),suffix(n,0);
    if(a[0]<0)prefix[0] = abs(a[0]);
    if(a[n-1]<0)suffix[n-1] = abs(a[n-1]);

    for(int i=1,j=n-2 ; i<n ; i++,j--){
        if(a[i]<0){
            prefix[i]+=abs(a[i]) + prefix[i-1];
        }
        else{
            prefix[i]+=prefix[i-1];
        }
        if(a[j]<0){
            suffix[j]+=abs(a[j]) + suffix[j+1];
        }
        else{
            suffix[j]+=suffix[j+1];
        }

    }

    int total = 0;

    // cout<<"prefix\n";
    // for(int i=0 ; i<n ; i++){
    //     cout<<prefix[i]<<" ";
    // }
    // cout<<"\n";
    // cout<<"suffix\n";
    // for(int i=0 ; i<n ; i++){
    //     cout<<suffix[i]<<" ";
    // }
    // cout<<"\n";

    int in = -1;

    for(int i=n-1 ; i>=0 ; i--){
        if(a[i]>0){
            int x = sum - a[i] + prefix[i];
            // cout<<a[i]<<' '<<x<<endl;
            if(x>total && x>sum){
                total = x;
                in = i; 
            }
        }
    }

    // cout<<in<<endl;

    if(in==-1){
        cout<<"0\n\n";
        return;
    }

    bool flag=1;

    

    for(int i=in-1 ; i>=0 ; i--){
        if(a[i]>0 && flag)ans.push_back(i+1),flag=0;
        if(a[i]<0 && !flag)ans.push_back(i+1),flag=1;
    }
    ans.push_back(in+1);
    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<"\n";
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