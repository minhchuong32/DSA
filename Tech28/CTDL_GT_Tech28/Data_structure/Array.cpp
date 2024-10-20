

// *Array one side part 1:
// #include <bits/stdc++.h>
// using namespace std;
// // index = value -> in else -> -1
// void bai1() 
// {
//  int n;cout <<"Nhap SL array: ";cin>>n;
//  int a[n];
//  cout <<"Nhap mang: "<<endl; 
// for (auto &x:a) cin>>x;
//  for (int i=0;i<n-1;i++) 
//  {
//    for (int j=i+1;j<n;j++) 
//    {
//     if(i==a[j]) swap(a[i],a[j]); // index = value -> in

//    } 
//   }
//   // duyet in ra -1 neu khac index
// for (int i=0;i<n;i++) 
//    {
//    if (a[i]!=i) a[i]=-1;
//    }
//  for (auto x:a) cout <<x<<" ";
// }
// // min value con thiu trong mang
// void bai2() 
// { 
//    int n;cout <<"Nhap SL array: ";cin>>n;
//    int a[n];int cnt=0;
//    cout <<"Nhap mang: "<<endl; 
//    for (auto &x:a) cin>>x;
//    sort (a,a+n);
//    cout <<"min con thiu: ";
//    for (int i=0;i<n-1;i++) 
//    {
//     if (a[i+1]-a[i]!=1) 
//     {cout << a[i] +1;break;++cnt;}
//    }
//    if (cnt==0) cout <<a[n-1] +1;
   
  
  
// }
// // min cua cap value
// void bai3() 
// {
//    int n;cout <<"Nhap SL array: ";cin>>n;
//    int a[n];int min=INT_MAX;
//    cout <<"Nhap mang: "<<endl; 
//    for (auto &x:a) cin>>x;
//    sort (a,a+n);
//    for (int i=0;i<n-1;i++) 
//    {
//     if (a[i+1]-a[i]<min) min=a[i+1]-a[i];
//    }
//    cout << "min la: "<<min;
// }
// // in ra x value co gia tri giam dan
// void bai4() 
// {
//    int n,x;cout <<"Nhap SL array va so phan tu lon nhat:  ";cin>>n>>x;
//    int a[n];int min=INT_MAX;
//    cout <<"Nhap mang: "<<endl; 
//    for (auto &x:a) cin>>x;
//    sort (a,a+n);
  
//     for (int i=n-1;i>=0;i--) 
//     {
//         cout <<a[i]<<" ";--x;
//         if(x==0) break;
//     } 
    
// }
// // dem so phan tu lap lai (tong so lan lap lai cua cac value)
// void bai5c1() 
// {
//    int n;cout <<"Nhap SL array:  ";cin>>n;
//    int a[n];int s=0;
//    cout <<"Nhap mang: "<<endl; 
//    map<int,int> mp;
//    for (int i=0;i<n;i++)  
//    {
//     cin>>a[i];mp[a[i]]++;
//    }
//    for (map<int,int>::iterator it=mp.begin();it!=mp.end();it++) 
//    {
//     if((*it).second>1) s+=(*it).second;
//    } 
//    cout <<"Tong so lan lap: "<<s;
  
// }

// void bai5c2() 
// {
//   int cnt[100];
//   int n;cout <<"Nhap sl array: ";cin>>n;
//   cout <<"Nhap mang: ";
//   int a[n];
//   memset(cnt,0,sizeof(cnt)) ;
//   for (int i=0;i<n;i++) 
//   {
//    cin>>a[i];
//    cnt[a[i]]++;
//   }
//   int ans=0;
//   for (int i=0;i<n;i++) 
//   {
//    if(cnt[a[i]]>1) ++ans;
//   }
//   cout <<"so phan tu lap: "<<ans;
// }

// void bai6() 
// {
//    int n,x;cout <<"Nhap bac n va he so x:  ";cin>>n>>x;
//    int sum=0;int a[n];
//    for(int i=n-1;i>=0;i--) 
//    {
//       cin>>a[i];
//      sum+=pow(x,i)*a[i];
//    }
//    cout <<"Tong la: "<<sum;
// }

// int fibo1() 
// {
//    int a[93];
//    a[0]=0 ;a[1]=1;
//    for (int i=2;i<93;i++) 
//    {
//       a[i]=a[i-1] +a[i-2];

//    }
//    for (int i=0;i<93;i++) 
//    {
//       a[i]=1;
//    }
//  return 0;
// }  
// //kt 1 so co phai fibo ?
// bool fibo2(int n) 
// {
//    int f[92];
//    f[0]=0;f[1]=1;
//   if(n==1 || n==0 ) return true;
// for (int i=2;i<92;i++) 
// {
//    f[i]=f[i-1]+f[i-2];
//    if (n==f[i]) return true;
// }
// return 0;
// }

// // ktfibo3
// long long c[10001];
// void fibo3() 
// {
//    int f[20];
//    f[0]=0;f[1]=1;
//    for (int i=2;i<20;i++) 
//    {
//       f[i]=f[i-1]+f[i-2];
//    }
//    // danh dau cac so fi bo<1000
//    for (int i=0;f[i]<1000;i++) 
//    {
//       c[f[i]]=1;
//    } 
// }
// //tao 92 so fibo dau tien
 
// unsigned long long f[93];
// void fibo92() 
// {
//    f[0]=0;f[1]=1;
//    for (int i=2;i<93;i++) 
//    {
//       f[i]=f[i-1]+f[i-2];
//    }
   
// }
// //  fibo92();
// //    for (int i=0;i<92;i++) 
// //    {
// //       cout << f[i]<<" ";
// //    }


// //in ra day fibo cua 1 mang
// void bai7() 
// {
//    int n ;cout <<"Nhap sl: ";cin>>n;
//    int a[n];
//    cout <<"Nhap mang: ";
//    for (int i=0;i<n;i++) {cin>>a[i];}
//    cout <<"Mang fibo: ";
//    for (int i=0;i<n;i++) 
//    {
//       if(fibo2(a[i])) cout <<a[i]<<" ";
//    } 
// }
// //tim hieu lon nhat cua 2 so ( so sau > so truoc)
// void bai8() 
// {
//    int n,max=0;cout <<"Nhap sl: ";cin>>n;
//    cout <<"Nhap mang: ";
//    int a[n];for (auto &x:a) cin>>x;
//    for (int i=0;i<n-1;i++) 
//    {
//       for (int j=i+1;j<n;j++) 
//       {
//          if (a[j]>a[i] && (a[j]-a[i]>max)) max=a[j]-a[i];
//       }
//    } 
//    cout <<"hieu max: "<<max;
// }
// // Day con trung binh max
// void bai9() 
// {
//    int n,k,d=0,c=0,max=0,s=0;cout <<"Nhap sl n va so phan tu avg k:  ";cin>>n>>k;
//    cout <<"Nhap mang: ";
//    int a[n];for (auto &x:a) cin>>x;
//    for (int i=0;i<n;i++) 
//    {
//        for (int j=i;j<k+i;j++) 
//        {
//          s+=a[j]; 
//        }
//         if(((s*1.0)/k)>max) {max=((s*1.0)/k);s=0;d=i;c=k+i;}// luu vi tri de in ra (d,c)
//    } 
//    for (int i=d;i<c;i++) 
//    {
//       cout <<a[i]<<" ";
//    }
// }
// //tim gia tri min lon hon a[i]
// void bai10() 
// {
  
//     int n;
//     cout <<"Nhap n: ";
//     cin >> n; // Nhập số nguyên n từ bàn phím.
    
//     cout <<"Nhap mang: ";
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i]; // Nhập n phần tử của mảng a từ bàn phím.
//     }

//     // Sao chép nội dung của mảng 'a' vào vector 'v'.
//     vector<int> v(a, a + n);

//     // Sắp xếp vector 'v'.
//     sort(v.begin(), v.end());

//     for (int i = 0; i < n; i++) {
//         // Tìm phần tử đầu tiên trong vector 'v' mà lớn hơn 'a[i]'.
//         auto it = upper_bound(v.begin(), v.end(), a[i]);

//         if (it == v.end()) {
//             cout << "_"<<" ";  // Nếu không có phần tử nào lớn hơn 'a[i]'.
//         } else {
//             cout << *it<<" ";  // In ra phần tử đầu tiên lớn hơn 'a[i]'.
//         }
//     }


// }

// // ucln
// int GCD2(int a,int b) {
// 	while(b) {
// 		int temp =b;
// 		b=a%b;
// 		a=temp;
// 	} return a;
// }

// //gcd 3
// int GCD3 (int a,int b) 
// {
//    if(b==0) return a;
//    else return GCD3(b,a%b);
// }
// // tim ucln  cac cap so trong mang -> in ra ucln lon nhat
// void bai11() 
// {
//    int n,max=0;cout <<"Nhap n: ";cin>>n;
//    int a[n];cout <<"Nhap mang: ";
//    for (int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
  
//    for (int i=0;i<n;i++) 
//    {
//       for (int j=i+1;j<n;j++) 
//       {
//          if(GCD2(a[i],a[j])>max) max=GCD2(a[i],a[j]);
//       } 
//    }
//    cout <<"Max GCD2 : "<<max;
// }

// //ham danh dau tat ca uoc cua 1 so
// void solve(int n) {
//    // vd : so 18(can=4,21) : 1,2,3,6,9,18
//     map<int, int> mp;
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             ++mp[i]; //1,2,3
            
//             // Xử lý trường hợp khi i không bằng n/i
//             if (i != n / i) {
//                 ++mp[n / i]; // 6,9,18
//             }
//         }
//     }
// }
// // dùng map để đánh dấu tất cả ước của mỗi phần tử trong mảng -> 1 ước xuất hiện 2 lần -> nó là ước chung của 2 phần tử 
// // map sẽ sắp xếp -> in phần tử cuối -> ước lớn nhất 
// // void bai11_c2()  
// //  {
// //      int n;cout <<"Nhap n: ";cin>>n;
// //      int a[n];cout <<"Nhap mang: ";
// //      for (int i=0;i<n;i++) 
// //      {
// //          cin>>a[i];solve(a[i]);
// //      }
// //      int res=-1;
// //     // for (auto x : mp) -> error : mp ??
// //      {
// //       if (x.second >= 2) res=x.first;
// //      }
// //      cout << res <<" ";

      
// //  } 
//  // Liet ke cac so chia het 
// void bai12_c1() 
//   {
//    int n,cnt=0,cnt1=0;cout <<"Nhap n : ";cin>>n;
//    int a[n]; cout <<"Nhap mang: ";
//    for (auto &x:a) cin>>x;
//    sort(a,a+n);
//    for (int i=2;i<=a[0];i++) //2,3,4,5,6,7,8,a[0]=8
//    {
//       for (int j=0;j<n;j++) 
//       {
//         if(a[j]%i==0) ++cnt;
//       }
//        if(cnt==n) // tat ca phan tu deu chia het cho i -> ++cnt1
//        {++cnt1;cnt=0;} 
//    else {cnt=0;}
//    }
//    cout <<"so luong chu so chia het cho tat ca phan tu mang: "<<cnt1;
//   }

