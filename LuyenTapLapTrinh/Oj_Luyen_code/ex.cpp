// #include <bits/stdc++.h>
// #define FOR(i, a, b) for (int i = a; i <= b; i++)
// using namespace std;

// int n, m, X, Y, k;
// vector<vector<int>> v;
// int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
// int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

// void ql(int i, int j) {
//     int max_val = -1;
//     int idx_i = -1, idx_j = -1;

//     FOR(k, 0, 7) {
//         int ix = i + dx[k];
//         int jy = j + dy[k];
//         if (ix >= 1 && ix <= n && jy >= 1 && jy <= m) {
//             if (v[ix][jy] > max_val) {
//                 max_val = v[ix][jy];
//                 idx_i = ix;
//                 idx_j = jy;
//             }
//         }
//     }

//     if (idx_i == -1 || idx_j == -1) {
//         cout << "NO\n";
//         return;
//     }

//     if (idx_i == 1 || idx_j == 1) {
//         cout << "YES\n";
//         return;
//     }

//     ql(idx_i, idx_j);
// }

// int main() {
//     cin >> n >> m;
//     cin >> X >> Y >> k;

//     v.resize(n + 1, vector<int>(m + 1));
//     FOR(i, 1, n) {
//         FOR(j, 1, m) {
//             cin >> v[i][j];
//         }
//     }

//     if (X == 1 || Y == 1) {
//         cout << "YES\n";
//     } else {
//         ql(X, Y);
//     }

//     return 0;
// }
