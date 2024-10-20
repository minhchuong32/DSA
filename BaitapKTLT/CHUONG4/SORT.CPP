// #include <bits/stdc++.h>
// #define SIZE 100
// using namespace std;


// // selection_sort 
// void selection_sort(int array[],int size);
// // insertion_sort
// void insertion_sort(int array[] ,int size);
// // merge_sort 
// void input(int array[],int &size);
// // partition
// int partition(int a[],int l,int r) 
// void output(int array[],int size);
// int main() {
//     int array[SIZE],size;
//     input(array,size);
//     // selection_sort(array,size);
//     insertion_sort(array,size);
//     output(array,size);
// }

// void input(int array[],int &size){
//     cin>>size;
//     for (int i=0;i<size;i++) cin>>array[i];
// }
// void output(int array[],int size) {
//     for (int i=0;i<size;i++) cout <<array[i]<<" ";
// }
// void selection_sort(int array[],int size) {
//     for (int i=0;i<size-1;i++) {
//         int key = i;
//         for (int j=i+1;j<size;j++) {
//             if(array[j]>array[key]) key = j; 
//         }
//         int temp = array[key];
//         array[key] = array[i];
//         array[i] = temp;
//     }
// }
// void insertion_sort(int array[],int size) {
//     for (int i=2;i<size;i++) {
//         int key = array[i];
//         int j = i-1;
//         while(j>0 && array[j]>key) {
//             array[j+1] = array [j];
//             j--;
//         }
//         array[j+1] = key;
//     }
// }


// // tao ham sx tron 2 mang con da dc tach trc do(da sx) (Merge) 
// void Merge(int a[],int l,int m,int r)
//  {
// 	vector<int> x (a+l,a+m+1); // copy phan tu tu chi so left -> midle vao vecto x
// 	vector<int> y (a+m+1,a+r+1); // midle+1 -> right
// 	int j=0,i=0;
// 	while(i<x.size() && j<y.size()) 
// 	{
//         // tron lan luot tung phan tu vao array 
// 		if(x[i]<=y[j]) a[l++]=x[i++];
// 		else a[l++]=y[j++];
// 	}
// 	// duyet cac phan tu con lai trong mang a or b ( vd mang a dai hon mang b a ket thuc truoc -> in ra cac phan tu con lai trong mang b)
// 	while(i<x.size()) a[l++]=x[i++];
// 	while(j<y.size())  a[l++]=y[j++];
//  } 
// // mergesort (sx tron)
// void mergesort(int a[],int l, int r) 
// {
// 	if(l>=r) return; // return value tai index =l=r
// 	int m =(l+r)/2;
// 	mergesort(a,l,m);
// 	mergesort(a,m+1,r);
// 	Merge(a,l,m,r);
// }
// // Quicksort (phan hach Lomuto)-> chon pivot(chot) o phan tu cuoi
// // tao partition(vach ngan) chuyen tat ca cac phan tu nho hon pivot mot ben
// int partition(int a[],int l,int r) 
// {
// 	int pivot =a[r];
// 	int i=l-1;// de goi de quy l thay doi nen ko dc gan truc tiep i=-1;
// 	for (int j=l;j<r;j++) 
// 	{
//       if(a[j]<=pivot) 
// 	  {
// 		// tang i -> idx of pivot 
// 		++i; swap (a[j],a[i]);
// 	  }
// 	}
// 	++i;swap(pivot,a[i]);return i;// dua phan tu pivot (chot) ve giua
// }
// //  recursive
// void quicksort(int a[],int l,int r) 
// {
// 	if(l>=r) return;
// 	int p = partition(a,l,r); // lay index cua phan tu pivot (chot)
// 	quicksort(a,l,p-1);
// 	quicksort(a,p+1,r);
// }
// // Quicksort (phan hach Hoare) -> chon pivot o phan tu dau
// int partition2(int a[],int l,int r) 
// {
// 	int i=l-1;int j=r+1; int pivot =a[l];
// 	while(1) 
// 	{
// 		do{++i;} 
// 		while(
// 			a[i]<pivot
// 		);
// 		do{j--;} 
// 		while(
// 			a[j]>pivot
// 		);
// 		if(i<j) swap(a[i],a[j]);
// 		 return j; // index cua pivot
// 	}
// }

// void quicksort2(int a[],int l,int r) 
// {
// 	if(l>=r) return;
// 	int p =partition2(a,l,r); //(return pivot)
// 	quicksort2(a,l,p);
// 	quicksort2(a,p+1,r);
// }

// // linear search (O(n))
// // Binary search(O(logn))
// // selection = insertion  =(O(n^2))
// // Merge = quik = O(nlogn);

// void partition(int a[],int l,int r) {
//     int pivot = a[r];
//     int i = l-1;
//     for (int j=l;j<r;j++) {
//         if(a[r])
//     }

// }





// Phan hoach Hoare 


// /* C++ implementation of QuickSort using Hoare's 
//    partition scheme. */
// // #include <bits/stdc++.h> 
// // using namespace std; 
  
// /* This function takes first element as pivot, and places 
//    all the elements smaller than the pivot on the left side 
//    and all the elements greater than the pivot on 
//    the right side. It returns the index of the last element 
//    on the smaller side*/
// int partition(int arr[], int low, int high) 
// { 
//     int pivot = arr[low]; 
//     int i = low - 1, j = high + 1; 
  
//     while (true) { 
//         // Find leftmost element greater than 
//         // or equal to pivot 
//         do { 
//             i++; 
//         } while (arr[i] < pivot); 
  
//         // Find rightmost element smaller than 
//         // or equal to pivot 
//         do { 
//             j--; 
//         } while (arr[j] > pivot); 
  
//         // If two pointers met. 
//         if (i >= j) 
//             return j; 
  
//         swap(arr[i], arr[j]); 
//     } 
// } 
  
// /* The main function that implements QuickSort 
//  arr[] --> Array to be sorted, 
//   low  --> Starting index, 
//   high  --> Ending index */
// void quickSort(int arr[], int low, int high) 
// { 
//     if (low < high) { 
//         /* pi is partitioning index, arr[p] is now 
//            at right place */
//         int pi = partition(arr, low, high); 
  
//         // Separately sort elements before 
//         // partition and after partition 
//         quickSort(arr, low, pi); 
//         quickSort(arr, pi + 1, high); 
//     } 
// } 
  
// /* Function to print an array */
// void printArray(int arr[], int n) 
// { 
//     for (int i = 0; i < n; i++) 
//         printf("%d ", arr[i]); 
//     printf("\n"); 
// } 
  
// // Driver Code 
// int main() 
// { 
//     int arr[] = { 10, 7, 8, 9, 1, 5 }; 
//     int n = sizeof(arr) / sizeof(arr[0]); 
//     quickSort(arr, 0, n - 1); 
//     printf("Sorted array: \n"); 
//     printArray(arr, n); 
//     return 0; 
// }