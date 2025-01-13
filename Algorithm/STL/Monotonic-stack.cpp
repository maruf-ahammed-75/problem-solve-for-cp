#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// elements inside the stack are arranged in an increasing or decreasing
// order based on their arrival time
vector<int> nextSmallerElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> s;

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && nums[s.top()] > nums[i]) {
            result[s.top()] = nums[i];
            s.pop();
        }
        s.push(i);
    }
    return result;
}

int main() {
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> result = nextSmallerElement(nums);

    cout << "Next Smaller Elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
