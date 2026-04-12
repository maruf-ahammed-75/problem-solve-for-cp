#include <bits/stdc++.h>
#define int long long
using namespace std;
const long long inf = INT_MAX;

struct stree{
  
  vector<int>v;
  vector<int>st;
  int n;
  
  stree(std::vector<int>&a ){
      v = a;
      n = a.size();
      st = vector<int>(4*n,inf);
      
      build(1,0,n-1);
  }  
  
  int marge(int x,int y){
      return min(x,y);
  }
  
  void build(int node , int tl, int tr){
      if(tl>tr)return;
      if(tl == tr){
          st[node] = v[tl];
          return;
      }
      
      int mid = (tr+tl)/2;
      
      build(node*2 , tl , mid);
      build(node*2 +1 , mid+1 , tr);
      st[node] = marge(st[node*2] , st[node*2 + 1]);
  }
  
  void update(int id,int val){
      update(1,0,n-1,id,val);
  }
  
  void update(int u,int tl , int tr , int id , int val){
      if(tl>id || tr<id)return;
      if(tl == tr){
          st[u] = val;
          return;
      }
      
      int mid = (tr+tl)/2;
      update(u*2 , tl , mid , id , val);
      update(u*2+1, mid+1, tr, id, val);
      st[u] = marge(st[u*2] , st[u*2 + 1]);
  }
  
  int query(int l, int r){
      return query(1,0,n-1,l,r);
  }
  
  int query(int u , int tl, int tr, int l,int r){
      if (tl > tr) return inf;
      if (l > r) return inf;
      if (tr < l || tl > r) return inf;
      if(tl>=l && tr<=r)return st[u];
      
      int mid = (tr+tl)/2;
      
      int lc = query(u*2 , tl, mid , l , r);
      int rc = query(u*2+1 , mid+1 , tr , l , r);
      return marge(lc,rc);
  }
};















