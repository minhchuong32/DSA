// #include <bits/stdc++.h>
// using namespace std;

// // a) 
// void merge(int a[], int l, int m, int r)
// {
//    vector<int> x (a+l,a+m+1);
//    vector<int> y (a+m+1,a+r+1);
//    int i=0,j=0;
//    while(i<x.size() && j<y.size()) {
//     if(x[i]<=y[j]) {
//         a[l++] = x[i++];
//     }
//     else {
//         a[l++] = y[j++];
//     }
//    }
//     while(i<x.size()) a[l++] = x[i++];
//     while(j<y.size()) a[l++] = y[j++];
// }
// void mergeSort(int a[], int l, int r)
// {
//     if (l < r)
//     {
//         int m = (r + l) / 2;
//         mergeSort(a, l, m);
//         mergeSort(a, m + 1, r);
//         merge(a, l, m, r);
//     }
// }
// // a[m]!=m -> tim ben trai 
// // a[m]=m -> tim ben phai 
// void timkiem(int a[], int l, int r)
// {
//    if(l>r){ cout << r+1; return;}
//    int m = l + (r-l)/2;
//    if(a[m]!=m) return timkiem(a,l,m-1);
//    return timkiem(a,m+1,r);
// }
// int main()
// {
//     int n, i = 0;
//     cin >> n;
//     cout << "nhap " << 2 * n - 1 << " phan tu: " << endl;
//     int a[2 * n - 1], k = 2 * n - 1;
//     for (int i = 0; i < 2 * n - 1; i++)
//     {
//         cin >> a[i];
//     }
//     mergeSort(a, 0, k - 1);
//     timkiem(a, 0, k - 1);
// }


// b)
// Phương trình truy hồi của Merge Sort: 
// T(n) = 2T(n/2) + O(n) 
// - T(n) : độ phức tạp thuật toán Merge Sort với n phần tử
// - 2T(n/2) : là độ phức tạp của việc sắp xếp nửa đầu và nửa sau của mảng
// - O(n) : là độ phức tạp trộn 2 mảng đã sắp xếp 

// Theo định lý chủ Master, Phương trình truy hồi có dạng : T(n) = aT(n/b) + f(n).
// f(n) = O(n^(logb a)) , thì T(n) = O(n^(logb a)logn).
// f(n) = O(n) = O(n^1) => logb a = log2 2 = 1
// a=2,b=2 -> T(n) = O(nlogn).

// Phương trình truy hồi cho hàm tìm kiếm:
// T(n) = T(n/2) + O(1)
// - T(n) : độ phức tạp hàm tìm kiếm với n phần tử
// - T(n/2) : là độ phức tạp của việc tìm kiếm trong một nửa mảng
// - O(1) : độ phức tạp của các phép tính toán khác trong hàm
// a=1,b=2 -> T(n) = O(logn).


// Vậy tổng độ phức tạp : O(nlogn)