// // tim UCLN cua tat ca phan tu -> tong so luong uoc cua UCLN : output
// //ham gcd 
// int gcd(int a,int b) 
// {
//    if(b==0) return a;
//    else return (b,a%b);
// } 
// // ham danh dau tat ca cac uoc cua mot so
// int solve2 (int n) 
// {
//    map <int ,int> mp;
//    for (int i=1;i<sqrt(n);i++) {
//       if(n%i==0) ++mp[i];
//       if(n!=n/i) ++mp[n/i];
//    }
// }
// void bai12_tech28() 
// {
//    int k;cout <<"Nhap so luong test case: ";cin>>k;
//    while(k--) 
//    {
//      int n;cout <<"Nhap n: ";cin>>n;
//    int a[n];cout <<"Nhap mang: ";
//    for (auto &x:a) cin>>x;
//    int res=1;
//    // tim ucln cac phan tu trong mang
//    for (int i=0;i<n;i++) 
//    {
//       res=gcd(res,a[i]);
//    }  
//    //neu ucln =1 -> output =0;
//    if(res==1) 
//    {
//       cout << 0 <<endl;continue; // bo qua cac cau lenh duoi
//    }
//    //tinh tong so luong uoc cua UCLN
//    int ans=0;
//    for (int i=2;i<sqrt(res);i++) 
//    {
//       if(res%i==0) 
//       {
//          ++ans;
//          if(i!=res/i) ++ans;
//       }
//    }
//    // output
//     cout <<ans;
//    }
   
// }

// // diem can bang
// void bai13() 
// {
//    int n,s1=0,s2=0;cout <<"Nhap sl phan tu: ";cin>>n;
//    int a[n];cout <<"Nhap array: ";
//    for (auto &x:a) cin>>x;
//    for (int i=1;i<n-1;i++) 
//    {
//     for (int j=0;j<i;j++) 
//     {
//       s1+=a[j]; 
//     } 
  
//     for (int k=n-1;k>i;k--) 
//     {
//       s2+=a[k];
//     }

//     if(s1==s2) cout << "chi so can tim "<<i<<" "; s1=0;s2=0;
//    }
   
// }
// // tinh tong mang S0 , lan luot tru cac phan tu trong mang -> bang nhau -> break
// void bai13_tech28() 
// {
//   int n,sum=0,left=0;cout <<"Nhap n: ";cin>>n;
//   int a[n];cout <<"Nhap mang: ";
//   for (auto &x:a) {cin>>x;sum+=x;} 
//   bool ok=false;
//   for (int i=0;i<n;i++) 
//   {
//    sum-=a[i];
//    if(sum==left) 
//    {
//       cout <<i <<" ";ok=true;
//    }
//     left+=a[i];
//   }
//   if(!ok) cout <<"-1/n ";
//   else cout <<endl;

// }

// // tan suat le
// void bai14 () 
// {
//    int n;cout <<"Nhap n: ";cin>>n;
//    int a[n];cout <<"Nhap mang: ";
//    map<int,int> mp;
//    for (int i=0;i<n;i++) 
//    {
//       int x;cin>>x;
//       mp[x]++;
//    }
//    for (auto x:mp) 
//    {
//       if(x.second %2!=0) cout <<x.first;
//    }
// }
// // su phep so :
// void bai14_tech28() 
// {
//   int n,s1=0,s2=0;cout <<"Nhap sl phan tu: ";cin>>n;
//    int a[n];cout <<"Nhap array: ";
//    for (auto &x:a) cin>>x;
//    int ans=0;
//    for (int i=0;i<n;i++) 
//    {
//       ans^=a[i];
//    }  cout <<ans;
// }



// int main() 
// {
//  bai14_tech28();
// }


// *Array one side part 2: 
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// // tim ucln  cac cap so trong mang -> in ra ucln lon nhat
// int GCD(int a,int b) 
// {
//     if(b==0) return a;
//     else return (b,a%b);
// }
// void bai11() 
// {
//    int n,max=0;cout <<"Nhap n: ";cin>>n;
//    int a[n];cout <<"Nhap mang: ";
//    for (int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
  
//    for (int i=0;i<n;i++) 
//    {
//       for (int j=i+1;j<n;j++) 
//       {
//          if(GCD(a[i],a[j])>max) max=GCD(a[i],a[j]);
//       } 
//    }
//    cout <<"Max GCD2 : "<<max;
// }

// //ham danh dau tat ca uoc cua 1 so
// void solve(int n) {
//    // vd : so 18(can=4,21) : 1,2,3,6,9,18
//     map<int, int> mp;
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             ++mp[i]; //1,2,3
            
//             // Xử lý trường hợp khi i không bằng n/i
//             if (i != n / i) {
//                 ++mp[n / i]; // 6,9,18
//             }
//         }
//     }
// }
// // dùng map để đánh dấu tất cả ước của mỗi phần tử trong mảng -> 1 ước xuất hiện 2 lần -> nó là ước chung của 2 phần tử 
// // map sẽ sắp xếp -> in phần tử cuối -> ước lớn nhất 
// // void bai11_c2()  
// //  {
// //      int n;cout <<"Nhap n: ";cin>>n;
// //      int a[n];cout <<"Nhap mang: ";
// //      for (int i=0;i<n;i++) 
// //      {
// //          cin>>a[i];solve(a[i]);
// //      }
// //      int res=-1;
// //     // for (auto x : mp) -> error : mp ??
// //      {
// //       if (x.second >= 2) res=x.first;
// //      }
// //      cout << res <<" ";

      
// //  } 
//  // Liet ke cac so chia het 
// void bai12_c1() 
//   {
//    int n,cnt=0,cnt1=0;cout <<"Nhap n : ";cin>>n;
//    int a[n]; cout <<"Nhap mang: ";
//    for (auto &x:a) cin>>x;
//    sort(a,a+n);
//    for (int i=2;i<=a[0];i++) //2,3,4,5,6,7,8,a[0]=8
//    {
//       for (int j=0;j<n;j++) 
//       {
//         if(a[j]%i==0) ++cnt;
//       }
//        if(cnt==n) // tat ca phan tu deu chia het cho i -> ++cnt1
//        {++cnt1;cnt=0;} 
//    else {cnt=0;}
//    }
//    cout <<"so luong chu so chia het cho tat ca phan tu mang: "<<cnt1;
//   }

// // tim UCLN cua tat ca phan tu -> tong so luong uoc cua UCLN : output
// //ham gcd 
// int gcd(int a,int b) 
// {
//    if(b==0) return a;
//    else return (b,a%b);
// } 
// // ham danh dau tat ca cac uoc cua mot so
// int solve2 (int n) 
// {
//    map <int ,int> mp;
//    for (int i=1;i<sqrt(n);i++) {
//       if(n%i==0) ++mp[i];
//       if(n!=n/i) ++mp[n/i];
//    }
// }
// void bai12_tech28() 
// {
//    int k;cout <<"Nhap so luong test case: ";cin>>k;
//    while(k--) 
//    {
//      int n;cout <<"Nhap n: ";cin>>n;
//    int a[n];cout <<"Nhap mang: ";
//    for (auto &x:a) cin>>x;
//    int res=1;
//    // tim ucln cac phan tu trong mang
//    for (int i=0;i<n;i++) 
//    {
//       res=gcd(res,a[i]);
//    }  
//    //neu ucln =1 -> output =0;
//    if(res==1) 
//    {
//       cout << 0 <<endl;continue; // bo qua cac cau lenh duoi
//    }
//    //tinh tong so luong uoc cua UCLN
//    int ans=0;
//    for (int i=2;i<sqrt(res);i++) 
//    {
//       if(res%i==0) 
//       {
//          ++ans;
//          if(i!=res/i) ++ans;
//       }
//    }
//    // output
//     cout <<ans;
//    }
   
// }

// // diem can bang
// void bai13() 
// {
//    int n,s1=0,s2=0;cout <<"Nhap sl phan tu: ";cin>>n;
//    int a[n];cout <<"Nhap array: ";
//    for (auto &x:a) cin>>x;
//    for (int i=0;i<n;i++) 
//    {
//     for (int j=0;j<i;j++) 
//     {
//       s1+=a[j]; 
//     } 
  
//     for (int k=n-1;k>i;k--) 
//     {
//       s2+=a[k];
//     }

//     if(s1==s2) cout << "chi so can tim "<<i<<endl; s1=0;s2=0;
//    }
   
// }
// // tinh tong mang S0 , lan luot tru cac phan tu trong mang -> bang nhau -> break
// void bai13_tech28() 
// {
//   int n,sum=0,left=0;cout <<"Nhap n: ";cin>>n;
//   int a[n];cout <<"Nhap mang: ";
//   for (auto &x:a) {cin>>x;sum+=x;} 
//   bool ok=false;
//   for (int i=0;i<n;i++) 
//   {
//    sum-=a[i];
//    if(sum==left) 
//    {
//       cout <<i <<" ";ok=true;
//    }
//     left+=a[i];
//   }
//   if(!ok) cout <<"-1/n ";
//   else cout <<endl;

// }

// // tan suat le
// void bai14 () 
// {
//    int n;cout <<"Nhap n: ";cin>>n;
//    int a[n];cout <<"Nhap mang: ";
//    map<int,int> mp;
//    for (int i=0;i<n;i++) 
//    {
//       int x;cin>>x;
//       mp[x]++;
//    }
//    for (auto x:mp) 
//    {
//       if(x.second %2!=0) cout <<x.first;
//    }
// }
// // su dung phep so :
// void bai14_tech28() 
// {
//   int n,s1=0,s2=0;cout <<"Nhap sl phan tu: ";cin>>n;
//    int a[n];cout <<"Nhap array: ";
//    for (auto &x:a) cin>>x;
//    int ans=0;
//    for (int i=0;i<n;i++) 
//    {
//       ans^=a[i];
//    }  cout <<ans;
// }
// // tim meo
// void bai15() 
// {
//     int n,max=0,value=0;cout <<"Nhap n: ";cin>>n;
//     int a[n];cout <<"Nhap mang: ";
//     map <int ,int >mp;
//     for (int i=0;i<n;i++) 
//     {
//         cin>>a[i];mp[a[i]]++;
//     }
//     for (auto &x:mp) 
//     {
//         if(x.second > max) 
//        {
//         max=x.second;// tan so xh nhiu nhat
//         value=x.first;// gia tri ung voi ts xh nhiu nhat
//        }
//     }
//     cout <<" co "<<max<<" con meo"<<": "<<endl;
//     for (int i=0;i<max;i++) 
//     {
//         cout <<value<<" ";
//     }

// } 

// // May tinh dien: neu khoang tg go giua cac tu <= value -> xoa tat ca data , va ngc lai no se ghi lai data gho tu man hinh
// void bai17() 
// { 
//   int n,x,cnt=0;cout <<"Nhap sl phan tu va thoi diem reset :  "; cin>>n>>x;
//   int a[n];cout <<"Nhap mang: ";
//   for (auto &x : a) cin>>x;
//   for (int i=0;i<n-1;i++) 
//   {
  
//       if((a[i+1]-a[i])<=x) ++cnt;
//       else cnt=1;
   
//   } cout <<cnt;
// }

