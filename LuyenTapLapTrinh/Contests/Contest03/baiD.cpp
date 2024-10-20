#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Cell {
    int x, y, time;
    Cell(int _x, int _y, int _time) : x(_x), y(_y), time(_time) {}
};

int bfs(vector<vector<int>>& grid, int n, int m) {
    queue<Cell> q;
    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};
    
    // Push all infected cells into the queue
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 2) {
                q.push(Cell(i, j, 0));
            }
        }
    }
    
    int max_time = 0;
    while (!q.empty()) {
        Cell curr = q.front();
        q.pop();
        max_time = max(max_time, curr.time);
        
        for (int k = 0; k < 4; ++k) {
            int nx = curr.x + dx[k];
            int ny = curr.y + dy[k];
            
            // Check if the new position is within the grid and is not a wall or already infected
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 1) {
                grid[nx][ny] = 2;
                q.push(Cell(nx, ny, curr.time + 1));
            }
        }
    }
    
    // Check if there are still uninfected cells
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 1) {
                return -1; // Uninfected cells remain
            }
        }
    }
    
    return max_time;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    
    // Input grid
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            grid[i][j] = c - '0'; // Convert char to int
        }
    }
    
    int result = bfs(grid, n, m);
    cout << result << endl;
    
    return 0;
}
