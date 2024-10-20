// #include <iostream>
// #include <math.h>
// using namespace std;

// int check(int n) {
// 	if(n==1) return 1;
// 	if(n%2==0) return 2;
// 	for (int i=3;i<=n;i+=2) {
// 		if (n%i==0) {
// 			return i;
// 		}
// 	}
// } 
// // ham sang uoc nho nhat tu 1->n
// int prime[100001];
// void seive() {
// 	for (int i=1;i<=100000;i++) {
// 		prime[i]=i;
// 	}
// 	for (int i=2;i<=sqrt(100000);i++) {
// 		if(prime[i]) {
// 			for (int j=i*i;j<=100000;j+=i) {
// 				// so 12 nhận 2 chu ko nhan 3 ( prime[12]=2 nên ko gán 3 cho index 12)
// 				if(prime[j]=j)
// 				 {
// 					prime[j]=i;
// 				}
// 			}
// 		}
// 	}
// }

// int main () {
// 	seive();
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int n;
// 		cin >>n;
// 		for (int i=1;i<=n;i++) {
// 			cout <<prime[i];
// 		} 
// 	}
// }