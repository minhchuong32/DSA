// #include <iostream>
// #include <math.h>
// using namespace std;

// int nt(long long n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) return 0;
// 	} return n>1;
// }

// int kt(long long  n) {
// 	int h=0,b=0,m=0,t=0;
//   while (n) {
//   	int s=n%10;
//   	if (s==2) ++h;
// 	else if(s==3) ++b;
// 	else if(s==5)++m;
// 	else if(s==7)++t;	
// 	n/=10;
// 	s=0;
// 	}
	
//   if (h>0) {cout <<2<<" "<<h<<endl;
//   }
//   if (b>0 ) {cout << 3<<" "<<b<<endl;
//   }
//   if (m>0 ) {cout << 5<<" "<<m<<endl;
//   }
//   if(t>0) {cout << 7<<" "<<t<< endl;
// } 
// }

// int main () {
// 	long long n;
// 	cin >> n;
	 
// 		kt(n);
// }