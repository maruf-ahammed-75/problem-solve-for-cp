#include<bits/stdc++.h>
using namespace std;

const int N = int(2e5) + 99;
const int INF = int(1e9) + 99;

int tc;
string s, t;
int nxt[N][26];

int main() {
    cin >> tc;
    while(tc--){
        cin >> s >> t;
        for(int i = 0; i < s.size() + 5; ++i)
            for(int j = 0; j < 26; ++j)
                nxt[i][j] = -1;
    	
        for(int i = int(s.size()) - 1; i >= 0; --i){
            for(int j = 0; j < 26; ++j)
                nxt[i][j] = nxt[i + 1][j];
            nxt[i][s[i] - 'a'] = i;
        }
        for(int i=0 ; i<s.size() ; i++){
            for(int j = 0; j < 26; ++j)cout<<nxt[i][j]<<' ';
            cout<<endl;
        }    
    
        int res = 1, pos = 0;
        for(int i = 0; i < t.size(); ++i){
            if(pos == s.size()){
                pos = 0;
                ++res;
            }
            if(nxt[pos][t[i] - 'a'] == INF){
                pos = 0; 
                ++res;
    		}
    		if(nxt[pos][t[i] - 'a'] == INF && pos == 0){
                res = INF;
                break;
            }    
            pos = nxt[pos][t[i] - 'a'] + 1;
            
        }
    
        if(res >= INF) cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}