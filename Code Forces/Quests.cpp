#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int d,c;

bool possible(int k,vector<int>a){
    if(k==0){
        return((a[0]*d)>=c);
    }
    int sum=0;
    if(k>=n){
        for(int i=0 ; i<n ; i++){
            sum+=a[i];
        }
        // cout<<"first = "<<sum<<endl;
    }
    if(k<n){
        for(int i=0 ; i<k ; i++){
            sum+=a[i];
        }
        // cout<<"second = "<<sum<<endl;
    }
    int time = d/k;
    // cout<<"time = "<<time<<endl;
    int gain = (sum*time);
    time = d%k;

    for(int i=0 ; i<min(time,n) ; i++){
        gain+=a[i];
    }
    return gain>=c;
}
int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        cin>>n>>c>>d;
        vector<int>a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        int sum=0;
        // cout<<"start = "<<endl;
        for(int i=0 ; i<min(n,d) ;i++){
            sum+=a[i];
            // cout<<a[i]<<' '<<sum<<endl;
        }
        // cout<<sum<<endl;
        if(sum>=c){
            cout<<"Infinity\n";
            continue;
        }
        if((a[0]*d)<c){
            cout<<"Impossible\n";
            continue;
        }
        int l=-1,r=1e18;
        int ans=0;
        int i=0;
        while(l<r){
            i++;
            int m = (l+r)/2;
            if(possible(m+1,a)){
                // cout<<"1 = ";
                ans=m;
                l=m;
            }
            else{
                // cout<<"0 = ";
                r=m;
            }
            // cout<<l<<' '<<r<<' '<<ans<<endl;
            if(i==100)break;
        }
        cout<<ans<<endl;
    }
}