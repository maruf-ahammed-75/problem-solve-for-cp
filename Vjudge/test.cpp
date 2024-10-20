/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e4 + 7;
void I_Am_Here(){
    int n;
    cin>>n;
    vector<int>a(n+1);
    int  mn = INT_MAX;
    int mx = -1;
    for(int j=1 ; j<=n ; j++){
        int i;
        cin>>i;
        a[j]=i;
        mx = max(mx,i);
        mn = min(mn,i);
    }
    // vector<int>maxx;
    // vector<int>minn;
    if(mx==mn){
        cout<<0<<endl;
    }
    else{
        int numberofmin=0,numberofmax=0;
        ll totalmin=0;
        ll totalmax=0;
        for(int i=1 ; i<=n ; i++){
            if(mx == a[i]){
                numberofmax++;
                totalmax+=i;
            }
            if(mn==a[i]){
                numberofmin++;
                totalmin+=i;
            }
        }
        // cout<<mx<<' '<<mn<<endl;
        // cout<<numberofmin<<' '<<totalmin<<endl;
        // cout<<numberofmax<<' '<<totalmax<<endl;
        
        if((numberofmax+numberofmin)==n){
            cout<<0<<endl;
        }
        // else{
        //     sort(a.begin(),a.end());
        //     if(numberofmin==1){
        //         cout<<abs(a[2]-a[n]);
                
        //     }
        //     else if(numberofmax==1){
        //         cout<<a[n-1]-a[1];
        //     }
        //     else{
        //         cout<<a[n]-a[1];
        //     }
        // }
        // cout<<endl;


    }
    
}
int main(){
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
    }
}