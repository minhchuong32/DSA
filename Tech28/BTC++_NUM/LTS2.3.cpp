// #include <iostream>
// #include <math.h>
// using namespace std;
// bool check[101] ;

// void sieve() {
// 	for (int i=2;i<=100;i++) {
// 		check[i]=true;
// 	}
	
// 	for (int i=2;i<=100;i++) {
// 		if (check[i]) {
// 			for (int j=i*i;j<=100;j+=i) {
// 				check[j]=false;
// 			}
// 		}
// 	}
	
// }

// int main () {
// 	sieve();
// 	int n;
// 	cin >> n;
	
// 	for (int i=2;i<=n;i++) {
// 		if (check[i]) {
// 			cout << i;
// 		}
// 	}
// }