// #include <iostream>
// #include <math.h>
// using namespace std;

// int pt(int n,int m) {
// 	int cnt =0;
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if(n%i==0) {
// 			while(n%i==0) {
// 				++cnt;
// 				if(m==cnt)
// 				return i;
// 				n/=i;
// 			}
			
// 		}
// 	} 
// 	 if(n!=1) ++cnt;
// 	 if (cnt==m) return n;
// 	 else return -1;
	
// }
//  int main () {
//  	int n,m;
//  	cin >>n>>m;
//    cout<< pt(n,m);  
//  }