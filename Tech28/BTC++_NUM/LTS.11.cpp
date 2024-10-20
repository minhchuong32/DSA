// #include <iostream>
// #include <math.h>
// using namespace std ;

// int check[1000001];
// bool sieve() {
// 	for (int i=2;i<=1000000;i++){
// 		check[i]=true;
// 	}
// 	for (int i=2;i<=1000;i++) {
// 		if (check[i]) {
// 			for (int j=i*i;j<=1000000;j+=i) {
// 				check[j]=false;
// 			}
// 		}
// 	}
// }

// int main () {
// 	sieve();
// 	int t;cin >>t;
// 	while (t--) {
// 		int n;
// 	int cnt=0;
// 		cin >> n;
// 		for (int i=1;i<=n;i++) {
// 			if (check[i] ) {
// 				if (i*i <=n)
// 				{
// 				++cnt;}
// 		} 
// 	} cout << cnt;

// }
// }