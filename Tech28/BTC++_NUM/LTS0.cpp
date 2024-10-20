// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int t;cout <<"Nhap so lan thu: ";cin>>t;
//     while(t--)
//     {
//     int n;cout <<"Nhap so can xet: ";cin>>n;
//     int a[100];
//     int cnt=0; // dem so luong chu so
//     for (int i=0;n>0;i++) 
//     {
//         a[i]=n%10;
//         n/=10;
//         cnt++;
//     }
//      sort(a,a+cnt);
//      int T=0;
//      for (int i=cnt-1;i>=0;i--) 
//      {
//         T+=a[i]*pow(10,i);
//      }   
//      cout <<"So lon nhat la: "<<T<<endl;
//     }
    
//  }










































// // #include <bits/stdc++.h>
// // #include <algorithm>
// // using namespace std;

// // //Compiler version g++ 6.3.0

// // int main()
// // {
// //   int n,s=0,max=0,i=0,temp=0,T=0;
// //    cout<<"Nhap so: ";
// //    cin>>n;
// //    int a[100];
// //   while(n)
// //    {
// //        a[i]=n%10;
// //        i++;
// //        n/=10;
// //    }
// //    for(int j=0;j<i;j++) 
// //    {
// //     for(int m=j+1;m<i;m++) 
// //     {
// //       if(a[m]>a[j]) {
// //         temp=a[j];
// //         a[j]=a[m];
// //         a[m]=temp;
// //       }
// //     }
// //     }
// //    cout<<endl;
// //    int c=i;
// //    for(int k=0;k<c;k++){
// //     T+=a[k]*pow(10,i-1);
// //     i--    ; if (i<0) break;
    
// // }
// // cout<<"So can tim la: "<<T;}