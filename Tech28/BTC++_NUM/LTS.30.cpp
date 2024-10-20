// #include <iostream>
// #include <math.h>
// using namespace std ;

// bool tech28(long long n) {
// 	if(n==0 || n==1) return true;
// 	long long f1=0;long long f2=1;
// 	for (int i=3;i<=93;i++) {
// 		long long f3=f1+f2;
// 		if (f3==n) return true;
// 		f1=f2;
// 		f2=f3;
// 	} return false;
// }

// long long prime[100];
// bool sieve() {
// 	prime [0]=0;
// 	prime[1]=1;
// 	for (int i=0;i<92;i++){
// 		prime[i]=prime[i-1]+prime[i-2];
		
// 	}
// }

// int main () {
// 	int n;
// 	cin >> n;
//     int ok=0;
//     for (int i=0;i<=92;i++) {
//     	if (prime[i]==n) ok=1;
//     	break;
// 	}
// 	if (ok==1) {
// 		cout << "yes";}
// 		else cout << " no";

// 	}
	
