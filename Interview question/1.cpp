// Given an array, what will be the base address if we print the array name

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6] = {1, 2, 3, 4, 5, 6};
    cout<<a<<endl;
    cout<<&a[0]<<endl;
}