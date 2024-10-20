// #include <iostream>
// #include <vector>
// #include <chrono>
// #include <random>
// #include <algorithm>
// using namespace std;

// // Selection Sort
// void selectionSort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; ++i)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; ++j)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         if (minIndex != i)
//         {
//             swap(arr[i], arr[minIndex]);
//         }
//     }
// }

// // Insertion Sort
// void insertionSort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 1; i < n; ++i)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// // Merge Sort
// void merge(vector<int> &arr, int l, int m, int r)
// {
//     int n1 = m - l + 1;
//     int n2 = r - m;

//     vector<int> L(n1), R(n2);

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];

//     int i = 0;
//     int j = 0;
//     int k = l;
//     while (i < n1 && j < n2)
//     {
//         if (L[i] <= R[j])
//         {
//             arr[k] = L[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1)
//     {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2)
//     {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(vector<int> &arr, int l, int r)
// {
//     if (l >= r)
//     {
//         return;
//     }
//     int m = l + (r - l) / 2;
//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);
//     merge(arr, l, m, r);
// }

// int main()
// {
//     vector<int> a = {2, 4, 5, 7, 1, 2, 3, 6};

//     // Selection Sort
//     cout << "Selection Sort: ";
//     selectionSort(a);
//     for (int num : a)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Insertion Sort
//     vector<int> b = {2, 4, 5, 7, 1, 2, 3, 6};
//     cout << "Insertion Sort: ";
//     insertionSort(b);
//     for (int num : b)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Merge Sort
//     vector<int> c = {2, 4, 5, 7, 1, 2, 3, 6};
//     cout << "Merge Sort: ";
//     mergeSort(c, 0, c.size() - 1);
//     for (int num : c)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
