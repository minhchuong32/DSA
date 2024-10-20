// #include <bits/stdc++.h>
// using namespace std;

// void selection_sort(int a[],int n);
// void insertion_sort(int a[],int n);
// void merge_sort(int a[],int l,int r);
// void merge(int a[],int l,int r,int m);
// void output(int a[],int n);

// int main() {
//     int n = 8;
//     int a[8]={2,4,5,7,1,2,3,6};
//     // selection_sort(a,8);
//     // insertion_sort(a,8);
//     // merge(a,0,7);
//     merge_sort(a,0,n-1);
//     output(a,n);
//     return 0;
// }


// void merge(int a[],int l,int m,int r)
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
// void merge_sort(int a[],int l,int r) {
//     if(l>=r) return ;
//     int m = (l+r)/2;
//     merge_sort(a,l,m);
//     merge_sort(a,m+1,r);
//     merge(a,l,m,r);
// }

// void output(int a[],int n) {
//     for (int i=0;i<n;i++) cout <<a[i]<<" ";
// }

// void selection_sort(int a[],int n) {
//     for (int i=0;i<n;i++) {
//         int flag = i;
//         for (int j=i+1;j<n;j++) {
//             if(a[flag]>a[j]) flag=j;
//         }
//         swap(a[flag],a[i]);
//     }
// }
// void insertion_sort(int a[],int n) {
//     for (int i=1;i<n;i++) {
//         int key = a[i];
//         int j = i-1;
//         while(j>=0 && a[j] > key) {
//             a[j+1] = a[j];
//             j--;
//         }
//         a[j+1] = key;
//     }
// }