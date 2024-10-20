// #include <bits/stdc++.h>
// using namespace std;

// *Pointer
// int print(int *n){
//     *n += 10;
//     return *n;
// }
// int main() {
//     int a = 10;
//     print(&a);
//     cout <<a;
// } 

// *Pointer struct 
// struct sv{
//     int diem;
//     string ten;
// };

// int main() {
//     sv s;
//     s.diem = 10;
//     s.ten = "chuong";
//     sv *ptr = &s;
//     cout<<((*ptr).diem)<<((*ptr).ten);
    
// }
// int main() {
//     sv *ptr = new sv();
//     ptr->ten = "Chuong Minh";
//     ptr->diem = 10;
//     delete ptr;
// }

// *Tree (1node : data(va dia chi),dia chi node trai,phai)
// => con tro kieu struct (ten node) : {
//     data (node dang dung)
//     contro left(luu dia chi node trai)
//     contro right (luu dia chi node phai)
// }
// struct node{
//     int data;
//     node* left;
//     node* right;

//     //   tao node moi bang constructor
//     // node(int x) {
//     //     data = x;
//     //     left = right = NULL;
//     // }
// };

// tao node moi bang function co kieu tra ve la con tro kieu struct node
// node* mn(int n) {
//     // con tro p quan li struct node (de p co the truy cap data ,left,right -> khoi tao data moi)
//     node* p = new node;
//     p->data = n;
//     p->left = p->right = NULL;
//     return p;
// }

// int main() {
//     // dung constructor de tao node moi 
//     node *p = new node(10);
//     node *p1 = new node(15);
//     node *p2 = new node(20);
//     // lay dia chi 15 gan cho con tro left (10) & dia chi 20 gan cho con tro right node (10)
//     p->left = p1;
//     p->right = p2;
//     cout <<p->data<<' '<<p->left<<' '<<p->right;
//     // 10 0x1ecf7e7f520 0x1ecf7e7f600
// }


// int main() {
//     // dung ham de tao node moi (p: dia chi node 10)
//     node *p = mn(10);
//     node *p1 = mn(11);
//     node *p2 = mn(12);
//     // khoi tao dia chi cho node left,right cua node 10 
//     p->left = mn(11);
//     p->right = mn(12);
//     cout <<p->data<<' '<<p->left<<' '<<p->right;
//     // 10 0x26cc1951770 0x26cc1951850
// }

// bai tap 
// int main() {
//     node *p = mn(1);
//     p->left = mn(2);
//     p->right = mn(3);
//     p->left->right = mn(4);
//     p->right = mn(5);
//     p->right->left = mn(6);
//     cout <<p->right->data + p->right->left->data;
//     // 11 
// }


// duyet node 
// int main(){
//     node *root = mn(1);
//     root->left = mn(2);
//     root->right = mn(3);
//     root->left->left = mn(4);
//     root->left->right = mn(5);
//     root->right->left = mn(6);
//     root->right->right = mn(7);
//     root->right->right->left = mn(8);
//     while(root != NULL) {
//         cout <<root->data<<' ';
//         root = root->right;
//     }
//     // 1 3 7 
// }


// *Them node v theo c tai node cha u 
// struct node{
//     int data;
//     node* left;
//     node* right;

//     node(int x) {
//         data = x;
//         left = right = NULL;
//     }
// };

// tao node moi theo c
// void makeRoot(node *root,int u,int v,char c) {
//     if(c=='L') root->left = new node(v);
//     else root->right = new node(v);
// }

// tim node de chen 
// void insertNode(node *root,int u,int v,char c) {
//     if(root == NULL) return ;
//     if(root->data = v) {
//         makeRoot(root,u,v,c);
//     }
//     else {
//         insertNode(root->left,u,v,c);
//         insertNode(root->right,u,v,c);
//     }
// }

// // in tat ca node 
// void inorder(node *root) {
//     if(root == NULL) return;
//     inorder(root->left);
//     cout <<root->data<<' ';
//     inorder(root->right);
// }


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     node *root = NULL;
//     int n; cin>>n;
//     for (int i=0;i<n;i++) {
//         int u,v; char c;
//         cin>>u>>v>>c;
//         if(root == NULL) {
//             root = new node(u);
//             makeRoot(root,u,v,c);
//         }
//         else {
//             insertNode(root,u,v,c);
//         }
//     }
//     inorder(root);
// }


