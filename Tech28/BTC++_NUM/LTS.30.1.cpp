// #include <iostream>
// #include <math.h>
// using namespace std;

// int c1(int n) {
// 	long long f1=0;
// 	long long f2=1;
// 	cout << f1 << " "<< f2<< " ";
// 	for (int i=3;i<=n;i++) {
// 		long long f3=f2+f1;
// 		cout << f3;
// 		f1=f2;
// 		f2=f3;
// 	}
// }

// int prime[100];
// void c2() {
// 	prime[0]=0;
// 	prime [1]=1;
// 	for (int i=2;i<=92;i++) {
// 		prime[i]=prime[i-1]+prime[i-2];
// 	}
// }

// int main () {
// 	c2();
// 	int n;
// 	cin >> n;
// 	for (int i=0;i<=92;i++) {
// 		if (i==n) {
// 			cout << prime[i];
// 			break;
// 		}
// 	}
// }