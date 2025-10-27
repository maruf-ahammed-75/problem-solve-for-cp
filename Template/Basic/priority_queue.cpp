// Max priority first (largest value removed first)
priority_queue<long long> pq_max;

// Min priority first (smallest value removed first)
priority_queue<long long, vector<long long>, greater<long long>> pq_min;

// Clear both
pq_max = priority_queue<long long>();
pq_min = priority_queue<long long, vector<long long>, greater<long long>>();
