// #include <bits/stdc++.h>
// using namespace std;
// // loai bo ma 084
// void bai49() 
// {
//     int t=4;
//     while(t--) 
//     {
//     string s;cout <<"Nhap ma: ";
//     getline(cin,s);
//     for (int i=0;i<s.size();i++) 
//     {
//         if(s[i]=='0' && s[i+1]=='8'&& s[i+2]=='4' ) 
//         {
//             s.erase(i,3);
//         }
//     } cout <<s<<endl;
//     }

// }
// // so dep (so dau gap doi chu so cuoi hoac nguoc lai va tat ca chu so o trong khoang giua dau cuoi la so thuan nghich) 
// // ham dao so
// int ktsotn(int n) 
// {
//     int m=n;
//    int t=0;
//    while(n) 
//    {
//     t=10*t+n%10;
//     n/=10;
//    }
//    return t==m;
// }
// // dem
// int dem(int n) 
// {
//     int cnt=0;
//     while(n) 
//     {
//         ++cnt;
//         n/=10;
//     }
//     return cnt;
// }
// // bai 50
// void bai50()
// {  int n=12344322;
//   // luu
//     int y=n;
//     int x=n;
//    // luu value dau vs cuoi
//     int d=(n/(pow(10,dem(n)-1)));
//     int c=(n%10);
//     // tao mang luu number
//     int i=0;
//     int a[dem(x)];
//     while(x) 
//     {
//         a[i++]=x%10;
//         x/=10;
//     }
//     // luu so o giua d vs c
//     long long t=0;
//     for (int i=1;i<(dem(y)-1);i++) 
//     {
//       t=(t*10 + a[i]);
//     }
//     // kt
//     if( (d==(2*c) || c==(2*d)) && ktsotn(t)) cout <<"So dep";
//     else cout <<"NO";
// }

// int main () 
// {

// }