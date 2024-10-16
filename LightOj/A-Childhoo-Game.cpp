// A Childhood Game


#include<bits/stdc++.h>
#define ll long long
using namespace std;
void IAmHere(){
    ll n;
    string s;
    cin>>n>>s;
    if(s=="Alice"){
        if(n%3==1){
            cout<<"Bob";
        }
        else{
            cout<<"Alice";
        }
    }
    else{
        if(n%3){
            cout<<"Bob";
        }
        else{
            cout<<"Alice";
        }
    }
    cout<<endl;
}
int main(){
    // freopen("div7.in", "r", stdin);
	// freopen("div7.out", "w", stdout);
    int T=1;
    cin>>T;
    for(int TT=1 ; TT<=T ; TT++){
        cout<<"Case "<<TT<<": ";
        IAmHere();
    }
    
}