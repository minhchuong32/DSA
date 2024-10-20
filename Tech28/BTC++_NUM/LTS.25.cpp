// #include <iostream>
// #include <math.h>
// using namespace std;

// int prime[100001];
// void sieve() {
// 	for (int i=1;i<=100000;i++) {
// 		prime[i]=i;
// 	}
// 	for (int i=2;i<=sqrt(100000);i++){
// 		if(prime[i]) {
// 			for (int j=i*i;j<=100000;j+=i){
// 				if (prime[j]==j) {
// 					prime[j]=i;
// 				}
// 			}
// 		}
// 	}
// }

// int gcd(int a,int b) {
// 	while (b) {
// 		int temp=b;
// 		b=a%b;
//         a=temp;		
// 	} return a; 
// }

// int c1(int n) {
// 	int cnt=0;
// 	for (int i=1;i<=n;i++) {
// 		if (n%i==0) {
// 			++cnt;
// 		}
// 	} return cnt;
// }

// int c2(int n) {
// 	int cnt=0;
// 	for (int i=1;i<=sqrt(n);i++) {
// 		if(n%i==0) {
// 			if(n!=n/i) {
// 				cnt+=2;
// 			} else {++cnt;
// 			}
		
	
	 
	 
// } }

// 	  return cnt;
// }

// int c3(int n) {
// 	int res=1;
// 	for (int i=2;i<=sqrt(n);i++) {
// 		int cnt =0;
// 		while (n%i==0) {
// 			++cnt;
// 			n/=i;
// 		}
// 		res*=(cnt+1);
// 	}
// 	// uoc so cuoi cung luon co so mu cnt =1;
// 	 if(n!=1) {
// 		res*=(1+1);
// 	} return res;
// }	


// int main () {
// 	int n;

// 	cin >> n;
// cout << c2(n);
// }