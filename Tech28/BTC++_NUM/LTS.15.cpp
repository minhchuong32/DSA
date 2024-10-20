// #include <iostream>
// #include <math.h>
// using namespace std;

// int prime[100001];
// void sieve() {
// 	for (int i=1;i<=100000;i++) {
// 		prime[i]=i;
// 	}
// 	for (int i=2;i<=sqrt(100000);i++) {
// 		if (prime[i]) {
// 			for (int j=i*i;j<=100000;j+=i) {
// 				if (prime[j]==j){
// 					prime[j]=i;
// 				}
// 			}
// 		}
// 	}
// }

// int pt(int n) {
// 	while(n!=1) {
// 		int cnt=0;
// 		int temp=prime[n];
// 		while(n%temp==0) {
// 			++cnt;
// 			n/=temp;
// 		}
// 		cout << temp << "("<<cnt<<")"<< " "; 
// 	}
// }

// int main () {
// 	sieve();
// 	int n ;	
// 	cin >>n;
// 	for (int i=1;i<=n;i++) {
// 	 int t;
// 	 cin >> t;
// 	 cout << "#TC"<<i<< " ";
// 	 pt(t);	
// 	}
// }