// // day con lien tuc ngan nhat co sum >=x, in ra length of array
// void bai18() 
// {
//    int n,s=0,x,mark,sum=0,cnt=0,min=INT_MAX;cout <<"Nhap n x: ";cin>>n>>x;
//    int a[n];cout <<"Nhap mang: ";
//    for (auto &x:a)cin>>x,sum+=x;
   
//    // return -1: ko co phan tu thoa man
//    if(x>a[n-1] && x > sum) {cout <<-1 ;}
//    else 
//    {
//       for (int i=n-1;i>=0;i--) 
//       {
//          if(a[i]>x) {cout <<"Day con ngan nhat: "<< a[i]; break;}
//          else 
//          {
//             sum-=a[i]; 
//             if((sum-x)<min) {min=sum;mark=i-1;cnt++;}
//         }
//        if(cnt) break;
//       }
//        cout <<"Day con ngan nhat: ";
//    for (int i=0;i<mark;i++) {cout <<a[i]<<" ";}
//    }   
 
// }

// void bai18_tech28() 
// {
//    int n,x;cout <<"Nhap n x: ";cin>>n>>x;
//    int a[n];cout<<"Nhap mang: ";
//    for (auto&x:a) cin>>x;
//    int cnt=1e9; // tao bien dem rat lon
//    int s=0,left=0;
//    for (int r=0;r<n;r++) 
//    {
//       s+=a[r];
//       while(s>x) 
//       {
//          cnt=min(cnt,r-left+1); // update day con khi thoa dk
//          s-=a[left]; left++;
//       }
//    }  if(cnt) {cout <<"Day con ngan nhat: "<<cnt;}
//    else cout <<-1<<endl;
// }

// //min function
// int min(int a,int b) {
//    if(a>b) return b;
//    else return a;
// } 
// //Median
// void bai19() 
// {
//    int n;cout <<"Nhap n: ";cin>>n;
//    int a[n]; cout <<"Nhap mang: ";for (auto&x:a)cin>>x;
//    sort(a,a+n);
//    cout <<"Mang sx: ";
//    for (auto &x:a) cout <<x<<" ";
//    if(n%2!=0) {cout <<"Median: "<<a[(n-1)/2];}
//    else 
//    {
//       cout <<"Median: "<<min(a[(n-1)/2],a[(n-1)/2+1]);
//    }
// }
// // Tang mang
// void bai20() 
// {
//    int n,s=0;cout <<"Nhap n: ";cin>>n;
//    int a[n];cout <<"Nhap mang : ";for (auto&x:a) cin>>x;
//    for (int i=0;i<n-1;i++) 
//    {
//      if(a[i+1]-a[i]<0) {s+=(a[i]-a[i+1]);a[i+1]=a[i]; };
//      cout<<s<<" ";
//    } cout <<"tong gia tri de mang ko giam:  "<<s;
// }
// // tinh chu vi cua matrix co value =1
// int m,n,a[100][100],b[100][100],cnt,dem;
// void loang (int i,int j){
//     int dx[4]={-1,0,0,1};
//     int dy[4]={0,-1,1,0};
//     a[i][j]=0;
//      dem=0;
//     for (int k=0;k<4;k++) {
//       int imoi=i+dx[k];
//       int jmoi=j+dy[k];
//       if(imoi>=0 && imoi<m && jmoi >=0 && jmoi <n &&b[imoi][jmoi]==1) {
//         ++dem;// so luong phan tu 1 xung quanh phan tu dang xet
//         // dung mang b(copy tu a) do mang a xoa cac phan tu 1 -> ko dem day du cac phan tu cac phan tu xung quanh 
//       }
//     }
//      cnt+=(4-dem); //(cv = 4 -dem)
//      for (int k=0;k<4;k++) {
//       int imoi=i+dx[k];
//       int jmoi=j+dy[k];
//       // mang a nhay qua phan tu khac sau khi goi de quy dung mang b de dem
//       if(imoi>=0 && imoi<m && jmoi >=0 && jmoi <n &&a[imoi][jmoi]==1) {
//         loang(imoi,jmoi);
//       }
//      }
// }
// //    nhap();
// //    int cv=0;
// //    for (int i=0;i<m;i++) {
// //     for (int j=0;j<n;j++) {
// //         cnt=0;
// //         if(a[i][j]) loang(i,j);
// //         cv+=cnt;
// //     }
// //    }
// //    cout <<cv;
// int main() 
// { 
//  bai20();
//  return 0;
// }

// int n,c=0,min=INT_MAX;cout <<"Nhap sl: ";cin>>n;
   // cout <<"Nhap mang: ";
   // int a[n];for (auto &x:a) cin>>x;
   // for (int i=0;i<n;i++) 
   // {
   //    for (int j=0;j<n;j++) 
   //    {
   //       if(((a[j]-a[i])>0) && ((a[j]-a[i])<min)) {min =(a[j]-a[i]);c=j;}
         
   //    } 
   //    if(c)  a[i]=a[c];
   //    else a[i]='_';
   // }
   // for (int i=0;i<n;i++) 
   // {
   //    cout <<a[i]<<" ";
   // }
//    * Array sum (cong don) 
// int n,c=0,min=INT_MAX;cout <<"Nhap sl: ";cin>>n;
   // cout <<"Nhap mang: ";
   // int a[n];for (auto &x:a) cin>>x;
   // for (int i=0;i<n;i++) 
   // {
   //    for (int j=0;j<n;j++) 
   //    {
   //       if(((a[j]-a[i])>0) && ((a[j]-a[i])<min)) {min =(a[j]-a[i]);c=j;}
         
   //    } 
   //    if(c)  a[i]=a[c];
   //    else a[i]='_';
   // }
   // for (int i=0;i<n;i++) 
   // {
   //    cout <<a[i]<<" ";
   // }
// // theory
// // Prefix [k] : tong cac phan tu trong array tu index = 0 -> k-1;
// // Prefix[k] =Prefix[k-1] + a[k];
// //  a[5] = { 3 ,2 ,5 ,1 ,7} -> index = 0,1,2,3,4 = k -1
// // prefix a[5]= { 3 ,5 ,10,11,18} -> k=1,2,3,4,5
// // Ex: Prefix[3] =Prefix[2] + a[3] = 5 + 5 (a[2]) =10
// // pp tinh tong tu index l -> r :
// // S[l(index),r(index)] = Pre[r{k}] - Pre[l{k}-1] (index=k-1)
// // Ex: S[1,3] =Pre {4} - Pre{2-1} = 8

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;


// // Prefix array 1D
// int pre[100000];
// void Prefix1D(int a[], int n){
//     for (int i=0;i<n;i++)cin>>a[i];
//     pre[0]=a[0];
//     for (int i=1;i<n;i++){
//         pre[i]=pre[i-1]+a[i];
//     }
// }
// // Prefix2D
// #define MAX 100
// int pre2[MAX][MAX];
// void Prefix2D(int a[][MAX], int m , int n)
// {
//     for(int i=1;i<=m;i++){
//         for (int j=1;j<=n;j++)cin>>a[i][j];
//     }
//      for(int i=1;i<=m;i++){
//         for (int j=1;j<=n;j++)cout<<a[i][j]<<" ";
//         cout <<endl;
//     }
    
//     pre2[1][1]=a[1][1];
//     for (int i=1;i<=m;i++){
//         for (int j=1;j<=n;j++){
//             if(i==1 && j!=1) {pre2[i][j] = a[i][j] + pre2[i][j-1];}
//             else if(j==1 && i!=1) {pre2[i][j] = pre2[i-1][j] + a[i][j]; }
//             else {
//                 pre2[i][j] = a[i][j] + pre2[i-1][j] + pre2[i][j-1] - pre2[i-1][j-1];
//             }
//         }
//     }

//     for (int i=1;i<=m;i++){
//         for (int j=1;j<=n;j++)cout <<pre2[i][j]<<" ";
//         cout <<endl;
//     }
// }


// int main() 
// {
//     int a[100][100];
//     Prefix2D(a,3,3);
// }


// #include <bits/stdc++.h>
// using namespace std;

// // lam tron chu so thap phan
// //double a=13*1.0/4;
// //cout <<fixed<<setprecision(4)<<a;

// // MANG CONG DON 
// // prefix tren mang mot chieu
// void bai1(){
// 	int a[5]={1,2,3,4,5};
// 	int prefix[5];
// 	for (int i=0;i<5;i++){
// 		if(i==0) {
// 			prefix[0]=a[0];
// 		}
// 		else {
// 			prefix[i]=prefix[i-1]+a[i];
// 		}
// 	}
// 	int l,r;cin>>l>>r;
// 	if(l==0){
// 		cout <<prefix[r]<<endl;
// 	}
// 	else {
// 		cout <<prefix[r]-prefix[l-1];
// 	}
	
// }
// // xay dung matrix prefix 2D 
// // prefix[i][j] : tong cac phan tu hcn ixj
// //ct:  prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1](phan bi trung) + a[i][j]
// // tong cua 1 hcn tren mang 2D

// int m,n;
// int a[1002][1002];
// int prefix[1002][1002];
// void bai2(){
// 	cin>>m>>n;
// 	// duyet tu chi so 1 de khong de tinh tong khi nhap hang vs cot (!=0)
// 	for (int i=1;i<=m;i++){
// 		for (int j=1;j<=n;j++){
// 			cin>>a[i][j];
// 		}
// 	}
	
// 	for (int i=0;i<m+1;i++) {
// 		for(int j=0;j<n+1;j++){
// 			cout <<a[i][j]<<" ";
// 		}
// 		cout <<endl;
// 	}
// 	cout <<endl;
   
//    for (int i=1;i<=m;i++){
//    	for (int j=1;j<=n;j++) {
//    		prefix[i][j]=a[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
// 	   }
//    }
   
//    for (int i=0;i<m+1;i++){
//    	for (int j=0;j<n+1;j++)cout <<prefix[i][j]<<" ";
//    	cout <<endl;
//    }
   
//    cout <<"Nhap row and column : ";
//    int h1,h2,c1,c2;
//    cin>>h1>>h2>>c1>>c2;
//    cout <<"Sum hcn: "<<prefix[h2][c2]-prefix[h1-1][c2]-prefix[h2][c1-1]+prefix[h1-1][c1-1];
// }

// // mang hieu (difference array) 1D: D[0]=a[0],D[i]=a[i]-a[i-1]
// // cong don mang hieu -> mang ban dau
// // bai toan tang cac value len k don vi tu l -> r
// // in ra mang da thay doi
// void bai3(){
// 	int n;cin>>n;int a[n];
// 	for (auto&x:a) cin>>x;
// 	int D[n];
// 	for (int i=0;i<n;i++)
//   {
// 	if(i==0) D[0]=a[0];
// 	else {
// 		D[i]=a[i]-a[i-1];
// 	}
//   }
//   cout <<endl;
//   cout <<"Mang hieu: "<<endl;
//   for (auto&x:D) cout <<x<<" ";
//   cout <<endl;
//   cout <<"Nhap truy van: ";
//   int q;cin>>q;
//   while(q--){
//   	cout <<"Nhap l r : ";
//   	int l,r,k;cin>>l>>r>>k;
//   	// khi +k vao mang hieu tai 1 vi tri -> mang cong don(cua mang hieu) giong mang ban dau 
// 	//  Tat ca cac value cua mang cong don se duoc cong them k ke tu vi tri l den cuoi mang
//   	D[l]+=k;  
//   	// tru di tai vi tri r+1 => tat ca cac phan tu mang cong don tu vi tri r+1 den cuoi mang se giam di k don vi
//   	D[r+1]-=k;
//   	// ta da tang k don vi value tu l->r
//   }
//   cout <<"Mang moi da thay doi: ";
//   int s=0;
  
