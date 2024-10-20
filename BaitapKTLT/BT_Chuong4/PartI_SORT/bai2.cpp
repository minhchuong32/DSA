// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// using namespace std;
// using namespace std::chrono;

// void quick_sort(int *array, int left, int right, long long &assign_count, long long &compare_count);
// void partition_first_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count);
// void partition_last_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count);
// void partition_random_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count);
// int getRandomPivot(int left, int right);
// void input(int *&array, int &size);
// void output(int *array, int size);

// int main()
// {
//     srand(time(0)); // Seed for random number generator

//     ofstream outFile;
//     outFile.open("cau2.txt");

//     int num_runs = 10;
//     int n = 100;

//     for (int run = 1; run <= num_runs; run++)
//     {
//         int *Array = new int[n];
//         input(Array, n);
//         long long assign_count = 0;
//         long long compare_count = 0;

//         auto start = system_clock::now();
//         quick_sort(Array, 0, n - 1, assign_count, compare_count);
//         auto end = system_clock::now();
//         auto duration = duration_cast<nanoseconds>(end - start);
//         cout << duration.count() << endl;

//         outFile << "Lan " << run << ":" << endl;
//         outFile << "So phep ghan: " << assign_count << endl;
//         outFile << "So phep so sanh: " << compare_count << endl;
//         outFile << "Thoi gian chay: " << duration.count() << "nanoseconds: " << endl;
//         outFile << "-------------------------------------" << endl;

//         delete[] Array;
//     }

//     outFile.close();

//     return 0;
// }

// int getRandomPivot(int left, int right)
// {
//     srand(time(NULL));
//     return left + rand() % (right - left);
// }

// void input(int *&array, int &size)
// {
//     array = new int[size];
//     for (int i = 0; i < size; i++)
//     {
//         array[i] = rand() % 1000000 + 1; // tao so ngau nhien 1->100
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

// void partition_random_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count)
// {
//     int pivot_idx = getRandomPivot(left, right);
//     swap(array[pivot_idx], array[right]);
//     assign_count += 3;
//     int pivot = array[right];
//     int i = left - 1;
//     for (int j = left; j <= right - 1; j++)
//     {
//         compare_count++; // dem so phep so sanh
//         if (array[j] > pivot)
//         {
//             i++;
//             swap(array[j], array[i]);
//             assign_count += 3;
//         }
//     }
//     i++;
//     swap(array[i], array[right]);
//     assign_count += 3;
//     pivot_index = i;
// }

// void partition_first_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count)
// {
//     int pivot = array[left];
//     int j = right + 1;
//     for (int i = right-1; i >= left; i--)
//     {
//         compare_count++;
//         if (array[i] >= pivot)
//         {
//             j--;
//             swap(array[j], array[i]);
//             assign_count += 3;
//         }
//     }
//     --j;
//     swap(array[j], array[left]);
//     assign_count += 3;
//     pivot_index = j;
// }

// void partition_last_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count)
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
//     partition_first_pivot(array, left, right, pivot, assign_count, compare_count);
//     quick_sort(array, left, pivot - 1, assign_count, compare_count);
//     quick_sort(array, pivot + 1, right, assign_count, compare_count);
// }
