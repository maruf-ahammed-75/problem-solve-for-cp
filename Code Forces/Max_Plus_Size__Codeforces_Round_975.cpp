// Max_Plus_Size__Codeforces_Round_975.cpp

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void IAmHere(){
    int n ;
    cin>>n;
    vector<int>a(n);
    int mx = INT_MIN;
    for(auto &i :a){
        cin>>i;
        mx  = max(i,mx);
    }
    int in = -1;
    bool flag =0;
    for(int i=0 ; i<n ; i++){
        if(mx == a[i]){
            if(i%2==0){
                flag =1 ;
            }
        }
    }
    if(flag || n%2==0){
        cout<<mx + (n+1)/2;
    }
    else{
        cout<<mx + (n)/2;
    }
    cout<<endl;
}
int main(){
    // freopen("div7.in", "r", stdin);
    // freopen("div7.out", "w", stdout);
    int T=1;
    cin>>T;
    for(int TT=1 ; TT<=T ; TT++){
        IAmHere();
    }
    
}