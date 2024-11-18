#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>a[10001];
vector<int>b;
void calDivisor(){
    int count;
    for(int i=1 ; i<=1000 ; i++){
        count =0;
        for(int j=1 ; j*j<=i ; j++){
            if(i%j==0){
                count++;
                if(i/j!=j) count++;
            }
        }
        a[count].push_back(i);
    }
    for(int i=1 ; i<1000 ; i++){
        for(int j=a[i].size()-1 ; j>=0 ; j--){
            b.push_back(a[i][j]);
        }
    }
}
void I_Am_Here(int xyz){
    int n;
    cin>>n;
    cout<<"Case "<<xyz<<": "<<b[n-1]<<endl;
}
int main(){
    calDivisor();
    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here(xyz);
    }
}   