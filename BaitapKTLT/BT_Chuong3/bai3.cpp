// #include <iostream>
// #include <vector>
// using namespace std;

// int findIndex(vector<int> &a, int left, int right) {
//     if (right >= left) {
//         int mid = left + (right - left) / 2;
        
//         if (a[mid] == mid) {
//             return mid;  // Nếu tìm thấy a[mid] = mid, trả về chỉ số mid
//         }
        
//         // Nếu a[mid] > mid, chỉ số cần tìm phải nằm bên trái mid
//         if (a[mid] > mid) {
//             return findIndex(a, left, mid - 1);
//         }
        
//         // Nếu a[mid] < mid, chỉ số cần tìm phải nằm bên phải mid
//         return findIndex(a, mid + 1, right);
//     }
    
//     return -1;  // Trả về -1 nếu không tìm thấy
// }

// int main() {
//     vector<int> a = {-3, -1, 0, 3, 5, 7, 9, 11};
//     int n = a.size();

//     int result = findIndex(a, 0, n - 1);

//     if (result != -1) {
//         cout << "Index i = " << result << " sao cho a[i] = i." << endl;
//     } else {
//         cout << "Khong ton tai chi so i sao cho a[i] = i." << endl;
//     }

//     return 0;
// }


