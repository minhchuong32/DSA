// #include <iostream>
// #include <math.h>
// using namespace std;
// // n!, p^x => tim x max de n!/p^x ==0

// int check(int n, int p) {
// 	int cnt=0;
// 	for ( int i=p;i<=n;i+=p) {
// 		int temp=i;
// 		while (temp%p==0) {
// 			++cnt;
// 			temp/=p;
// 		}
// 	} return cnt;
// }

// int check2(int n, int p) {
// 	int s=0;
// 	for ( int i =1;i<=n;i++) {
// 		s+=(n/pow(3,i));
// 		if (pow(3,i)>n) {break;
// 		}
// 	} return s;
	
//  }

// int main () {
// 	int t;
// 	cin >> t;
// 	for (int i=1;i<=t;i++) {
// 	cout << "#TC" << i << " ";
// 	int a,b;
// 	cin >> a>>b;
//     cout << " kq la: "<<check2(a,b) << endl;}	
// }