// *thay doi con tro node 
// struct node{
//     int data;
//     node* left;
//     node* right;
// };

// node *makeNode(int x) {
//     node * newNode = new node;
//     newNode->data = x;
//     newNode ->left = newNode ->right =NULL;
//     return newNode;
// }

// void thaydoi(node *ptr1) {
//     // ko anh huong toi ptr 
//     ptr1 = makeNode(200);
// }

// // truyen dia chi & -> anh huong toi ptr 
// // void thaydoi(node *&ptr1) {
// //     ptr1 = makeNode(200);
// // }

// int main() {
//     node x;
//     x.data = 100;
//     x.left = x.right = NULL;

//     node *ptr = &x;
//     cout <<ptr<<' '<<&x<<endl;
//     thaydoi(ptr);
//     cout <<ptr->data<<endl;
//     cout <<ptr;
// }




// DFS_Tree 
// Enter number of nodes: 3
// Enter number of edges: 2
// Enter edges (u v):
// 1 2
// 1 3
// Enter root node: 1
// Tree edges:
// 1 - 2
// // 1 - 3
// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>

// using namespace std;

// vector<vector<int>> adj; // adjacency list representation of the graph
// vector<int> ChuaXet; // vector to mark visited nodes
// set<pair<int, int>> T; // set to store the tree edges

// void Tree_DFS(int v) {
//     ChuaXet[v] = 0;
//     // Sort neighbors in ascending order
//     sort(adj[v].begin(), adj[v].end());
//     for (int u : adj[v]) {
//         // if node u has not been visited
//         if (ChuaXet[u]) {
//             T.insert({v, u});
//             Tree_DFS(u);
//         }
//     }
// }

// int main() {
//     int n; // number of nodes
//     cout << "Enter number of nodes: ";
//     cin >> n;
    
//     adj.resize(n + 1); // resizing adjacency list to fit all nodes
//     ChuaXet.resize(n + 1, 1); // initializing visited vector with 1 (true)

//     int m; // number of edges
//     cout << "Enter number of edges: ";
//     cin >> m;

//     cout << "Enter edges (u v):" << endl;
//     for (int i = 0; i < m; ++i) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); // assuming it's an undirected graph
//     }

//     int root;
//     cout << "Enter root node: ";
//     cin >> root;

//     T.clear(); // clearing the set of tree edges

//     Tree_DFS(root);

//     cout << "Tree edges:" << endl;
//     for (const auto& edge : T) {
//         cout << edge.first << " - " << edge.second << endl;
//     }

//     return 0;
// }

// BFS-Tree 
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <set>
// #include <algorithm>

// using namespace std;

// vector<vector<int>> adj; // adjacency list representation of the graph
// vector<int> ChuaXet; // vector to mark visited nodes
// set<pair<int, int>> T; // set to store the tree edges

// void Tree_BFS(int r) {
//     queue<int> Q;
//     Q.push(r);
//     ChuaXet[r] = 0;

//     while (!Q.empty()) {
//         int v = Q.front();
//         Q.pop();
        
//         // Sort neighbors in ascending order
//         sort(adj[v].begin(), adj[v].end());

//         for (int u : adj[v]) {
//             if (ChuaXet[u] == 1) {
//                 Q.push(u);
//                 ChuaXet[u] = 0;
//                 T.insert({v, u});
//             }
//         }
//     }
// }

// int main() {
//     int n; // number of nodes
//     cout << "Enter number of nodes: ";
//     cin >> n;

//     adj.resize(n + 1); // resizing adjacency list to fit all nodes
//     ChuaXet.resize(n + 1, 1); // initializing visited vector with 1 (true)

//     int m; // number of edges
//     cout << "Enter number of edges: ";
//     cin >> m;

//     cout << "Enter edges (u v):" << endl;
//     for (int i = 0; i < m; ++i) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u); // assuming it's an undirected graph
//     }

//     int root;
//     cout << "Enter root node: ";
//     cin >> root;

//     T.clear(); // clearing the set of tree edges

//     Tree_BFS(root);

//     cout << "Tree edges:" << endl;
//     for (const auto& edge : T) {
//         cout << edge.first << " - " << edge.second << endl;
//     }

//     return 0;
// }
