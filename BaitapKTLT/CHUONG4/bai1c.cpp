// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <vector>
// using namespace std;
// using namespace std::chrono;

// void merge(int *array, int left, int middle, int right, long long &assign_count, long long &compare_count);
// void merge_sort(int *array, int left, int right, long long &assign_count, long long &compare_count);
// void selection_sort(int *array, int size, long long &assign_count, long long &compare_count);
// void insertion_sort(int *array, int size, long long &assign_count, long long &compare_count);
// void partition(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count);
// void quick_sort(int *array, int left, int right, long long &assign_count, long long &compare_count);
// void input(int *&array, int &size);
// void output(int *array, int size);

// int main()
// {
//     srand(time(0)); // Seed for random number generator

//     ofstream outFile;
//     outFile.open("output.txt");

//     const int num_runs = 10;
//     int n = 1000000;

//     for (int run = 1; run <= num_runs; run++)
//     {
//         int *Array = new int[n];
//         input(Array, n);
//         long long assign_count = 0;
//         long long compare_count = 0;

//         auto start = system_clock::now(); 
//         quick_sort(Array, 0, n - 1, assign_count, compare_count);
//         // merge_sort(Array,0,n-1,assign_count,compare_count);
//         // selection_sort(Array,n,assign_count,compare_count);
//         // insertion_sort(Array,n,assign_count,compare_count);
//         auto end = system_clock::now(); 
//         auto duration = duration_cast<milliseconds>(end - start); 
//         cout << duration.count() << endl;

//         outFile << "Lan " << run << ":" << endl;
//         outFile << "So phep ghan: " << assign_count << endl;
//         outFile << "So phep so sanh: " << compare_count << endl;
//         outFile << "Thoi gian chay: " << duration.count() << " milliseconds" << endl;
//         outFile << "-------------------------------------" << endl;

//         delete[] Array;
//     }

//     outFile.close();

//     return 0;
// }

// void input(int *&array, int &size)
// {
//     array = new int[size];
//     for (int i = 0; i < size; i++)
//     {
//         array[i] = rand() % 1000000000 + 1; // tao so ngau nhien 1->1e9
//     }
// }

// void output(int *array, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }
// // selection sort
// void selection_sort(int *array, int size, long long &assign_count, long long &compare_count)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int flag = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             compare_count++;
//             if (array[j] > array[flag])
//                 flag = j;
//         }
//         if (flag != i)
//         {
//             swap(array[i], array[flag]);
//             assign_count += 3;
//         }
//     }
// }
// // insertion sort
// void insertion_sort(int *array, int size, long long &assign_count, long long &compare_count)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int key = array[i];
//         int j = i - 1;
//         while (j >= 0 && array[j] < key)
//         {
//             array[j + 1] = array[j];
//             assign_count++;
//             j--;
//         }
//         array[j + 1] = key;
//         assign_count++;
//     }
// }
// // merge
// void merge(int *array, int left, int middle, int right, long long &assign_count, long long &compare_count)
// {
//     vector<int> x(array + left, array + middle + 1);
//     vector<int> y(array + middle + 1, array + right + 1);
//     int i = 0, j = 0;
//     while (i <= x.size() && j <= y.size())
//     {
//         compare_count++;
//         if (x[i] < y[j])
//         {
//             array[left++] = x[i++];
//             assign_count++;
//         }
//         else
//         {
//             array[left++] = y[j++];
//             assign_count++;
//         }
//     }
//     while (i <= x.size())
//     {
//         assign_count++;
//         array[left++] = x[i++];
//     }
//     while (j <= y.size())
//     {
//         assign_count++;

//         array[left++] = y[j++];
//     }
// }
// void merge_sort(int *array, int left, int right, long long &assign_count, long long &compare_count)
// {
//     if (left >= right)
//         return;
//     int middle = (left + right) / 2;
//     merge_sort(array, left, middle,assign_count,compare_count);
//     merge_sort(array, middle + 1, right,assign_count,compare_count);
//     merge(array, left, middle, right, assign_count,compare_count);
// }
// // quick sort
// void partition(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count)
// {
//     int pivot = array[right];
//     int i = left - 1;
//     for (int j = left; j <= right - 1; j++)
//     {
//         compare_count++; // dem so phep so sanh
//         if (array[j] <= pivot)
//         {
//             i++;
//             swap(array[i], array[j]);
//             assign_count += 3; // dem so phep gan
//         }
//     }
//     i++;
//     swap(array[i], array[right]);
//     assign_count += 3;
//     pivot_index = i;
// }

// void quick_sort(int *array, int left, int right, long long &assign_count, long long &compare_count)
// {
//     if (left >= right)
//         return;

//     int pivot;
//     partition(array, left, right, pivot, assign_count, compare_count);
//     quick_sort(array, left, pivot - 1, assign_count, compare_count);
//     quick_sort(array, pivot + 1, right, assign_count, compare_count);
// }
