// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<pair<int, int>> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         v.push_back({x, y});
//     }
//     int xm = v[0].first, ym = v[0].second;
//     for (int i = 1; i < v.size(); i++)
//     {
//         xm = max(xm,v[i].first);
//         ym = max(ym,v[i].second);
//     }
//     // find() -> return iterator 
//     pair <int,int> point_check = make_pair(xm,ym);
//     auto it = find(v.begin(),v.end(),point_check);
//     if(it!=v.end()) cout <<"Max point: "<< xm<< ' '<<ym;
//     else cout <<"Not Found!";
// }

// // Độ phức tạp thời gian: O(n)
// // Biểu thức O(n) ("big O of n") cho biết thuật toán thực hiện một số phép
// //  toán tỉ lệ thuận với kích thước đầu vào n
// //  (số phần tử trong mảng v).
// // Hàm lặp for duyệt qua tất cả n phần tử của mảng v một lần.
// //  Trong mỗi lần lặp, có các phép toán so sánh và gán hằng số,
// //   không phụ thuộc vào n. Do đó, tổng số phép toán thực hiện tỉ lệ thuận với n.