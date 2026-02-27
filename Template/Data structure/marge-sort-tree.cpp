// Mergesort Tree - Time <O(nlogn), O(logˆ2n)> - Memory O(nlogn>
// Mergesort Tree is a segment tree that stores the sorted subarray
// on each node.
//0-based indexing
struct Marge_Sort{
    int n;
    vector<vector<int>> tree;
    Marge_Sort(vector<int>& arr){
        n = arr.size();
        tree = vector<vector<int>>(4 * n);
        build(arr, 1, 0, n - 1);
    }
    
    void build(vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = {arr[start]};
            return;
        }

        int mid = (start + end) / 2;
        build(arr, node * 2, start, mid);
        build(arr, node * 2 + 1, mid + 1, end);

        // Merge two sorted halves
        merge(tree[node * 2].begin(), tree[node * 2].end(),tree[node * 2 + 1].begin(), 
            tree[node * 2 + 1].end(),back_inserter(tree[node]));
    }
    
    //query
    int rangeQuery(int l, int r, int k) {
        return query(1, 0, n - 1, l, r, k);
    }
    
    // Count numbers <= k in range [l, r]
    int query(int node, int start, int end, int l, int r, int k) {
        if (r < start || end < l)
            return 0;

        if (l <= start && end <= r) {
            return upper_bound(tree[node].begin(),
                               tree[node].end(), k)
                   - tree[node].begin();
        }

        int mid = (start + end) / 2;
        return query(node * 2, start, mid, l, r, k) +
               query(node * 2 + 1, mid + 1, end, l, r, k);
    }
};