//    for (int i=0;i<n;i++)
//    // mang cong don cua mang hieu da thay doi 
//    {
//    	s+=D[i];
//    	cout <<s<<" ";
//   }

// }
// // ex:
// //7
// //1 3 2 1 2 3 4
// //
// //Mang hieu:
// //1 2 -1 -1 1
// //Nhap truy van: 1
// //2(l) 4(r) 2(k)
// //Mang moi da thay doi: 1 3 4(+k)  3(+k) 4(+k) 3 4

// // ky thuat loang tren mnag 2 chieu
// // bai toan dem so phan tu trung
// void bai4(){
// 	int dx[8]={-1,-1,-1,0,0,1,1,1};
// 	int dy[8]={-1,0,1,-1,1,-1,0,1};
// 	int n,m;cin>>n>>m;int a[m][n];
// 	for (int i=0;i<m;i++){
// 		for (int j=0;j<n;j++)cin>>a[i][j];
// 	}
// 	int dem=0;
	
// 	for (int i=0;i<m;i++){
// 		for (int j=0;j<n;j++){
// 			bool check=true;
// 			for (int k=0;k<8;k++){
// 				int imoi=i+dx[k];
// 				int jmoi=j+dy[k];
// 				if(imoi>=0 && imoi<m && jmoi >=0 && jmoi <n) {
// 					if(a[imoi][jmoi]<=a[i][j]) {
// 						check=false;break;
// 					}
// 				}
// 			}
// 			if(check) ++dem;
// 		}
// 	}
// 	cout <<dem;
	
// }
// // count island 1
// // dfs 
// int A[1002][1002];
// int r,c;
// int dx[4]={1,0,-1,0};
// int dy[4]={0,1,0,-1};

// void nhap() {
// 	cin>>r>>c;
// 	for (int i=0;i<r;i++){
// 		for (int j=0;j<c;j++)
// 		cin>>A[i][j];
// 	}
// }

// void loang(int i,int j) {
//     A[i][j]=0;
// 	for (int k=0;k<4;k++){
// 		int imoi=i=dx[k];
// 		int jmoi=j+dy[k];
// 		if(imoi>=0 && imoi <r && jmoi >=0 && jmoi<c) {
// 			if(A[imoi][jmoi]) loang(i,j);
// 		}
// 	}
// }
// //
// void bai5(){
//   nhap();int dem=0;
//   for (int i=0;i<r;i++){
//   	for (int j=0;j<c;j++){
//   		if(A[i][j]) {
//   			loang(i,j);
//   			++dem;
// 		  }
// 	  }
//   } cout <<dem<<endl;
// }
// int main()
// {
// 	bai5();	
// }
	


// *Array Two side 
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// // ki thuat duyet tat ca matrix square co the co tu mot matrix cho truoc
// void PrintMatrixSquare(int matrix[100][100],int startRow,int startCol, int size){
//     for (int i=startRow ; i< size+ startRow ;i++){
//         for (int j=startCol; j< size + startCol;j++){
//             cout <<matrix[i][j]<<" ";// co the xu ly ma tran vuong con nay tuy y
//         } cout <<endl;
//     }
//     cout <<"_____________"<<endl;
// }

// void InputMatrix( int matrix[100][100], int m , int n){
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++) cin>>matrix[i][j];
//     }
// }
// void MatrixSquare(int matrix[100][100],int m, int n){
//         InputMatrix(matrix,m,n);
//         // kich thuoc matrix square 
//         for (int size=2;size<=min(m,n);size++){
//             // do dich chuyen cua matrix square theo dong
//             // vd : 2x2 -> dich chuyen theo dong 3 lan doi voi m = 4
//             for (int i=0 ; i <= m - size ; i++){
//                 // theo cot
//                 for (int j=0 ; j <= n-size ; j++){
//                       PrintMatrixSquare(matrix,i,j,size);
//                 }
//             }
//         }
// }
// // ki thuat in ra tat ca ma tran con cua mot matrix cho truoc 
// void PrintMatrix(int matrix[100][100], int row , int col , int numrow, int numcol){
//     for (int i=row;i<numrow +row;i++) {
//         for (int j=col;j<numcol+col;j++){
//             cout <<matrix[i][j]<<" ";
//         } cout <<endl;
//     }
// }
// void Matrix(int matrix[100][100], int m ,int n){
//     InputMatrix(matrix,m,n);
//     for (int numrow=1;numrow<=m;numrow++){
//         for (int numcol=1;numcol<=n;numcol++){
//             for (int i=0;i<=m-numrow;i++){
//                 for (int j=0;j<=n-numcol;j++){
//                     PrintMatrix(matrix,i,j,numrow,numcol);
//                 }
//             }
//         }
//     }
// }
// // bai4 xd ma tran B tu ma tran A sao cho : b[i][j] = so phan tu duong xung quanh A[i][j] 
// void bai4(float a[][3],int m,int n) 
// {
//     int indexi[8]={-1,-1,-1,0,0,1,1,1};
//     int indexj[8]={-1,0,1,-1,1,-1,0,1};
//     int b[m][n]={{}};
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//             int cnt=0;
//            for (int k=0;k<8;k++) 
//            {
//             int imoi =i + indexi[k];
//             int jmoi =j + indexj[k];
//             if(jmoi < n && jmoi >=0 && imoi<m && imoi >=0) 
//             {
//             if(a[imoi][jmoi]>0) ++cnt;
//             }
//            }
//            b[i][j]=cnt;
//         } 
//     }
//     cout <<endl;
//     cout <<"Ma tran B la: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cout <<b[i][j]<<" ";
//         cout <<endl;
//     }
// }
// // bai5  dong co tong min o tren 
// //idea : luu sum row -> array -> sap xep array: trong qua trinh swap cac phan tu trong mang thi cx swap cac phan tu trong mang 2 chieu
// void bai5(float a[][3],int m,int n ) 
// {
//     int amin[m];
//     for (int i=0;i<m;i++) 
//     {
//         int s=0; 
//         for (int j=0;j<n;j++) 
//         {
//           s+=a[i][j];
//         }
//         amin[i]=s;// luu sum tung dong
//     }
//     int index1,index2;
//             for (int k=0;k<m;k++)
//             {
//                 // index = chi so dong 
//                 // swap -> luu lai index ( chi so dong) -> swap theo dong
//             int minpos=k; 
//                 for (int k1=minpos+1;k1<m;k1++) 
//                 {
//                     if(amin[k1]<amin[k]) minpos=k1; 
//                 }
//                 swap(amin[minpos],amin[k]);
//                 // swap cac phan tu tuong ung cua 2 dong da swap o tren
//                 index1=minpos;  index2=k;// cac dong can swap
//                 for (int i=0;i<m;i++) 
//                 {
//                     for (int j=0;j<n;j++) 
//                     {
//                         swap(a[index1][j],a[index2][j]);
//                     }
//                 }
//             }
//             cout <<"ma tran moi :"<< endl;
//             for (int i=0;i<m;i++) 
//             {
//                 for (int j=0;j<n;j++) cout <<a[i][j]<<" ";
//                 cout <<endl;
//             }

// }
// // bai 3 diem yen ngua (min trong dong vs max trong cot)
// void yenngua(float a[][3],int m,int n) 
// {
//     // tao mang luu min tung dong
//     int amin[m];
//   for (int i=0;i<m;i++) 
//   {
//     int min =a[i][0];
//     for (int j=0;j<n;j++) 
//     {
//         if(a[i][j]<min) min=a[i][j];
//     }
//     amin[i]=min;// so dong = so phan tu amin
//   }
  
//   // ss max cot voi min dong
//   int amax[n];
//   for (int i=0;i<n;i++) 
//   {
//     int max=a[0][i];
//     for (int j=0;j<m;j++) 
//     {
//       if(a[j][i]>max) max=a[j][i];
//     }
//     amax[i]=max; // so cot bang so phan tu amax
//   }
//   for (int i=0;i<m;i++) 
//   {
//     for (int j=0;j<n;j++) 
//     {
//         if(amin[i]==amax[j]) cout<<"co phan tu yen ngua tai dong "<<i+1<<" va cot "<<j+1<<" :"<<amin[i]<<endl;
//     }
//   }

// }
// int main(){
//     int matrix[100][100],m,n;cin>>m>>n;
//     Matrix(matrix,m,n);
// }
// // in ra so thoa man mot dk : so nt ,so fibo,so dep,....
// // ham kt nt
// bool nt(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return n > 1;
// }

// // bool fibo(int n)
// // {
// //     int f[92];
// //     f[0]=0;f[1]=1;
// //     if(n==1 || n==0) return true;
// //        for (int i=2;i<92;i++)
// //        {
// //         f[i]=f[i-1]+f[i-2];
// //         if(n==f[i]) return true;
// //        }

// // }

// void bai1()
// {
//     int n, m;
//     cout << "Nhap m ,n: ";
//     cin >> m >> n;
//     int a[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (nt(a[i][j]))
//                 cout << a[i][j] << " ";
//         }
//     }
// }
// // tim max va cac vi tri max
// void bai2()
// {
//     int m, n;
//     int max = 0;
//     cin >> m >> n;
//     int a[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//             if (a[i][j] > max)
//                 max = a[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] == max)
//                 cout << "VI tri max:a[" << i << "][" << j << "]" << endl;
//         }
//     }
//     cout << "Max: " << max;
// }

// void bai3()
// {
//     int m, n, max = 0, s = 0, d, c;
//     cin >> m >> n;
//     int a[m][n];
//     cout << "NHap mang: " << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             s += a[i][j];
//         }
//         if (s > max)
//         {
//             max = s;
//             s = 0;
//             d = i;
//         }
//     }
//     cout << "Max : " << max << endl;
//     for (int i = d; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << a[i][j] << " ";
//             ;
//             ;
//         }
//     }
// }
// // in tong hang max va cac dong co cung tong
// void bai3_tech28()
// {
//     int m, n, s = 0, max = -1e9;
//     cout << "Nhap dong vs cot: ";
//     cin >> m >> n;
//     int a[m][n];
//     cout << "Nhap mang: " << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     // vector luu row
//     vector<int> row;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             s += a[i][j];
//         }
//         if (s > max)
//         {
//             max = s;
//             row.clear();      // xoa dong trc do
//             row.push_back(i); // luu dong vao vector
//             s = 0;
//         }
//         else if (s == max)
//         {
//             row.push_back(i);
//             s = 0;
//         }
//     }
//     cout << "Max: " << max << endl;
//     for (auto x : row)
//         cout << x + 1 << " ";
// }

// // ham kt fibo
// // kt so cp
// bool isPerfectSquare(int x) {
//     int s = sqrt(x);
//     return (s * s == x);
// }
// // kt fibo
// bool isFibonacci(int n) {
//     // Kiểm tra xem 5 * n^2 + 4 hoặc 5 * n^2 - 4 là số chính phương
//     return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
// }

