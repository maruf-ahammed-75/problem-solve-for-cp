#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;//vector size n
    vector<int> a(n);

    int head = 0, total_distance = 0;
    cin>> head;//initial head position

    

    for (int i = 0; i < n; i++) {
        cin >> a[i];//input vector elements
    }

    cout << "Path: " << head;

    for(int i=0 ; i<n ; i++){
        total_distance += abs(a[i]-head);//calculate total distance
        head = a[i];//update head position
        cout << " -> " << head;//print path
    }
    cout<<endl;
    cout << "Total distance: " << total_distance << endl;//print total distance
    cout << "Average distance: " << (float)total_distance/n << endl;//print average distance
    return 0;
}