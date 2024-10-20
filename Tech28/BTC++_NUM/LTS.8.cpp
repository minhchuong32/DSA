// #include <iostream>
// #include <math.h>
// using namespace std ;

// int nt(int n){
// 	for (int i=2;i<=sqrt(n);i++) {
// 	 if ( n%i==0) return 0;
// 	} return n>1;
// } 

// int chusont(int n) {
// 	while(n!=0) {
// 		int r=n%10;
// 		if (r!=2 && r!=3 && r!=5 && r!=7 ) {
// 			return 0;
// 		} n/=10;
// 	} return 1;
// }

// int tongnt(int n) {
// 	int s=0;
// 	while (n!=0) {
// 	s+=n%10;
// 	n/=10;	
	
// 	} if (nt(s))  {return 1;
// 	} else {return 0;
// 	};
// }

// int main () {
// 	int a,b;
// 	int cnt =0;
// 	cin >>a>>b;
// 	for (int i=a;i<=b;i++) {
// 		if (nt(i) && chusont(i) && tongnt(i)) {
// 			++cnt;
// 		}
// 	} cout << cnt;
	
// }