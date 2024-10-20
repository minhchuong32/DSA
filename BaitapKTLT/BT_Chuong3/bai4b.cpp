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





















