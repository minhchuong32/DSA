// #include <iostream>
// #include <math.h>
// using namespace std ;
// // khi tao ham kt dung sai code sai trc 
// int nt(int n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) 
// 		return 0;
// 	} return n>1;
// }
		
// int chusont(int n) {
// 	while (n) {
// 	int r=n%10;
// 	if(r!=2 && r!=3 && r!=5 && r!=7 ) return 0;
// 	n/=10;
// } 
// return 1;
//  }

// int main () {
// 	int t;
// 	int cnt=0;
// 	cin >>t;
// 	while (t--) {
// 	int a,b;
// 	cin >>a>>b;
// 	for (int i=a;i<=b;i++) {
// 		if (nt(i)!=0 && chusont(i)!=0) {
// 			++cnt;
// 		}
// 	}
// 	} cout << cnt;
// }