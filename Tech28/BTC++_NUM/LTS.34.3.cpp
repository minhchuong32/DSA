// #include <iostream>
// #include <math.h>
// using namespace std;

// int tn(int n) {
// 	int s=0,m=n;
// 	while(n) {
// 		s=10*s+n%10;
// 		n/=10;
// 	}
// 	if(m==s) return true;
// 	else return false;
// }

// bool tach6(int n) {
// 	while (n) {
// 	if (6==n%10) return true;	
// 	n/=10;
// 	} return false;
// }

// bool tong(int n) {
// 	int sum=0;
// 	while (n) {
// 		sum +=n%10;
// 		n/=10;
// 	} if(sum%10==8) return true;
// 	else return false;
// }

// int main () {
// 	int a,b;
// 	cin >> a>>b;
// 	for (int i=a;i<=b;i++) {
// 		if (tn(i) && tach6(i) && tong(i)) cout <<i; 
// 	}
	
// }