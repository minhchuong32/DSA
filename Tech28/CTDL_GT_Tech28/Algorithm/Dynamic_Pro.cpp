#include <bits/stdc++.h>
#define FOR(i,a,b) for (int i=a;i<=b;i++)
using namespace std;

// // QUY HOACH DONG
// int fibo(int n);
// void LIS();
// void LIS2();
// void LCS1();
// void LPS();
// int fibo(int);
// void fibo_solve();
// void KnapSack01();
// void SSP();

// unordered_map<int, int> memo;

// int fibonacci(int n) {
//     if (n <= 1)
//         return n;
    
//     // Kiểm tra xem đã tính toán Fibonacci của n chưa
//     if (memo.find(n) != memo.end())
//         return memo[n];
    
//     // Nếu chưa tính toán, tính Fibonacci của n và lưu vào bảng nhớ
//     memo[n] = fibonacci(n-1) + fibonacci(n-2);
//     return memo[n];
// }

// int fi[1000];
// int fibo(int n)
// {
//     if (n == 0 || n == 1)
//         return n;
//     return fi[n] = fibo(n - 1) + fibo(n - 2);
// }

// int main()
// {
//     for (int i=0;i<100;i++)cout <<fibonacci(i)<<' ';
//     // KnapSack01();
//     // SSP();
// }
// // fibo co nho

// tim day con tang dai nhat O(n^2)
// L[i]: do dai day con tang dai nhat ket thuc o chi so i
// L[i] = max(L[i],L[j]+1); ban dau L[i] = 1 cho tat cac phan tu la do dai co so,
//  cap nhat len neu co mot phan tu lon hon chen vao day co
// void LIS()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (auto &x : a)
//         cin >> x;
//     // cho tat ca value vector L = 1 : length co so
//     vector<int> L(n, 1);
//     for (int i = 0; i < n; i++)
//     {
//         // duyet day con 0 -> i-1
//         for (int j = 0; j < i; j++)
//         {
//             // neu tat ca phan tu 0 -> i deu < a[i] -> day con tang -> cap nhat length
//             if (a[i] > a[j])
//             {
//                 // ss len hien tai voi len tai chi so dang xet
//                 L[i] = max(L[i], L[j] + 1);
//             }
//         }
//     }
//     // value max = day con tang dai nhat
//     cout << *max_element(L.begin(), L.end()) << endl;
// }

// day con tang dai nhat  n(logn)
// void LIS2()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         // tim phan tu dau tien lon hon a[i] va nho nhat
//         auto it = lower_bound(v.begin(), v.end(), a[i]);
//         if (it == v.end())
//         {
//             // ko tim thay
//             v.push_back(a[i]);
//         }
//         else
//         {
//             // da tim thay -> thay the gia tri do = a[i]
//             *it = a[i];
//         }
//     }
//     cout << v.size();
// }

// KNAPSACK 01
// Bai toan cai tui
// dp[i][j]: value max balo co the chua tai do vat thu i co suc chua toi da j

// void KnapSack01()
// {
//     // n : so luong do vat(i) , S: khoi luong balo co the chua (j)
//     int S, n;
//     cin >> n >> S;
//     // tao mang chua khoi luong , value cua do vat
//     // n + 1 : vi truong hop co so deu bang 0  (1->n)
//     int w[n + 1], v[n + 1];
//     // khoi tao weight vs value cua do vat
//     for (int i = 1; i <= n; i++)
//         cin >> w[i];
//     for (int i = 1; i <= n; i++)
//         cin >> v[i];
//     // tao mang value max cua balo tai do vat thu i va balo co the chua j(g) toi da
//     int dp[n + 1][S + 1];
//     // tao truong hop co so
//     memset(dp, 0, sizeof(dp));
//     // duyet tung do vat, trong moi do vat ta duyet tung trong luong ma balo co the chua toi da
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= S; j++)
//         {
//             // nếu ko mang w[i] -> value max balo = value max trc do ( chua cap nhat)
//             dp[i][j] = dp[i - 1][j];
//             if (j >= w[i])
//             {
//                 // cap nhat goi hang truoc khi mang them w[i] = max (value hien tai, value goi hang truoc do voi suc chua moi( j-w[i]) + value mang them) 
//                 dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
//             }
//         }
//     }
//     // in ra bang phuong an
//     cout << "M balo (g)   : 0 1 2 3 4 5 6 \n";
//     for (int i = 0; i <= n; i++)
//     {
//         cout << "Do vat thu " << i << " : ";
//         for (int j = 0; j <= S; j++)
//             cout << dp[i][j] << ' ';
//         cout << endl;
//     }
//     // value max ma balo co the chua
//     // cout << dp[n][S];
// }

// 4 6
// 2 1 4 3
// 3 3 4 2
// -> 8

// Tap con co tong bang S : SSP(Sum Sub Problem)
// Ox : tong s tu 0 -> s+1
// Oy : value array
// void SSP()
// {
//     int n, s;
//     cin >> n >> s;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     // memset mang dp = false;
//     // dp[s] = true -> co tap con co tong = s
//     vector<bool> dp(s + 1, false);
//     // tap con rong -> true
//     dp[0] = true;
//     for (int i = 0; i < n; i++)
//     {
//         // duyet nguoc tu tong s -> a[i] , neu tim duoc phan  value co the tao nen tong j -> dp[j] = true
//         for (int j = s; j >= a[i]; j--)
//         {
//             if (dp[j - a[i]] == true)
//                 dp[j] = true;
//         }
//     }
//     if (dp[s])
//         cout << 1;
//     else
//         cout << 0;
// }

// 8 92
// 69 16 82 170 31 24 45 112
// -> 1

