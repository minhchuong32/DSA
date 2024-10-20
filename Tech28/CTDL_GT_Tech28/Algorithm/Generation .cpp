// #include <bits/stdc++.h>
// using namespace std;

// // in tat ca xau nhi phan thuan nghich (4) 00100,..

// int n, x[100], ok;

// // sinh xau n/2 
// void sinh1()
// {
//     int i = n / 2;
//     while (i >= 1 && x[i])
//     {
//         x[i] = 0;
//         i--;
//     }
//     if (i == 0)
//         ok = 0;
//     else
//     {
//         x[i] = 1;
//     }
// }

// void bai1()
// {
//     cin >> n;
//     if (n % 2 == 0)
//     {
//     ok = 1;
//         while (ok)
//         {
//             // n=4 -> 0110
//             for (int i = 1; i <= n / 2; i++)
            
//                 cout << x[i];
//                 // 01
//                 for (int i = n / 2; i >= 1; i--)
//                     cout << x[i];
//                     // 10
//                     // -> 0110
//                     cout << endl;
//                     sinh1();
            
//         }
//     }
//     else
//     {
//         ok = 1;
//         while (ok)
//         {
//     // them 0/1 vao giua
//             for (int u = 0; u <= 1; u++)
//             {
//                 for (int i = 1; i <= n / 2; i++)
//                        cout << x[i]; 
//                     //    10  
//                     cout << u;
//                     //   100
//                     for (int i = n / 2; i >= 1; i--)
//                         cout << x[i];
//                     // 10001
//                     cout << endl;
//                     sinh1();
//             }
//         }
//     }
// }

// // in xau nhi phan thuan nghich co do dai chan :00,1111,...
// void sinh()
// {
//     int i = n;
//     while (i >= 1 && x[i])
//     {
//         x[i] = 0;
//         i--;
//     }
//     if (i == 0)
//         ok = 0;
//     else
//     {
//         x[i] = 1;
//     }
// }

// void bai2()
// {
//     int k;
//     cin >> k;
//     vector<string> v;
//     for (int n = 1; n <= k / 2; n++)
//     {
//         ok = 1;
//         while (ok)
//         {
//             string s = "";
//             for (int i = 1; i <= n; i++)
//                 // s += to_string(x[i]);
//                 cout <<x[i];
//             for (int i = n; i >= 1; i--)
//                 // s += to_string(x[i]);
//                 cout <<x[i];
//             v.push_back(s);
//             sinh(); 
//         }
//     }
//     sort(v.begin(), v.end());
//     for (string x:v) cout <<x<<endl;
// }

// int main()
// {
//     bai2();
// }


// #include <bits/stdc++.h>
// using namespace std;


// SINH NHI PHAN
// int n, a[100], final = 0;
// void ktao() {
//     for (int i=1;i<=n;i++) {
//         a[i] = 0;
//     }
// }

// void sinh() {
//     int i = n;
//     while(i>=1 && a[i]==1) {
//         a[i] = 0;
//         i--;
//     }
//     if(i==0) final = 1;
//     else {
//         a[i] = 1;
//     }
// }
// int main() {
//     cin>>n;
//     ktao();
//     while(final==0) {
//         for (int i=1;i<=n;i++) {
//             cout <<a[i];
//         }
//         cout <<endl;
//         sinh();
//     }
// }

// in xau ki tu 
// int main() {
//     cin>>n;
//     ktao();
//     while(final==0) {
//         for (int i=1;i<=n;i++) {
//             if(a[i]==0) cout <<'B';
//             else cout <<'A';
//         }
//         cout <<endl;
//         sinh();
//     }
// }



// SINH TO HOP nCk (n>=k)
// int k, n, a[100], final=0;
// // k=4  n=9 
// void ktao() {
//     for (int i=1;i<=k;i++){
//         a[i] = i;
//         // 1234 
//     }
// }

// void sinh() {
// // vd : 3 5 8 9
//     int i = k;
//     // tim bit chu dat cuc dai -> 5 ( cuc dai : 9-4+2 = 7 )
//     while(i>=1 && a[i] == n - k + i) {
//         --i;
//     }

//     if(i==0) {
//         final = 1;
//     }
//     // 3 5(i) 8 9 
//     else {
//         a[i]++;
//         // 3 6 8 9 
//         // tang cac bit dang sau bit da dat cuc dai  
//         for (int j=i+1;j<=k;j++) {
//             a[j] = a[j-1]+1;
//         }
//         // 3 6 7 8 
//     }
// }
// vector<vector<int>> v;
// int main() {
//     cin>>n>>k;
//     ktao();
//     while(final==0){
//     for (int i=1;i<=k;i++) {
//         cout <<a[i];
//     }
//     sinh();
//     }
//     // problem2();
// }

// // in ra cau hinh nguoc 
// void problem1(){
//     cin>>n>>k;
//     ktao();
//     while(final==0){
//         vector<int> res;
//     for (int i=1;i<=k;i++) {
//         res.push_back(a[i]);
//     }
//     // v[i] = vector 
//     v.push_back(res);
//     sinh();
//     }
//     for (int i=v.size()-1;i>=0;i--) {
//         for (int x:v[i]) cout <<x<<" ";
//         cout <<endl;
//     }
// }

