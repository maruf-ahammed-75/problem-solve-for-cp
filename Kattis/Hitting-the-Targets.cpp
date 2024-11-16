#include <bits/stdc++.h>
using namespace std;

#define ll long long int

const ll MOD = 1e9+7;

#define NEED_FOR_SPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// const ll x = 1e6+7;
bool dis(int x1,int y1,int r,int x2,int y2){
    double x11=x1,y11=y1,x22=x2,y22=y2,r11=r;
    double distance = sqrt((x11-x22)*(x11-x22) + (y11-y22)*(y11-y22));
    return distance<=r11;
}
bool inside(int x1,int y1,int x2,int y2,int a,int b){
    return (x1<=a && x2>=a) && (y1<=b && y2>=b);
}

void solve(){
    vector<int>c[100];
    vector<int>r[100];
    int n;
    cin>>n;
    int first=0;
    int second=0;
    for(int i=0 ; i<n ; i++){
        string s;
        cin>>s;

        if(s=="rectangle"){
            int x1,x2,y1,y2;
            cin>>x1>>y1>>x2>>y2;
            r[first].push_back(x1);
            r[first].push_back(y1);
            r[first].push_back(x2);
            r[first].push_back(y2);
            first++;
        }
        else{
            int a,b,r;
            cin>>a>>b>>r;
            c[second].push_back(a);
            c[second].push_back(b);
            c[second].push_back(r);
            second++;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        int ans=0;
        for(int i=0 ; i<first ; i++){
            if(inside(r[i][0],r[i][1],r[i][2],r[i][3],x,y)){
                ans++;
            }
        }
        for(int i=0 ; i<second ; i++){
            if(dis(c[i][0],c[i][1],c[i][2],x,y))ans++;
        }
        cout<<ans<<endl;
    }
    
}

int32_t main()
{
    NEED_FOR_SPEED;
    // seive();
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}