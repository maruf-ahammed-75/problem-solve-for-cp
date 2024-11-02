/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
//#define pb push_back
//#define mp make_pair
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define full(x) x.begin(), x.end()

using namespace std;


void I_Am_Here(){
    string a;
    cin>>a;
    a = "000"+a;
    bool f=0;
    map<int,int>m;
    for(int i=0 ; i<a.size() ; i++){
        string s = "";
        s = a[i]+a[i+1]+a[i+2]+a[i+3];
        if(s == "1100"){
            f=1;
            m[i]=1;
        }
    }
    for(auto i:m){
        cout<<i.ff<<' '<<i.ss<<endl;
    }
    int q;
    cin>>q;
    while(q--){

    }
}
int main(){

    int ts=1;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}