
// // TIM KIEM 2 CON TRO
// // #P1 : Mang con ngan nhat co tong bang s
// // c1 (O(n^3))
// // void solve1(){
// //     int n,s; cin>>n>>s; int a[n];
// //     for (int i=0;i<n;i++) cin>>a[i];
// //     int min_len = INT_MAX;
// //     for (int len=1;len<=n;len++) {
// //         for (int i=0;i<n-len+1;i++) {
// //             int j = i+len-1;int sum = 0;
// //             for (int k=i;k<=j;k++) {
// //                 sum+=a[k];
// //             }
// //             if(sum==s && len<min_len) min_len = len;
// //         }
// //     }
// //     cout <<min_len;
// // }

// // // c2
// // int a[100];
// // int main() {
// //     int n, s;
// //     cin >> n >> s;
// //     map<int, int> mp;
// //     mp[0] = 0;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         cin >> a[i];
// //     }
// //     int sum = 0, res = 1e9;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         // prefix sum 
// //         sum += a[i];
// //         if (mp.count(sum - s))
// //         {
// //             // cap nhat len = chi so hien tai(sum) - chi so tim duoc tong (sum-s ) = s(len)
// //             res = min(res, i - mp[sum - s]);
// //         }
// //         cout <<res;
// //         mp[sum] = i;
// //     }
// //     if (res != 1e9)
// //         cout << res;
// //     else
// //         cout << -1;
// // }

// //    6 4
// //    1 1 1 3 2 4
// //pre:1 2 3 6 8 12 
// // 1



// #P2 : tim kc lon nhat giua i vs j sao cho |a[i]-a[j] = k|
// // void solve2()
// // {
// //     int n, k;
// //     cin >> n >> k;
// //     for (int i = 1; i <= n; i++)
// //         cin >> a[i];
// //     map<int, int> mp;
// //     int res = -1e9;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         if (mp.count(a[i] - k))
// //         {
// //             res = max(res, i - mp[a[i] - k]);
// //         }
// //         if (mp.count(a[i] + k))
// //         {
// //             res = max(res, i - mp[a[i] + k]);
// //         }
// // danh dau cho value dau tien xh 
// //         if (mp.count(a[i]) == 0)
// //             mp[a[i]] = i;
// //     }
// //     cout << res;
// // }
// // // 14 2
// // // 0 1 3 0 4 0 0 3 3 -4 1 0 -4 3
// // // 12

// #P3 :Tim doan con dai nhat ma tat ca phan tu <=k
// // void solve3()
// // {
// //     int n, k;
// //     cin >> n >> k;
// //     int a[n];
// //     for (auto &it : a)
// //         cin >> it;
// //     sort(a, a + n);
// //     int r = 0, l = 0, res = 0;
// //     while (r < n)
// //     {
// //         while (a[r] - a[l] > k)
// //         {
// //             l++;
// //         }
// //         res = max(res, r - l + 1);
// //         r++;
// //     }
// // }
// #P4: kiem tra co mang con nao bang 0 ? => Prefix sum, neu Pre[i] == Pre[j] -> yes else no
// // // int main()
// // // {
// // //     solve2(); 
// // // }

// #P5: tim day con dai nhat co tong bang 0

// // void solve5()
// // {
// //     int n;
// //     cin >> n;
// //     int a[n + 1];
// //     for (int i = 1; i <= n; i++)
// //         cin >> a[i];
// //     map<int, int> mp;
// //     mp[0] = 0;
// //     int max = 0, sum = 0, start = 0;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         sum += a[i];
// //         if (mp.count(sum))
// //         {
// //             int kc = i - mp[sum];
// //             if (kc > max)
// //             {
// //                 max = kc;
// //                 start = mp[sum] + 1;
// //             }
// //         }
// //         if (mp.count(sum) == 0)
// //             mp[sum] = i;
// //     }
// //     for (int i = start; i < start + max; i++)
// //         cout << a[i] << ' ';
// // }
// // // 18
// // // -9 5 7 -6 7 0 -9 5 4 -9 -5 2 -3 8 6 -3 7 6
// // // -9 5 7 -6 7 0 -9 5 4 -9 -5 2 -3 8 6 -3
// // // int main()
// // // {
// // //     solve5();
// // // }

