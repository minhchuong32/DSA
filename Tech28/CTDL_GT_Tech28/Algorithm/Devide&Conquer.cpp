// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// int MOD = 1e9 + 7;

// // (A+B) % C = ((A%C) + (B%C)) % C
// // (A-B) % C = ((A%C) - (B%C)) % C
// // (A*B) % C = ((A%C) * (B%C)) % C
// // (A/B) % C = ((A%C) * (B^-1%C)) % C

// // luy thua nhi phan  a^b  
// // int PowMod(int a, int b) {
// //     if(!b) return 1;
// //     int x = PowMod(a,b/2);
// //     if(b%2==0) return x*x;
// //     return x*x*a;
// // }


// //Problem 2: luy thua nhi phan nghich dao  a^b (b so lon ngc cua a) 123^321 mod 1e7
// int rev(int n) {
//     int s = 0;
//     while(n) {
//         s = 10*s + n%10;
//         n/=10;
//     }
//     return s;
// }

// int powMod(int a,int n) {
//     if(!n) return 1;
//     ll x = powMod(a,n/2);
//     if(n%2==0) return ((x%MOD) * (x%MOD)) % MOD;
//     return (( ((x%MOD) * (x%MOD)) % MOD) * (a%MOD)) % MOD;
// }
// void solve_2() {
//     int n ; cin>>n;
//     cout <<powMod(n,rev(n));
// }


// //Problem 3: dem day so : cho n co bao nhieu cach chon ra cac phan tu co tong bang n 
// // x1 + x2 + .. xk = n
// // xi >= 1
// // => So cach chon x: k-1 C n-1
// // xi >= 0
// // => So cach chon x: k-1 C n+k-1

// // solve (k=n): k-1 C n-1 = 1C5 + 2C5 + 3C5 + 4C5 + 5C5 = 2^5 -> answer = 2^n-1
// void bai3() {
//     int n ; cin>>n;
//     cout << powMod(2,n-1);
// }

// // Problem 4: gap doi day so 
// // [1] - [1 2 1] - ['1 2 1 '3' 1 2 1'] - ['1 2 1 3 1 2 1 '4' 1 2 1 3 1 2 1'] - ['1 2 1 3 1 2 1 4 1 2 1 3 1 2 1 '5' 1 2 1 3 1 2 1 4 1 2 1 3 1 2 1'] - .....
// // vd : vi tri 2(k-x) cua lan lap 5(x=2^5-1=16) -> 2 =  vi tri 2 cua lan lap 4 = vi tri thu 18(k) cua lan lap 5 
// int bai4(int n,int k) {
//     int x = pow(2,n-1);
//     if(k==x) return n;
//     if(k>x) return bai4(n-1,k-x);
//     return bai4(n-1,k);
// }
//     // cout << bai4(5,20); -> 3

// // Problem 5: Tim day con co tong lon nhat 
// int Crossing(int a[],int l,int r, int m) {
//     ll sumLeft = 0, sumLeft_max = 0;
//     for (int i=m;i>=l;i--) {
//         sumLeft+=a[i];
//         sumLeft_max = max(sumLeft,sumLeft_max);
//     }
//     ll sumRight = 0, sumRight_max = 0;
//     for (int i=m+1;i<=r;i++) {
//         sumRight+=a[i];
//         sumRight_max = max(sumRight,sumRight_max);
//     }
//     return sumRight_max + sumLeft_max;
// }

// int maxSum(int a[],int l,int r) {
//     if(l==r) return a[l];
//     int m = (l+r)/2;
//     return max({
//         maxSum(a,m+1,r),
//         maxSum(a,l,m),
//         Crossing(a,l,r,m)
//     });
// }
// void bai5() {
//     int n; cin>>n;
//     int a[n];
//     for (auto &x:a) cin>>x;
//     cout <<maxSum(a,0,n-1);
// }

// // Problem 6: Tim phan tu lon nhat nho hon hoac bang x 
// int Last_pos(int a[],int n,int x) {
//     int res = -1; int l = 0, r = n - 1;
//     while(l<=r) {
//         int m = (l+r)/2;
//         if(a[m]<=x) {
//             res = m;
//             l=m+1;
//         }
//         else {
//             r=m-1;
//         }
//     }
//     return res;
// }

// void bai6() {
//     int n,x; cin>>n>>x;
//     int a[n];
//     for (auto &x:a) cin>>x;
//     cout <<a[Last_pos(a,n,x)];
// }

// // Problem 7: Tim phan tu o vi tri thu k , cho 2 mang da sap xep 
// void Bai7_Merge() {
//     int n,m,k; cin>>n>>m>>k;
//     int a[n],b[m];
//     for (auto &x:a) cin>>x;
//     for (auto &y:b) cin>>y;
//     vector <int> v;
//     int i = 0, j = 0;
//     while(i<n && j<m) {
//         if(a[i]<=b[j]) v.push_back(a[i++]);
//         else v.push_back(b[j++]);
//     }
//     while(i<n) v.push_back(a[i++]);
//     while(j<m) v.push_back(b[j++]);
//     cout <<v[k-1]<<endl;

// }