// // ham in ra 92 so fibonacci
// set<long long> fibo;
// void init()
// {
//     long long f[93];
//     f[0] = 0;
//     f[1] = 1;
//     for (int i = 2; i < 93; i++)
//     {
//         f[i] = f[i - 1] + f[i - 2];
//     }
//     // danh dau 93 so fibo dau tien
//     for (int i = 0; i < 93; i++)
//     {
//         fibo.insert(f[i]);
//     }
// }
// // tim cot co nhiu so fibo va in ra cot do
// void bai4()
// {
//     int m, n, max = 0, c = 0, cnt = 0;
//     cout << "NHap row and column:  ";
//     cin >> m >> n;
//     int a[m][n];
//     cout << "Nhap mang: ";
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     //
//     for (int j = 0; j < n; j++)
//     {
//         for (int i = 0; i < m; i++)
//         {
//             if (isFibonacci(a[i][j]))
//                 ++cnt;
//         }
//         if (cnt > max)
//         {
//             max = cnt;
//             cnt = 0;
//             c = j;
//         }
//     }
//     cout << "cot  " << c + 1 << " co nhiu so fibo nhat "<< endl;
//     for (int i = 0; i < m; i++)
//         cout << a[i][c] << " ";
// }
// // tong phan tu tg duoi ma tran vuong
// void bai5() 
// {
//     int m,s1=0,s2=0;cout <<"Input row and column: ";cin>>m;
//     int a[m][m];cout <<"input square matrix: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<m;j++) 
//         {
//             cin>>a[i][j];
//         }
//     }
   
//        for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<=i;j++) 
//         {
//             s1+=a[i][j]; // tinh tong tu duoi len
//         }
//     }

//      cout <<"Tong tg duoi : "<<s1<<endl;

//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j>=i;j++) 
//         {
//             s2+=a[i][j];
//         }
//     }
//     cout <<"tong tg tren: "<<s2<<endl;
// }
//  //thay the ohan tu bang tong cac phan tu xung quanh no va chinh no
// //  void bai16() 
// //  {
// //     // khoi tao chi so xung quanh phan tu can tinh
// //     int di[8]={-1,-1,-1,0,0,1,1,1};
// //     int dj[8]={-1,0,1,-1,1,-1,0,1};
// //     int m,n; cout <<"Nhap m , n: ";cin>>m>>n;
// //     cout <<"Nhap mang: "<<endl;
// //     int a[m][n];
// //     for (int i=0;i<m;i++) 
// //     {
// //         for (int j=0;j<n;j++) cin>>a[i][j];
// //     }
// //     // tao mang luu tru
// //     int res[m][n];
// //     for (int i=0;i<m;i++) 
// //     {
// //         for (int j=0;j<n;j++) 
// //         {
// //             int sum =a[i][j];
// //             // tinh tong cac phan tu xung quanh
// //             for (int k=0;k<8;k++) 
// //             {
// //                int imoi=i+di[k];
// //                int jmoi=j+dj[k];
// //                // dk cho cac phan tu o goc hoac ngoai bia
// //                if(imoi>=0 && imoi <m && jmoi >=0 && jmoi <n) 
// //                {
// //                 sum+=a[imoi][jmoi];
// //                }
// //             }
// //             // gan sum vao vi tri cua mang moi 
// //           res[i][j]=sum;
// //         }
// //     }
// //     // in ra mang can tim
// //     for (int i=0;i<m;i++) 
// //     {
// //         for (int j=0;j<n;j++) cout <<res[i][j]<<" ";
// //         cout <<endl;
// //     }
    
// //  }

// void bai6_tech28() 
// {
//     // tao cac chi so xung quanh phan tu can tinh
//     int di[8]={-1,-1,-1,0,0,1,1,1};
//     int dj[8]={-1,0,1,-1,1,-1,0,1};
//     // tao mang
//     int m,n; cout <<"Input row and column: ";cin>>m>>n;
//     int a[500][500];cout <<"Nhap mang: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     // tao mang moi chua cac gia tri vua tinh 
//     int res[500][500];
//     // tinh toan
//     for (int i=0;i<m;i++) 
//     {
//        for (int j=0;j<n;j++)
//        {
//        //khoi tao sum ban dau la chinh no de cong tiep 8 phan tu xung quanh no
//        int sum=a[i][j];
       
//           for (int k=0;k<8;k++) 
//           {
//             // khoi tao cac chi so can tinh tong
//             int imoi=i+di[k];
//             int jmoi=j+dj[k];
//             // dk de tinh tong
//             if(imoi>=0 && imoi <m && jmoi >=0 && jmoi<n) 
//             {
//                 sum+=a[imoi][jmoi];
//             }
//           }
//           // gan tong vua tinh cho phan tu trong mang moi
//           res[i][j]=sum;
//        }
//     }
//     //in mang
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cout <<res[i][j]<<" ";
//         cout <<endl;
//     }
// }
// //in cac phan tu o bien cua  matrix
// void bai8() 
// {
//  int m,n;cout<<"Nhap m,n: ";cin>>m>>n;
//  int a[m][n];cout <<"Nhap mang: ";
//  for (int i=0;i<m;i++) 
//  {
//     for (int j=0;j<n;j++) cin>>a[i][j];
//  }   
//  for (int i=0;i<m;i++) 
//  {
//     for (int j=0;j<n;j++) 
//     {
//         if(i==0 || j==0 || i==n-1 || j==n-1) 
//         {
//             cout <<a[i][j]<<" ";
//         }
//         else cout <<" ";
//     } cout <<endl;
//  }
// }
// // in ma tran hinh con ran
// void bai9() 
// {
//     int m,n;cout <<"Input row and column : ";cin>>m>>n;
//     int a[m][n];cout <<"Nhap mang: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     for (int i=0;i<m;i++) 
//     {
//         if(i%2==0) 
//         {
//            for (int j=0;j<n;j++) 
//            {
//             cout <<a[i][j]<<" ";
//            } 
        
//         }
//          else 
//            {
//             for (int j=n-1;j>=0;j--) 
//             {
//                 cout <<a[i][j]<<" ";
//             } 
//            }
//     }
// }
// // in ma tran hinh xoan oc
// void bai10() 
// {
//     int m,n;cout <<"Input row and column: ";cin>>m>>n;
//     int a[m][n];cout <<"Nhap mang: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     int c1=0,c2=n-1,h1=0,h2=m-1;
//     while(c1<=c2 && h1<=h2) 
//     {
//         // in dong 1
//         for (int i=c1;i<=c2;i++) 
//         {
//             cout <<a[h1][i]<<" ";
//         } h1++;
//         // in cot n-1
//         for (int i=h1;i<=h2;i++) 
//         {
//             cout <<a[i][c2]<<" ";
//         } c2--;
//         // in dong m-1
//         if(h1<=h2) // truong hop so cot nhiu 
//         {
//             for (int i=c2;i>=c1;i--) 
//             {
//                 cout <<a[h2][i]<<" ";
//             } h2--;
//         } 
//         // in cot 1
//         if(c1<=c2) // truong hop so hang nhiu
//         {
//             for (int i=h2;i>=h1;i--) 
//             {
//                 cout <<a[i][c1]<<" ";
//             }c1++;
//         }
//      } 
     
// }
// // matrix xoan oc nguoc: lam nhu matrix xoan oc thuan nhung luu vao vector -> in ngc 
// void bai11() 
// {
//     int m,n; cout <<"Nhap m,n: ";cin>>m>>n;
//     int a[m][n];cout <<"Nhap array: ";
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     // tao vecto 
//     vector <int> v;
//     // tao chi so
//     int c1=0,c2=n-1,h1=0,h2=m-1;
//     while (c1<=c2 && h1<=h2) 
//     {
//         for (int i=c1;i<=c2;i++) 
//         {
//             v.push_back(a[h1][i]);
//         } h1++;
//         for (int i=h1;i<=h2;i++) 
//         {
//             v.push_back(a[i][c2]);
//         } c2--; 
//         if(h1<=h2) 
//         {
//             for (int i=c2;i>=c1;i--) 
//             {
//                 v.push_back(a[h2][i]);
//             } h2--;
//         }
//         if(c1<=c2) 
//         {
//             for (int i=h2;i>=h1;i--) 
//             {
//                 v.push_back(a[i][c1]);
//             } c1++;
//         }
//     }
//    for (int i=v.size()-1;i>=0;i--) cout <<v[i]<<" ";
// }
// //sap xep matrix xoan oc
// void bai13() 
// {
//     int m,n;cout <<"Nhap m,n : ";cin>>m>>n;
//     int a[m][n];cout <<"Nhap mang: ";
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     // tao vector sx mang
//     vector <int> v;
//     // sx mang
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//             v.push_back(a[i][j]);
//         }
//     }
//     // sx cac phan tu mang gan vao vector
//     sort(v.begin(),v.end());
//     // tao xoan oc
//     int cnt=0;
//     int res[m][n]={{}};
//     int c1=0,c2=n-1,h1=0,h2=m-1;
//     while(c1<=c2 && h1<=h2) 
//     {
//         for (int i=c1;i<=c2;i++) 
//         { 
//             res[h1][i]=v[cnt++];
//         } h1++;
//         for (int i=h1;i<=h2;i++) 
//         {
//             res[i][c2]=v[cnt++];// cnt++ tu dong tang bien dem cnt
//         } c2--;
//         if(h1<=h2) 
//         {
//             for (int i=c2;i>=c1;i--) 
//             {
//                 res[h2][i]=v[cnt++];
//             } h2--;
//         }
//         if(c1<=c2) 
//         {
//             for (int i=h2;i>=h1;i--) 
//             {
//                 res[i][c1]=v[cnt++];
//             } ++c1;
//         }
//     } 
//     // in mang
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cout <<res[i][j]<<" ";
//         cout <<endl;
//     }
// }
// int main()
// {
//    bai13();
// }



// *Array two side part 2
// #include <bits/stdc++.h>

// using namespace std;


// // Maximum path sum
// // idea: duyet tu dong 1 : 2 TH
// // TH1 : i=0 or j=0 -> so sánh 2 giá trị liền kề trên và liền kề xéo trái / phải tren cái nào lớn hơn thi cộng dồn vào phần tử đang xét 
// // TH2 : i ,j khac 0 -> so sánh 3 giá trị liền kề trên , xéo trái tren, xéo phải tren ----------------------------------------- 
// // Tổng các phần tử xích xắc dọc theo mảng 2 chiều sẽ trôi về cuối dòng -> in ra phần tử lớn nhất của dòng cuối -> output
// void bai14() 
// {
//     int m,n;cout <<"Input row and column: ";cin>>m>>n;
//     int a[m][n];cout <<"Input matrix: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
    
