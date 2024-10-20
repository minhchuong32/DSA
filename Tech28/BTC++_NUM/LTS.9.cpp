// #include <iostream>
// #include <math.h>
// using namespace std ;

// //Ví dụ: Tính GCD của 48 và 18 bằng thuật toán Euclid:

// //Lần 1: 48(a) chia 18(b) được 2 dư 12.
// //Lần 2: 18 chia 12 được 1 dư 6.
// //Lần 3: 12 chia 6 được 2 dư 0
// // tao temp de day b qua a va du qua b ( bo a di)
// int gcd(int a, int b ) {
// 	while (b!=0) {
// 		int temp=b;
// 		b=a%b;
// 		a=temp;
// 	} return a;
// }

// int main () {
// 	int a,b;
// 	cin >>a>>b;
// 	for (int i=a;i<b;i++) {
// 		for (int j=i+1;j<=b;j++) {
// 			if (gcd(i,j)==1) {
// 				cout <<"("<< i <<"," <<j<<")" << endl;
// 			}
// 		}
		
// 	}
		
// }

