#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;//vector size n
    vector<int> a(n);
    vector<int> left, right;
    int disk_size = 200;
    int head = 0;
    cin>> head;//initial head position

    for(int i = 0; i < n; i++) {
        cin >> a[i];//input vector elements
        if(a[i] < head) {
            left.push_back(a[i]);//store elements less than head in left vector
        } else {
            right.push_back(a[i]);//store elements greater than or equal to head in right vector
        }
    }
    left.push_back(0);
    right.push_back(disk_size-1);//add 0 and 199 to left and right vector respectively
    
    sort(left.begin(), left.end());//sort left vector in descending order
    sort(right.begin(), right.end());//sort right vector in ascending order
    
    cout << "Path: " << head;//print initial head position
    
    for(int i=0 ; i<right.size(); i++){
        head = right[i];//update head position
        cout << " -> " << head;//print path
    }
    for(int i=0 ; i<left.size(); i++){
        head = left[i];//update head position
        cout << " -> " << head;//print path
    }
    cout<<endl;

    return 0;
}