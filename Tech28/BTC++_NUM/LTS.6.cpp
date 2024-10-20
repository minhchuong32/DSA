// #include <iostream>
// #include <math.h>
// using namespace std;

// int nt(int n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if (n%i==0) return 0;
// 	} return n>1;
// }

// bool check[1000001];
// void sieve () {
// 	for (int i=2;i<=1000000;i++) {
// 		check[i]=true;
// 	}
// 	for (int i=2;i<=1000000;i++) {
// 		if (check[i]) {
// 			for (int j=i*i;j<=1000000;j+=i)  {
// 				check[j]=false;
// 			}
// 		}
// 	}
// }

// int main () {
// 	int n;
// 	cin >>n;
// 	int cnt=n;
//    for (int i=1;i<=1000000 && cnt !=0;i++) {
//    	if(nt(i)) {
//    		cout << " " <<i;
//    		--cnt;
// 	   }
	   
//    }
// }