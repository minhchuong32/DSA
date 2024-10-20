// // Kruskal 
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Edge {
//     int u, v, weight;
//     bool operator<(Edge const& other) {
//         return weight < other.weight;
//     }
// };

// vector<int> parent, rank;

// int find(int v) {
//     if (v == parent[v])
//         return v;
//     return parent[v] = find(parent[v]);
// }

// void union_sets(int a, int b) {
//     a = find(a);
//     b = find(b);
//     if (a != b) {
//         if (rank[a] < rank[b])
//             swap(a, b);
//         parent[b] = a;
//         if (rank[a] == rank[b])
//             rank[a]++;
//     }
// }

// int main() {
//     int n, m;
//     cout << "Enter number of vertices: ";
//     cin >> n;
//     cout << "Enter number of edges: ";
//     cin >> m;

//     vector<Edge> edges(m);
//     cout << "Enter edges (u v weight):" << endl;
//     for (int i = 0; i < m; i++) {
//         cin >> edges[i].u >> edges[i].v >> edges[i].weight;
//     }

//     sort(edges.begin(), edges.end());

//     parent.resize(n);
//     rank.resize(n);
//     for (int i = 0; i < n; i++) {
//         parent[i] = i;
//         rank[i] = 0;
//     }

//     vector<Edge> result;
//     int cost = 0;
//     for (Edge e : edges) {
//         if (find(e.u) != find(e.v)) {
//             cost += e.weight;
//             result.push_back(e);
//             union_sets(e.u, e.v);
//         }
//     }

//     cout << "Minimum Spanning Tree cost: " << cost << endl;
//     cout << "Edges in the MST:" << endl;
//     for (Edge e : result) {
//         cout << e.u << " - " << e.v << " : " << e.weight << endl;
//     }

//     return 0;
// }

// // Prim 
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <functional>
// #include <climits>

// using namespace std;

// typedef pair<int, int> pii;

// void Prim(int n, vector<vector<pii>>& adj) {
//     vector<int> key(n, INT_MAX);
//     vector<bool> inMST(n, false);
//     vector<int> parent(n, -1);

//     priority_queue<pii, vector<pii>, greater<pii>> pq;

//     int start = 0;
//     pq.push({0, start});
//     key[start] = 0;

//     while (!pq.empty()) {
//         int u = pq.top().second;
//         pq.pop();

//         inMST[u] = true;

//         for (auto& x : adj[u]) {
//             int v = x.first;
//             int weight = x.second;

//             if (!inMST[v] && key[v] > weight) {
//                 key[v] = weight;
//                 pq.push({key[v], v});
//                 parent[v] = u;
//             }
//         }
//     }

    // int cost = 0;
//     cout << "Edges in the MST:" << endl;
//     for (int i = 1; i < n; ++i) {
//         cout << parent[i] << " - " << i << " : " << key[i] << endl;
//         cost += key[i];
//     }
//     cout << "Minimum Spanning Tree cost: " << cost << endl;
// }

// int main() {
//     int n, m;
//     cout << "Enter number of vertices: ";
//     cin >> n;
//     cout << "Enter number of edges: ";
//     cin >> m;

//     vector<vector<pii>> adj(n);
//     cout << "Enter edges (u v weight):" << endl;
//     for (int i = 0; i < m; ++i) {
//         int u, v, weight;
//         cin >> u >> v >> weight;
//         adj[u].push_back({v, weight});
//         adj[v].push_back({u, weight}); // for undirected graph
//     }

//     Prim(n, adj);

//     return 0;
// }



// // Dijsktra 
// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// #include <climits>

// using namespace std;

// vector<vector<pair<int, int>>> adj; // adjacency list with weights
// vector<int> d; // distances from source
// vector<int> Truoc; // predecessors for each vertex
// set<int> T; // set of vertices not yet processed

// void Dijkstra(int s, int n) {
//     d.assign(n, INT_MAX); // initialize distances to infinity
//     Truoc.assign(n, -1); // initialize predecessors to -1

//     d[s] = 0;
//     for (int v = 0; v < n; ++v) {
//         T.insert(v);
//     }

//     while (!T.empty()) {
//         // Find u in T with the smallest distance d[u]
//         int u = *min_element(T.begin(), T.end(), [&](int l, int r) { return d[l] < d[r]; });
//         T.erase(u);

//         // Update distances of the neighbors of u
//         for (const auto& neighbor : adj[u]) {
//             int v = neighbor.first;
//             int weight = neighbor.second;

//             if (T.count(v) && d[v] > d[u] + weight) {
//                 d[v] = d[u] + weight;
//                 Truoc[v] = u;
//             }
//         }
//     }
// }

// int main() {
//     int n, m; // number of vertices and edges
//     cout << "Enter number of vertices: ";
//     cin >> n;
//     cout << "Enter number of edges: ";
//     cin >> m;

//     adj.resize(n);

//     cout << "Enter edges (u v weight):" << endl;
//     for (int i = 0; i < m; ++i) {
//         int u, v, weight;
//         cin >> u >> v >> weight;
//         adj[u].push_back({v, weight});
//         adj[v].push_back({u, weight}); // assuming undirected graph
//     }

//     int s;
//     cout << "Enter source vertex: ";
//     cin >> s;

//     Dijkstra(s, n);

//     cout << "Vertex distances from source:" << endl;
//     for (int i = 0; i < n; ++i) {
//         if (d[i] == INT_MAX) {
//             cout << "Vertex " << i << ": Unreachable" << endl;
//         } else {
//             cout << "Vertex " << i << ": " << d[i] << endl;
//         }
//     }

//     return 0;
// }


// Consider a graph with 5 vertices (0 to 4) and 6 edges. The edges are defined as follows:

// (0, 1) with weight 10
// (0, 4) with weight 3
// (1, 2) with weight 2
// (1, 4) with weight 4
// (2, 3) with weight 9
// (3, 4) with weight 7
// We will use vertex 0 as the source vertex.

// Input Format
// The input should be entered in the following format:

// Number of vertices: 5
// Number of edges: 6
// List of edges with weights:
// 0 1 10
// 0 4 3
// 1 2 2
// 1 4 4
// 2 3 9
// 3 4 7
// Source vertex: 0


// in:
// Enter number of vertices: 5
// Enter number of edges: 6
// Enter edges (u v weight):
// 0 1 10
// 0 4 3
// 1 2 2
// 1 4 4
// 2 3 9
// 3 4 7
// Enter source vertex: 0
// out:
// Vertex distances from source:
// Vertex 0: 0
// Vertex 1: 7
// Vertex 2: 9
// Vertex 3: 18
// Vertex 4: 3



// Fold_BellMan 
// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// struct Edge {
//     int u, v, weight;
// };

// vector<Edge> edges; // list of all edges
// vector<int> d; // distance from source
// vector<int> Truoc; // predecessor for each vertex

// void Ford_Bellman(int s, int n) {
//     // Initialize distances and predecessors
//     for (int v = 0; v < n; ++v) {
//         d[v] = INT_MAX;
//         Truoc[v] = -1;
//     }
//     d[s] = 0;

//     // Relax edges repeatedly
//     for (int k = 1; k <= n - 1; ++k) {
//         for (const auto& edge : edges) {
//             int u = edge.u;
//             int v = edge.v;
//             int weight = edge.weight;
//             if (d[u] != INT_MAX && d[v] > d[u] + weight) {
//                 d[v] = d[u] + weight;
//                 Truoc[v] = u;
//             }
//         }
//     }
// }

// int main() {
//     int n, m; // number of vertices and edges
//     cout << "Enter number of vertices: ";
//     cin >> n;
//     cout << "Enter number of edges: ";
//     cin >> m;

//     edges.resize(m);
//     d.resize(n);
//     Truoc.resize(n);

//     cout << "Enter edges (u v weight):" << endl;
//     for (int i = 0; i < m; ++i) {
//         cin >> edges[i].u >> edges[i].v >> edges[i].weight;
//     }

//     int s;
//     cout << "Enter source vertex: ";
//     cin >> s;

//     Ford_Bellman(s, n);

//     cout << "Vertex distances from source:" << endl;
//     for (int i = 0; i < n; ++i) {
//         if (d[i] == INT_MAX) {
//             cout << "Vertex " << i << ": Unreachable" << endl;
//         } else {
//             cout << "Vertex " << i << ": " << d[i] << endl;
//         }
//     }

//     return 0;
// }


// *Kruskal _ Tech 28 
// idea : sap xep cap canh (weight) theo trong so tang dan. lan luot lay cac dinh 
// , kiem tra co the hop 2 vectices(de ko tao cycle),Neu dc -> push vao mst, update tong trong so 
// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// struct edge {
//     int u, v, w;
//     edge(int u, int v, int w) : u(u), v(v), w(w) {}
// };

// const int maxn = 1001;
// int n, m;
// int parent[maxn], sz[maxn];
// vector<edge> canh;

// void make_set() {
//     for (int i = 1; i <= n; i++) {
//         parent[i] = i;
//         sz[i] = 1;
//     }
// }

// int find(int v) {
//     if (v == parent[v]) return v;
//     return parent[v] = find(parent[v]);
// }

// bool Union(int a, int b) {
//     a = find(a);
//     b = find(b);
//     // a and b are in the same set
//     if (a == b) return false;
//     if (sz[a] < sz[b]) swap(a, b);
//     parent[b] = a;
//     sz[a] += sz[b];
//     return true;
// }

// void inp() {
//     cin >> n >> m;
//     for (int i = 0; i < m; i++) {
//         int x, y, w; 
//         cin >> x >> y >> w;
//         edge e = edge(x, y, w);
//         canh.push_back(e);
//     }
// }

// void kruskal() {
//     vector<edge> mst;
//     int d = 0;
//     sort(canh.begin(), canh.end(), [](const edge &a, const edge &b) {
//         return a.w < b.w;
//     });
//     for (int i = 0; i < m; i++) {
//         if (mst.size() == n - 1) break;
//         edge e = canh[i];
//         // Check if adding this edge forms a cycle
//         if (Union(e.u, e.v)) {
//             mst.push_back(e);
//             d += e.w;
//         }
//     }
//     if (mst.size() != n - 1) {
//         cout << "Do thi khong lien thong!" << endl;
//     } else {
//         cout << "MST: " << d << endl;
//         for (auto it : mst) {
//             cout << it.u << ' ' << it.v << ' ' << it.w << endl;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     inp();
//     make_set();
//     kruskal();
//     return 0;
// }

// in 
// 6 9
// 1 2 12
// 1 3 4
// 2 3 1
// 2 4 5
// 2 5 3
// 3 5 2
// 4 5 3 
// 4 6 10
// 5 6 8


// Prim _ Tech 28 
// tap v: vertices / tap mst = {}
// while( v!= rong) {
//     // lay canh trong tap v (weight min)
//     e = (x,y)
//     // hop voi mst 
//     mst = mst U e
//     // update trong so  
//     d += d(e) 
//     // loai bo canh e trong tap v 
//     v = v - e 
// }
// idea: co 2 tap , mot tap v,mot tap mst(luu dinh cay khung min). lan luot lay cac canh  trong
// tap v (weight min) roi them vao tap mst (dong thoi bo canh v) . lap cho den khi lay het tat 
// ca canh trong v-> ket thuc 

// GPT 
// #include <bits/stdc++.h>
// using namespace std;

// struct canh {
//     int x, y, w;
// };

// const int maxn = 1001;
// int n, m;
// vector<pair<int, int>> adj[maxn];
// bool used[maxn];

// void nhap() {
//     cin >> n >> m;
//     for (int i = 0; i < m; i++) {
//         int x, y, w; 
//         cin >> x >> y >> w;
//         adj[x].push_back({y, w});
//         adj[y].push_back({x, w});
//     }
//     memset(used, false, sizeof(used));
// }

// void prim(int u) {
//     vector<canh> MST;
//     int d = 0;
//     used[u] = true;
//     priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

//     // Push all edges from the starting node into the priority queue
//     for (auto it : adj[u]) {
//         pq.push({it.second, {u, it.first}});
//     }

//     while (MST.size() < n - 1 && !pq.empty()) {
//         auto top = pq.top();
//         pq.pop();

//         int weight = top.first;
//         int v = top.second.second;
//         int u = top.second.first;

//         if (used[v]) continue;

//         MST.push_back({u, v, weight});
//         d += weight;
//         used[v] = true;

//         for (auto it : adj[v]) {
//             if (!used[it.first]) {
//                 pq.push({it.second, {v, it.first}});
//             }
//         }
//     }

//     if (MST.size() != n - 1) {
//         cout << "Do thi khong lien thong!" << endl;
//     } else {
//         cout << d << endl;
//         for (auto e : MST) {
//             cout << e.x << ' ' << e.y << ' ' << e.w << endl;
//         }
//     }
// }

// int main() {
//     nhap();
//     prim(1);
//     return 0;
// }


// Tech 
#include <bits/stdc++.h>
using namespace std;

struct canh {
    int x, y, w;
};

const int maxn = 1001;
int n, m;
vector<pair<int, int>> adj[maxn];
bool used[maxn];

void nhap() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }
    memset(used, false, sizeof(used));
}

void prim(int u) {
    vector<canh> MST;
    int d = 0;
    used[u] = true;

    while (MST.size() < n - 1) {
        int min_w = INT_MAX;
        int X = -1, Y = -1;

        for (int i = 1; i <= n; i++) {
            if (used[i]) {
                // Traverse the adjacency list of vertex i
                for (pair<int, int> it : adj[i]) {
                    int j = it.first, trongso = it.second;
                    if (!used[j] && trongso < min_w) {
                        min_w = trongso;
                        X = j;
                        Y = i;
                    }
                }
            }
        }

        if (X == -1) {
            cout << "Do thi khong lien thong!" << endl;
            return;
        }

        MST.push_back({X, Y, min_w});
        d += min_w;
        used[X] = true;
    }

    cout << d << endl;
    for (canh e : MST) {
        cout << e.x << ' ' << e.y << ' ' << e.w << endl;
    }
}

int main() {
    nhap();
    prim(1);
    return 0;
}