//     for (int i=1;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//             // cot dau tien
//             if(j==0) 
//             {
//                 a[i][j]+=max(a[i-1][j],a[i-1][j+1]);
//             }
//             // cot ngoai cung
//             else if(j==n-1)
//             {
//                 a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
//             } 
//             //cac cot o giua
//             else 
//             {
//                 a[i][j]+=max(a[i-1][j],max(a[i-1][j-1],a[i-1][j+1]));
//             }
//         } 
//     }
//      // in phan tu lon nhat cua dong cuoi cung
//     // c1:cout <<*max_element(a[m-1],a[m-1]+n)<<endl;// mang 1 chiu : *max_element(a,a+n);
//    //c2:
//     int res=INT_MIN;
//     for (int i=0;i<m;i++) 
//     {
//         if(a[m-1][i]>res) res=a[m-1][i];
//     }
//     cout <<res;
// }
// // tim duong co tong min
// // idea: xet 2 Th -> tinh sum -> output se troi vao cuoi goc a[m-1][n-1]
// // TH1: i=0 / j=0: di sang phai hoac xuong duoi
// //TH2 : i/j !=0 : xet 2 phan tu tren va trai 
// // -> cả 2 TH đều cộng dồn vào phần tử đang xét (lấy phần tử liền kề min đối với th2 )
// void bai15()
// {
//     int m,n ;cout<<"Input row and column: ";cin>>m>>n;
//     int a[m][n];cout <<"Input matrix: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     //tao mang chua new value
//     int b[m][n]={};
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//            // th i=0,j=0;
//            if(i==0 && j==0) 
//            {
//             b[i][j]=a[i][j];
//            } 
//            // th i=0;
//            else if((i==0)) 
//            {
//             b[i][j]=b[i][j-1]+a[i][j]; // da co phan tu khoi tao trc do : b[i][j-1]
//            }
//            // th j=0;
//            else if(j==0) 
//            {
//             b[i][j]=b[i-1][j]+a[i][j];
//            }
//            //th con lai
//            else 
//            {
//             b[i][j]=min(b[i-1][j],b[i][j-1])+a[i][j];
//            }

//         }
//     }
//    cout << b[m-1][n-1];
// }
// // chưa fix !!!!!!!!!!!!!
// // 9 -2 -8 0 
// // -6 -2 0 -9
// //  4 -5 6 1
// //  1 3 4 9 -> output : 26
// // duong cheo matrix: tim tat ca hieu duong cheo chinh -phu cua tat ca ma tran vuong (2x2 3x3 ..) trong mot matrix cho truoc- > in ra gia tri lon nhat
//  void bai16() 
// {
//     int m;cout <<"Nhap ma tran vuong cap: ";cin>>m;
//     int a[402][402];cout <<"Input matrix square: "<<endl;
//     for (int i=1;i<=m;i++) 
//     {
//         for (int j=1;j<=m;j++) cin>>a[i][j];
//     }
//     // create a matrix duong cheo chinh
//     int major[402][402]={0};
//     for (int i=1;i<=m;i++) 
//     {
//     	// cac phan tu thuoc cot 1 , dong 1 -> giu nguyen
//         for (int j=1;j<=m;j++) 
//         {
//             if(i==1 || j==1) major[i][i]=a[i][j];
//             else 
//             {
//             	// phan tu dang xet = phan tu cu + phan tu cheo trai da khoi tao
//                 major[i][j]=a[i][j]+major[i-1][j-1];             
//             }
//         }
//     }
//     // create a matrix duong cheo phu
//     int minor[402][402]={0};
//     for (int i=1;i<=m;i++) 
//     {
//         for (int j=m;j>=1;j--) 
//         {
//         	// dong 1 vs cot ngoai cung giu nguyen
//             if(i==1 || j==m) minor[i][j]=a[i][j];
//             else 
//             {
//             	// phan tu dang xet = phan tu cu + cheo phai phan tu moi da khoi tao truoc do
//                 minor[i][j]=a[i][j]+minor[i-1][j+1];
//             }
//         }
//     }
//     //
//     int ans=0;
//     for (int i=m;i>=1;i--) 
//     {
//         for (int j=m;j>=1;j--) 
//         {
//         	// cac ma tran co the tao tao ( min(i,j) -> 2x2)
//             int tmp=min(i,j);
//             int hang =i-tmp,cot=j-tmp;
//             // loop bien doi hang vs cot
// 			// vd min(i,j)=4 -> bien doi hang vs cot 3 lan (0,0;1,1;2,2) 
//             for (int k=0;k<min(i,j);k++) 
//             {
//             	// tong duong cheo chinh - tong duong cheo phu
//                 ans=max(ans,major[i][j]-major[hang +k][cot+k]-(minor[i][cot+k+1]-minor[hang +k][j+1]));
//             }
//         }
//     }
//     cout <<ans;
// }

// // Bien doi nhi phan : value =1 -> bien doi hang cs cot -> 1 
// void bai17()
// {
//     int m,n;cout <<"Nhap dong vs cot: ";cin>>m>>n;
//     int a[m][n];cout <<"Nhap mang: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     // create a new matrix
//     int res[m][n]={0};
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//             if(a[i][j]==1) 
//             {
//                 for (int r=0;r<m;r++) {res[r][j]=1;} // duyet cot
//                 for (int k=0;k<n;k++) {res[i][k]=1;} // duyet hang
//             }
//         }
//     } 
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) {cout <<res[i][j]<<" "; }
//         cout <<endl;
//     }
// }
// // Matrix binary: dem so hang co so 1 nhieu hon so 0 (N hang vs 3 cot)
// void bai18() 
// {
//     int m,n;cout <<"Nhap so dong vs cot: ";cin>>m>>n;
//     int a[m][n];cout <<"Nhap mang: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     int s=0,cnt=0;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//            if(a[i][j]==1) s+=a[i][j];
//         }
//         if(s>=2) {++cnt;s=0;}
        
//     } 
//     cout <<cnt<<" dong";
// }
// // in so nho nhat thu k
// void bai19() 
// {
//     int m,n;cout <<"Nhap dong va cot: ";cin>>m>>n;
//     int a[m][n];cout <<"Nhap mang: "<<endl;
//     vector <int> v;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) {cin>>a[i][j];v.push_back(a[i][j]);}
//     } 
//     cout <<"Nhap phu tu nho thu k ma ban chon: ";
//     int k;cin>>k;
//     sort (v.begin(),v.end());
//     cout <<"Phan tu min thu "<<k<<" : " <<v[k-1];
   
// }

// int main()
// {
//   bai16();
// }
//9 -2 -8 0 
//-6 -2 0 -9
// 4 -5 6 1
// 1 3 4 9 



// *Array two side part 3
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <map>

// using namespace std;
// // quay matrix theo chiu kim
// void bai20() 
// {
//    int m,n;cout <<"Input row and column: ";cin>>m>>n;
//    int a[m][n];cout <<"Input matrix: "<<endl;
//    for (int i=0;i<m;i++) 
//    {
//     for (int j=0;j<n;j++) cin>>a[i][j];
//    }
//   // tao xoan oc
//    int c1=0,c2=n-1,h1=0,h2=m-1;
//    // ko co dau bang de phan tu trung tam ko bi doi
//    while(c1<=c2 && h1<h2) // h1 != h2 de ko swap value cuoi
//    {
//     int temp=a[h1+1][c1];
//     for (int i=c1;i<=c2;i++) 
//     {
//         swap(temp,a[h1][i]);
//     } h1++;
//     for (int i=h1;i<=h2;i++) 
//     {
//         swap(temp,a[i][c2]);
//     } c2--;
//     if(c1<=c2) 
//     {
//         for (int i=c2;i>=c1;i--) 
//         {
//             swap(temp,a[h2][i]);
//         } h2--;
//     }
//     if(h1<=h2) 
//     {
//         for (int i=h2;i>=h1;i--) 
//         {
//             swap(temp,a[i][c1]);
//         } c1++;
//     }
//    }
//    for (int i=0;i<m;i++) 
//    {
//     for (int j=0;j<n;j++) cout <<a[i][j]<<" ";
//     cout <<endl;
//    }
// }
// // Dem cap phan tu giong nhau deu xh o cac dong
// void bai21() 
// {
//     int m,n;cout <<"Input row and column: ";cin>>m>>n;
//     int a[m][n];cout <<"Input matrix: "<<endl;
//     for (int i=1;i<=m;i++) 
//     {
//         for (int j=1;j<=n;j++) cin>>a[i][j];
//     }
//    // create a map mark value of matrix 
//    map <int,int> mp;
//    // mark cac phan tu o dong dau la 1;
//    for (int i=1;i<=n;i++) mp[a[1][i]]=1;
//    // dung map danh dau
//      for (map<int,int>::iterator it=mp.begin();it!=mp.end();it++) 
//    {
//     // bat dau tu dong 2
//    for (int i=2;i<=m;i++) 
//    {
//     for (int j=1;j<=n;j++) 
//     {
//         // neu nhu value of matrix == first of map (key of map : save value of matrix) -> gan index row cho value (second of map)
//         if((*it).first==a[i][j]) mp[a[i][j]]=i;
//         // 
//     }
//    } 
//    // neu value of map (= index row ) ==> value of matrix xuat hien m lan (m: so dong of matrix) -> cout first of map (value of matrix) 
//     if((*it).second==m) cout <<(*it).first<<" ";
//    }
// }
// int m,n,a[100][100];
// // Count island
// //create a function : ra cac vi tri xung phan tu co value =1 -> xoa het cac value =1 chuyen ve 0 
// int dx[8]={-1,-1,-1,0,0,1,1,1};
// int dy[8]={-1,0,1,-1,1,-1,0,1};
// void dfs(int i,int j) 
// {
//      a[i][j]=0;
//     cout <<i<<" "<<j<<endl; // erase 1 return 0;
//     for (int k=0;k<8;k++) 
//     {
//         int imoi=i+dx[k];
//         int jmoi=j+dy[k];
//         if(imoi >=0 && imoi <m && jmoi >=0 && jmoi <n && a[imoi][jmoi]) 
//         { dfs(imoi,jmoi); } // erase cac gia tri xung quanh gia tri dang xet ( neu =1)
//     }
// }
// // 
// void bai22() 
// {
//     int cnt=0;
//     cout <<"Input row and column: ";cin>>m>>n;
//     cout <<"Input value of matrix: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//             if(a[i][j]) 
//             {
//                 ++cnt;// so area co value =1 
//                 dfs(i,j);// xoa cac area =1 de duyet cho cac area khac
//             }
           
//         }
//     }
//     cout << cnt;
// }
// // ma tran vuong lon nhat co cac phan tu deu bang 1
// // idea : -tao mot array moi gan dong 1 va cot 1 cua array a cho array moi
// // - duyet cac phan tu cua array moi bat dau tu dong 2 cot 2 cho den het :(dk : phan tu dang xet(a) phai khac 0 neu bang 0 thi cho phan tu dang xet(newarr) =0)
// // tim min (i,j-1;i-1,j-1;i-1,j)-> return 1 -> cong 1(return matrix square ) -> gan vao phan tu dang xet( o cuoi goc cua matrix(value max) la output) 
// // - tim  max cua array moi -> output ( return matrix square lon nhat) 
// void bai23() 
// {
//     int m,n;cout <<"Nhap so dong va cot: ";cin>>m>>n;
//     int a[m][n];cout <<"Nhap mang: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     // tao mang moi
//     int newarr[m][n]={0};
//     // cho dong 1 va cot 1 mang moi giong mang cu
//     for (int i=0;i<m;i++) 
//     {
//         newarr[i][0]=a[i][0];
//     }
//     for (int j=0;j<n;j++) 
//     {
//         newarr[0][j]=a[0][j];
//     }
//     // duyet tu dong 2 va cot 2
//     for (int i=1;i<m;i++) 
//     {
//         for (int j=1;j<n;j++) 
//         {
//             if(a[i][j]) 
//             {
//                 newarr[i][j]=min(newarr[i-1][j],min(newarr[i][j-1],newarr[i-1][j-1]))+1;
//             }
//             else newarr[i][j]=0;
//         }
//     }
//     //
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cout <<newarr[i][j]<<" ";
//         cout <<endl;
//     }
//     // tim max newarr
//     int max=0;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//             if(newarr[i][j]>max) max=newarr[i][j];
//         }
//     }
//     cout <<max;

