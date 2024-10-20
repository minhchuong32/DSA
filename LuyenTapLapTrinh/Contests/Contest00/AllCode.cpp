#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// baiA 
// void check(ll i,ll j,ll k,int &d) {
//     ll m = (i+j)/2;
//     ll n = (j-i)/2;
//     if(m*m-n*n==k) {cout <<m<<' '<<n;d=1;}
// }
// int main() {
//     ll k ; cin>>k;int d=0;
//     for (int i=1;i<=sqrt(k);i++) {
//         ll j = k/i;
//         if(i*j==k){
//             check(i,j,k,d);
//             if(d==1) break; 
//             }
        
//         }
//         if(d==0) cout <<-1; 
// }


// bai B
// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 10000
// using ll = long long;

// bool check(string a, string b){
//     if(a.size()==b.size()) return a<b;
//     return a.size()<b.size();
// }

// int main() {
//     string s[MAX];
//     ll n; cin>>n;
//     for (int i=0;i<n;i++) {
//         cin>>s[i];
//     }
//     sort(s,s+n,check);
//     for (int i=0;i<n;i++) cout <<s[i]<<endl;
//     return 0;
// }

// bai C
// #include <bits/stdc++.h>
// #define MAX 100000
// using namespace std;
// using ll = long long;

// int main() {
//     ll n, k;
//     cin >> n >> k;
//     ll a[MAX];
//     for (int i = 0; i < n; i++) cin >> a[i];

//     ll l = 0, r = 0, s = 0, cnt = 0;
//     while (r < n) {
//         s += a[r];
//         while (s > k) {
//             s -= a[l];
//             l++;
//         }
//         cnt += (r - l + 1);
//         r++;
//     }
//     cout << cnt << endl;
//     return 0;
// }


// bai D
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int themKyTuDeDoiXung(int n, string s) {
//     // Tạo bảng lưu kết quả
//     vector<vector<int>> dp(n, vector<int>(n, 0));

//     // Xử lý trường hợp cơ bản: chuỗi có độ dài 1
//     for (int i = 0; i < n; i++) {
//         dp[i][i] = 0;
//     }

//     // Duyệt và tính toán cho các đoạn từ 2 đến n
//     for (int len = 2; len <= n; len++) {
//         for (int i = 0; i <= n - len; i++) {
//             int j = i + len - 1;
//             if (s[i] == s[j]) {
//                 dp[i][j] = dp[i + 1][j - 1];
//             } else {
//                 dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
//             }
//         }
//     }
//     for (int i=0;i<=n;i++) {
//         for (int j=0;j<=n;j++) cout <<dp[i][j]<<" ";
//         cout <<endl;
//     }

//     // Kết quả nằm ở góc trên bên phải của bảng
//     return dp[0][n - 1];
// }

// int main() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     int result = themKyTuDeDoiXung(n, s);
//     cout << result << endl;

//     return 0;
// }

// bai E 
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// ll dp[10005][10005];
// ll a[10005][10005];
// ll n;

// void nhap() {
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=i;j++) cin>>a[i][j];
//     }
// }
// void solve() { 
//      dp[1][1] = a[1][1];
//      ll max_value = INT_MIN;
//     for(int i=2;i<=n;i++) {
//         for (int j=1;j<=i;j++) {
//             dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]) + a[i][j];
//             max_value = max(max_value,dp[i][j]);
//         }
//      }
//      cout <<max_value<<endl;
// }

// int main() {
//     int t; cin>>t;
//     while(t--) {
//     //     for (int i = 1; i <= n; i++) 
//     // memset(a[i], 0, n * sizeof(ll));
//         nhap();
//         solve();
//     }
// }

// 2
// 3
// 1
// 2 1
// 1 2 3
// 4
// 1
// 1 2
// 4 1 2
// 2 3 1 1


// bai F
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     ll n, s;
//     cin >> n >> s;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];
//     ll ans=0;
//     map<int,int> mp;
//     for (int l=0,r=0;r<n;r++) {
//         mp[a[r]]++;
//         while(mp.size()>s) {
//             // 6642 -> van dam bao 3 ki tu rieng biet nen khong xoa so 6  
//             // 6421 xoa so 6 do tan xuat = 1 
//             mp[a[l]]--;
//             if(mp[a[l]]==0) mp.erase(a[l]);
//             l++;
//         }
//         ans+=r-l+1;
//     }
//     cout <<ans;
//     return 0;
// }


bai G 
// #include <bits/stdc++.h>
// #define MAX 1000
// using namespace std;
// using ll = long long;
// ll a[MAX][MAX];
// ll n;

// int Count_Divisor(ll n) {
//     ll cnt=0;
//     for (int i=1;i<=sqrt(n);i++) {
//         if(n%i==0) {
//             if(n/i == i) {
//                 ++cnt;
//             }
//             else cnt+=2;
//         }
//     }
//     return cnt;
// }

// void input(ll a[][MAX],ll &n) {
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) cin>>a[i][j];
//     }
// }

// void output(ll a[][MAX],ll &n) {
//     for (int i=2;i<=n-1;i++) {
//         for (int j=2;j<=n-1;j++) cout<<a[i][j]<<' ';
//         cout <<endl;
//     }
// }

// void Create() {
//     int i_idx = 0, j_idx=0;
//     ll max = -1e9;
//     int dx[8]={-1,-1,-1,0,1,1,1,0};
//     int dy[8]={-1,0,1,1,1,0,-1,-1};
//     for (int i=2;i<=n-1;i++) {
//         for (int j=2;j<=n-1;j++) {
//             int Mul = 1;
//             for (int k=0;k<8;k++) {
//                 int imoi = i + dx[k];
//                 int jmoi = j + dy[k];
//                 Mul*=(a[imoi][jmoi]);
//             }
//             if(Count_Divisor(Mul)>max) {
//                 i_idx = i;
//                 j_idx = j;
//                 max = Count_Divisor(Mul);
//             }
//         }
//     }
//     cout <<i_idx<<' '<<j_idx<<endl;
// }

