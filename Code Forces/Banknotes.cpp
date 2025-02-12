#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
// Fast Exponentiation (without modulo)
long long fast_pow(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)  // If exp is odd
            result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}

void I_Am_Here(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        // a[i] = pow(10,a[i]);
    }
    vector<int>note(n,0);
    for(int i=0 ; i<n-1 ; i++){
        note[i] = fast_pow(10,abs(a[i]-a[i+1]))-1;
        // cout<<note[i]<<' ';
    }
    for(int i=0 ; i<n ; i++){
        a[i] = fast_pow(10,a[i]);
    }
    note[n-1]=1e10;
    int i=0;
    int total=0;
    int temp=k;
    while ((temp>0)){
        if(temp>=note[i]){
            // cout<<temp<<' ';
            total += (a[i] * note[i]);
            temp-=note[i];
           
            // cout<<a[i]<<' '<<note[i]<<' '<<total<<endl;
        }
        else{
            // cout<<temp<<' ';
            total +=(a[i]*temp);
            // cout<<a[i]<<' '<<note[i]<<' '<<total<<endl;
            break;
        }
        i++;
    }

    // cout<<total<<endl;
    i=0;
    while(k>0){
        k-=note[i];
        i++;
    }
    // cout<<k<<' '<<i<<endl;
    if(k<0){
        cout<<total+a[i-1]<<endl;
    }
    else{
        cout<<total+a[i]<<endl;
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