// day xau con chung dai nhat F[i][j] :do dai xau max ( i ki tu xau x, j ki tu xau y)
// F[i][0]=0;F[0][i]=0;
// x[i] vs y[i] : ki tu cua 2 xau X,Y
// x[i]=y[j] => F[i][j] = F[i-1][j-1] + 1;
// x[i]!=y[j] => F[i][j] = max(F[i][j-1],F[i-1][j])
// vd :X(Ox): acbaed ; Y(Oy): abcadf -> abcd
// void LCS1()
// {
//     string s, t;
//     cin >> s >> t;
//     int n = s.size();
//     int m = t.size();
//     int F[n + 1][m + 1];
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= m; j++)
//         {
//             // dong 0 cot 0
//             if (i == 0 || j == 0)
//             {
//                 F[i][j] = 0;
//             }
//             else
//             {

//                 // ki tu giong nhau : xau chung + 1
//                 if (s[i - 1] == t[j - 1])
//                     F[i][j] = F[i - 1][j - 1] + 1;
//                 else
//                     // 2 ki tu khac nhau
//                     F[i][j] = max(F[i - 1][j], F[i][j - 1]);
//             }
//         }
//     }
//     // xau con chung dai nhat
//     cout << F[n][m];
// }

// acbaed
// abcadf
// abcd -> 4

// xau con chung dai nhat in ra xau chung 
// #include <iostream>
// #include <vector>
// #include <string>
// #define MAXN 100
// #define FOR(a, b, i) for (int i = a; i <= b; i++)

// using namespace std;

// bool clp(string a, string b)
// {
//     // Bỏ qua các ký tự '0' ở đầu chuỗi
//     while (a.size() > 1 && a[0] == '0')
//         a.erase(a.begin());
//     while (b.size() > 1 && b[0] == '0')
//         b.erase(b.begin());

//     if (a.size() != b.size())
//         return a.size() < b.size();
//     return a < b;
// }
// // vector<vector<data_type>> name(row,vector<data_type>(col,all_value)) <==> data_type name[row][col] = {all_value};
// vector<vector<string>> dp(MAXN + 1, vector<string>(MAXN + 1));
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     s1 = '0' + s1;
//     s2 = '0' + s2;
//     FOR(0, s1.size(), i)
//     dp[i][0] = "0";
//     FOR(0, s2.size(), i)
//     dp[0][i] = "0";
//     FOR(1, s1.length() - 1, i)
//     {
//         FOR(1, s2.length() - 1, j)
//         {
//             if (s1[i] == s2[j])
//             {
//                 // Neu tim dc ki tu chung thi gan them vao xau chung
//                 dp[i][j] = dp[i - 1][j - 1] + s1[i];
//             }
//             else
//             {
    // clp(a,b) : ham ss 2 xau -> return xau ngan hon (a<b)
//                 if (clp(dp[i - 1][j], dp[i][j - 1]))
//                 // lay xau chung dai hon(hoac thu tu tu dien lon hon == so lon hon ) gan cho xau chung hien tai 
//                     dp[i][j] = dp[i][j - 1];
//                 else
//                     dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }   
//     lay xau chung 
//     string s = dp[s1.size() - 1][s2.size() - 1];
//     if (s.size() == 1)
//     {
//         cout << -1;
//         return 0;
//     }
//     xoa ki tu 0 o dau xau chung 
//     while (s.size() > 1 && s[0] == '0')
//         s.erase(s.begin());
//     cout << s<<endl;
//     // FOR(1,s1.size()-1,i) 
//     // FOR(1,s2.size()-1,j) cout <<dp[i][j]<<' ';
//     // cout <<endl; 

//     return 0;
// }

// xau con doi xung dai nhat :Longest Palindrome Substring
// F[i][j] : xau con bat dau o chi so i va ket thuc o chi so j  , value = length max xau
// idea : mot xau doi xung neu xau con o giua dx va 2 ki tu dau va cuoi giong nhau 
// void LPS()
// {
//     string s;
//     cin >> s;
//     s = '0' + s;
//     int n = s.size();
//     int F[n + 1][n + 1];
//     memset(F, false, sizeof(F));
//     int ans = 1;
//     // len = 1 -> xau con dx
//     for (int i = 1; i <= n; i++)
//         F[i][i] = true;
//     for (int len = 2; len <= n; len++)
//     {
//         // loop len in s (so lan dich chuyen len tren chuoi)
//         for (int i = 1; i <= n - len + 1; i++)
//         {
//             // idx last of char sub_str
//             int j = i + len - 1;
//             // ki tu dau vs cuoi giong nhau -> xau con dx
//             if (len == 2)
//                 F[i][j] = (s[i] == s[j]);
//             else
//             {
//                 // ki tu dau vs cuoi giong nhau , xau con o giua da dx -> xau con dx
//                 F[i][j] = ((s[i] == s[j]) && F[i + 1][j - 1]);
//             }
//             // cap nhat ki luc
//             if (F[i][j])
//             {
//                 ans = max(ans, len);
//             }
//         }
//     }
//     cout << ans;
// }


// abbcaac
// -> 4

// Thuat toan nguoi du lich
// c[i][j] : chi phi tu tp i->j = c[i][j]
// X[i] : i la luot di , x[i] la tp 
// X[1] : 3 -> tp thu nhat di qua la tp 3
// duyet(j) tung tp neu tp chua visited -> X[i] = j , chi phi += c[x[i-1]][x[i]];
// di tu tp x[i-1] -> x[i] ton chi phi c[x[i-1]][x[i]];

// Pseudo code :
// try(int i) {
//  For(j) {
//     if(!visited[j]) x[i] = j;
//     tong_chi_phi += c[x[i-1]][x[i]];
//     // chi phi di tu ::tp truoc do  x[i-1]-> tp hien tai x[i]
//     if(tp hien tai == sl tp can phai di) {
//         cap nhat ki luc chi phi : min_cost = min(min_cost,tong_chi_phi);
//     }
//     else {
//         // di tp tiep theo
//         try(i+1);
//     }
//     da di qu tat ca n tp -> reset dia diem da danh dau , tong_chi_phi
//     visited[j]=0;
//     tong_chi_phi -= c[x[i-1]][x[i]];
//   }
// }

// int c[100][100];
// int X[100];
// bool visited[100];
// int cost = 0;
// int min_cost = INT_MAX;
// int n;