// }
// // thuat toan stack ( chx fix !!!!!)

//   int max_area(int x[]) 
//   {  
//     int res=0;
//     int i=0;
//     stack<int> st;
//     while(i<m) 
//     {
//         if(st.empty() || x[i]>= x[st.top()]) st.push(i++);
//         else 
//         {
//             int top=st.top();st.pop();
//             if(st.empty()) 
//             {
//                 res=max(res,i*x[top]);
//             }
//             else 
//             {
//                 res=max(res,x[top]*(i-st.top()-1));
//             }
//         }
//     }
  
//   while (!st.empty()) 
//   {
//     int top =st.top();st.pop();
//     if(st.empty()) 
//     {
//         res=max(res,i*x[top]);
//     }
//      else 
//      {
//         res=max(res,x[top]*(i-st.top()-1));
//      }
//   }
//   return res;
// }
// // chua fix !!!!!!!
// void bai24() 
// {
//   int m;int n;int a[505][505];
//   cout <<"Nhap so dong vs cot: ";
//     cin>>n>>m;
//     cout <<"Nhap matrix:"<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//     // ham histogram
//     int tmp[m][n];
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//             if(i==0) tmp[i][j]=a[i][j]; // gan dong dau cho mang moi
//             else if(a[i][j])  
//             {
//                 tmp[i][j]=tmp[i-1][j]+1;
//             }
//             else tmp[i][j]=0;
//         }
//     }
//     int ans=0;
//     for (int i=0;i<m;i++) 
//     {
//         ans=max(ans,max_area(tmp[i]));
//         cout <<ans<<endl;
//     }
//     cout <<ans<<endl;
// }

// void histogram() 
// {
   
//      int m,n;cout <<"Nhap dong vs cot: ";cin>>m>>n;
//     int a[m][n];cout <<"Nhap array: "<<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++)cin>>a[i][j];
//     }
//     // tao array histogram
//     int his[m][n];
//      for (int i=0;i<m;i++) 
//      {
//         for (int j=0;j<n;j++) his[i][j]=1;
//      }
//     for (int i=0;i<n;i++) 
//     {
//         his[0][i]=a[0][i];
//     }
//       for (int i=0;i<n;i++) // cot
//     {
//         for(int j=1;j<m;j++) //dong
//         {
//             if(a[0][i]==0)  // phan tu dau bang 0
//                 {
//             if(a[j][i]) 
//             {
//                 his[j+1][i]=his[j][i]+1;
               
//             } 
//             else 
//             {
//                 his[j][i]=0;
//             }
//                 }  
//             else 
//                 {
//               if(a[j][i]) 
//             {
//                 his[j][i]=his[j-1][i]+1;
               
//             } 
//             else 
//             {
//                 his[j][i]=0;
//             }
//                }
            
//         }
//     }

//     cout <<endl;
//     for (int i=0;i<m;i++) 
//     {
//         for (int j=0;j<n;j++) cout <<his[i][j]<<" ";
//         cout <<endl;
//     }
// }
// // ham kanade : tim tong day con lon nhat
// int kanade(int a[],int n) 
// {
//     int cnt=0;
//     int max_end_here = 0,res=0;
//     for (int i=0;i<n;i++) 
//     {
//         max_end_here+=a[i];
//         res=max(res,max_end_here);
//         max_end_here=max(0,max_end_here);
//     }
//     return res;
// }
// // tim hcn co sum max - thuat toan kadane -> tim tong day con lon nhat 
// // void bai25() 
// // {
// //     int m,n;cout <<"Input ur row and column: ";cin>>m>>n;
// //     int a[m][n];cout <<"Input ur matrix: "<<endl;
// //     for (int i=0;i<m;i++) 
// //     {
// //         for (int j=0;j<n;j++) cin>>a[i][j];
// //     }
// //     int res=INT_MIN;
// //     int tmp[n];// luu tong cac phan tu tren dong 
// //     for (int l=0;l<n;l++) 
// //     // { n.(n-1)/2
// //         ms(tmp,0);
// //         for (int r=l;r<n;r++) 
// //         {
// //             for (int i=0;i<m;i++) {
// //                 tmp[i]+=a[i][r];
// //             }
// //             res= max(res,kanade(tmp,m));
// //         }
// //     }
// //  cout <<res<<endl;
// // }
// // dem so nguyen to tren duong cheo chinh vs duong cheo phu ( gia tri lap lai chi dem 1 lan)
// // ham sang nt
// int nt[1000001];
// void sieve() 
// {
//         nt[0]=0;nt[1]=0;
//     for (int i=2;i<=1000000;i++) 
//     {
//         nt[i]=1;
//     }
//     for (int i=2;i<sqrt(1000000);i++) 
//     {
//         if(nt[i]) 
//         {
//             for (int j=i*i;j<=1000000;j+=i) 
//             {
//                 nt[j]=0;
//             }
//         }
//     }
// }

// int bai26() 
// {
//     int n;cout <<"nhap matrix square:  ";cin>>n;
//     int a[n][n];
//     cout <<"Nhap mang: "<<endl;
//     for (int i=0;i<n;i++) 
//     {
//         for (int j=0;j<n;j++) 
//         {
//             cin>>a[i][j];
//         }
//     }
//     int cnt=0;
//     sieve();
//     for (int i=0;i<n;i++) 
//     {
       
//         if(nt[a[i][i]]) {++cnt;nt[a[i][i]]=0;}
//         if(nt[a[i][n-i-1]] ) {++cnt;nt[a[i][n-i-1]] =0;}
       
//     }
//     return cnt;
// }

// // hoan vi 2 hang (input 2 hang can hoan vi)
// void bai27() 
// {
//      int a[3][3];
//    for (int i=0;i<3;i++) 
//    {
//     for (int j=0;j<3;j++) cin>>a[i][j];
//    }
//    int x,y;cin>>x>>y;
  
//     for (int i=0;i<3;i++) 
//     {
//         swap(a[x-1][i],a[y-1][i]);
//     }
//      for (int i=0;i<3;i++) 
//    {
//     for (int j=0;j<3;j++) cout <<a[i][j]<<" ";
//    }
// }
// //loai bo hang voi cot
// void bai28() 
// {
//     int max1=0,max2=0,h,c;
//     int a[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
//     for (int i=0;i<3;i++) 
//     {
//         int s1=0;
//         for (int j=0;j<3;j++) 
//         {
//             s1+=a[i][j];
//         }
//         if(s1>max1) {max1=s1;h=i;}
//     } 
//     for (int i=0;i<3;i++) 
//     {
//         int s2=0;
//         for (int j=0;j<3;j++) 
//         {
//             s2+=a[j][i];
//         }
//         if(s2>max2) {max2=s2;c=i;}
//     }
//     for (int i=0;i<3;i++) 
//     {
//         for (int j=0;j<3;j++) 
//         {
//             if(i!=h && j!=c) cout <<a[i][j]<<" ";
//         } cout <<endl;
//     } 
// }
// // bai 28 loai 2
// void bai28_2() 
// {
//     int a[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
//     int max1=0,max2=0,h,c;
//     for (int i=0;i<3;i++) 
//     {
//         int s1=0;
//         for (int j=0;j<3;j++) 
//         {
//            s1+=a[i][j];
//         }
//         if(s1>max1) {max1=s1;h=i;}
//     }
//     int b[2][3];// mang luu sau khi xoa hang max
//     for (int i=0;i<3;i++) 
//     {
//         for (int j=0;j<3;j++) 
//         {
//             if(i!=h)  b[i][j]=a[i][j];
//         }
//     }
//    // xoa cot max
//     for (int i=0;i<3;i++) 
//     {
//         int s2=0;
//         for (int j=0;j<2;j++) 
//         {
//          s2+=b[j][i];
//         }
//         if(s2>max2){max2=s2;c=i;}
//     }
//     for (int i=0;i<2;i++) 
//     {
//         for (int j=0;j<3;j++) 
//         {
//             if(j!=c) cout <<b[i][j]<<" ";
//         } cout <<endl;
//     }
// }
// // bai 28_2 dang matrix nxn

// void bai28_2_TQ() 
// {
//     int n;cout <<"Nhap n: ";cin>>n;
//     int a[n][n];
//     for (int i=0;i<n;i++) 
//     {
//         for (int j=0;j<n;j++) cin>>a[i][j];
//     }
//    int max1=0,max2=0,h,c;
//     for (int i=0;i<n;i++) 
//     {
//         int s1=0;
//         for (int j=0;j<n;j++) 
//         {
//            s1+=a[i][j];
//         }
//         if(s1>max1) {max1=s1;h=i;}
//     }
//     // xoa cot tren matrix moi
//     for(int i=0;i<n;i++) 
//     {
//         int s2=0;
//         for (int j=0;j<n;j++) 
//         {
//           if(i!=h) 
//         {
//             s2+=a[j][i];
//         }
//         } 
//         if(s2>max2) {max2=s2;c=i;}
//     }
//     for (int i=0;i<n;i++) 
//     {
//         int cnt=0;
//         for(int j=0;j<n;j++) 
//         {
//             if(i!=h && j!=c) {cout <<a[i][j]<<" ";++cnt;}
//         }  if(cnt) cout <<endl;
//     }
// }

// // tim hang co nhieu so nt nhat
// //mảng tìm chỉ số đầu tiên có giá trị lớn nhất
// int maxarr(int a[],int size) 
// {
//     if(size<=0) return -1;
    
//        int maxindex=0;
//        for (int i=0;i<size;i++) 
//        {
//         if(a[i]>a[maxindex]) maxindex=i;
//        }
    
