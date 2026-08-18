// Write a code to delete the middle element of a stack without using any additional data structure while preserving the original order. (only stack will be given, you can use additional variables but no extra array or something like that) Input: [1, 2, 3, 4, 5]
// Output: [1, 2, 4, 5]


#include<bits/stdc++.h>
using namespace std;

stack<int>s;

//defination = kono element payle pop hobe last a giea push hobe 
// middle element payle only pop hobe
void deletemid(int cur){
    cout<<"cur: "<<cur<<endl;
    if(cur == 5/2 + 1){
        s.pop();
        return;
    }
    int x = s.top();
    s.pop();
    deletemid(cur+1);
    s.push(x);
}

int main(){
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<s.size()<<endl;
    deletemid(1);
    cout<<s.size()<<endl;

    for(int i=0; i<5 ; i++){
        cout<<s.top()<<" ";
        s.pop();
    }
}