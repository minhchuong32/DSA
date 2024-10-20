// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// // LCM SUM 
// // vd 6: LCM SUM = [1*phi(1) + 2*(phi(2)) + 3*(phi(3)) + 6*(phi(6)) +1] * 6/2
// // c1 tinh thong thuong
// ll gcd(ll a,ll b) 
// {
//   if(b==0) return a;
//   else return gcd(b,a%b);
// }
// //
// ll lcm(ll a,ll b) 
// {
// 	return a/gcd(a,b)*b;
// }
// ll sumLCM(ll n) 
// {
// 	ll res=0;
// 	for (int i=1;i<=n;i++) 
// 	{
//      res+=(lcm(n,i));
// 	} 
// 	return res;
// }
// // c2
// // ham sang phi ham Euler
// int p[1000000];
// void sieve() 
// {
// 	for (int i=1;i<=1000000;i++) 
// 	{
// 		p[i]=i;
// 	}
// 	for (int i=2;i<=1000000;i++) 
// 	{
// 		if(p[i]==i) 
// 		{
// 			p[i]=i-1;
// 			for (int j=2*i;j<=1000000;j+=i) 
// 			{
// 				p[j]-=p[j]/i;
// 			}
// 		} 
// 	}
// }
// // p[i] -> phi(i)
// // tính tích của các bội nhân vs phi ham của chính nó
// int res[1000000];
// void sieve2()
//  {
// 	for (int i=1;i<=1000000;i++) 
// 	{
// 		for (int j=i;j<=1000000;j+=i) // duyet cac uoc cua i
// 		{
// 			res[j]+=1ll*i*p[i];
// 		}
// 	}
//  }
//  // res[i]-> i*phi(i)

// int main () {
//    ll n;cin>>n;
//    sieve();
//    sieve2();
//    cout <<1ll*(res[n]+1)*n/2<<" "<<sumLCM(n);
// }