//     return maxindex;
// }
// // ham tim maxvalue of array
// int maxvalue(int a[],int size) 
// {
//     if (size<=0) return -1;
//     int maxvalue=0;
//     for (int i=0;i<size;i++) 
//     {
//         if(a[i]>maxvalue) maxvalue=a[i];
//     } return maxvalue;
// }
// void bai29() 
// {
//     sieve();int b[3];
//     int a[3][3]={{23,11,22},{14,5,9},{2,3,90}};
//     for (int i=0;i<3;i++) 
//     {
//         int h=0;
//         for (int j=0;j<3;j++) 
//         {
//            if(nt[a[i][j]]) ++h;
//         }
//         b[i]=h; // gan so luong nt cua moi dong cho mang b
//     }
//    int row = maxarr(b,3);// ham tim chi so dau tien co phan tu lon nhat
//    cout << row+1<<endl; // in ra dong co nhieu so nt nhat (dong dau tien neu trung)
//     for (int i=0;i<3;i++) 
//     {if(nt[a[row][i]]) cout <<a[row][i]<<" ";}
// }
// // tim cot co nhieu so nt nhat
// void bai29_2 () 
// {
//     sieve();int c=0;int b[3];
//     int a[3][3]={{23,11,22},{14,5,9},{2,3,90}};
//     for (int i=0;i<3;i++) 
//     {
//         for (int j=0;j<3;j++) 
//         {
//             if(nt[a[j][i]]) ++c;
//         } b[i]=c;
//     }
//     int column = maxarr(b,3); //(index cua cot co nhiu so nt nhat (dau tien neu trung))
//     cout <<column +1 <<endl;
//     for (int i=0;i<3;i++) 
//     {
//         if(nt[a[i][column]]) cout <<a[i][column]<<" ";
//     }
// }
// // kiem tra bo ba so co phai so nt khong
// void sort(int a[],int n)  
// {
//    for (int i=0;i<n-1;i++)
//    {
//      for (int j=0;j<n-1-i;j++) 
//      {
//         if(a[j]>a[j+1]) swap (a[j],a[j+1]);
//      }
//    }
// }
// // tao ham kiem tra so pytago
// int check(int a[],int n) 
// {
//     int cnt=0;int kq[3];
//     for (int i=n-1;i>=2;i--) 
//     {
//          int l=0;int r=i-1;
//         while(l<r) 
//         {
//             if(a[l]+a[r]==a[i]) return 1;
//             else if(a[l]+a[r]<a[i]) l++;
//             else r--;
//         }
//     }  
//         return 0;
// }
// // ham tinh toan sort vs chuyen phan tu trong mang ve dang binh phuong
// void result(int a[],int n) 
// {
//     int x;
//     cout <<"Nhap mang: ";
//     for (int i=0;i<n;i++) 
//     {
//       cin>>x; a[i]=x*x;
//     }
//     sort(a,n);
//     if(check(a,n)) cout <<"yes";
//     else cout <<"No";    
// }
// // dem tan xuat nhieu nhat cua phan tu 
// void bai31(int a[],int n) 
// {
//     for (int i=0;i<n;i++) 
//     {
//         cout <<"a["<<i<<"]: ";
//         cin>>a[i];
//     }
//     int cnt[1000]={0};
//     for (int i=0;i<n;i++) 
//     {
//         cnt[a[i]]++;
//     }
//     int res=0;
//     for(int i=0;i<n;i++) 
//     {
//         if(cnt[a[i]]>res) res=cnt[a[i]];
//     }
//     for (int i=0;i<n;i++) 
//     {
//         if(cnt[a[i]]==res) {cout <<"so "<<a[i]<<" co tan suat xh lon nhat "<<res<<" lan"<<endl;cnt[a[i]]=0;}
//      }
// }
// // sap xep 2 mang theo chi so ( le : giam dan , chan : tang dan)
// // ham sx tang dan
// void sort1(int a[],int n) 
// {
//     for (int i=0;i<n-1;i++) 
//     {
//        for (int j=0;j<n-1-i;j++) 
//        {
//         if(a[j]>a[j+1]) swap(a[j],a[j+1]);
//        }
//     }
// }
// // ham sx giam dan
// void sort2(int a[],int n) 
// {
//     for (int i=0;i<n-1;i++) 
//     {
//        for (int j=0;j<n-1-i;j++) 
//        {
//         if(a[j]<a[j+1]) swap(a[j],a[j+1]);
//        }
//     }
// }

// void bai32() 
// {
//   int a1[5];int a2[5];int a[10];
//   cout <<"Nhap mang 1: ";
//   for (int i=0;i<5;i++) cin>>a1[i];
//   cout <<"Nhap mang 2: ";
//   for (int i=0;i<5;i++) cin>>a2[i];
//   sort1(a1,5);sort2(a2,5);
//   int cnt1=0;int cnt2=0;
//   for (int i=0;i<10;i++ )
//   {
//     if(i%2==0) a[i]=a1[cnt1++];
//     else a[i]=a2[cnt2++];
//   }
//   for (int i=0;i<10;i++)cout <<a[i]<<" ";
// }
// // sx tang dan chan xep trc le sau
// void bai33() 
// {
//     int n;cout <<"Nhap sl array: ";cin>>n;int a[n];
//     int odd =0; int evan =0;
//     cout <<"Nhap mang: ";
//     for (int i=0;i<n;i++) {
//     cin>>a[i] ;
//     if(a[i]%2==0) ++evan;
//     else ++odd;
//     }
//     int e[evan];int o[odd];
//     int k1=0,j1=0;
//         for (int i = 0; i < n; i++) {
//         if (a[i] % 2 == 0)
//             e[k1++] = a[i];
//         else
//             o[j1++] = a[i];
//     }
//     sort1(e,evan);sort1(o,odd);
    
//     int kq[n];
//     int k2=0,j2=0,i=0;
//     while(i<evan) kq[k2++]=e[i++];
//     while(j2<odd) kq[k2++]=o[j2++];
   
//     for (int i=0;i<n;i++) cout <<kq[i]<<" ";
       
// }
// // sx 2 mang(da sx tang dan) thanh mot mang tang dan ; tim giao 2 mang
// void bai34() 
// {
//     int m,n;cout <<"Nhap sl a1 vs a2:  "; cin>>m>>n;
//     int a1[m],a2[n],kq[m+n];
//     vector <int> v2;
//     for (auto &x:a1) cin>>x;
//     for (auto &x:a2) cin>>x; 
//     int j=0,i=0,cnt=0;
//     while(j<m &&  i<n) 
//     {
//         if(a1[j]<a2[i]) kq[cnt++]=a1[j++];
//         else if(a1[j]>a2[i]) kq[cnt++]=a2[i++];
//         else  {v2.push_back(a1[j++]);}
//     } 
//      while(j<m) kq[cnt++]=a1[j++];
//      while(i<n) kq[cnt++]=a2[i++];
//     cout <<"Mang moi dc sx: ";
//     for (int i=0;i<m+n-v2.size();i++) cout <<kq[i]<<" "; // i< m+n - v2.size() -> bo di so phan tu giao cua 2 mang
//     cout <<endl;
//     cout <<"giao 2 tap hop: ";
//     for (vector <int> :: iterator it=v2.begin();it!=v2.end();it++) 
//     cout << *it<<" ";
// }
// int main() 
//    {
//     bai34();
//    }

// *Arrray _ F8 : ptr 
// #include <iostream>
// using namespace std;

// // them phan tu vao cuoi mang
// //  con tro quan li mang dong ( dynamicArray pointer)
// void input_element( string label, int &n) {
//   cout <<label; // nhan
//   cin>>n;
// }
// // input dynamicArray
// void input_arr(int *arr, int size){
//   for (int i=0;i<size;i++){
//     cin>>arr[i];
//   }
// }
// // output dynamicArray
// void output_arr(int *arr,int size) {
//   for (int i=0;i<size;i++){
//     cout <<arr[i]<<" ";
//   }
// }
// // push array  
// // truyen tham chieu cho con tro de mang dong trong ham main va trong ham con (push_array) thuc hien chung 1 contro toi vung nho
// void push_arr(int *&arr,  int &size, int &new_element){
//   // cap phat mang dong 
//   int new_size = size + 1;
//   // con tro qua li mang dong 
//   int *tmp_arr = new int[new_size];
//   // copy mang cu sang mang moi
//   for (int i=0;i<size;i++){
//     tmp_arr[i]=arr[i];
//   }
//   // them phan tu vao cuoi mang moi
//   tmp_arr[new_size-1] = new_element;  
//   // xoa data mang cu , copy mang moi sang mang cu , tang size mang cu 1 dv
//   // con tro quan li mang dong khi truyen tham chieu thi dung chung dia chi -> delete mang dong <=> delete contro
//   delete [] arr;
//   arr = tmp_arr;
//   size = new_size; 
// }
//  void bai1(){
//   int n,x;
//   input_element("Nhap n: ",n);
//   int *numbers = new int[n]; // pointer manage dynamicarray
//   cout <<"Nhap mang: ";
//   input_arr(numbers,n);
//   input_element("Nhap new value: ",x);
//   push_arr(numbers,n,x);
//   cout <<"Mang sau khi them: ";
//   output_arr(numbers,n);
//  }


// // xoa phan tu tai index cho trc
// void erase_value(int* &arr, int &size, int &index) {
//   int new_size = size-1;
//    int *tmp_arr = new int[new_size];
//    // xoa phan tu
//    for (int i=index;i<size-1;i++) {
//        arr[i]=arr[i+1];
//    }
//    // copy sang mang dong
//    for (int i=0;i<new_size;i++){
//     tmp_arr[i]=arr[i];
//    }
//    // xoa data cu 
//    delete[] arr;
//    // copy mang dong lai cho mang cu
//    arr=tmp_arr;
//    size=new_size;
// }
// void bai2(){
//   int n, idx;
//   input_element("n: ",n);
//   int *numbers = new int[n];
//   cout <<"Nhap mang: ";
//   input_arr(numbers,n);
//   input_element("index:  ",idx);
//   erase_value(numbers,n,idx);
//   output_arr(numbers,n);
// }

// // them y vao vi tri x cua mang 
// void add_value(int* &arr, int &size , int &y_value, int &x_idx) {
//   int new_size = size + 1;
//   int *tmp_arr = new int[new_size];
//   // 1 2 3 4 _
//   for (int i=0;i<size;i++){
//     tmp_arr[i]=arr[i];
//   }
//   // 1 2(x) 2 3 4
//   for (int i=new_size - 1;i>x_idx;i--){
//     tmp_arr[i]=tmp_arr[i-1];
//   }
//   tmp_arr[x_idx] = y_value; // 1 y 2 3 4
//   delete[] arr;
//   arr = tmp_arr;
//   size = new_size;
// }

// void bai3(){
//   int n,x,y;
//   input_element("n: ",n);
//   int *numbers = new int[n];
//   cout <<"Nhap mang: ";
//   input_arr(numbers,n);
//   input_element("x ",x);
//   input_element("y: ",y);
//   add_value(numbers,n,y,x);
//   output_arr(numbers,n);
// }
// // sap xep lai mang dong theo thu tu tang dan
// void sort_arr(int* &arr, int &size) {
//   for (int i=0;i<size;i++){
//     int min_pos = i;
//     for (int j=i;j<size;j++){
//       if(arr[j]>arr[min_pos]) min_pos=j;
//     }
//     swap(arr[min_pos],arr[i]);
//   }
//   int *tmp_arr = new int[size];
//   for (int i=0;i<size;i++) tmp_arr[i]=arr[i];
//   delete [] arr;
//   arr = tmp_arr;
// }
// void bai4(){
//   int n;
//   input_element("n: ",n);
//   int *numbers = new int[n];
//   cout <<"Nhap mang: ";
//   input_arr(numbers,n);
//   sort_arr(numbers,n);
//   cout <<"Mang sau khi sap xep giam dan : ";
//   output_arr(numbers,n);
// }
//  int main(){
//   system("cls");
//   bai4();
//   return 0;
//  }