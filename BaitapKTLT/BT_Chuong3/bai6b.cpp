// #include <iostream>
// #include <vector>
// #include <utility> // For std::pair
// #include <algorithm> // For std::max
// using namespace std;

// int x_max, y_max;

// // ham lay cap x,y max;
// pair<int, int> find(vector<pair<int, int>> &v, int l, int r) {
//     if (l == r) return v[l];
//     int m = l + (r - l) / 2;
//     pair<int, int> p_left = find(v, l, m);
//     pair<int, int> p_right = find(v, m + 1, r);
    
//     x_max = max(x_max, max(p_left.first, p_right.first));
//     y_max = max(y_max, max(p_left.second, p_right.second));
    
//     return make_pair(x_max, y_max);
// }

// // ham check cap x,y co thuoc vector pair ? 
// bool check(vector<pair<int,int>> &v,pair<int,int> point_max){
//     auto it = find(v.begin(),v.end(),point_max);
//     // true -> da tim thay 
//     return it != v.end();
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> v;
//     for (int i = 0; i < n; i++) {
//         int x, y;   
//         cin >> x >> y;
//         v.push_back({x, y});
//     }
//     pair<int,int> point_max = find(v,0,n-1);
//     if(check(v,point_max)) cout <<"Max Point: "<<point_max.first <<" "<<point_max.second<<endl;
//     else cout <<"Not Found!";
    
// }

//     // Phương trình truy hồi : 
//     // T(n) = 2T(n/2) + O(1)
//     // - T(n) : độ phức tạp hàm find với n cặp value 
//     // - T(n/2) : là độ phức tạp của việc đệ quy cho một nửa mảng bên trái vs phải -> 2T(n/2)
//     // - O(1) : độ phức tạp của các phép tính toán khác trong hàm
//     // theo định lý chủ , ta có : f(n) = O((logb a)-e) (e=0) thì T(n) = O(n).
//     // a=2,b=2 -> T(n) = O(n).
//     // ham check co do phuc tap xau nhat : O(n)
//     // Vậy tổng độ phức tạp : O(n)