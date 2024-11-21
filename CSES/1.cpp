#include <bits/stdc++.h>
using namespace std;

// Function to calculate the maximum number of movies we can watch
int solve(vector<pair<int, int>>& movies, int N) {
    // Sort movies by their ending times using a lambda function
    sort(movies.begin(), movies.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second < b.second;
    });

    // Track the time elapsed and the number of movies watched
    int timeElapsed = 0, moviesWatched = 0;
    for (int i = 0; i < N; i++) {
        if (movies[i].first >= timeElapsed) {
            moviesWatched++;
            timeElapsed = movies[i].second;
        }
    }
    return moviesWatched;
}

int main() {
    // Sample Input
    int N = 3;
    vector<pair<int, int>> movies = { {3, 5}, {4, 9}, {5, 8} };

    cout << solve(movies, N) << "\n";

    return 0;
}
