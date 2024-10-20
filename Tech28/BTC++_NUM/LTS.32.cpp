// #include <iostream>
// #include <math.h>
// using namespace std;

// int nt(int n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) return 0;
// 	} return n>1;
// }

// bool tn(int n) {
// 	int s=0,m=n;
// 	while (n) {
// 		s=s*10+n%10;
// 		n/=10;
// 	}
// 	if (s==m) return true;
// 	else return false;
// }

// int prime[100000];
// void sieve() {
// 	for (int i=1;i<=100000;i++) {
// 		prime[i]=i;
// 	}
// 	for(int  i=2;i<=sqrt(100000);i++) {
// 		if(prime[i]) {
// 			for (int j=i*i;j<=100000;j+=i) {
// 				if(prime[j]==j) {
// 					prime[j]=i;
// 				}
// 			} 
// 		}
// 	}
// }

// int kt(int n) {
// 	int cnt =0;
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) {
// 			++cnt;
// 			while (n%i==0) {
// 				n/=i;
// 			}
// 		}
// 	} if (n!=1) {
// 		cnt+=1;
// 	} return cnt;

// }
// int main  () {
// 	int a,b;
// 	cin >> a>>b;
// 	for(int i=a;i<=b;i++) {
// 		if (tn(i) && kt(i)==3) cout <<i<< " ";
// 	}
	 
//  }
	 