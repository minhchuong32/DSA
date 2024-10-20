// #include <iostream>
// #include <math.h>
// using namespace std;
// long long tn(long long n) {
// 	int s=0;
// 	while(n) {
// 		s=10*s+n%10;
// 		n/=10;
// 	}
// 	return s;
// }

// int solve(long long n) {
// 	int c2=0,c3=0,c5=0,c7=0;
// 	long long m=tn(n);
// 	while(n){
// 		int s=n%10;
// 		if(s==2) {++c2;
// 		}
// 		else if (s==3) {++c3;
// 		}
// 		else if (s==5) {++c5;
// 		}
// 		else if(s==7) {++c7;
// 		}
// 		n/=10;
// 	}
// 	cout << m;
// 	while (m) {
// 	   int r=m%10;
// 	   if (r==2 && c2!=0) {cout << 2<< " "<< c2<<endl;c2=0;}
// 	   else if (r==3 && c3!=0) {cout << 3<< " "<< c3<<endl;c3=0;}	
// 	   else if (r==5 && c5!=0) {cout << 5<< " "<< c5<<endl;c5=0;}
//        else if (r==7 && c7!=0) {cout << 7<< " "<< c7<<endl;c7=0;}
//        m/=10;
//    } }
   
//    int main () {
//    	long long n;
//    	cin >> n;
//    	solve(n);
//    }