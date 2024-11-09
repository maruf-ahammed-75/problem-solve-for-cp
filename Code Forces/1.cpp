#include <bits/stdc++.h>
using namespace std;

const int N = 1000; // max grid size
int dx[] = {0, 0, -1, 1}; // movement in x direction
int dy[] = {-1, 1, 0, 0}; // movement in y direction

vector<vector<int>> grid(N, vector<int>(N, 0)); // grid to store values (if needed)
vector<vector<int>> dist(N, vector<int>(N, 1e9)); // distance grid
vector<vector<bool>> vis(N, vector<bool>(N, false)); // visited grid

int n, m; // grid dimensions (n x m)

// Check if the position (x, y) is within the grid boundaries
bool isInsideGrid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

// BFS traversal on the grid starting from (startX, startY)
void bfs(int startX, int startY) {
    queue<pair<int, int>> q;
    dist[startX][startY] = 0;
    vis[startX][startY] = true;
    q.push({startX, startY});

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (isInsideGrid(nx, ny) && !vis[nx][ny]) {
                dist[nx][ny] = dist[x][y] + 1;
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    // Define grid dimensions
    cout << "Enter grid dimensions (n rows and m columns): ";
    cin >> n >> m;

    // Starting BFS from a particular cell (for example, top-left cell)
    int startX, startY;
    cout << "Enter starting cell coordinates (x, y): ";
    cin >> startX >> startY;

    bfs(startX, startY);

    // Print distance from start cell to each cell in the grid
    cout << "Distances from starting cell (" << startX << ", " << startY << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
