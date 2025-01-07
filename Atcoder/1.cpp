
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define endl "\n"

void inthe_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


int32_t main(){
    inthe_code();
    int n,m,k;
    cin>>n>>m>>k;
    std::vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // if(k==m){
        
    // }
    vector<int>d;
    for(int i=0;i<m;i++){
        d.push_back(v[i]);
    }
    multiset<int>s1,s2;
    sort(d.begin(),d.end());
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=d[i];
        s1.insert(d[i]);
    }
    for(int i=k;i<m;i++){
        s2.insert(d[i]);
    }
    cout<<sum<<" ";
    if(k==m){
        for(int i=1;i<n-m+1;i++){
            // s1.erase(s1.find(v[i-1]));
            sum-=v[i-1];
            sum+=v[i+m-1];
            cout<<sum<<" ";
        }
        return 0;
    }
    for(int i=1;i<n-m+1;i++){
        // v[i-1] nikalo and v[i] daalo
        if(s2.find(v[i-1])!=s2.end()){
            s2.erase(s2.find(v[i-1]));
            auto it=s1.end();
            it--;
            if(*it<=v[i+m-1]){
                s2.insert(v[i+m-1]);
                cout<<sum<<" ";
            }
            else{
                sum-=(*it);
                sum+=v[i+m-1];
                cout<<sum<<" ";
                int num=(*it);
                s1.erase(it);
                s1.insert(v[i+m-1]);
                s2.insert(num);
            }
        }
        else{
            s1.erase(s1.find(v[i-1]));
            sum-=v[i-1];
            auto it=s2.begin();
            if(*it>=v[i+m-1]){
                s1.insert(v[i+m-1]);
                sum+=v[i+m-1];
                cout<<sum<<" ";
            }
            else{
                // *it<v[i]
                int num=*it;
                s1.insert(num);
                sum+=num;
                cout<<sum<<" ";
                s2.erase(it);
                s2.insert(v[i+m-1]);
            }
        }
    }
}