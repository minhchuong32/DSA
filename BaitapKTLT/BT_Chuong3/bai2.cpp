// #include <iostream>
// #include <vector>
// using namespace std;

// int interpolationSearch(vector<int>& arr, int x) {
//     int left = 1;
//     int right = 2;

//     // Tìm vùng có thể chứa x
//     while (arr[right] != INT_MAX && arr[right] < x) {
//         left = right;
//         right *= 2;
//     }

//     // Tìm x trong phần đã xác định
//     while (left <= right) {
//         int pos = left + ((x - arr[left]) * (right - left) / (arr[right] - arr[left]));

//         if (pos >= arr.size() || arr[pos] == INT_MAX) {
//             right = pos - 1;
//         } else if (arr[pos] == x) {
//             return pos;
//         } else if (arr[pos] < x) {
//             left = pos + 1;
//         } else {
//             right = pos - 1;
//         }
//     }

//     return -1; // Không tìm thấy x trong mảng
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, INT_MAX};
//     int x = 5;
//     int result = interpolationSearch(arr, x);

//     if (result != -1) {
//         cout << "Phan tu " << x << " duoc tim thay tai vi tri " << result << endl;
//     } else {
//         cout << "Phan tu " << x << " khong ton tai trong mang" << endl;
//     }

//     return 0;
// }
