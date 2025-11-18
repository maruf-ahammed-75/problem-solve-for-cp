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

struct item{
    int val,idx;
};

struct MinCmp {
    bool operator()(const item &a, const item &b) const {
        if (a.val != b.val) return a.val > b.val; // min-heap by val
        return a.idx > b.idx; // stable tie-breaker by index
    }
};

void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // int sum=0;
    // int mxval = max_element(full(a)) - a.begin();
    // for(int i=0 ; i<n ; i++){
    //     sum+=max(a[i],a[(i+1)%n]);
    // }
    // cout<<sum - a[mxval]<<endl;

    //-----------another approech----------

    vector<int>left(n),right(n);
    for(int i=0 ; i<n ; i++){
        left[i] = (i-1+n)%n;
        right[i] = (i+1)%n;
    }

    priority_queue<item, vector<item>, MinCmp> pq_min;

    for(int i=0 ; i<n ; i++){
        pq_min.push({a[i],i});
    }
    // while(!pq_min.empty()){
    //     auto i = pq_min.top();
    //     pq_min.pop();
    //     cout<<i.val<<" "<<i.idx<<endl;
    // }

    vector<bool>deleted(n,false);
    int sum=0;
    int remain = n;

    while(remain>1 && !pq_min.empty()){
        item it = pq_min.top();
        pq_min.pop();
        int id = it.idx;
        int val = it.val;

        if(deleted[id]) continue;

        int l = left[id];
        int r = right[id];

        sum += min(a[l], a[r]);
        remain--;

        deleted[id] = true;

        right[l] = r;
        left[r] = l;
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