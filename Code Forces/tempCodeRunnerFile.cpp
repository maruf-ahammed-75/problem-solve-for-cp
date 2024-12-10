#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;
void I_Am_Here() {
    string s;
    cin>>s;
    vector<int>a[10];
    for(int i=0 ; i<s.size() ; i++){
        a[(s[i]-'0')].push_back(i);
    }
    // for(int i=0 ; i<10 ; i++){
    //     cout<<i<<" = ";
    //     for(auto j:a[i]){
    //         cout<<j<<' ';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    string b="";
    int ind=0;
    int m;
    int index;
    for(int j=0 ;j<s.size() ; j++){
        ind=0;
        ll mx = INT_MIN;
        bool f=0;
        for(int i=2 ; i<=9 ; i++){
            if(!a[i].empty()){
                // cout<<i<<" = ";
                int move = a[i][0]-j;
                // cout<<a[i][0]<<' '<<j<<' '<<move<<endl;
                if(move>=0){
                    m = i-move;
                    // cout<<"m = "<<m<<endl;
                    if(m>0){
                        if(mx<m){
                            f=1;
                            mx = m;
                            ind=i;
                            index=a[i][0];
                            // cout<<"mx="<<mx<<"  ind="<<ind<<endl;
                        }
                    }
                }
            }
            // cout<<endl;
        }
        // cout<<"max ind = "<<mx<<' '<<ind<<endl;
        
        if(f){
            for(int k=0 ; k<10 ; k++){
                
                for(auto &y:a[k] ){
                        if(!a[k].empty() && index>y){
                            y++;
                        }   
                        else break;
                }       
            }
        }
        if(!a[ind].empty() && f){
            
            b+=(mx+'0');
            a[ind].erase(a[ind].begin());
        }
        else{
           
            for(int x=0 ; x<10 ; x++){
                if(!a[x].empty())if(a[x][0]==j ){
                    a[x].erase(a[x].begin());
                    b+=(x+'0');
                    break;
                }
            }
        }
        // cout<<"b = "<<b<<endl;
        // for(int k=0 ; k<=9 ; k++){
        //     if(!a[k].empty()){
        //         cout<<k<<"= ";
        //         for(auto l:a[k]){
        //             cout<<l<<' ';
        //         }
        //         cout<<endl;
        //      }
        // }
    }
    for(int i=0 ; i<10 ; i++){
        for(auto j:a[i]){b+=(i+'0');}
    }
    cout<<b<<endl;

    
}

int main() {    
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
