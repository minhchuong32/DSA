// #include <iostream>
// #include <math.h>
// using namespace std;
// // nhap n dem so luong nt cung nhau voi moi so chay tu 1 toi n;
// int prime[100001];
// int sieve() {
// 	for (int i=1;i<=100000;i++ ){
// 		prime[i]=i;
// 	}
// 	for (int i=2;i<=sqrt(100000);i++) {
// 		if(prime[i]==i) {
// 			// vd  17 thi co 16 so cung nguyen to voi 17 tru chinh no
// 			prime[i]=i-1;
// 			for (int j=2*i;j<=100000;j+=i) {
// 				// phi ueler=n*(1-1/LCM(n)).
// 				prime[j]-=prime[j]/i;
// 			}
// 		}
// 	}
// }

// int gcd (int a,int b) {
// 	while(b)
// 	{
// 		int temp=b;
// 		b=a%b;
// 		a=temp;
// 	} return a;
// }

// int kt(int n) {
// 	int cnt =0;
// 	for (int i=1;i<=n;i++) {
// 		if (gcd(i,n)==1) ++cnt;
// 	} return cnt;
// }


// int main () {
// 	int n;
// 	cin >>n;
// 	for (int i=1;i<=n;i++) {
// 	cout << kt(i);	
// 	}
// }