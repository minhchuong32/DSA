#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

struct Cell {
    int x, y;
};

int n, m;
vector<string> maze;
vector<vector<bool>> visited;
vector<vector<pair<int, int>>> parent;
int start_x, start_y, end_x, end_y;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char dir[4] = {'L', 'R', 'U', 'D'};

bool is_valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && maze[x][y] != '#' && !visited[x][y]);
}

void bfs(int x, int y) {
    queue<Cell> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty()) {
        Cell current = q.front();
        q.pop();

        if (current.x == end_x && current.y == end_y) {
            cout << "YES" << endl;

            // Reconstruct the path
            vector<char> path;
            int cx = end_x;
            int cy = end_y;
            while (!(cx == start_x && cy == start_y)) {
                pair<int, int> p = parent[cx][cy];
                if (p.first == cx - 1) path.push_back('D');
                if (p.first == cx + 1) path.push_back('U');
                if (p.second == cy - 1) path.push_back('R');
                if (p.second == cy + 1) path.push_back('L');
                cx = p.first;
                cy = p.second;
            }

            cout << path.size() << endl;
            for (auto it = path.rbegin(); it != path.rend(); ++it) {
                cout << *it;
            }
            cout << endl;

            return;
        }

        for (int i = 0; i < 4; ++i) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (is_valid(nx, ny)) {
                visited[nx][ny] = true;
                q.push({nx, ny});
                parent[nx][ny] = {current.x, current.y};
            }
        }
    }

    cout << "NO" << endl;
}

int main() {
    cin >> n >> m;
    maze.resize(n);
    visited.resize(n, vector<bool>(m, false));
    parent.resize(n, vector<pair<int, int>>(m, {-1, -1}));

    for (int i = 0; i < n; ++i) {
        cin >> maze[i];
        for (int j = 0; j < m; ++j) {
            if (maze[i][j] == 'A') {
                start_x = i;
                start_y = j;
            }
            if (maze[i][j] == 'B') {
                end_x = i;
                end_y = j;
            }
        }
    }

    bfs(start_x, start_y);

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
 
// int n, m;
// vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
// vector<char> dirChar = {'D', 'U', 'R', 'L'};
 
// bool isValid(int x, int y, vector<string> &v) {
//     return x >= 0 && x < n && y >= 0 && y < m && (v[x][y] == '.' || v[x][y] == 'B');
// }
 
// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cout.tie(NULL); 
//     cin.tie(NULL);
    
//     cin >> n >> m;
//     vector<string> v(n);
//     pair<int, int> start;
//     pair<int, int> end;
 
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//         for (int j = 0; j < m; j++) {
//             if (v[i][j] == 'A') {
//                 start = {i, j};
//             } else if (v[i][j] == 'B') {
//                 end = {i, j};
//             }
//         }
//     }
 
//     vector<vector<bool>> vis(n, vector<bool>(m, false));
//     vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
//     vector<vector<char>> pathChar(n, vector<char>(m, ' '));
 
//     queue<pair<int, int>> q;
//     q.push(start);
//     vis[start.first][start.second] = true;
    
//     bool found = false;
//     while (!q.empty()) {
//         auto [x, y] = q.front();
//         q.pop();
 
//         if (v[x][y] == 'B') {
//             found = true;
//             break;
//         }
 
//         for (int k = 0; k < 4; k++) {
//             int nx = x + directions[k].first;
//             int ny = y + directions[k].second;
 
//             if (isValid(nx, ny, v) && !vis[nx][ny]) {
//                 vis[nx][ny] = true;
//                 q.push({nx, ny});
//                 parent[nx][ny] = {x, y};
//                 pathChar[nx][ny] = dirChar[k];
//             }
//         }
//     }
 
//     if (found) {
//         cout << "YES" << endl;
//         string path = "";
//         pair<int, int> cur = end;
//         while (cur != start) {
//             path += pathChar[cur.first][cur.second];
//             cur = parent[cur.first][cur.second];
//         }
//         reverse(path.begin(), path.end());
//         cout << path.length() << endl;
//         cout << path << endl;
//     } else {
//         cout << "NO" << endl;
//     }
 
//     return 0;
// }