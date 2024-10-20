// #include <iostream>
// #include <math.h>
// using namespace std;

// int nt(int n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) 
// 		return 0;
// 	}
// 	return n>1;
//  }

// bool check[100001];
// void sieve () {
// 	for (int i=2;i<=10000;i++) {
// 		check[i]=true;
// 	}
// 	for (int i=2;i<=100;i++) {
// 		if (check[i]) {
// 			for (int j=i*i;j<=10000;j+=i) {
// 				check[j]=false;
// 			}
// 		}
// 	}
// }

// int main () {
// 	sieve();
// 	int n;
// 	cin >> n;
// 	for (int i=1;i<=n/2;i++) {
// 		if(check[i] && check[n-i]) {
// 			cout << i << " " << n-i;
// 		}
// 	}
// }