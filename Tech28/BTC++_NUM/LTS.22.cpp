// #include <iostream>
// #include <math.h>
// using namespace std;

// int nt(int n){
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) 
// 		return 0;
// 	} return n>1;
// }

// int prime[100001] ;
// bool sieve () {
// 	for (int i=2;i<=100000;i++) {
// 		prime[i]=true;}
	
// 	for (int i=2;i<=sqrt(100000);i++) {
// 		if(prime[i]) {
// 			for (int j=i*i;j<=100000;j+=i) {
// 				prime[j]=false;
// 			}
// 		}
// 	}
// }

// int tong(int n) {
// 	int s=0;
// 	while (n){
// 	s+=n%10;
// 	n/=10;}
// 	return s;
// }

// bool pt(int n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) {
// 			int cnt =0;
// 			while (n%i==0) {
// 				++cnt ;
// 				n/=i;
// 			}
// 	if (cnt>=2) return true;
// 	else return false;
// 	} 
	
// 	} 
	
// }


// int main () {

// 	int a,b;
// 	cin >>a>>b;
// 	for (int i=a;i<=b;i++) {
// 	if (pt(i)) cout	<< i<< " ";
// 	} 
// }