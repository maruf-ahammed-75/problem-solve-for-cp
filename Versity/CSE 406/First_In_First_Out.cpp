#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0 ; i<n; i++){
        cin>>a[i];//input vector elements
    }
    int frame = 3;

    unordered_set<int> s;
    queue<int> q;
    int page_faults = 0;
    for(int i=0 ; i< n; i++){
        cout<<a[i]<<" = ";
        
       if(q.size()==frame){
            if(s.find(a[i])==s.end()){
                s.erase(q.front());//remove the first element from the queue
                q.pop();//pop the first element from the queue
                s.insert(a[i]);//insert the new element into the set
                q.push(a[i]);//push the new element into the queue
                page_faults++;
            }
            else{
                cout<<"all Ready in the frame"<<endl;
                continue;
            }
            queue<int> print = q;
            while (!print.empty()){
                cout<<print.front()<<" ";//print the queue elements
                print.pop();//pop the first element from the queue
            }
            cout<<endl;
       }
       else{
            q.push(a[i]);  
            s.insert(a[i]);  
            page_faults++;
            queue<int> print = q;
            while (!print.empty()){
                cout<<print.front()<<" ";//print the queue elements
                print.pop();//pop the first element from the queue
            }
            cout<<endl;
       }
       
    }
    cout<<"Total page faults: "<<page_faults<<endl;//print total page faults

    return 0;
}