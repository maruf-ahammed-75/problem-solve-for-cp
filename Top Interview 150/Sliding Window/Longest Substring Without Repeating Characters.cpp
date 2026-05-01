class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string a = s;
        int n = s.size();
        int i=0,j=0;
        int ans = 0;
        map<char,int>m;
        int total=0;
        for(int i=0 ; i<n ; i++){
            cout<<a[i]<<' ';
            if(m[a[i]]==0){
                m[a[i]]++;
                total++;
                ans = max(ans,total);
            }
            else{
                while(m[a[i]]!=0){
                    m[a[j]]--;
                    j++;
                    total--;
                }
                m[a[i]]++;
                total++;
                ans = max(ans,total);
            }
            cout<<total<<endl;
        }
        return ans;
    }
};