// void DuLich(int i) {
// duyet duong di den tat ca tp
//     for (int j=1;j<=n;j++) {
//         if(!visited[j]) {
//             visited[j]=true;
//             X[i] = j;
//             // chi phi di tu tp trc do -> tp hien tai
//             cost += c[X[i-1]][X[i]];
//             // da di qua n tp
//             if(i==n)
//             // cong them chi phi di ve tp ban dau
//                { min_cost = min(min_cost,cost + c[X[n]][1]);}
//             else
//                { DuLich(i+1);}

//             // reset (backtracking)
//             visited[j] = false;
//             cost -= c[X[i-1]][X[i]];

//         }
//     }
// }

// void Traveler_algorithm() {
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++) cin>>c[i][j];
//     }
//     memset(visited,false,sizeof(visited));
//     X[1]=1; visited[1]=true;
//     DuLich(2);
//     cout <<min_cost;
// }
// 4
// 0 85 26 81
// 85 0 77 97
// 26 77 0 26
// 81 97 26 0
// 234

// Traverler Alogrithm Upgrade
// tim cost_min giua 2 tp bat ki (min matrix)
// tao tong chi phi min la co so : (cost + (n-i+1)) * cost_min => chi phi co so ( Neu lon hon thi goi de quy)
// => muc dich de giam so lan goi de quy

// int cmin = INT_MAX;
// void nhap()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cin >> c[i][j];
//             if (c[i][j] != 0)
//             {
//                 cmin = min(cmin, c[i][j]);
//             }
//         }
//     }
//     memset(visited, 0, sizeof(visited));
// }

// void Try(int i)
// {
//     for (int j = 1; j <= n; j++)
//     {
//         if (!visited[j])
//         {
//             X[i] = j;
//             visited[j] = true;
//             cost += c[X[i - 1]][X[i]];
//             if (i == n)
//             {
//                 min_cost = min(min_cost, cost + c[X[n]][1]);
//             }
//             // n - i + 1 : tong quang duong di tu 1 -> n -> 1 (+1)
//             // neu chi phi hien tai > chi phi toi uu => con toi uu duoc -> tiep tuc ql 
//             else if (min_cost > cost + (n - i + 1) * cmin)
//             {
//                 Try(i + 1);
//             }
//             visited[j] = false;
//             cost -= c[X[i - 1]][X[i]];
//         }
//     }
// }
// int main() {
//     nhap();
//     X[1]=1; visited[1]=true;
//     Try(2);
//     cout << min_cost;
// }

// Dãy con dài nhất có tổng chia hết cho k
// cach1: code trau 
// void bai4()
// {
//     int n, k;
//     cin >> n >> k;
//     int max_len=0;
//     vector <int> a(n);
//     for (auto &it:a) cin>>it;
//     for (int len=1;len<=n;len++) {
//         for (int i=0;i<n-len+1;i++) {
//             int j=i+len-1,s=0;
//             for (int k=i;k<=j;k++) {
//                 s+=a[k];
//             }
//             if(s%k==0) max_len = max(max_len,len);
//         }
//     }
//     cout <<max_len<<endl;

// }
// cach2 :quy hoach dong 
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int n,k; cin>>n>>k;
//     // do dai lon nhat day con co tong chia het cho k :a1->ai, tong = j+k 
//     int dp[n+5][k];
//     dp[0][0]=0;
//     for (int i=1;i<=n;i++) {
//         dp[0][i]=-10005;
//         int a; cin>>a;
//         a%=k;
//         for (int j=0;j<k;j++) {
//             dp[i][j] = max(dp[i-1][j],dp[i-1][(j+k-a)%k]+1);
//         }

//     }
//     cout <<dp[n][0]<<endl;
// }
// 10 3
// 2 3 5 7 9 6 12 7 11 15
// 9


// In ra tat ca duong di tu o 1 1 -> n n
// F[i][j] : so cach di qua o i j 
// int F[100][100]; 
// char a[100][100];
// void solve1() {
//     int n; cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) cin>>a[i][j];
//     }

//     F[1][0] = 1;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
    // so cach di qua o i j = i-1 j + i j-1 
//             if(a[i][j]=='.') F[i][j] = F[i-1][j] + F[i][j-1];
//             else F[i][j] = 0;
//         }
//     }

//     cout <<F[n][n];
// }

// 4
// ....
// .*..
// ...*
// *...
// out : 3
// int main() {
//     solve1();
// }

// tim hv max toan chu so 1
// int F[100][100];
// int a[100][100];

// void solve2()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//             cin >> a[i][j];
//     }
//     int max = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || j == 1)
//             {
//                 F[i][j] = a[i][j];
//             }
//             else
//             {
//                 if (a[i][j] == 1)
//                     // F[i][j] : hcn max size F[i][j]
//                     F[i][j] = min({F[i - 1][j], F[i][j - 1], F[i - 1][j - 1]}) + 1;
//             }
//             if (F[i][j] > max)
//                 max = F[i][j];
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//             cout << F[i][j] << ' ';
//         cout << endl;
//     }
//     cout << max;
// }
// 4
// 1 1 0 0
// 1 1 1 1
// 1 1 0 1
// 1 0 1 0
// out : 2
// int main()
// {
//     solve2();
// }


// in ra tong cua tat ca tap con co the tao 
// void solve3(){
//     int n; cin>>n;
//     int a[n]; int s =0 ;
//     for (int i=0;i<n;i++) {
//         cin>>a[i];
//         s+=a[i];
//     }
//     bool F[s+1];
//     memset(F,false,sizeof(F));
//     F[0]=true;
//     for (int i=0;i<n;i++) {
//         for (int j=s;j>=1;j--) {
//             if(j>=a[i]) {
                //    if(F[j-a[i]]) F[j] = true;
                // neu mang ton tai j hoac j-a[i] thi ton tai tong = j  (j - a[i] + a[i] == j) 
