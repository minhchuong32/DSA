// #include <iostream>
// #include <math.h>
// using namespace std;

// int tong(int n) {
// 	int s=0;
// 	while(n) {
// 	s+=n%10;
// 	n/=10;	
// 	} return s;
// }

// int pt(int n) {
// 	int s=0;
// 	for (int i=2;i<=sqrt(n);i++) {
// 		while (n%i==0) {
//             s+=tong (i);
// 			n/=i;	
// 		}
// 	} 
// 	if (n!=1) 
// 		s+=tong(n);
// 	return s;
// }

// int main () {
// 	int n ;
// 	cin >> n;
// 	 for(int i=1;i<=n;i++) {
// 	 	int t;
// 	 	cin >>t;
// 	 	if(tong(t)==pt(t)) {cout << "yes";
// 		 } 
// 		 else { cout << "no";
// 		 }
// 	 }

// }