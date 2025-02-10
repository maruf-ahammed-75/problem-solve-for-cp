// Sort the vector based on the second element of the
    // pair
    sort(my_vector.begin(), my_vector.end(),
         [](const pair<int, int>& a,
            const pair<int, int>& b) {
             return a.second < b.second;
         });