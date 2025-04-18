#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;//vector size n
    vector<int> a(n);
    vector<int> left, right;

    int head = 0, total_distance = 0;
    cin>> head;//initial head position

    for(int i = 0; i < n; i++) {
        cin >> a[i];//input vector elements
        if(a[i] < head) {
            left.push_back(a[i]);//store elements less than head in left vector
        } else {
            right.push_back(a[i]);//store elements greater than or equal to head in right vector
        }
    }
    sort(left.rbegin(), left.rend());//sort left vector in descending order
    sort(right.begin(), right.end());//sort right vector in ascending order
    left.push_back(0);
    for(int i=0 ; i<left.size(); i++){
        total_distance += abs(left[i]-head);//calculate total distance
        head = left[i];//update head position
        cout << " -> " << head;//print path
    }
    for(int i=0 ; i<right.size(); i++){
        total_distance += abs(right[i]-head);//calculate total distance
        head = right[i];//update head position
        cout << " -> " << head;//print path
    }
    cout<<endl;

    cout << "Total distance: " << total_distance << endl;//print total distance
    cout << "Average distance: " << (float)total_distance/n << endl;//print average distance
    return 0;
}