// // Problem 8 : Tim vi tri khac nhau giua 2 mang a vs b
// // idea: chat doi -> neu giong nhau -> answer nam ben phai va ngc lai 
// int Bin_bai8(int a[],int b[], int n) {
//     int l = 0, r = n - 2, res = -1;
//     while(l<=r) {
//         int m = (l+r)/2;
//         if(a[m]==b[m]) {
//             l = m + 1;
//         }
//         else {
//             res = m;
//             r = m - 1;
//         }
//     }
//     return res;
// }
// // Problem 9 : dem so 0 
// // idea : vi tri dau tien = 1 -> count of zero
// int first_pos(int a[],int n) {
//     int l = 0, r = n -1 , res = -1;
//     while(l<=r) {
//         int m = (l+r)/2;
//         if(a[m] == 1) {
//             res = m;
//             r = m - 1;
//         }
//         else l = m + 1;
//         }
// }
// // thap phan  -> nhi phan 
// void in(ll n) {
//     if(!n) return ;
//     else {
//         in(n/2);
//         cout << n%2;
//     }
// }

// // thap phan - > he 16 
// // void convert (char a[]) {
// //     string s = "ABCDEF"; int cnt=0;
// //     for (int i=10;i<=15;i++) {
// //         a[i] = s[cnt++];
// //     }
// // }
// void in16(ll n ){
//     if(!n) return;
//     else {
//         in16(n/16); {
//                 if((n%16)==10) cout <<'A';
//                 if((n%16)==11) cout <<'B';
//                 if((n%16)==12) cout <<'C';
//                 if((n%16)==13) cout <<'D';
//                 if((n%16)==14) cout <<'E';
//                 if((n%16)==15) cout <<'F';
//                 if((n%16)<10) cout << n%16;
//         }
//     }
// }

// int main() {
//     // Bai7_Merge();
//     // in(13);
//     in16(16);
// } 


// *Bai tap class 
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

// // bai 2 
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


// Bai 3: dem cap nghich the bang merge 
#include <bits/stdc++.h>
using namespace std;

int merge(vector <int> &arr, vector <int> &tmp, int l, int m,int r) {

    // count of inversions(nghich the )
    int cnt = 0 ;
    // start index of left arr : left -> mid 
    int i = l;
    // start index of right arr : mid +1 -> right
    int j = m+1;
    // index of new array (tmp) sorted 
    int k = l;
    while(i<=m && j<=r) {
        if(arr[i]<arr[j]) {
            tmp[k++] = arr[i++];
        }
        else {
            tmp[k++] = arr[j++];
            // count of inversion 
            cnt+=(m - i) + 1;
        }
    }

    // push remaining element to tmp array 
    while(i<=m) tmp[k++] = arr[i++];
    while(j<=r) tmp[k++] = arr[j++];
    // copy tmp array to main array 
    for (int i=l;i<=r;i++) {
        arr[i] = tmp[i];
    }
    return cnt;
}

int Sort(vector<int> &a,vector <int> &tmp,int l,int r) {
    int cnt = 0;
    if(l<r) {
        int m = (l+r)/2;
        cnt+=Sort(a,tmp,l,m);
        cnt+=Sort(a,tmp,m+1,r);
        cnt+=merge(a,tmp,l,m,r);
    }
    return cnt;
}

// void input(vector <int> arr,int &size) {
//     cout << "Input size: ";
//     cin>>size;
//     arr.resize(size);
//     cout <<"Input array: ";
//     for (int i=0;i<size;i++) cin>>arr[i];
// }

int main(){
    // int size; vector <int> arr;
    // input(arr,size);
    // cout << Sort(arr,0,size-1);
    vector <int> arr = {1, 5, 4, 8, 10, 2, 6, 9, 12, 11, 3, 7};
    int n = arr.size();
    vector<int> tmp(n);
    cout <<"Count of inversion: "<< Sort(arr,tmp,0,n-1);
}
 



// // sort and push to tmp array , copy back to main array 
// int mergeAndCount(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
//     int inv_count = 0;

//     int i = left;       // Index for left subarray
//     int j = mid + 1;    // Index for right subarray
//     int k = left;       // Index for merged subarray

// //    left array : left -> mid ;  right array : mid + 1 -> right 
//     while (i <= mid && j <= right) {
//         if (arr[i] <= arr[j]) {
//             temp[k++] = arr[i++];
//         } else {
//             // If arr[i] > arr[j], it means there are (mid - i + 1) inversions
//             inv_count += (mid - i + 1);
//             temp[k++] = arr[j++];
//         }
//     }

//     // Copy the remaining elements of left subarray, if any
//     while (i <= mid) {
//         temp[k++] = arr[i++];
//     }

//     // Copy the remaining elements of right subarray, if any
//     while (j <= right) {
//         temp[k++] = arr[j++];
//     }

//     // Copy back the merged elements to original array
//     for (i = left; i <= right; i++) {
//         arr[i] = temp[i];
//     }

//     return inv_count;
// }

// int countInversions(vector<int> &arr, vector<int> &temp, int left, int right) {
//     int inv_count = 0;
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         inv_count += countInversions(arr, temp, left, mid);       // Inversions in left subarray
//         inv_count += countInversions(arr, temp, mid + 1, right);  // Inversions in right subarray

//         inv_count += mergeAndCount(arr, temp, left, mid, right);  // Count inversions during merging
//     }
//     return inv_count;
// }

// int main() {
//     vector<int> arr = {1, 5, 4, 8, 10, 2, 6, 9, 12, 11, 3, 7};
//     int n = arr.size();
//     vector<int> temp(n);

//     int inversions = countInversions(arr, temp, 0, n - 1);

//     cout << "Number of inversions: " << inversions << endl;
//     // for (auto it: arr) cout <<it<<" ";
//     return 0;
// }

// Bai 4
#include <iostream>
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
