// #P6 : Check mang B co phai mang con A ko

// // void solve6()
// // {
// //     int n, m;
// //     cin >> n >> m;
// //     int a[n], b[m];
// //     for (auto &it : a)
// //         cin >> it;
// //     for (auto &it : b)
// //         cin >> it;
// //     int cnt = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (b[cnt] == a[i])
// //             ++cnt;
// //     }
// //     if (cnt == m)
// //         cout << 1;
// //     else
// //         cout << 0;
// // }

// // // int main() {
// // //     solve6();
// // // }

// #P7 : tim day con co k phan tu max
// // void solve7()
// // {
// //     int n, k;
// //     cin >> n >> k;
// //     int a[n];
// //     for (int i = 0; i < n; i++)
// //         cin >> a[i];
// //     int max = 0, l = 0, r = k, sum = 0, start = 0;
// //     for (int i = 0; i < k; i++)
// //         sum += a[i];
// //     for (int i = 0; i < n - k + 1; i++)
// //     {
// //         if (sum > max)
// //         {
// //             max = sum;
// //             start = l;
// //         }
// //         sum -= a[l++];
// //         sum += a[r++];
// //     }
// //     cout << max << endl;
// //     for (int i = start; i < start + k; i++)
// //         cout << a[i] << ' ';
// // }
// // // 10 4
// // // 21 33 22 2 71 104 40 99 2 10
// // // 314
// // // 71 104 40 99
// // // int main() {
// // //     solve7();
// // // }

// #P8: tim tat ca min max mang con co k phan tu
// // void solve8()
// // {
// //     int n, k;
// //     cin >> n >> k;
// //     int a[n];
// //     for (auto &it : a)
// //         cin >> it;
// //     multiset<int> ms;
// //     for (int i = 0; i < k; i++)
// //     {
// //         ms.insert(a[i]);
// //     }
// //     for (int i = 0; i < n - k + 1; i++)
// //     {
// //         cout << *ms.begin() << ' ' << *ms.rbegin() << endl;
// //         auto it = ms.find(a[i]);
// //         ms.erase(it);
// //         ms.insert(a[i + k]);
// //     }
// // }

// // // int main() {
// // //     solve8();
// // // }

// #P9: tim xau con ngan nhat trong s chua day du cac ki tu cua xau t

// // // void solve9() {
// // //     string s,t; cin>>s>>t;
// // //     int cntT=0;
// // //     int dT[256] ={0};
// // //     // dem tan xuat va length xau t
// // //     for (int i=0;i<t.size();i++) {
// // //         dT[t[i]]++;
// // //         if(dT[t[i]]==1) ++cntT;
// // //     }
// // //     int cntS=0;
// // //     int dS[256] ={0};
// // //     int l=0,r=0,min_len = INT_MAX,start;
// // //     while(r<s.size()) {
// // //         dS[s[r]]++;
// // //         // neu ki tu s[r] xh trong t va tan xuat cua no trong s = trong t : tang length s
// // //         if(dT[s[r]] && dS[s[r]]==dT[s[r]]) {
// // //             cntS++;
// // //         }
// // //         // neu len xau con s (cnts)  = length xau t
// // //         if(cntS == cntT) {
// // //             // rut ngan xau con
// // //             while(1) {
// // //                 // neu xoa di 1 ki tu ma van thoa man xau t
// // //                 if(dS[s[l]]-1>=dT[s[l]]) {
// // //                     dS[s[l]]--;
// // //                     l++;
// // //                 }
// // //                 else break;
// // //             }
// // //             if(r-l+1<min_len) {
// // //                 start = l;
// // //                 min_len = r-l+1;
// // //             }
// // //         }
// // //         r++;
// // //     }
// // //     for (int i=start;i<start+min_len;i++) cout <<s[i];
// // // }

// // // int main() {
// // //     solve9();
// // // }

// #P10tim xau con ngan nhat trong s chua day du cac ki tu xau s

