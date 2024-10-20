// #include <iostream>
// #include <math.h>
// using namespace std;

// int nt(int n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) return 0;
// 	} return n>1;
	
// }

// bool check1 (int n) {
// 	int sum =0;
// 	for (int i=1;i<=sqrt(n);i++) {
// 		if (n%i==0) { if (i!=n/i) {
// 			sum +=i +n/i;
			
// 		} else sum +=i;
			
// 		}
// 	} if ((sum-n)==n) return true;
// 	else return false;
// }

// bool check2(long long n) {
// 	for (int i=1;i<=32;i++) {
// 		if (nt(i)) {
// 			int temp=(int) pow(2,i)-1;
// 			if (nt(temp)) {
// 				long long  hh=1ll*pow(2,i-1) * temp;
// 				if (hh==n) return true;
// 			}
// 		}
// 	} 
// 	 return false;
// }

//  int main () {
// 	int n;
// 	cin >> n;
// 	if(check2(n)) cout << "yes";
// 	else cout << "no"; }