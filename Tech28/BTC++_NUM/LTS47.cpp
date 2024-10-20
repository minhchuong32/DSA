// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// // tinh -1 +2 -3 +4 -...+ n
// void bai1() 
// {
//      int n;cout <<"Nhap n: ";cin>>n;
//     if(n%2==0) cout <<"kq: "<<n/2;
//     else cout <<"kq: "<<(-n-1)/2;
// }
// // bai2
// // input : n vs k . n(Z) , k(Z) 
// // vd 3 4 -> kq: 3 + 3(uoc so nt cua 3)= 6 +  2(uoc nt cua 6) = 8 + 2(uoc nt cua 8)= 10 + 2(uoc nt cua 10). ket thuc sau khi qua k thao tac -> out put =12 
// // c1
// // ham return uoc so nt min
// int nt(int n) 
// {
//     for (int i=2;i<=sqrt(n);i++) 
//     {
//         if( n%i==0) return i; //ko phai so nt -> co uoc <=sqrt(n)
//     }  
//     if(n!=1) return n; // la so nguyen to nen uoc so min chinh la no
// }
// // ham tim uoc so nt min ( cach 2 -> ham sang nt)
// int p[1000001];
// void sieve() 
// {
//     for (int i=1;i<=1000000;i++) 
//     {
//         p[i]=i;
//     }
//     for (int i=2;i<=sqrt(1000000);i++) 
//     {
//         if(p[i]) 
//         {
//             for (int j=i*i;j<=1000000;j+=i) 
//             {
//                 if(p[j]==j) p[j]=i;
//             }
//         }
//     }
// }
// //ham tinh tong uoc nt
// int sumnt(int n, int k) 
// {
//     int s=n;
//   for (int i=1;i<=k;i++) 
//   {
//    s+=(nt(s)); // nt(s) -> uoc so nt min cua s
//   } return s;
// }
// // c2 dung tu duy 
// //Neu n chan -> output = n + 2*k . 
// //Neu n le -> thuc hien cong voi f(n) lan dau -> return 1 so chan -> cong tiep nhu truong hop so chan: n + f(n) + (k-1)*2
// // vd : n=3 vs k=4 . f(3) =3 +3 =6 + (4-1)*2 . kmoi = kcu-1 vi da thuc hien mot thao tac n + f(n)
// int bai2(int n, int k) 
// {
//     if(n%2==0) return (n + 2*k);
//     else return (n+nt(n) + (k-1)*2);
// }
// // Prime Substrantion
// // vd : 100 -  90 -> YeS (5*2-> so nt); 40 -41 -> No
// // ham sang so nt
// int res[1000001] ;
// void sieve1() 
// {
//     for (int i=2;i<=1000000;i++) 
//     {
//         res[i]=1;
//     }
//     for (int i=2;i<=sqrt(1000000);i++) 
//     {
//         if(res[i]) 
//         {
//             for (int j=i*i;j<=1000000;j+=i) 
//             {
//                 res[j]=0;
//             }
//         }
//     }
// }

// int main() 
// {
//     sieve1();
//     for (int i=1;i<=100;i++) 
//     {
//        if (res[i]) cout <<i<<" ";
//     }
// }