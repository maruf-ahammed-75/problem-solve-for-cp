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
    int k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin>>  a[i];
        b[i] = a[i];
    }
    sort(full(b));
    if(b[0]==b[n-1] && b[0]==0){
        cout<<"Yes"<<endl;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='0'){
                a[i] = k;
                break;
            }
        }
        for(int i=0 ; i<n ; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
        
    int max_sum = INT_MIN;
    int current_sum = 0;
    int in = 0;
    for (int i = 0; i < a.size(); ++i) {
        if(s[i]=='0')continue;
        current_sum = max(a[i], current_sum + a[i]);
        if(current_sum>max_sum) {
            max_sum = current_sum;
            in = i;
        }
    }
    // cout<<max_sum<<" "<<in<<endl;
    bool flag = false;
    int sum=0;
    if(max_sum >k){
        int i=in;
        while(i>=0){
            sum+=a[i];
            if(sum>k){
                cout<<"No"<<endl;
                return;
            }
            if(s[i]=='0'){
                flag=true;
                a[i] = -(max_sum-k);
                break;
            }
            i--;
        }
    }
    else{
        ll need = k - max_sum;
        ll sum=0;
        for(int i=in ; i>=0 ; i--){
            // if(a[i]<0){
            //     need+=abs(a[i]);
            // }
            if(s[i]=='0'){
                a[i] = need;
                flag=true;
                break;
            }
            sum+=a[i];
            if(sum==max_sum){
                for(int j=i-1 ; j>=0 ; j--){
                    if(a[j]<0){
                        need+=abs(a[j]);
                    }
                    if(s[j]=='0'){
                        a[j] = need;
                        flag=true;
                        break;
                    }
                }
                break;
            }
        }
        if(!flag){
            for(int i=in+1 ; i<n ; i++){
                if(a[i]<0){
                    need+=abs(a[i]);
                }
                if(s[i]=='0'){
                    flag=true;
                    a[i] = need;
                    break;
                }
            }
        }
    }






     max_sum = INT_MIN;
     current_sum = 0;
     in = 0;
    for (int i = 0; i < a.size(); ++i) {
        
        current_sum = max(a[i], current_sum + a[i]);
        if(current_sum>max_sum) {
            max_sum = current_sum;
            in = i;
        }
    }
    // cout<<max_sum<<" "<<in<<endl;
     flag = false;
    if(max_sum >k){
        for(int i=in+1 ; i<n ; i++){
            if(s[i]=='0' && a[i]==0){
                flag=true;
                a[i] = -(max_sum-k);
                break;
            }
        }
    }




    if(flag){
        cout<<"Yes"<<endl;
        for(int i=0 ; i<n ; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"No"<<endl;
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