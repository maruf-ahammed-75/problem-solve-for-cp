int connected_components;
int maximum_size;
struct DSU {  
vector<int> parent, component_size,rank;
    // O(N)
    DSU(int _n) {
        connected_components = _n;
        maximum_size = 1;
        parent = vector<int>(_n);
        component_size = vector<int>(_n);
        rank = vector<int>(_n);
        for(int i = 0; i < _n; i++) {
            parent[i] = i;
            component_size[i] = 1;
            rank[i] = 0;
        }
    }
    int find_parent(int a) {
        if(parent[a] == a) return a;
        else {
            int temp = find_parent(parent[a]);
            parent[a] = temp;
            return parent[a];
        }
    }

    // by size
    bool unite(int a, int b) {
        a = find_parent(a);
        b = find_parent(b);
        if(a == b) return false;
        connected_components--;

        if(component_size[b] > component_size[a]) swap(a, b);
        component_size[a] += component_size[b];
        maximum_size = max(maximum_size, component_size[a]);
        parent[b] = a;  // now the components of a and b have been merged

        return true;
    }

    //by rank
    // bool unite(int a, int b) {
    //     a = find_parent(a);
    //     b = find_parent(b);
    //     if(a == b) return false;

    //     if(rank[a] < rank[b]) swap(a, b);
    //     parent[b] = a;
    //     component_size[a] += component_size[b];
    //     if(rank[a] == rank[b]) rank[a]++;
    //     return true;
    // }
        
};