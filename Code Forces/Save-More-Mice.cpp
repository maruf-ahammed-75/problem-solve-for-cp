#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define pair pair<ll,ll>
#define full(x) x.begin(), x.end()
#define dec(x) fixed << setprecision(n)
using namespace std;

void brainfuck(){
    ll h,n;

    cin>>h>>n;
    ll a[n+1];
    for(int i=1;i<=n;++i) cin>>a[i];
	sort(a+1,a+n+1);

	int pos=0;
	int ans=0;
	while(n>=1 && pos<a[n]){
		ans++;
		pos+=(h-a[n]);
		n--;
	}

	cout<<ans<<'\n';
	return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) brainfuck();

    return 0;
}