#include<iostream>
#include<vector>
#include<cassert>
using namespace std;
int N;
int A[2<<17];
vector<int>G[2<<17];
long long ans[2<<17];
void dfs(int u,int p,long long sum,long long x,long long y)
{
	sum=A[u]-sum;
	ans[u]=sum+x;
	for(int v:G[u])if(v!=p)dfs(v,u,sum,max(y,sum),x);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;cin>>T;
	for(;T--;)
	{
		cin>>N;
		for(int i=0;i<N;i++)cin>>A[i],G[i].clear();
		for(int i=1;i<N;i++)
		{
			int u,v;cin>>u>>v;u--,v--;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		dfs(0,-1,0,0,0);
		for(int i=0;i<N;i++)cout<<ans[i]<<(i+1==N?"\n":" ");
	}
}