// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// // cach 1: dung de quy tach mang , kiem tra phan tu co trong mang moi hay chua -> day vao mang moi 
// // Hàm xử lý đệ quy để loại bỏ phần tử trùng lặp trong mảng


// // tao mot vector result de luu ket qua 
// vector<int> remove(vector<int> &arr, int l,int r) {
//     if(l>=r) return {arr[l]};
//     int m = l + (r-l)/2;
//     vector <int> result_l = remove(arr,l,m);
//     vector <int> result_r = remove(arr,m+1,r);

//     vector <int> result;
//     unordered_set<int> se;
//     // duyet mang trai -> luu cac kq vao result 
//     for (auto it:result_l) {
//         if(se.find(it)==se.end()) {
//             se.insert(it);
//             result.push_back(it);
//         }
//     }
//     // duyet mang phai -> luu cac kq vao result 
//     for (auto it:result_r) {
//         if(se.find(it)==se.end()) {
//             se.insert(it);
//             result.push_back(it);
//         }
//     }
//     return result;
// }


// void input(vector<int> &arr,int &size) {
//     cout <<"Input size : ";
//     cin>>size;
//     cout <<"Input arr: ";
//     arr.resize(size);
//     for (int i=0;i<size;i++) {
//         cin>>arr[i];
//     }
// }


// vector <int> run(vector<int> &arr) {
//     if(arr.empty()) {
//         return {};
//     }
//     else {
//         return remove(arr,0,arr.size()-1);
//     }
// }
// int main() {
//     int size;
//     vector <int> arr(size);
//     input(arr,size);
//     vector <int> result = run(arr);
//     cout << "New arr: ";
//     for (auto x : result) cout <<x<<' ';
// }


// *Phân tích độ phức tạp: 
// - Mỗi lần gọi đệ quy , mảng được chia đôi vì vậy có O(log n) cấp độ đẹe quy
// - Trong mỗi lần gọi đệ quy ta duyệt tất cả phần tử trong mảng với độ phức tạp trung bình
// của unordered_set(hàm find là O(1) cho việc chèn và truy xuất) . Do đó với mỗi cấp độ đệ quy 
// độ phức tạp trung bình là O(n)
// - Vì có O(logn) cấp độ đệ quy nên tổng độ phức tạp là O(n log n).



// cach 2
// bool check(vector<int> v, int value_check) {
//     auto it = find(v.begin(), v.end(), value_check);
//     return it != v.end();
// }

// vector<int> result;

// void merge(int a[], int l, int r, int m) {
//     vector<int> x(a + l, a + m + 1);
//     vector<int> y(a + m + 1, a + r + 1);
//     int i = 0, j = 0;
//     while (i < x.size() && j < y.size()) {
//         if (x[i] != y[j]) {
//             if (!check(result, x[i])) result.push_back(x[i++]);
//             else i++;
//             if (!check(result, y[j])) result.push_back(y[j++]);
//             else j++;
//         }
//         else if (!check(result, x[i]) && !check(result, y[j])) {
//             result.push_back(x[i++]);
//             j++;
//         }
//         else {
//             i++;
//             j++;
//         }
//     }
//     while (i < x.size() && !check(result, x[i])) result.push_back(x[i++]);
//     while (j < y.size() && !check(result, y[j])) result.push_back(y[j++]);
// }

// void removeDuplicates(int a[], int l, int r) {
//     if (l >= r) return;
//     int m = (l + r) / 2;
//     removeDuplicates(a, l, m);
//     removeDuplicates(a, m + 1, r);
//     merge(a, l, r, m);
// }


// int main() {
//     int a[7] = {3, 4, 3, 2, 2, 1, 9};
//     removeDuplicates(a, 0, 6);
//     for (auto x : result) cout << x << ' ';
//     cout << endl;
//     return 0;
// }
