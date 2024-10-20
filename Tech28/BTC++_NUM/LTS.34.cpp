// #include <iostream>
// #include <math.h>
// using namespace std;

// int gt(int n) {
// 	int s=1;
// 	for (int i=1;i<=n;i++) {
// 		s*=i;
// 	}
// 	return s;
// }

// int tach(int n) {
// 	int s=0;
// 	while(n) {
// 	    s+=gt(n%10);
// 	    n/=10;
// 	} return s;
	
// }

// int main () {
// 	int a,b;
// 	cin >>a>>b;
// 	for (int i=a;i<=b;i++) {
// 		if(tach(i)==i) cout << i<< " ";
// 	}
// }