// // void solve10()
// // {
// //     string s;
// //     cin >> s;
// //     set<char> se;
// //     for (auto it : s)
// //         se.insert(it);
// //     int n = s.length();
// //     int d[256] = {0};
// //     int cnt = 0, l = 0, min_len = INT_MAX, start = 0;
// //     for (int r = 0; r < n; r++) {
// //         d[s[r]]++;
// //         if (d[s[r]] == 1)
// //             ++cnt;
// //         if (cnt == se.size()) {
// //             // thu gon 
// //             while (d[s[l]] > 1) {
// //                 d[s[l]]--;
// //                 l++;
// //             }
// //             if (r - l + 1 < min_len) {
// //                 min_len = r - l + 1;
// //                 start = l;
// //             }
// //         }
// //     }
// //     for (int i = start; i < start + min_len; i++)
// //         cout << s[i];
// // }

// // // int main()
// // // {
// // //     solve10();
// // // }

// #P11 : tim xau con dai nhat ma ko co ki tu lap lai 

// // void solve11() {
// //     string s; cin>>s;
// //     int ds[256]= {0};
// //     int max_len = 0;
// //     int l=0,start;
// //     for (int r=0;r<s.size();r++) {
// //         ds[s[r]]++;
// //         // gap ki tu trung xoa di cho het trung 
// //         while(ds[s[r]]==2) {
// //             ds[s[l]]--;
// //             l++;
// //         }
// //         if(r-l+1>max_len) {
// //             max_len = r-l+1;
// //             start = l;
// //         }
// //     }
// //     for (int i=start;i<start+max_len;i++) cout <<s[i];
// // }
// // // dabacdadbbdd
// // // 4

// // // int main() {
// // //     solve11();
// // // }


// #12: tim tong con lien tiep nho nhat >= k 
// // void solve12() {
// //     int n,k; cin>>n>>k; int a[n];
// //     for (auto &it:a) cin>>it;
// //     int sum = 0, min_len = INT_MAX;
// //     int l=0,start;
// //     for (int r=0;r<n;r++) {
// //         sum +=a[r];
// //         if(sum>k) {
// //             while(sum-a[l]>k) {
// //                 sum-=a[l];
// //                 l++;
// //             }
// //         if(r-l+1<min_len) {
// //             min_len = r-l+1;
// //             start = l;
// //         }
// //         }
// //     }
// //     for (int i=start;i<start+min_len;i++) cout <<a[i];
// // }
// // // int main() {
// // //     solve12();
// // // }

// #P13: Neu tim dc 2 phan tu a[i]==a[j] (i!=j) && abs(i-j)<=k => cout yes else cout no 
// // void solve13() {
// //     int n,k; cin>>n>>k; int a[n];
// //     for (auto &it:a) cin>>it;
// //     int l=0,r=k;
// //     while(r<n) {
// //         if(a[r]==a[l]) {
// //             cout << "YES";
// //             return;
// //         }
// //         l++;r++;
// //     }
// //     cout <<"NO";
// // } 

// // // int main() {
// // //     solve13();
// // // }

// #P14: dem so dich chuyen so 1 de tao ra k day so 1 lien tiep 
// // int check(int l, int r,int a[]) {
// //     int cnt=0;
// //     for (int i=l;i<=r;i++) {
// //         if(a[i]) ++cnt; 
// //     }
// //     return cnt;
// // }
// // void sovle14() {
// //     int n,k; cin>>n>>k; int a[n];
// //     for (auto &it:a) cin>>it;
// //     int cnt1=0;
// //     for (int i=0;i<n;i++) {
// //         if(a[i]) ++cnt1;
// //     }
// //     int l=0,cnt=0,max_one=0;
// //     for (int r=k-1;r<n;r++,l++) {
// //         if(check(l,r,a)>max_one) max_one = check(l,r,a);
// //     }
// //     cout <<k-max_one;
// // }

// // // int main() {
// // //     sovle14();
// // // }

