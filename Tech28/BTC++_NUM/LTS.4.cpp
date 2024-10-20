// #include <iostream> 
// #include <math.h>
// using namespace std;

// bool nt[1000001];
// void sieve() {
// 	for (int i=2;i<=1000000;i++) {
// 		nt[i]=true;
// 	}
// 	for (int i=2;i<=100;i++) {
// 		if (nt[i]) {
// 			for (int j=i*i;j<=1000000;j+=i) {
// 				nt[j]=false;
// 			}
// 		}
// 	}
// }

// int main () {
// 	int n,t;
// 	cin >> t;
// 	while (t--) {
// 	sieve();
// 	cin >>n;
// 	if (nt[n]) {
// 		cout << "yes "<< endl;
// 	} else { cout << " no"<< endl;	
// 	}
// 	}
// }