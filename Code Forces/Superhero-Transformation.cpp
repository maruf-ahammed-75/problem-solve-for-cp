#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define full(a) a.begin(),a.end()
using namespace std;
void I_Am_Here() {
    string a,b;
    cin>>a>>b;
    // cout<<a.size()<<' '<<b.size()<<endl;
    if(a.size() != b.size()){
        cout<<"No\n";
        return;
    }
    else{
        for(int i=0 ; i<a.size() ; i++){
            if(a[i]!=b[i]){
                if( (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')  ){
                    if((b[i]!='a' && b[i]!='e' && b[i]!='i' && b[i]!='o' && b[i]!='u')){
                        // cout<<"1"<<endl;
                        cout<<"No"<<endl;
                        return;
                    }
                }
                if( (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')  ){
                    if((a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u')){
                        // cout<<"1"<<endl;
                        cout<<"No"<<endl;
                        return;
                    }
                }

                
            }
        }
    }
    cout<<"Yes\n";

}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t=1;
    // cin>>t;
    while (t--) {
        I_Am_Here();
    }
    return 0;
}
////