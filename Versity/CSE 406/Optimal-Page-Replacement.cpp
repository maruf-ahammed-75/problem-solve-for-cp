#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // Number of page references
    cin >> n;
    vector<int> a(n); // Page reference sequence

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int frame = 3; 
  
    unordered_set<int> s; // To store pages in the frame
    int page_faults = 0;


    for (int i = 0; i < n; i++) {
        cout << "Page " << a[i] << " = ";

        if (s.find(a[i]) == s.end()) {
            // If the frame is full
            if (s.size() == 3) {
                // Find the page to replace using the Optimal Page Replacement strategy
                int farthest = -1, val = -1;

                for (auto x : s ) {
                    // cout<<"set = "<<i<<endl;
                    int next_use = INT_MAX;
                    for (int j = i + 1; j < n; j++) {
                        if (a[j] == x) {
                            next_use = j;
                            break;
                        }
                    }
                    // cout<<"next_use = "<<next_use<<endl;
                    if (next_use > farthest) {
                        farthest = next_use;
                        val = x;
                    }
                }
                // cout<<"val = "<<val<<endl;
                // Remove the page that will not be used for the longest time
                s.erase(val);
            }
            // Add the current page to the frame
            s.insert(a[i]);
            page_faults++;
        } else {
            cout << "Already in the frame" << endl;
        }

        // Print the current frame
        for (auto it : s) {
            cout << it << " ";
        }
        cout << endl;
    }

    cout << "Total page faults: " << page_faults << endl;

    return 0;
}