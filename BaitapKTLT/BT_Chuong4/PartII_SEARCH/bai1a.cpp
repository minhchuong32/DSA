// #include <iostream>
// #include <vector>

// using namespace std;

// void linear_search(const vector<int> &arr, int x, vector<int> &result);
// void binary_search(const vector<int> &arr, int x, vector<int> &result);
// int main()
// {
//     vector<int> Arr = {2, 4, 5, 7, 1, 2, 3, 6};
//     vector<int> x_value = {2, 4};
//     vector<int> Result;
//     cout << "Linear_search \n";
//     for (int x : x_value)
//     {
//         linear_search(Arr, x, Result);
//         cout << "Phan tu " << x << " xuat hien tai vi tri ";
//         for (int y : Result)
//         {
//             cout << " " << y + 1 << " ";
//         }
//         cout << endl;
//         Result.clear();
//     }
//     cout << "Binary_search \n";
//     for (int x : x_value)
//     {
//         binary_search(Arr, x, Result);
//         cout << "Phan tu " << x << " xuat hien tai vi tri ";
//         for (int y : Result)
//         {
//             cout << " " << y + 1 << " ";
//         }
//         cout << endl;
//         Result.clear();
//     }
// }

// void binary_search(const vector<int> &arr, int x, vector<int> &result)
// {
//     int n = arr.size();
//     int left = 0, right = n - 1;
//     while (left <= right)
//     {
//         int m = left + (right - left) / 2;
//         if (arr[m] == x)
//         {
//             result.push_back(m);
//             // Kiểm tra các phần tử bên trái và bên phải của m có bằng x không
//             int left = m - 1;
//             while (left >= 0)
//             {
//                 if (arr[left] == x)
//                     result.push_back(left);
//                 left--;
//             }
//             int right = m + 1;
//             while (right < n)
//             {
//                 if (arr[right] == x)
//                     result.push_back(right);
//                 right++;
//             }
//             return;
//         }
//         else if (arr[m] < x)
//         {
//             left = m + 1;
//         }
//         else
//         {
//             right = m - 1;
//         }
//     }
// }

// void linear_search(const vector<int> &arr, int x, vector<int> &result)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//             result.push_back(i);
//     }
// }
