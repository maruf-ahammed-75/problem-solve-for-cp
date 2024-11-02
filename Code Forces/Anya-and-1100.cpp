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
bool check(string &s , int pos){
    // cout<<"pos = "<<pos<<' '<<s.substr(pos,4)<<endl;
    if( pos < 0 || pos+3 >= s.size()){
        return false;
    }
    return s.substr(pos,4)=="1100";
}

void I_Am_Here(){
    string s;
    cin>>s;
    int total=0;
   
    for(int i=0 ; i<s.size()-3 ; i++){
        
        if(check(s,i)){
            total++;
        }
    }
    int q;
    cin>>q;
    for(int i=0 ; i<q ; i++){
        int x;
        char y;
        cin>>x>>y;
        x--;
        // cout<<x<<' ';
        // cout<<"before change\n";
        for(int j = max(0, x - 3); j <= min((int)s.size() - 1, x + 3); j++){
            if(check(s,j)){
                total--;
            }
        }
        // cout<<"change\n";
        s[x]=y;
        for (int j = max(0, x - 3); j <= min((int)s.size() - 1, x + 3); j++){
            if(check(s,j)){
                total++;
            }
        }
        if(total){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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