// #include <iostream>
// #include <math.h>
// using namespace std;
// //c1:
// int gcd1(int a,int b) {
// 	if (a==0 || b==0) return a+b;
// 	for(int i=min (a,b);i>0;i--) {
// 		if (a%i==0 && b%i==0)return i;
// 	} return 1;
// }
// //c2:
// int gcd2(int a, int b) {
// 	while (b) {
// 		int temp=b;
// 		b=a%b;
// 		a=temp;
// 	} return a;
// }
// //c3:
// int gcd3(int a, int b) {
// 	if(b==0) return a;
// 	return gcd3(b,a%b);
// }
// //LCM;
// int lcm(int a ,int b) {
// 	return (a/gcd1(a,b))*b;
// }
// int main (int n) {
// 	int a,b;
// 	cin >>a>>b;
// 	cout << lcm(a,b);
// }	