//                 F[j] = F[j] || F[j-a[i]];
//             }
//         }
//     }
//     for (int i=0;i<=s;i++) {
//         if(F[i]) cout <<i<<' ';
//     }
// }
// // 3
// // 3 4 5
// // 0 3 4 5 7 8 9 12
// int main() {
//     solve3();
// }

// in ra tat ca mang chan-le : mang con co sl chan = sl le 
// F[i]: chenh lech chan le 
// vd : 
// a[i]     1 3 4 5 7 2 6 4 1 2 2
// F[i]     1 2 1 2 3 2 1 0 1 0 -1
// mp[F[i]] 0 0 1 1 0 2 2 1 3 2 0 => 12 :output
// idea: dem so cap co cung f[i] -> so luong mang con chan-le  
// void solve4() {
//     int n; cin>>n;
//     int a[n+1],F[n+1] ={0};
//     int cnt=0,t=0;
//     for (int i=1;i<=n;i++) {
//         cin>>a[i];
//     }
    // map<int,int> mp;
    // mp[0]=1;
    // for (int i=1;i<=n;i++) {
    //     if(a[i]%2==1) ++t;
    //     else --t;
    //     F[i] = t;
    //     cnt+=mp[F[i]];
    //     cout <<mp[F[i]]<<' ';
    //     mp[F[i]] ++;
    // }
    // cout <<cnt;
// }
// int main() {
//     solve4();
// }

// tinh tong mang con :
// vd: 235 : 2 + 23 + 235 + 3 + 35 + 5 = 303
// void solve5() {
//     string s; cin>>s;
//     // de duyet tu index = 1
//     int n = s.length();
//     s = "0" + s;
//     int sum = 0;
//     int F[n+1]={0};
//     for (int i=1;i<=n;i++) {
//         F[i] = F[i-1]*10 + (s[i]-'0')*i;
//         sum+=F[i];
//     cout <<sum<<' ';
//     }
// }

// int main() {
//     solve5();
// }


// tinh so luong(min) binh phuong tong cua n 
// vd : n = 100 = 10^2 || 5^2 + 5^2 + 5^2 + 5^2 -> out:1
// F[i] = a : co a tong binh phuong =  i 
// tim F[i] min 

// void solve6(){
//     int n; cin>>n;
//     int F[n+1] = {0};
//     F[1] = 1;
//     for (int i=2;i<=n;i++) {
//         F[i]=i;
//         for(int j=1;j<=sqrt(i);j++) {
//             // i = j*j + i-j*j;
//             1 == F[j*j] : chinh phuong nen chi co dung 1 bieu thuc 
//             F[i] = min(F[i],1+F[i-j*j]);
//             // i: value ; j:chi so duyet tu 1 -> can i 
//             cout << i <<" = "<<j<<" ^2 "<<" + "<<i-j*j<<endl; 
//         }
//     }
//     cout <<F[n];
// }
// // F[21] = F[20] + F[1] = 2 + 1 = 3 
// // F[20] = F[16] + F[4] = 2 (chinh phuong nen chi co 1 bieu thuc -> tong bieu thuc min)

// int main() {
//     solve6();
// }



// CONTEST 5 : QHD 

// #1 Xau con chung dai nhat 

// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// #define MAX 1000
// using namespace std;
// bool cmp(string a,string b) {
//     if(a.size()!=b.size()) return a.size()<b.size();
//     return a<b;
// }
// int res = 0;
// // vector<vector<int>> dp(MAX+1,vector<int>(MAX+1,0));
// int dp[MAX+1][MAX+1];
// void solve() {
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cout.tie(NULL);
//     cin.tie(NULL);
//     int t; cin>>t;
//     while(t--) {
//     string s1,s2;
//     cin>>s1>>s2;
//     memset(dp,0,sizeof(dp));
//     FOR(i,1,s1.size()) {
//         FOR(j,1,s2.size()) {
//             if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
//             else {
//                 dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
//             }
//             // cap nhat ki luc xau chung dai nhat 
//             res = max(res,dp[i][j]);
//         }
//     }
//     cout <<res;
//         solve();
//     }
//     return 0;
// }


// #2 Day con tang dai nhat 


// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// #define MAX 1000
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     cin>>n;int a[n];
//     FOR(i,0,n-1) cin>>a[i];
//     vector<int> l(n+1,0);
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<=i;j++) {
//             if(a[i]>a[j]) l[i] = max(l[i],l[j]+1);
//         }
//     }
//     cout <<*max_element(l.begin(),l.end());
// }

// c2 
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int n; cin>>n;
//     int a[n];
//     FOR(i,0,n-1) cin>>a[i];
//     vector<int> l;
//     for (int i=0;i<n;i++) {
//         auto it = upper_bound(l.begin(),l.end(),a[i]) ;
//         if(it==l.end()) l.push_back(a[i]);
//         else *it = a[i];
//     }
//     cout<<l.size();
// }


// #3 Day con co tong bang s 


// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// #define MAX 1000
// using namespace std;
// int main()  {
//     bool F[100];
//     int t; cin>>t; 
//     while(t--) {
//     int n, s; cin>>n>>s;
//     vector<int> v(n);
//     memset(F,false,sizeof(F));
//     F[0]=true;
//     FOR(i,0,n-1) cin>>v[i];
//     FOR(i,0,n-1) {
//         for (int j=s;j>=v[i];j--) {
    // 5-3 co thi 5 se co  
//             F[j] = F[j] || F[j-v[i]];
//         }
//     }
//     if(F[s]) cout <<"YES";
//     else cout <<"NO";
//     }
// }

// #4 Day con dai nhat co tong chia het cho k 

// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// #define MAX 1000
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int n,k; cin>>n>>k;
//     // dp[i][j]: do dai day con lon nhat tong = j + k , a1-> ai 
//     int dp[n+5][k];
//     dp[0][0]=0;
//     for (int i=1;i<=n;i++) {
//         dp[0][i] = -1e9;
//         int a; cin>>a;
//         a%=k;
//         // loop so du k 
//         for (int j=0;j<k;j++) {
//             // a chia het k -> j+k-a chia het 
//             dp[i][j]=max(dp[i-1][j],dp[i-1][(j+k-a)%k]+1);
//         }
//     }
//     cout <<dp[n][0];
// }


// #5 Cnk 

// string sum(string a,string b) {
//     while(a.size()>1 && a[0]=='0') a.erase(0,1);
//     while(b.size()>1 && b[0]=='0') b.erase(0,1);
//     int max_len = max(a.size(),b.size());
//     if(a.size()<b.size()) 
//        a.insert(0,1,'0');
//       else if(b.size()<a.size()) b.insert(0,1,'0');
//       string c=""; int res=0,nho=0;
//       reverse(a.begin(),a.end());
//       reverse(b.begin(),b.end());
//       for (int i=0;i<max_len;i++) {
//         int kq = (a[i]-'0') + (b[i]-'0') + nho;
//         if(kq>=10) {
//         nho=kq/10;
//          kq%=10;
//         }
//         c+= to_string(kq);
//       }
//       if(nho) c+=to_string(nho);
//       reverse(c.begin(),c.end());
//       return c;

// }

// int x[100], N, K;
// bool Visited[100] = {false};

// void ql(int i) {
//     for (int j=x[i-1]+1;j<=N-K+i;j++){
//         x[i] = j;
//         if(i==K) {
//             for (int m=1;m<=K;m++) cout <<x[m];
//             cout<<endl;
//         }
//         else ql(i+1);
//     }
// // }

// int main() {
//     int n,k; cin>>n>>k;
//     vector <vector<string>> dp(101,vector<string>(101,"0"));
//     for (int i=1;i<=10;i++) {
//         for (int j=0;j<=i;j++) {
//             if(i==j || j==0) dp[i][j] = "1";
//             else dp[i][j] = sum(dp[i-1][j],dp[i-1][j-1]);
//         }
//     }
//     cout <<dp[n][k]<<endl;
//     for (int i=1;i<=n;i++) {
//         for (int j=0;j<=i;j++) cout <<dp[i][j]<<' ';
//         cout <<endl;
//     }
// }


// Hàm cộng hai chuỗi số
// string sum(string a, string b) {
//     string result = "";
//     int carry = 0;
//     int i = a.length() - 1;
//     int j = b.length() - 1;

//     while (i >= 0 || j >= 0 || carry > 0) {
//         int digitA = (i >= 0) ? (a[i--] - '0') : 0;
//         int digitB = (j >= 0) ? (b[j--] - '0') : 0;
//         int sum = digitA + digitB + carry;
//         carry = sum / 10;
//         result = to_string(sum % 10) + result;
//     }

//     return result;
// }

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<vector<string>> dp(101, vector<string>(101, "0"));

//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j <= i; j++) {
//             if (i == j || j == 0)
//                 dp[i][j] = "1";
//             else
//                 dp[i][j] = sum(dp[i - 1][j], dp[i - 1][j - 1]);
//         }
//     }

//     cout << dp[n][k] << endl;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j <= i; j++)
//             cout << dp[i][j] << ' ';
//         cout << endl;
//     }
//     return 0;
// }

// #6 xau con doi xung dai nhat 

// int main() {
//     // dp[i][j]: do dai max xau con si->sj 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     string s; cin>>s;
//     s='0'+s;
//     int max_len = 1;
//     bool dp[100][100];
//     memset(dp,false,sizeof(dp));
//     for (int i=1;i<=s.size();i++){
//         dp[i][i] = true;
//     }
//     for (int len=2;len<=s.size();len++) {
//         for (int i=1;i<=s.size()-len+1;i++) {
//             int j=i+len-1;
//             if(len==2) dp[i][j] = (s[i]==s[j]);
//             else {
//                 dp[i][j] = (s[i]==s[j] && dp[i+1][j-1]);
//             }
//         if(dp[i][j]) max_len = max(max_len,len);
//         }
//     }
//     cout <<max_len<<endl;
// }
// int main() {
//     string s; cin>>s; int res=0;
//     for (int i=0;i<s.size();i++) {
//         int u=i,v=i;
//         while(u>=0 && v<s.size()) {
//             if(s[u]==s[v]) {res = max(res,v-u+1);u--;v++;}
//             else break;
//         }
//     }
//     for (int i=0;i<s.size()-1;i++) {
//         int u=i,v=i+1;
//         while(u>=0 && v<s.size()) {
//             if(s[u]==s[v]) {res = max(res,v-u+1);u--;v++;}
//             else break;
//         }
//     }
//     cout <<res;
// }

// #7 Bac thang 
// #include <bits/stdc++.h>
// using namespace std;
// const int mod = 1e9+7;
// int main() {
//     // dp[i]: so cach buoc toi bac thang thu i 
//     int n,k;
//     cin>>n>>k;
//     vector<int> dp(n+1);
//     dp[0] = 1 ;  dp[1] = 1;
//     for (int i=2;i<=n;i++) {
//         for (int j=1;j<=min(i,k);j++) {dp[i] += dp[i-j];dp[i]%=mod;}
//     }
//     cout <<dp[n];

// }

// #9 So co tong chu so bang k 
// dp[i][j]: so co i chu so co tong la j 
// #include<bits/stdc++.h>
// using namespace std;
// long long dp[101][50005];

// const long long mod = 1e9+7;

// int main() {
//     int n,k; cin>>n>>k;
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     for (int i=0;i<101;i++) dp[i][0] = 0;
//     for (int j=0;j<50005;j++) dp[0][j] = 0;
//     for (int k=1;k<=9;k++) dp[1][k] = 1;
//     for (int i=0;i<=100;i++) {
//         for (int so=0;so<=9;so++) {
//             for (int j=so;j<=50000;j++) {
//                 dp[i][j] =(dp[i][j]%mod + dp[i-1][j-so]%mod) %mod; 
//             }
//         }
//     }
//     cout <<dp[n][k];
//     return 0;
// }

// #10 Duong di nho nhat 
// di tu o (1,1) -> (M,N) : tong min 
// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// // dp[i][j] : tong min tai o i j 
// // di phai , trai, cheo 
// int main() {
//     int m,n; cin>>m>>n;
//     vector<vector<int>> v(m+1,vector<int>(n+1));
//     FOR(i,1,m) {
//         FOR(j,1,n) cin>>v[i][j];
//     }
//     vector<vector<int>>dp(m+1,vector<int>(n+1,0));
//     dp[1][1] = v[1][1];
//     FOR(i,2,m) dp[i][1] = v[i][1] + dp[i-1][1];
//     FOR(j,2,m) dp[1][j] = v[1][j] + dp[1][j-1];
//     FOR(i,2,m) {
//         FOR(j,2,n) {
//             dp[i][j] = min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]}) + v[i][j];
//         }
//     }
//     cout <<dp[m][n];
// }



// #11Catalan Num 
// #include <bits/stdc++.h>
// using namespace std;

// string mul(string a, string b) {
//     int len1 = a.size();
//     int len2 = b.size();
//     vector<int> result(len1 + len2, 0); // Sử dụng vector thay vì mảng cố định

//     for (int i = len1 - 1; i >= 0; i--) {
//         for (int j = len2 - 1; j >= 0; j--) {
//             int mul = ((a[i] - '0') * (b[j] - '0'));
//             int sum = mul + result[i + j + 1];
//             result[i + j + 1] = sum % 10;
//             result[i + j] += sum / 10;
//         }
//     }

//     string res = "";
//     for (int digit : result) {
//         if (!(res.empty() && digit == 0)) {
//             res.push_back(digit + '0');
//         }
//     }
//     while (res[0] == '0' && res.size() > 0) res.erase(0, 1);
//     if (res.empty()) return "0";
//     return res;
// }

// string add(string num1, string num2) {
//     string result;
//     int carry = 0;
//     int i = num1.length() - 1;
//     int j = num2.length() - 1;

//     while (i >= 0 || j >= 0 || carry) {
//         int digit1 = i >= 0 ? num1[i] - '0' : 0;
//         int digit2 = j >= 0 ? num2[j] - '0' : 0;

//         int sum = digit1 + digit2 + carry;
//         carry = sum / 10;
//         sum %= 10;

//         result = to_string(sum) + result;

//         i--;
//         j--;
//     }
//     while (result[0] == '0' && result.size() > 0) result.erase(0, 1);
//     return result;
// }

// int main() {
// string a,b; cin>>a>>b;
// cout <<add(a,b);

// }


// #12 num UGLY
// #include<bits/stdc++.h>
// using namespace std;

// void Ugly(int n) {
//     long long ugly[n]; // Khai báo mảng ugly ở trong hàm Ugly
//     long long i2=0,i3=0,i5=0;
//     ugly[0]=1;
//     for (int i=1;i<n;i++) {
//         ugly[i] = min(ugly[i2]*2,min(ugly[i3]*3,ugly[i5]*5));
//         if(ugly[i]==ugly[i2]*2) i2=i2+1;
//         if(ugly[i]==ugly[i3]*3) i3=i3+1;
//         if(ugly[i]==ugly[i5]*5) i5=i5+1;
//     }
//     cout << ugly[n-1]; // In ra số Ugly thứ n

// }

// int main() {
//     int n; 
//     cin >> n;
//     Ugly(n);
//     return 0;
// }

// #13 xau chung 3 xau 

// #include<bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     int dp[100][100][100];
//     int m,n,k; cin>>n>>m>>k;
//     string a,b,c; cin>>a>>b>>c;
//     memset(dp,0,sizeof(dp));
//     FOR(i,1,m){
//         FOR(j,1,n) {
//             FOR(q,1,k) {
//                 if(a[i-1]==b[j-1 && a[i-1] == c[k-1]]) dp[i][j] = dp[i-1][j-1][k-1] +1;
//                 else dp[i][j] = max(dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]);
//             }
//         }
//     }
//     cout <<dp[m][n][k];
// }

// #12 Pnk 
// for i=n-k+1 -> n : res*=i ;
// #14 Xau con lap lai dai nhat 
// tuong tu xau chung 2 xau x y : them dk i!= j
// if(s[i-1]==s[j-1] && i!=j) dp[i][j] = dp[i-1][j-1] +1;
// else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);

// #16 Tong lon nhat cua day con tang dan 
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,res=0; cin>>n;
//     vector<int> v(n+1);
//     for (int i=1;i<=n;i++) cin>>v[i];
//     vector<int>dp=v;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=i;j++) {
//             if(v[i]>v[j]) {
//                 dp[i] = max(dp[i],dp[j] + v[i]);
//             }
//         }
//             res = max(res,dp[i]);
//     }
// cout <<res;
// }


// #Day Bitonic : tinh tong lon nhat day con tang va day con giam 
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;cin>>n;
//     vector<int> v(n+1);
//     for (int i=1;i<=n;i++) cin>>v[i];
//     vector<int> dp1 = v ,dp2 = v;
//     for (int i=1;i<n;i++) {
//         for (int j=1;j<i;j++){
//             if(v[j]<v[i]) {
//                 dp1[i] = max(dp1[i] ,dp1[j] + v[i]);
//             }
//         }
//     }
//     // tim day tang tu n-1 -> 0 
//     for (int i=n-1;i>=0;i--) {
//         for (int j=n;j>i;j--) {
//             if(v[j]<v[i]) {
//                 dp2[i] = max(dp2[i],dp2[j]+v[i]);
//             }
//         }
//     }
//     int res=0;
//     for (int i=1;i<=n;i++) {
//         res = max(res,dp1[i]+dp2[i]-v[i]);
//     }
// cout <<res;
// }

// #18 Cap so 
// sap xep tang dan theo tung cap tao ham cmp sort theo thoi gian bat dau giam dan 
// #include<bits/stdc++.h>
// using namespace std;

// struct dta{
//     int x,y;
// };

// bool cmp(dta a,dta b) {
//     return a.x <b.x;
// } 

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n;
//         dta a[n+5];
//         int dp[n+5];
//         for (int i=1;i<=n;i++){
//             cin>>a[i].x>>a[i].y;
//             dp[i]=1;
//         }
//         sort(a+1,a+n+1,cmp);
//         for (int i=1;i<=n;i++) {
//             for (int j=1;j<i;j++) {
//                 if(a[i].x<a[j].y) dp[i] = max(dp[i],dp[j]+1);
//             }
//         }
//         cout <<dp[n];
        
//     }
// }

// #19: Ki tu giong nhau 
// dp[i] : tg min de co duoc xau s co n ki tu
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int insert,remove,copy,n; cin>>insert>>remove>>copy>>n;
//     int dp[n+5] = {0};
//     dp[0]=0;
//     dp[1]=insert;
//     for (int i=2;i<=n;i++) {
//         if(i%2!=0) {
//             dp[i] = min(dp[i-1]+insert,dp[i/2]+copy+remove);
//         }
//         else {
//             dp[i] = min(dp[i-1]+insert,dp[i/2]+copy);
//         }
//     }
//     cout <<dp[n];
// }

// #20 Tong cac xau con 
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s; cin>>s;
//     int n = s.length();
//     int dp[n+1];
//     memset(dp,0,sizeof(dp));
//     int sum=0;
//     for (int i=1;i<=n;i++) {
//         dp[i] = dp[i-1]*10 + (s[i-1]-'0')*i;
//         sum+=dp[i];
//     }
//     cout <<sum;
// }

// #21: so cach lay cac phan tu trong mang a de co tong bang k (co the lap lai )
// #include<iostream>
// using namespace std;
// const int mod = 1e9+7;
// int main() {
//     iso_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n,k; cin>>n>>k;
//     vector<int> v(n+1);
//     for (int i=1;i<=n;i++) cin>>v[i];
//     vector<int> dp(n+5,0);
//     // dp[i]: so cach tao tong bang i 
//     dp[0]=1;
//     for (int i=1;i<=k;i++) {
//         // dua tung phan tu k vao tong i 
//         for (int j=1;j<=n;j++) {
//             // cap nhat so cach 
//             if(i>a[j]) dp[i] = (dp[i]+dp[i-a[j]])%mod;
//         }
//     }
//     cout <<dp[k];

// }

// #22 : tong lon nhat day con khong ke nhau 
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     // dp[i] : tong lon nhat tai phan tu thu i 
//     int n; cin>>n; 
//     vector<int> v(n+1);
//     for (int i=1;i<=n;i++) cin>>v[i];
//     vector<int> dp(n+1,0);
//     dp[1] = v[1];
//     // ko lay v[2] + v[1] : khong dc lien tiep nhau -> lay max 1 trong 2 
//     dp[2] = max(v[2],v[1]);
//     for (int i=3;i<=n;i++) {
//         // neu lay a[i] -> + a[i] vao dp va cap nhat them dp[i-2](tong lon nhat tai i-2)
//         // neu khong lay a[i] ta se cap nhat gia tri truoc do 
//         dp[i] = max(dp[i-2] + v[i],dp[i-1]);
//     }
//     cout <<dp[n];

// }

// #23 Tim so buoc it nhat de chen phan tu ai -> tao mang tang dan 
// -> nhu thuat toan tim day con tang dai nhat (a[i]>=a[j]) ; output: n-res(res: do dai day con tang dai nhat )
// For(i,1,n) For(j,1,i-1) if(a[i]>=a[j]) dp[i] = max(dp[i],dp[j]+1);

// #24 Di chuyen ve goc toa do 
// #include<bits/stdc++.h>
// #define MAX 1000
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     int n,m; cin>>n>>m;
//     int F[30][30]={0};
//     // F[i][j]: tong so cach ve o (0,0) khi dang dung tai o (i,j)
//     // neu dung tai o 1,i hoac j,1 -> de cho 1 cach de ve o (0,0) 
//     FOR(i,0,25) F[i][0] = 1; 
//     FOR(i,0,25) F[0][i] = 1; 
//     F[0][0]=0;
//     FOR(i,0,25) {
//         FOR(j,0,25) {
//             if(i==0 || j==0) continue;
//             F[i][j] = F[i-1][j]+F[i][j-1];
//         }
//     }
//     cout<<F[m][n];
// }


// #25 COn ech (nhay 1 2 3 buoc)
// dp[i] : so cach de con ech buoc len bac thu i 
// dp[1]=1,dp[2]=2,dp[3]=4;
// FOR(i,4,n) dp[i] =dp[i-1]+dp[i-2]+dp[i-3]

// #26 Xem phim 
// #include<bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int s,n; cin>>s>>n;
//     vector<int> w(n+1);
//     FOR(i,1,n) cin>>w[i];
//     vector<vector<int>> dp(n+1,vector<int>(s+1,0));
//     FOR(i,1,n) {
//         FOR(j,1,s) {
//             if(j>=w[i]) {
//                 dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]] +w[i]);
//             }
//             else dp[i][j] = dp[i-1][j];
//         }
//     }
//     cout <<dp[n][s];
// }

// #27 cai tui
// #include<bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int V,n; cin>>n>>V;
//     vector<int> w(n+1),v(n+1);
//     FOR(i,1,n) cin>>w[i];
//     FOR(i,1,n) cin>>v[i];
//     vector<vector<int>> dp(n+1,vector<int>(V+1,0));
//     FOR(i,1,n) {
//         FOR(j,1,V) {
//             if(j>=w[i]) {
//                 dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]] +v[i]);
//             }
//             else dp[i][j] = dp[i-1][j];
//         }
//     }
//     cout <<dp[n][V];
// }
// #28 Bien doi xau
// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     string s1,s2; cin>>s1>>s2;
//     int m = s1.size();
//     int n = s2.size();
//     vector<vector<int>> dp(m+2,vector<int>(n+2,0));
//     // dp[i][j]: so cach bien doi it nhat tinh den thoi diem xet i ki tu xay s1, j ki tu xau s2 
//     FOR(i,0,m){
//         FOR(j,0,n){
//             if(i==0 || j==0) dp[i][j] = i+j;
//             else if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
//             else {
//                 dp[i][j]=min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]}) + 1 ;
//             }
//         }
//     }
//     cout <<dp[m][n];  
// }

// #29 Giai ma 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin>>t;
//     while(t--) {
//         string s;cin>>s;
//         if(s[0]=='0') {cout<<0; continue;}
//         int n = s.size();
//         vector<int> dp(n+1);
//         dp[0]=1;
//         dp[1]=1;
//         for (int i=2;i<=n;i++) {
//             dp[i]=0;
//             if(s[i-1]>'0') {
//                 dp[i] = dp[i-1]
//                 if(s[i-2] =='1' || s[i-2] =='2' || s[i-1] =='7') dp[i] ==dp[i-2];
//             }
//             }
//             cout <<dp[n];
//     }
// }

// #30 Tong binh phuong 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     vector<int> f(n+1);
//     // f[i] = a : co a tong binh phuong tao ne tong bang i 
//     // timg f[i] min 
//     // vd 5 = 1^2 + 1^2 +.. : 5 lan
//     for (int i=0;i<=n;i++) f[i] = i;
//     for (int i=2;i<=n;i++) {
//         for (int j=1;j<=sqrt(i);j++) {
//             f[i] = min(f[i],1+f[i-j*j]);
//         }
//     }
//     cout <<f[n];
// }

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long ;
// // Maximum Path Sum : find path sum max ( cheo )
// int a[500][500];
// ll F[500][500];
// // void bai1() {
// //     int m,n; cin>>m>>n;
// //     for (int i=1;i<=m;i++) {
// //         for (int j=1;j<=n;j++) cin>>a[i][j];
// //     }
// //     for (int i=1;i<=m;i++) {
// //         for (int j=1;j<=n;j++) {
// //             F[i][j] = max({F[i-1][j],F[i][j-1],F[i-1][j-1]}) + a[i][j];
// //         }
// //     }
// //     cout << F[m][n];
// // }

// // duong di doc co tong lon nhat 
// void bai2() {
//     int n; cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) cin>>a[i][j];
//     }
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             F[i][j] = max({F[i-1][j],F[i-1][j-1],F[i-1][j+1]}) + a[i][j];
//         }
//     }
//     int max = 0;
//     for (int i=1;i<=n;i++) {
//         if(F[n][i]>max) max = F[n][i];
//     }
//     cout << max;
// }

// // di chuyen theo chieu ngang 
// void bai3() {
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) cin>>a[i][j];
//     }
//     // cho dong 0 va n+1 = min 
//     for (int i=1;i<=n;i++) {
//         F[0][i]=-1e18;
//         F[n+1][i]=-1e18;
//     }
//     for (int i=1;i<=n;i++ ){
//         F[i][1] = a[i][1];
//     }
//     for (int i=2;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             F[j][i] = max({F[j-1][i-1],F[j][i-1],F[j+1][i-1]}) + a[j][i];
//         }
//     }
//   ll ans = -1e18;
//   for (int i=1;i<=n;i++) {
//     ans = max(ans,F[i][n]);
//   }
//   cout <<ans;
// }