// #P15: tim tat trung vi day con k phan tu 
// // void solve15() {
// //     int n,k; cin>>n>>k; int a[n];
// //     for (auto &it:a) cin>>it;
// //     multiset<int> ms;
// //     // cau hinh k dau tien 
// //     for (int i=0;i<k;i++) ms.insert(a[i]);
// //     // median 
// //     auto it = next(ms.begin(),(k-1)/2);
// //         cout <<*it;
// //     for (int i=k;i<n;i++) {
// //         // chen them ki tu vao cua so 
// //         ms.insert(a[i]);
// //         // phan tu dau cua so (a[i])
// //         if(a[i]<*it) it--;
// //         // phan tu cuoi cua so  (a[i-k])
// //         if(a[i-k]<=*it) it++;
// //         // xoa phan tu o cuoi sliding 
// //         ms.erase(ms.lower_bound(a[i-k]));   
// //         cout <<*it;
// //     }
// // }
// // // 8 2
// // // 7 6 6 2 9 6 2 7
// // // 6622622
// // int main() {
// //     string s; cin>>s;
// //     reverse(s.begin(),s.end());
// //     while(s[0]=='0') s.erase(s[0]);
// //     cout <<s;
// // }

// #include <bits/stdc++.h>
// using namespace std;

//  // sap xep 2 chuoi -> 1 chuoi
//  void bai1(int m,int n) 
//  {
//    int a[m],b[n],i=0,j=0;
//    for (auto &x:a) cin>>x;
//    for (auto &x:b) cin>>x;
//     while (i<m && j<n) 
//     {
//         if(a[i]<b[j]){ cout <<a[i]<<" ";i++;}
//         else{ cout <<b[j]<<" ";j++; }
//     }
//     while (i<m){ cout <<a[i]<<" ";i++;}
//     while(j<n) {cout <<b[j]<<" ";j++;}
//   }
//   // NUmber of Smaller
//   void bai2() 
//   {
//     int m,n ;cout <<"Nhap chi so :  ";cin>>m>>n;
//     int a[m],b[n];
//     for (auto &x:a) cin>>x;
//     for (auto &x:b) cin>>x;
//     int i=0,j=0;
//     while(i<m && j<n) 
//     {
//       if(a[i]<b[j]) ++i;
//       else 
//       {
//         cout <<i<<" "; // in ra chi so co phan tu lon hon -> so luong phan tu nho hon 
//         j++; // duyet toi phan tu tiep theo
//       }
//       // da ket thuc mot mang a[m] -> tat ca cac phan tu con lai se co m so nho hon no (m: so luong phan tu mang ket thuc)
//     }  
//       while (j<n) {cout <<m<<" ";j++;}
//   }
//   // Number Of Equal
//   void bai3() 
//   {
//     int m,n;cout <<"nhap index: ";cin>>m>>n;
//     int a[m],b[n];
//     for (auto &x:a) cin>>x;
//     for (auto&x:b) cin>>x;
//     int j=0,i=0,ans=0;
//     while(i<m && j<n) 
//     {
//       if(a[i]<b[j]) { ++i;continue;}
//       else if(a[i]>b[j]) {j++;continue;}
//       int dem1=0,dem2=0;
//       while(i<m && a[i]==b[j]) {dem1++;++i;}
//       int tmp=a[i-1];// quay lai phan tu trc do de dem mang duoi 3 3 4 -> a[i-1]=3
//       while(j<n && tmp==b[j]) {++dem2;j++;}
//       ans+=dem1*dem2; // tinh quy tac nhan vd mang 1 : 3 3 3 ; mang 2 : 3 3 -> co tat ca 2*3 cap 3-3
//     } cout <<ans;
//   }
//   //  in ra chuoi con dai nhat co tong < k cho truoc
//   void bai4() 
//   {
//     int n,k;cout <<"Nhap n vs k: ";cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;
//     int s=0,l=0,ans=0;
//     for (int r=0;r<n;r++) 
//     {
//         s+=a[r];
//         while(s>k) 
//         {
//           s-=a[l];l++;
//         }
//         ans= max(ans,r-l+1);
//     } cout <<ans; 
//   }
//   // in ra chuoi ngan nhat
//    void bai5() 
//   {
//     int n,k;cout <<"Nhap n vs k: ";cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;
//     int s=0,l=0,ans=1e9;
//     for (int r=0;r<n;r++) 
//     {
//         s+=a[r];
//         while(s>=k) 
//         {
//           ans=min(ans,r-l+1);
//           s-=a[l];l++;
//         }
//         ans= max(ans,r-l+1);
//     } 
//     if(ans==1e9) cout <<-1;
//     else cout <<ans; 
//   }
//   int main() 
//   {
//    bai3();
//   }