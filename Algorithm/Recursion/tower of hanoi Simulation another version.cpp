//trust most important
#include<bits/stdc++.h>
using namespace std;
void toh(int n,int t1,int t2,int t3){
    if(n==0)return;
    toh(n-1,t1,t2,t3);
    cout<<"move = "<<n<<" from "<<t1<<" to "<<t2<<endl;
    toh(n-1,t3,t2,t1);
    cout<<"move = "<<n<<" from "<<t2<<" to "<<t3<<endl;
    toh(n-1,t1,t2,t3);
}
int main(){
    toh(3,1,2,3);
}