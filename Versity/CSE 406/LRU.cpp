#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;//vector size n
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];//input vector elements
    }
    int frame = 3;
    int page_faults = 0;

    unordered_set<int> s;
    unordered_map<int, int> m;

    queue<int> q;
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" = ";
        if(s.find(a[i]) == s.end()){
            if(s.size() == 3){
                int lru = INT_MAX;
                int val;
               for(auto i:s){
                    if(lru>m[i]){
                        lru = m[i];//find the least recently used page
                        val = i;//store the value of the least recently used page
                    }
               }
               s.erase(val);//remove the least recently used page from the set
            }
            s.insert(a[i]);//insert the new page into the set
            page_faults++;//increment the page fault count
        }
        else{
            m[a[i]]=i;
            cout<<"all Ready in the frame"<<endl;//page is already in the frame
            continue;
        }
        m[a[i]]=i;
        for(auto i:s){
            cout<<i<<" ";//print the pages in the frame
        }
        cout<<endl;
    }
    cout<<"Total page faults: "<<page_faults<<endl;//print total page faults

    return 0;
}