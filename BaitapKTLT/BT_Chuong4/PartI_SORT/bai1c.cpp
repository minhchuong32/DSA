// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <vector>

// using namespace std;
// using namespace std::chrono;

// long long compare_count = 0;
// long long assign_count = 0;
// long long compare_count_key = 0;
// long long assign_count_key = 0;

// void merge(int *array, int left, int middle, int right, long long &compare_count, long long &assign_count);
// void merge_sort(int *array, int left, int right, long long &compare_count, long long &assign_count);
// void selection_sort(int *array, int size, long long &compare_count, long long &assign_count);
// void insertion_sort(int *array, int size, long long &compare_count, long long &assign_count);
// void input(int *&array, int &size);
// void output(int *array, int size);

// int main()
// {
//     srand(time(0));
//     ofstream outFile("bai_1c.txt");
//     if (!outFile)
//     {
//         cout << "Can't Open File !" << endl;
//         return 1;
//     }

//     const int num_runs = 10;
//     int n = 10;

//     for (int run = 1; run <= num_runs; run++)
//     {
//         // create a dynamic array
//         int *Array = new int[n];
//         input(Array, n);
//         long long compare_count_merge = 0;
//         long long assign_count_merge = 0;
//         long long compare_count_selection = 0;
//         long long assign_count_selection = 0;
//         long long compare_count_insertion = 0;
//         long long assign_count_insertion = 0;
//         // time run merge
//         auto start_merge = system_clock::now();
//         merge_sort(Array, 0, n - 1, compare_count_merge, assign_count_merge);
//         auto end_merge = system_clock::now();
//         auto duration_merge = duration_cast<nanoseconds>(end_merge - start_merge);

//         // time run selection
//         auto start_selection = system_clock::now();
//         selection_sort(Array, n, compare_count_selection, assign_count_selection);
//         auto end_selection = system_clock::now();
//         auto duration_selection = duration_cast<nanoseconds>(end_selection - start_selection);

//         // time run selection
//         auto start_insertion = system_clock::now();
//         insertion_sort(Array, n, compare_count_insertion, assign_count_insertion);
//         auto end_insertion = system_clock::now();
//         auto duration_insertion = duration_cast<nanoseconds>(end_insertion - start_insertion);

//         output(Array,n);


//         outFile << "Run:"<<run+1<<endl
//                 << "So phep so sanh,"
//                 << " So phep gan,"
//                 << " Time" << endl
//                 << " Merge sort: " << compare_count_merge << "," << assign_count_merge << "," << duration_merge.count() << " nanoseconds" << endl
//                 << " Selection Sort: " << compare_count_selection << "," << assign_count_selection << "," << duration_selection.count() << " nanosecond " << endl
//                 << " Insertion Sort: " << compare_count_insertion << "," << assign_count_insertion << "," << duration_insertion.count() << " nanosecond " << endl;

//         delete[] Array;
//     }
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
//     cout <<"____________________________________"<<endl;
// }

// void selection_sort(int *array, int size, long long &compare_count, long long &assign_count)
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

// void insertion_sort(int *array, int size, long long &compare_count, long long &assign_count)
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

// void merge(int *array, int left, int middle, int right, long long &compare_count, long long &assign_count)
// {
//     vector<int> x(array + left, array + middle + 1);
//     vector<int> y(array + middle + 1, array + right + 1);
//     int i = 0, j = 0;
//     while (i < x.size() && j < y.size())
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
//     while (i < x.size())
//     {
//         assign_count++;
//         array[left++] = x[i++];
//     }
//     while (j < y.size())
//     {
//         assign_count++;
//         array[left++] = y[j++];
//     }
// }

// void merge_sort(int *array, int left, int right, long long &compare_count, long long &assign_count)
// {
//     if (left >= right)
//         return;
//     int middle = (left + right) / 2;
//     merge_sort(array, left, middle, compare_count, assign_count);
//     merge_sort(array, middle + 1, right, compare_count, assign_count);
//     merge(array, left, middle, right, compare_count, assign_count);
// }
