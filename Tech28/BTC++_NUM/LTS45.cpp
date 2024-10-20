// #include <bits/stdc++.h>
// using namespace std;
// // //ham tim bac cua  1 so  trong n! (dem so lan xh cua 1 so trong n!)
// int degree1(int n, int p) {
// 	int cnt=0;
// 	for (int i=p;i<=n;i+=p){
//             int temp=i;
// 			while (temp%p==0) {
// 	     	++cnt;
// 			temp/=i;}
		
// 	} return cnt;
// }
// // tim bac cua mot so(p) trong n! (dung ct)
// int degree2(int n,int p) 
// {
// 	int ans=0;
// 	for (int i=p;i<=n;i*=p) 
// 	{
// 		ans+=n/i;
// 	}
// 	return ans;
// }
// // ham kt nguyen to
// int nt(int n) {
// 	for (int i=2;i<=sqrt(n);i++) {
// 		if(n%i==0) return 0;
// 	} return n>1;
// }
// // ham tinh số ước của n! :
// // SUM uoc (n!) = tich (so lan xh cua cac uoc so nt trong n! + 1)  <uoc nt>
// // vd n=10! -> SUM = (8+1) <2> * (4+1) <3> * (2+1) <5> * (1+1) <7> = 9*5*3*2=270(ước) 

// int countDevisor(int n) 
// {
// 	int res=1;
// 	for (int i=1;i<=n;i++) 
// 	{
//        if(nt(i)) 
// 	   {
// 		res*=(degree2(n,i)+1);
// 	   }
// 	} return res;
// }
// // 
// int check(int n) 
// {
// 	   int res=1;
// 	for (int i=1;i<=n;i++) 
// 	{
// 		if(nt(i)) 
// 		{
// 		int cnt=0;
// 			for (int j=i;j<=n;j+=i) 
// 			{
// 				int tmp=j;
// 				while(tmp) 
// 				{
// 					if(tmp%i==0)
// 					{cnt++;}
// 					tmp/=i;

// 				}
// 			} res*=(cnt+1); cout<<res<<endl;
// 		}
// 	}  return res;
// }


// int main () {
// 	cout <<check(10);
// }