// // tim xau con doi xung dai nhat 
// void bai4() {
//     string s;cin>>s;
//     int n = s.size();
//     s = "@"+ s;
//     // mang danh dau la xau dx hay ko 
//     int F[n+1][n+1];
//     memset(F,false,sizeof(F));
//     int ans =1;
//     for (int i=1;i<=n;i++) F[i][i]=true;
//         // loop length 
//     for (int len=2;len<=n;len++) {
//         // loop so lan chay len trong s 
//         for (int i=1;i<=n-len+1;i++) {
//             // index of ki tu cuoi trong xau con 
//             int j = len+i-1;
//             if(len==2) F[i][j] = (s[i] == s[j]);
//             else {
//                 F[i][j] = (s[i] == s[j]) && F[i+1][j-1];
//             }
//         // cap nhat len dai nhat xau con dx 
//         if(F[i][j]) {
//             ans = max (ans,len);
//         }
//         }
//     }
//     cout <<ans;
// }


// int main() {
//     bai4();
// }


// xau chung dai nhat in ra xau chung 
// #include <iostream>
// #include <vector>
// #include <string>
// #define MAXN 100
// #define FOR(a, b, i) for (int i = a; i <= b; i++)

// using namespace std;

// bool clp(string a, string b)
// {
//     while (a.size() > 1 && a[0] == '0')
//         a.erase(a.begin());
//     while (b.size() > 1 && b[0] == '0')
//         b.erase(b.begin());

//     if (a.size() != b.size())
//         return a.size() < b.size();
//     return a < b;
// }
// int main()
// {
// vector<vector<string>> dp(MAXN + 1, vector<string>(MAXN + 1));
//     string s1, s2;
//     cin >> s1 >> s2;
//     s1 = '0' + s1;
//     s2 = '0' + s2;
//     FOR(0, s1.size(), i)
//     dp[i][0] = "0";
//     FOR(0, s2.size(), i)
//     dp[0][i] = "0";
//     FOR(1, s1.length() - 1, i)
//     {
//         FOR(1, s2.length() - 1, j)
//         {
//             if (s1[i] == s2[j])
//             {
//                 dp[i][j] = dp[i - 1][j - 1] + s1[i];
//             }
//             else
//             {
//                 if (clp(dp[i - 1][j], dp[i][j - 1]))
//                     dp[i][j] = dp[i][j - 1];
//                 else
//                     dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }   
//     string s = dp[s1.size() - 1][s2.size() - 1];
//     if (s.size() == 1)
//     {
//         cout << -1;
//         return 0;
//     }
//     while (s.size() > 1 && s[0] == '0')
//         s.erase(s.begin());
//     cout << s<<endl;
//     return 0;
// }