// // 5 3
// // 3 4 5 
// // 2 4 5 
// // 2 3 5 
// // 2 3 4 
// // 1 4 5 
// // 1 3 5
// // 1 3 4
// // 1 2 5
// // 1 2 4
// // 1 2 3

// // in ra vi tri cau hinh neu giong cau hinh da cho (theo thu tu nguoc)
// void problem2(){
//     cin>>n>>k;
//     int x[100];
//     // nhap cau hinh check 
//     for (int i=0;i<k;i++) {
//         cin>>x[i];
//     }
//     while(final==0) {
//         vector <int> res;
//         for (int i=1;i<=k;i++) {
//             res.push_back(a[i]);
//         }
//         // dua moi cau hinh vao v 
//         v.push_back(res);
//         sinh();
//         cout <<endl;
//     }
//     for (int i = v.size()-1;i>=0;i--) {
//         bool ok = true;
//         for (int j=0;j<k;j++) {
//             if(x[i]!=v[i][j]) ok = false;
//         }
//     }
//     if(ok) {
//         cout << v.size()-i<<endl;
//     }
// }

// SINH HOAN VI 
// idea: duyet nguoc tim vi tri i dau tien ma a[i+1] > a[i] (vd : 6(i) 9(i+1)) 1 2 6 9 8 7 5 4 3 (cau hinh ban dau)
// b2 : duyet nguoc tim value dau tien a[j] (min) > a[i]  -> swap : 1 2 6(i) 9 8 7(j) 5 4 3 -> 1 2 7 9 8 6 5 4 3
// b3 :  sort(reverse) tang dan tu i+1 -> cuoi : 1 2 7 3(i+1) 4 5 6 8 9 : cau hinh tiep theo 

// int a[100],n,final=0;
// void ktao() {
//     for (int i=1;i<=n;i++) {
//         a[i] = i;
//     }
// }

// void sinh() {
//     int i = n-1;
//     while(i>=1 && a[i] > a[i+1]) {
//         --i;
//     }
//     // dat cau hinh cuoi cung : giam dan  
//     if(i==0) final = 1;
//     else {
//         // duyet ngc 
//         int j = n;
//         // di tim a[j] > a[i] ma nho nhat 
//         while(a[j]<a[i]) --j;
//         // swap 
//         swap (a[i],a[j]);
//         // 1 2 7 9 8 6 5 4 3
//         // sort 
//         reverse(a+i+1,a+n+1);
//         // 1 2 7 3 4 5 6 8 9
//     }
// }
// // ham sinh hoan vi : 
// // ktao() a[i] = i;
// // * next_permutation(a+1,a+1+n) : in cau hinh tiep theo den cau hinh cuoi -> stop

// // ktao() a[i] = n-i+1;
// // * prev_permutation(a+1,a+1+n) : in cau hinh tiep theo den cau hinh dau -> stop

// // -> nhanh hon dung thuat toan 
// int main() {
//     cin>>n;
//     ktao();
//     do {
//     for (int i=1;i<=n;i++) {
//         cout <<a[i]<<' ';
//     }
//     cout <<endl;
//     }
//     while(next_permutation(a+1,a+n+1));
// }

// SINH PHAN HOACH 

// int a[100],n,cnt,final = 0;
// // vd : n = 10 
// void ktao() {
//     cnt = 1;
//     a[1]=n;
//     // 10 = a[1]
// }

// void sinh() {
//     // vd : 3 3 1 1 1 1 (10)  (cnt = 6)
//     int i = cnt;
//     // bo qua vi tri co value =1 
//     while(i>=1 && a[i]==1) {
//         i--;
//     }
//     // 3 3(i) 1 1 1 1 
//     if(i==0 ) final = 1;
//     else {
//         a[i]--;
//         // 3 2(i=2) 1 1 1 1
//         int d = cnt - i + 1;
//         // d = 6 - 2 + 1 
//         // d: so don vi con thieu (5 = 4 so 1 + 1 so: a[i]--)
//         cnt = i; 
//         // cnt = 2 
//         // 3 2(i) 
//         int q = d/a[i];
//         // q = 5 / 2 = 2 
//         int r = d%a[i];
//         // r = 5 % 2 = 1 
//         for (int j =1;j<=q;j++) {
//             a[i+j] = a[i];
//             ++cnt; 
//         }
//             // 3 2(i) 2 2 
//             // cnt = 4
//         if(r) {
//             ++cnt;
//             a[cnt] = r;
//             // cnt = 5
//             // 3 2 2 2 1(cnt = 5) 
//         }
//         // cau hinh moi : 3 2 2 2 1
//     }
// }

// // 5
// // 41
// // 32
// // 311
// // 221
// // 2111
// // 11111 

// int main() {
//     cin>>n;
//     ktao();
//     while(!final) {
//         for (int i=1;i<=cnt;i++) {
//             cout <<a[i];
//         }
//         cout <<endl;
//         sinh();
//     }
// }