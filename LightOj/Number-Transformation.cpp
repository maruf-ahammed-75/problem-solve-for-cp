
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1001;

int n,m;
vector<int>prime_factor[N];

int bfs(int s){

}




//test is Prime or not
//given value n
bool isPrime(int n){
    if(n<=2)return true;
    if(n%2==0)return false;
    for(int i=3 ; i*i<=n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

//find prime factor each numbr
void primeFactor(int n){
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            if(isPrime(i)){
                prime_factor[n].push_back(i);
            }
            if(isPrime(n/i)){
                prime_factor[n].push_back(n/i);
            }
        }
    }

}
void I_Am_Here(){
    int n,m;
    cin>>n>>m;
   
    cout<< bfs(n)<<endl;
}


int main(){
    for(int i=2; i<1001 ; i++){
        primeFactor(i);
    }

    int ts=1;
    cin>>ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        cout<<"Case "<<xyz<<": ";
        I_Am_Here();
    }
}