// // 4
// // 1 2 3 4
// // 5 6 7 8
// // 9 10 11 12
// // 13 14 15 16
// int main() {
//     input(a,n);
//     Create();
// }

// #include <bits/stdc++.h>
// #define ll long long
// #define MAXN 10000
// #define FOR(a,b,i) for(int i = a; i<=b;i++)
// using namespace std;

// vector<vector<int>> a(100 + 1, vector<int>(100 + 1));
// vector<int> prim;

// void sieveOfEratosthenes(int n) {
//     vector<bool> prime(n + 1, true);

//     for (int p = 2; p * p <= n; p++) {
//         if (prime[p] == true) {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
//     for (int p = 2; p <= n; p++) {
//         if (prime[p])
//             prim.push_back(p);
//     }
// }
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin>>n;
//     sieveOfEratosthenes(MAXN);
//     int row = 0;
//     int col = 0;
//     int su = 0;
//     FOR(1,n,i) FOR(1,n,j) cin>>a[i][j];
//     FOR(2,n-1,i) FOR(2,n-1,j) {
//         ll count = 1;
//         unordered_map<int, int> mot;
//         FOR(-1,1,k) FOR(-1,1,l) {
//             if (k == 0 && l == 0) continue;
//             int t = a[i-k][j-l];
//             int index = 0;
//             while(t > 1){
//                 while(t % prim[index] == 0) {
//                     t /= prim[index];
//                     mot[prim[index]]++; 
//                 }
//             index++;
//             }
//         }
//         for (const auto& pair : mot) {
//             count*= pair.second+1;
//         }
//         if (su < count){
//             su = count;
//             row = i;
//             col = j;
//         }
//         else if (su == count && col > j && row >= i){
//             row = i;
//             col = j;
//         }
//     }
//     cout<<row<<" "<<col<<endl;
//     return 0;
// }


// bai H 
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
// // vector<vector<data_type>> name(row,vector<data_type>(col,all_value));
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
//                 if (clp(dp[i - 1][j], dp[i][j - 1]))
//                 // lay xau chung dai hon(hoac thu tu tu dien lon hon == so lon hon ) gan cho xau chung hien tai 
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
//     // FOR(1,s1.size()-1,i) 
//     // FOR(1,s2.size()-1,j) cout <<dp[i][j]<<' ';
//     // cout <<endl; 

//     return 0;
// }


// bai I
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// string cong(string a,string b){
// 	int z = 0,na = a.length(),nb = b.length();
// 	int h = max(na,nb);
//     reverse(a.begin(),a.end());
// 	reverse(b.begin(),b.end());
// 	string kq = "";
// 	int i = 0;
// 	while(i<h){
// 		int x = (i<a.length()) ? a[i]-'0' : 0;
// 		int y = (i<b.length()) ? b[i]-'0' : 0;
// 		int m = x+y+z;
// 		kq += m%10 + '0';
// 		z = m/10;
// 		i++;
// 	}
// 	if(z!=0) kq+= z+'0';
// 	reverse(kq.begin(),kq.end());
// 	return kq;
// }
// int main() {
//     int n,k;
//     cin >> n >> k;
//     vector<vector<string>> c(101,vector<string>(101,"1"));
//     for(int i = 2 ; i <= n ;i ++){
//     	for(int j = 1 ; j<i ;j++){
//     		c[i][j] = cong(c[i-1][j-1],c[i-1][j]);
// 		}
// 	}
// 	cout << c[n][k];
//     return 0;
// }



// bai J 
// #include <bits/stdc++.h>
// #define ll long long
// #define MAXN (ll)(1e6)
// #define FOR(a,b,i) for(int i = a; i<=b;i++)
// using namespace std;

// // tim doan con khong giam dai nhat     

// void solve(vector<ll>& a){
//     vector<ll> f;
//     vector<ll> f1;
//     f.push_back(0);
//     f.push_back(1);
//     ll res = 1,p = 0,su1 = 0;
//     ll mid;
//     for (int i = 2; i <= a.size()-1; i++) {
//         int l = 1, r = res, j = 0;
//         while (l <= r) {
//             mid = (r + l) / 2;
//             if (a[i] <= a[f[mid]]) {
//                 j = mid;
//                 l = mid + 1;
//             } else
//                 r = mid - 1;
//         }
//         if (j == res)
//             {
//             f1.clear();
//             res++;
//             f.push_back(i);
//             FOR(1,f.size()-1, i) f1.push_back(f[i]);
//            }
//         else if (a[i] >= a[f[j + 1]])
//             f[j + 1] = i;   
//     }
//     for(int i = 1; i < f1.size();i++) if (a[f1[i]] == a[f1[0]]) p++;
//     for(int i = f1[0]+1; i < a.size();i++) if (a[i] == a[f1[0]]) res++;
//     cout << res - p<< endl;
// }
// vector<ll> b,a;

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     b.push_back(0);
//     ll t;
//     bool check = true;
//     while (check) {
//         a.clear(); // Clear vector a
//         a.push_back(0);
//         ll t;
//         cin >> t;
//         b.push_back(t);

//         if (t != -1) {
//             a.push_back(t);
//             while (true) {
//                 cin >> t;
//                 b.push_back(t);
//                 if (t == -1)
//                     break;
//                 else
//                     a.push_back(t);
//             }
//         solve(a);
//         }
//         if (b[b.size() - 1] == -1 && b[b.size() - 2] == -1)
//             break;
//     }
//     return 0;
// }
