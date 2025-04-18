#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;//vector size n
    vector<pair<int,int>> a(n);

    int head = 0, total_distance = 0;
    cin>> head;//initial head position

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;//input vector elements
        a[i].first = abs(x-head);//store vector elements in pair
        a[i].second = x;//store vector elements in pair
    }
    sort(a.begin(), a.end());//sort the vector based on first element of pair

    cout << "Path: " << head;

    for(int i=0 ; i<n ; i++){
        total_distance += abs(a[i].second-head);//calculate total distance
        head = a[i].second;//update head position
        cout << " -> " << head;//print path
    }
    cout<<endl;
    
    cout << "Total distance: " << total_distance << endl;//print total distance
    cout << "Average distance: " << (float)total_distance/n << endl;//print average distance
    return 0;
}