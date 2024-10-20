// #include<bits/stdc++.h>
// #define ll long long 
// using namespace std;

// int pow1(int a,int b) {
//      ll res=1;
// 	while(b) {
// 		if(b%2==1)
// 	   {res*=a;}
// 	b/=2;
// 	a*=a;
// 	}

// 	return res;
// }

// int pow2(int a,int b) {
// 	if(b==0) return 1;
// 	ll x=pow2(a,b/2);
// 	if(b%2==0) {
// 	return x*x;}
// 	else {return x*x*a;
// 	}
// }

// int main () {
// 	int a,b;
// 	cin >> a>>b;
// 	cout <<pow2(a,b);
// }