// #include <iostream>
// #include <math.h>
// using namespace std ;

// int nt(int n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) return 0;
// 	 }return n>1;
// }

// int prime[100];
// void fibo() {
// 	prime[0]=0;
// 	prime[1]=1;
// 	for (int i=2;i<=92;i++) {
// 		prime[i]=prime[i-1]+prime[i-2];
// 	}
// }

// bool tongnt(int n) {
// 	fibo();
// 	int s=0;
// 	while(n) {
// 		s+=n%10;
// 		n/=10;
// 	} 
// 	for (int i=0;i<=92;i++) {
// 		if (s==prime[i]) return true;
// 	} return false;
// }



// int main () {
// 	int a,b;
// 	cin >>a>>b;
// 	for (int i=a;i<=b;i++) {
// 		if(nt(i) && tongnt(i)) cout <<i<< " ";
// 	}
// }