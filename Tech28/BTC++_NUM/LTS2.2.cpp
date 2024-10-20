// #include <iostream>
// #include <math.h>
// using namespace std;
// int main () {
// 	bool check[1000001] ;
// 	for (int i=2;i<=1000000;i++) {
// 		check[i]=true;
// 	}
// 	for (int i=2;i<=1000000;i++) {
// 		if (check[i]) {
// 			for (int j=i*i;j<=1000000;j+=i) {
// 				check[j]=false;
// 			}
// 		}
// 	}
// 	int n;
// 	cin >> n;
// 	for (int i=2;i<=n;i++) {
// 		if (check[i]==true) {
// 			cout << i;
// 		}
// 	}
	
// }