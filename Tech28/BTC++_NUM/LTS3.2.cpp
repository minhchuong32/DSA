// #include <iostream>
// #include <math.h>
// using namespace std ;
// // tao mang tra ve true false
// bool nt[100];
// //tao ham kt nt cach 1:
// void sieve() {
// 	for (int i=2;i<=100;i++) {
// 		nt[i]=true;
// 	}
// 	//loai cac boi cua so nt:
// 	for (int i=2;i<=100;i++) {
// 		if (nt[i]) {
// 			for (int j =i*i;j<=100;j+=i) {
// 				nt[j]=false;
// 			}
// 		}
// 	}
// }

// //tao ham kt nt cach 2:
// int main (int n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) {
// 			return 0;
// 		}
// 	} return n>1;
// }

// int main () {
// 	sieve();
// 	int a,b;
// 	cin >>a>>b;
// 	for (int i=a;i<=b;i++) {
// 		if (nt[i]) {
// 			cout << " " << i;
// 		}
// 	}
// }