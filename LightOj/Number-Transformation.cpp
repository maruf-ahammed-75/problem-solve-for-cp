
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1001;

int S,T;
vector<int>prime_factor[N];

int bfs(int s){
    int dist[1001];
    memset(dist, -1, sizeof(dist));
    dist[S] = 0;
    queue < int > q;
    q.push(S);
    int from, to;
    
    while( !q.empty() ){
        from = q.front();
        q.pop();
        for(int i : prime_factor[from] ){
            to = from + i;
            if( to <= T && dist[to] == -1 ) {
                q.push(to);
                dist[to] = dist[from] + 1;
                if( to  == T) return dist[T];
            }
        }
    }
    return dist[T];
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
    cin>>S>>T;
   
    cout<< bfs(S)<<endl;
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

