#include <bits/stdc++.h>
#define ll long long
#define int long long
#define ff first
#define ss second
#define full(a) a.begin(), a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void margesort(vector<int>&a, int l, int r){

    if(l>=r)return;

    int mid = (l+r)/2;
    margesort(a,l,mid);
    margesort(a,mid+1,r);

    vector<int>temp;
    int lll = l;
    int rr = mid+1;
    while(temp.size() != r-l+1){
        if((a[lll]<a[rr] || rr>r) && lll<=mid){
            temp.push_back(a[lll]);
            lll++;
        }
        else{
            temp.push_back(a[rr]);
            rr++;
        }
    }
    for (int i = 0; i < temp.size(); i++) {
        a[l+i] = temp[i];
    }
    
}
void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)cin>>a[i];
    margesort(a,0,n-1);
    for(int i=0 ; i<n ; i++)cout<<a[i]<<" ";
    cout<<endl;


}
 
int32_t main() {

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++) {
        I_Am_Here();
    }
    return 0;
}