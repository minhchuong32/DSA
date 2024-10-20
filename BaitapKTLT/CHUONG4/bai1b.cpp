// #include <bits/stdc++.h>
// #define SIZE 100
// using namespace std;

// void selection_sort(int *&array, int &size);
// void insertion_sort(int *&array, int &size);
// void merge_sort(int *array, int left, int right, int &size);
// void merge(int *array, int left, int middle, int right);
// void partition(int *array, int left, int right, int &pivot_index);
// void quick_sort(int *array, int left, int right);
// void input(int *&array, int &size);
// void output(int *array, int size);

// int main()
// {
//     int Size;
//     cin >> Size;
//     int *Array = new int[Size];
//     input(Array, Size);
//     // selection_sort(Array,Size);
//     // insertion_sort(Array,Size);
//     // merge_sort(Array, 0, Size - 1, Size);
//     quick_sort(Array,0,Size-1);
//     output(Array, Size);
//     delete[] Array;
//     return 0;
// }
// // in out
// void input(int *&array, int &size)
// {
//     array = new int[size];
//     for (int i = 0; i < size; i++)
//         cin >> array[i];
// }
// void output(int *array, int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << array[i] << " ";
// }
// // mergersort
// void merge(int *array, int left, int middle, int right)
// {
//     vector<int> x(array + left, array + middle + 1);
//     vector<int> y(array + middle + 1, array + right + 1);
//     int i = 0, j = 0;
//     while (i < x.size() && j < y.size())
//     {
//         if (x[i] > y[j])
//             array[left++] = x[i++];
//         else
//             array[left++] = y[j++];
//     }
//     while (i < x.size())
//         array[left++] = x[i++];
//     while (j < y.size())
//         array[left++] = y[j++];
// }
// void merge_sort(int *array, int left, int right, int &size)
// {
//     if (left >= right)
//         return;
//     int middle = (left + right) / 2;
//     merge_sort(array, left, middle, size);
//     merge_sort(array, middle + 1, right, size);
//     merge(array, left, middle, right);
// }
// // quick sort
// void partition(int *array, int left, int right, int &pivot_index)
// {
//     int pivot = array[right];
//     int i = left - 1;
//     for (int j = left; j <= right - 1; j++)
//     {
//         if (array[j] >= pivot)
//         {
//             i++;
//             swap(array[i], array[j]);
//         }
//     }
//     i++;
//     swap(array[i], array[right]);
//     pivot_index = i;
// }
// void quick_sort(int *array, int left, int right)
// {
//     if (left >= right)
//         return;
//     int pivot;
//     partition(array, left, right, pivot);
//     quick_sort(array, left, pivot - 1);
//     quick_sort(array, pivot + 1, right);
// }

// // selectionsort
// void selection_sort(int *&array, int &size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int flag = i;
//         for (int j = i; j < size; j++)
//         {
//             if (array[flag] < array[j])
//                 flag = j;
//         }
//         swap(array[flag], array[i]);
//     }
//     int *tmp_array = new int[size];
//     for (int i = 0; i < size; i++)
//         tmp_array[i] = array[i];
//     delete[] array;
//     array = tmp_array;
// }
// // inserttion sort
// void insertion_sort(int *&array, int &size)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int key = array[i];
//         int j = i - 1;
//         while (j > 0 && array[j] < key)
//         {
//             array[j + 1] = array[j];
//             j--;
//         }
//         array[j + 1] = key;
//     }
//     int *tmp_array = new int[size];
//     for (int i = 0; i < size; i++)
//         tmp_array[i] = array[i];
//     delete[] array;
//     array = tmp_array;
// }
