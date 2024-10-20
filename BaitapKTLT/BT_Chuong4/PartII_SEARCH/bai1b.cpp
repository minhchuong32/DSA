// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <fstream>

// using namespace std;
// using namespace std::chrono;

// // Hàm tìm kiếm tuyến tính
// int linearSearch(int a[], int n, int x, int &compare)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         compare++;
//         if (a[i] == x)
//             return i; // Trả về chỉ số của phần tử nếu tìm thấy
//     }
//     return -1; // Trả về -1 nếu không tìm thấy
// }

// // Hàm tìm kiếm nhị phân
// int binarySearch(int a[], int left, int right, int x, int &compare)
// {
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         compare++;
//         if (a[mid] == x)
//             return mid; // Trả về chỉ số của phần tử nếu tìm thấy
//         else if (a[mid] < x)
//             left = mid + 1; // Tiếp tục tìm kiếm bên phải của mảng
//         else
//             right = mid - 1; // Tiếp tục tìm kiếm bên trái của mảng
//     }
//     return -1; // Trả về -1 nếu không tìm thấy
// }

// int main()
// {
//     srand(time(0));
//     // b. Tạo một mảng ngẫu nhiên gồm n = 10 phần tử kiểu số nguyên có giá trị trong khoảng từ 1 đến 10.
//     ofstream ofs("cau_b.txt");
//     if (!ofs)
//     {
//         cout << "Error opening file." << endl;
//         return 1;
//     }

//     int N = 100000;
//     int random_array[N];
//     for (int i = 0; i < N; ++i)
//     {
//         random_array[i] = rand() % 1000000 + 1;
//     }

//     // Thực hiện chạy các thuật toán trên 10 lần
//     const int runs = 10;
//     for (int run = 0; run < runs; ++run)
//     {
//         // random x can tim 
//         int x ;
//         x = rand() % 100;
//         int compare_linear = 0, compare_binary = 0;
//         // do thoi gian linear 
//         auto start_linear = steady_clock::now();
//         linearSearch(random_array, N, x, compare_linear);
//         auto stop_linear = steady_clock::now();
//         auto duration_linear = duration_cast<nanoseconds>(stop_linear - start_linear);
//         // do thoi gian binary 
//         auto start_binary = steady_clock::now();
//         binarySearch(random_array, 0, N - 1, x, compare_binary);
//         auto stop_binary = steady_clock::now();
//         auto duration_binary = duration_cast<nanoseconds>(stop_binary - start_binary);

//         ofs << "Run " << run + 1 << ":" << x << endl;
//         ofs << "Linear Search:"
//             << " So phep so sanh: " << compare_linear << ", Thoi gian chay: " << duration_linear.count() << " nanoseconds" << endl;
//         ofs << "Binary Search:"
//             << " So phep so sanh: " << compare_binary << ", Thoi gian chay: " << duration_binary.count() << " nanoseconds" << endl;
//     }
//     ofs.close();
//     return 0;
// }


