// #KTLT_001
// #include <bits/stdc++.h>
// #include <algorithm>

// using namespace std;
// const int N = 1e5 + 5 ;
// int a[N];
// // mua sach (mua 3 tang cuon gia nho nhat trong 3 cuon)
// bool compare(int first_num,int second_num) {
//     return first_num>second_num;
// }
// int main() {
//     int n; cin>>n;
//     for (int i=0;i<n;i++) cin>>a[i];
//     sort(a,a+n,compare);
//     long long ans = a[0];
//     for (int i=1;i<n;i++) {
//         if(i%3!=0) ans+=a[i];
//     }
//     cout <<ans;
// }

// KTLT_002
// tim so nho nhat co tong = n
// #include <iostream>
// using namespace std;

// int main() {
// 	long long n; cin>>n;
// 	if(n%9!=0) cout <<n%9;
// 	for (int i=1;i<=n/9;i++)cout <<9;
// }

// #KTLT_003
// tong con lon nhat
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     vector<int> v(n);
//     for (int i=0;i<n;i++) cin>>v[i];
//     if(*max_element(v.begin(),v.end())<=0) {
//         cout<<*max_element(v.begin(),v.end());
//         return 0;
//     }
//     int max_sum = INT_MIN,sum=0;
//     for (int i=0;i<n;i++){
//         sum+=a[i];
//         max_sum = max(sum,max_sum);
//         if(sum<0) sum = 0;
//     }
// }

// #KTLT_004 : dem so phan tu khac nhau
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() {
//     ll n; cin>>n;
//     vector<ll> v(n);
//     for (int i=0;i<n;i++) cin>>v[i];
//     sort(v.begin(),v.end());
//     int cnt=1;
//     for (int i=0;i<n-1;i++) {
//         if(v[i]!=v[i+1]) ++cnt;
//     }
//     cout <<cnt;
// }

// c2 : dung ham unique : v.erase(unique(v.begin(),v.end()),v.end());

// #KTLT_005: tim so can ho dc cho di nhieu nhat

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,s,k;cin>>n>>s>>k;
//     // k: do chenh lech size
//     vector<int> a(n);
//     // size can ho yeu cau
//     for (auto &it:a) cin>>it;
//     sort(a.begin(),a.end());
//     multiset<int>ms;
//     // size can ho
//     for (int i=0;i<s;i++) {
//         int x; cin>>x;
//         ms.insert(x);
//     }
//     int ans=0;
//     for (int i=0;i<n;i++) {
//         // multiset<int>::iterator
//         // tim can ho (s) >= size min nguoi thu i
//         auto it = ms.lower_bound(a[i]-k);
//         // can ho qua co
//         if(it==ms.end() || *it >a[i]+k) continue;
//         // xoa can ho da nhan
//         ms.erase(it);
//         ++ans;
//     }
//     cout <<ans;

// }
// 4 3 5
// 60 45 80 60
// 30 60 75

// #KTLT_006 : Có Nngười cần sang sông, và nhiệm vụcủa bạn là tìm sốlượng thuyền tối thiểu đểđưa tất cảhọsang sông.
// N: so nguoi / M : can nang toi da ma thuyen chiu duoc
// 4 10
// 7 2 3 9
// 3
// Explain:Người số2 và 3 chung một thuyền.Người số1 ởmột thuyền riêng.Người số4 ởmột thuyền riêng.
// -> dua nguoi nang nhat roi them mot nguoi nhe nhat neu duoc
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,m; cin>>n>>m;
//     multiset<int> ms;
//     for (int i=0;i<n;i++) {
//         int x;cin>>x;
//         ms.insert(x);
//     }
//     int ans=0;
//     while(ms.size()>1) {
//         ++ans;
//         // return iterator
//         int max = *ms.rbegin();
//         // erase value of iterator
//         ms.erase(ms.find(max));
//         them mot ng neu dc
//         // tim phan tu lien truoc > m-max (<=m-max)
//         multiset<int>::iterator it = ms.upper_bound(m-max);
//         if(it==ms.begin()) continue; // ko co lien truoc
//         --it;
//         ms.erase(it);
//     }
//     cout <<ans + ms.size();
//     return 0;
// }

// #KTLT_007 : ve hoa nhac
// m ve, n khach :
// Dòngđầu tiênchứa hai sốnguyênN, M: Sốlượng vé xem hoà nhạc và sốlượngkháchhàng.Dòng tiếp theo chứaNsốnguyênh1, h2,...,
//  hnlà giá củatừng vé.Dòng tiếp theo chứaMsốnguyênt1, t2,..., tmlà mức giá tốiđa cho vé màkháchhàng sẽmua.OutputĐầu ragồmMdòng.
//  Với mỗi khách hàng, in ramức giá củavé mà họmuađược. Sauđó vé có giá trịđósẽkhôngđược bán tiếp.Nếu khách hàng không thểchọnđượcvé,
//  hãy in-1.Constraints•1≤N, M≤5*104•1≤hi, ti≤109ExampleInputOutput5 35 3 7 8 54 8 338-1Explain:Khi khách hàng đầu tiên tới thì còn những vé [3, 5, 5, 7, 8]
//  -> Khách hàng sẽchọn vé có giá trị3.Khi khách hàng thứhai tới thì còn những vé [5, 5, 7, 8] -> Khách hàng sẽchọn vé có giá trị8.Khi khách hàng thứba tới thì còn nhữngvé [5, 5, 7]
//  -> Khách hàng không chọn được vé nào.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> m >> n;
//     multiset<int> s;

//     // Gia ve
//     for (int i = 0; i < m; i++) {
//         int x;
//         cin >> x;
//         s.insert(x);
//     }

//     // Khach

//     for (int i = 0; i < n; i++) {
//         int x; cin>> x;
//         auto it = s.upper_bound(x);
//         if(it==s.begin()) cout<<-1<<'\n';
//         else {
//             --it;
//             cout <<*it<<'\n';
//             s.erase(it);
//         }

// }
// }
// 5 3
// 5 3 7 8 5
// 4 8 3

// #KTLT_008: Giờcao điểmBạn được cung cấp thời gian vào và rời đi của Nkhách hàng ởmột nhà hàng.Sốlượng khách hàng nhiều nhất tại bất kỳthời điểm nào là bao nhiêu.

// #include <bits/stdc++.h>
// using namespace std;

// bool cmp(pair<int,int> &a ,pair<int,int> &b) {
//     return a.first < b.first;
// }
// int main(){
//     int n; cin>>n;
//     vector<pair<int,int>> mp;
//     for (int i=0;i<n;i++) {
//         int x,y; cin>>x>>y;
//         mp.push_back(make_pair(x,y));
//     }
//     sort(mp.begin(),mp.end(),cmp);
//     int cnt = 1;
//     int ft = mp[0].first;
//     int st = mp[0].second;
//     for (int i=1;i<n;i++) {
//         if(mp[i].first>ft && mp[i].first<st) {
//             ft = mp[i].first;
//             st = mp[i-1].second;
//             ++cnt;
//         }
//     }
//     cout <<cnt;
//     // for (auto &it:mp) cout <<it.first<<' '<<it.second;
// }

// // -> thoi diem den : +, di -, duyet map -> cong second map -> lay max
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin>>n;
//     map<int,int> mp;
//     for (int i=0;i<n;i++) {
//         int x,y; cin>>x>>y;
//         mp[x]++;
//         mp[y]--;
//     }
//     int ans=0,max_val=INT_MIN;
//     for (auto &it:mp) {
//         ans+=it.second;
//         max_val = max(ans,max_val);
//     }
//     cout <<max_val<<endl;
// }
// // 3
// 5 8
// 2 4
// 3 9
// out : 2 (co toi da 2 nguoi trong cua hang o cung thoi diem)

// #9 KTLT_09 : xem phim
// in ra bo phim nhieu hay co the xem
// #include <bits/stdc++.h>
// using namespace std;

// bool cmp(pair<int,int> &a,pair<int,int> &b) {
//     return a.second<b.second;
// }
// phai sort giam dan tg ket thuc-> toi uu duoc so bo phim xem nhieu nhat
// int main() {
//     int n; cin>>n;
//     vector<pair<int,int>> v;
//     for (int i=0;i<n;i++) {
//         int x,y; cin>>x>>y;
//         v.push_back({x,y});
//     }
//     sort(v.begin(),v.end(),cmp);
//     int ft = v[0].first, st = v[0].second,cnt=1;
//     for (int i=1;i<n;i++) {
//         if(v[i].first>=st) {
//             ++cnt;
//             ft = v[i].first;
//             st = v[i].second;
//         }
//     }
//     cout <<cnt;
// }

// #010 KTLT_010
// chia tao thanh 2 phan sao cho tong trong luong co khac biet nho nhat

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 20;
// int n,a[N];
// long long min_dis = 1e11;
// void backtracking(int pos,int first,int second){
//     if(pos==n) {
//         min_dis = min(min_dis,(long long)abs(first-second));
//     }
//     else
//     backtracking(pos+1,first+a[pos],second);
//     backtracking(pos+1,first,second+a[pos]);
// }
// int main() {
// cin>>n; for (int i=0;i<n;i++) cin>>a[i];
// backtracking(0,0,0);
// cout <<min_dis;
// }

// c2
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 20;
// int n,a[20];
// long long ans = 1e11;
// int main() {
//     cin>>n; for(int i=0;i<n;i++) cin>>a[i];
//     for (int i=0;i<(1<<n);i++){
//     long long first = 0,second =0;
//     for (int j=0;j<n;j++) {
//         if((i>>j)&1) {
//                 second+=a[j];
//         }
//         else first+=a[j];
//     ans = min(ans,abs(first-second));
//     }
//     }
//     cout <<ans;
// }

// #011 KTLT_011

// #include <bits/stdc++.h>
// using namespace std;

// const int N = 20;
// long long s;
// int a[N],n,cnt=0;

// void backtracking(int pos, long long sum,int has) {
//     if(pos==n) {
//         if(has && sum==s) ++cnt;
//         return;
//     }
//     backtracking(pos+1,sum,has);
//     backtracking(pos+1,sum+a[pos],1);
// }
// int main() {
//     cin>>n>>s;
//     for (int i=0;i<n;i++) cin>>a[i];
//     backtracking(0,0,0);
//     cout <<cnt;
//     return 0;
// }
// 5 0
// 0 -3 -2 5 8
// out : 3

// #012 KTLT_012
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int maxWeight = 0;

// // Hàm đệ quy để thử tất cả các khả năng chia tạ vào hai bên của cân
// void backtrack(vector<int>& weights, int idx, int leftWeight, int rightWeight) {
//     if (idx == weights.size()) {
//         // Nếu đã thử hết các quả tạ, kiểm tra nếu trọng lượng của hai bên cân bằng nhau
//         if (leftWeight == rightWeight) {
//             maxWeight = max(maxWeight, leftWeight + rightWeight);
//         }
//         return;
//     }

//     // Thử đặt quả tạ vào bên trái cân
//     backtrack(weights, idx + 1, leftWeight + weights[idx], rightWeight);

//     // Thử đặt quả tạ vào bên phải cân
//     backtrack(weights, idx + 1, leftWeight, rightWeight + weights[idx]);

//     // Không đặt quả tạ vào cân
//     backtrack(weights, idx + 1, leftWeight, rightWeight);
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<int> weights(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> weights[i];
//     }

//     backtrack(weights, 0, 0, 0);

//     cout << maxWeight << endl;

//     return 0;
// }

// #13 KTLT_013
// #include <iostream>

// #include <unordered_map>

// using namespace std;

// unordered_map<long long, int> memo;

// long long f(long long x) {

//     if (x == 0) return 1;

//     if (memo.find(x) != memo.end()) return memo[x];

//     long long result = f(x / 2) + f(x / 3);

//     memo[x] = result;

//     return result;

// }

// int main() {

//     long long N;

//     cin >> N;

//     cout << f(N) << endl;

//     return 0;

// }

// #014 KTLT_014
// doi xu

// backtracking
// #include <iostream>
// using namespace std;
// const int N = 101;
// long long n,s;
// long long a[N];
// int min_cnt=INT_MAX;
// void ql(int i,int bd,int sum) {
//     for (int j=bd;j>=1;j--) {
//         if(sum+a[j]==s) min_cnt = min(min_cnt,i);
//         else if(sum+a[j]<s && i<min_cnt) ql(i+1,j,sum+a[j]);
//     }
// }

// // 3 11
// // 1 5 7
// // 7 1 1 1 1
// // 5 5 1
// // 5 1 1 1 1 1 1
// // 1 1 1 1 1 1 1 1 1 1 1
// // out :
// // 3
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cin>>n>>s;
//     for (int i=1;i<=n;i++) cin>>a[i];
//     sort(a,a+n);
//     ql(1,n,0);
//     if(min_cnt==INT_MAX);
//     cout <<min_cnt;
// }

// dynamic pro
// dp[i] : so luong min dong xu dp[i] co tong la i

// #include <iostream>
// #include <vector>
// using namespace std;
// const int inf = 1e9;

// int main() {
//     int n,x; cin>>n>>x;
//     vector<int> c(n);
//     for (int i=0;i<n;i++) cin>>c[i];
//     vector<int> dp(x+1,inf);
//     dp[0]=0;
//     for (int i=1;i<=x;i++) {
//         for (auto j:c) {
//             if(i>=j) {
//                 dp[i]=min(dp[i],dp[i-j]+1);
//             }
//         }
//     }
//     if(dp[x]==inf) cout<<-1;
//     else cout <<dp[x];

// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// const int inf = 1e9;

// int main() {
//     int n, x;
//     cin >> n >> x;

//     vector<int> c(n);
//     for (int i = 0; i < n; i++) {
//         cin >> c[i];
//     }

//     sort(c.begin(), c.end()); // Sắp xếp mảng đồng xu

//     vector<int> dp(x + 1, inf);
//     dp[0] = 0;

//     for (int i = 1; i <= x; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i >= c[j]) {
//                 c1: dp[i]
//                 // c2: lấy thêm đồng c[j] + dp[i-c[j]] -> dp[i]
//                 // +1: cong them đồng xu c[j] để tông = i => ss 2 cách lấy min
//                 dp[i] = min(dp[i], dp[i - c[j]] + 1);
//             } else {
//                 break; // Sử dụng break khi giá trị i không thể đạt được bằng c[j]
//             }
//         }
//     }

//     if (dp[x] == inf) {
//         cout << -1;
//     } else {
//         cout << dp[x];
//     }

//     return 0;
// }

// #15 KTL_015
// day con tang dai nhat
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin>>n;
//     vector<int> a(n);
//     vector<int> l;
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i=0;i<n;i++) {
//             auto it = lower_bound(l.begin(),l.end(),a[i]);
//             if(it==l.end()) {
//                 l.push_back(a[i]);
//             }
//             else *it = a[i];
//     }
//     cout <<l.size();
// }

// c2
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     vector<int> v(n);
//     for (auto &it:v) cin>>it;
//     vector<int> dp(n+1,1);
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<=i;j++) {
//             if(v[j]<v[i]) {
//                 dp[i] = max(dp[i],dp[j]+1);
//             }
//         }
//     }
//     cout <<*max_element(dp.begin(),dp.end());
// }

// #17 KTLT_017
// #include <bits/stdc++.h>
// using namespace std;

// // dp[i][j] : xau chung i ki tu x ,j ki tu y
// int main() {
//     string x,y; cin>>x>>y;
//     int m = x.size();
//     int n = y.size();
//     x = '0' + x;
//     y = '0' + y;
//     vector<vector<int>>dp(m+1,vector<int>(n+1,0));
//     for (int i=1;i<=m;i++) {
//         for (int j=1;j<=n;j++) {
//             if(x[i]==y[j]) dp[i][j] = dp[i-1][j-1] +1;
//             else {
//                 dp[i][j] = max({dp[i][j],dp[i-1][j],dp[i][j-1]});
//             }
//         }
//     }
//     cout <<dp[m][n];
// }

// #18 KTLT_018
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll W,H,N;

// bool f(long long mid) {
//     ll w = mid/W;
//     ll h = mid/H;
//     ll total = w*h;
//     return total>=N;

// }
// int main() {
//     cin>>W>>H>>N;
//     ll l=0,r=1;
//     while(!f(r)) r*=2;
//     r++;
//     while(r-l>1) {
//         ll mid = (r+l)/2;
//         if(f(mid)) r = mid;
//         else l = mid;
//     }
//     cout <<r;
//     return 0;
// }

// #19 KTLT_EDPC Frog1
// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;
// // dp[i] : chi phi nho nhat den hon da thu i
// // bat dau tu hon thu 3 : co 2 cach di tu hin da i-1 va hon tu hon da i-2  + chi phi di truoc do dp[i] || dp[i-2]
// int main() {
//     int n; cin>>n;
//     vector<int> a(n);
//     FOR(i,1,n) cin>>a[i];
//     vector<int> dp(n+1,0);
//     dp[0]=a[1];
//     dp[2]=abs(a[2]-a[1]);
//     FOR(i,3,n) {
//         dp[i] = min(dp[i-1] + abs(a[i]-a[i-1]),dp[i-2] + abs(a[i]-a[i-2]));
//     }
//     cout <<dp[n];
// }

// #20 KTLT_EDPC Frog2

// them vong for de xet tat ca cac bc  nhay 1-> K
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,k;cin>>n>>k;
//     vector<int> a(n+1);
//     for (int i=1;i<=n;i++) cin>>a[i];
//     vector<int> dp(n+1,INT_MAX);
//     dp[1] = 0;
//     dp[2] = abs(a[2]-a[1]);
//     for (int i=3;i<=n;i++) {
//         // xet k bc nhay
//         for (int j=1;j<=k;j++) {
//             // i-k>1
//         if(i>j) dp[i] = min(dp[i],dp[i-j] + abs(a[i]-a[i-j]));
//         }
//     }
//     cout <<dp[n];
// }

// #21 KTLT EDPC_Vacation

// dp[i][0] :  la diem hp max neu xet ngay thu i ma Taro tham gia hd A
// dp[i][1] :  la diem hp max neu xet ngay thu i ma Taro tham gia hd B
// dp[i][2] :  la diem hp max neu xet ngay thu i ma Taro tham gia hd C

// chi so hp hien tai = max(chi so hp 2 hoat dong khac cua 2 ngay truoc do + chi so hien tai)
// dp[i][0] = max(dp[i-1][1],dp[i-1][2]) + a[i][0];
// dp[i][1] = max(dp[i-1][0],dp[i-1][2]) + a[i][1];
// dp[i][2] = max(dp[i-1][0],dp[i-1][1]) + a[i][2];

// #include <bits/stdc++.h>
// #define ll long
// using namespace std;

// int main()
// {
//     ll n;
//     cin >> n;
//     vector<vector<ll>> a(n + 1, vector<ll>(4, 0));
//     vector<vector<ll>> dp(n + 1, vector<ll>(4, 0));
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 3; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     dp[1][1] = a[1][1];
//     dp[1][2] = a[1][2];
//     dp[1][3] = a[1][3];
//     for (int i = 2; i <= n; i++)
//     {

//         dp[i][1] = max(dp[i - 1][2], dp[i - 1][3]) + a[i][1];
//         dp[i][2] = max(dp[i - 1][3], dp[i - 1][1]) + a[i][2];
//         dp[i][3] = max(dp[i - 1][1], dp[i - 1][2]) + a[i][3];
//     }
//     cout << *max_element(dp[n].begin(), dp[n].end());
// }
// 3
// 10 40 70
// 20 50 80
// 30 60 90
// 210

// #22 KTLT EDPC Knapsack1
// #include <bits/stdc++.h>
// using namespace std;

// // dp[i] : value max khi dang o suc chua j
// int main() {
//     int n,W; cin>>n>>W;
//     vector<int> w(n),v(n);
//     for (int i=0;i<n;i++) cin>>w[i]>>v[i];
//     vector<long long> dp(W+1);
//     for (int i=0;i<n;i++) {
//         for (int j=W;j>=w[i];j--) {
//             dp[j] = max(dp[j],dp[j-w[i]] + v[i]);
//     }
//     }
//     cout <<*max_element(dp.begin(),dp.end());
// }
// 3 8
// 3 30
// 4 50
// 5 60
// 90

// #23 EDPC Knapsack2 weight value max
// #include <bits/stdc++.h>
// using namespace std;
// const long long inf = 1e18;

// // dp[i][j] : value max khi dang o do vat thu i, suc chua j
// int main() {
//     int n,W; cin>>n>>W;
//     vector<int> w(n),v(n);
//     int sum=0;
//     for (int i=0;i<n;i++) {cin>>w[i]>>v[i] ; sum+=v[i];};
//     vector<long long> dp(sum+1,inf);
//     dp[0]=0;
//     for (int i=0;i<n;i++) {
//         for (int j=sum;j>=v[i];j--) {
//             dp[j] = min(dp[j],dp[j-v[i]] + w[i]);
//     }
//     }
//     for (int i=sum;;i--) {
//         if(dp[i]<=W) {
//             cout <<i;
//             return 0;
//         }
//     }
// }

// #24 EDPC_Fibonacci 1

// #include <bits/stdc++.h>
// #define MAX 1000000
// using namespace std;
// const int mod = 1e9+7;

// string sum(string a,string b) {
//     while(a.size()>1 && a[0]=='0') a.erase(0,1);
//     while(b.size()>1 && b[0]=='0') b.erase(0,1);
//     int max_len = max(a.size(),b.size());
//     while(a.size()<max_len) a.insert(0,1,'0');
//     while(b.size()<max_len) b.insert(0,1,'0');
//     string c="";int res=0;
//     reverse(a.begin(),a.end());
//     reverse(b.begin(),b.end());
//     for (int i=0;i<max_len;i++){
//         int kq = (a[i]-'0' + b[i]-'0' + res);
//         c+=((kq%10) +'0');
//         res=kq/10;
//     }
//     if(res) c+=(res+'0');
//     reverse(c.begin(),c.end());
//     return c;
// }

// string f[MAX];
// string fibo(int n) {
//     if(n==0) return f[n] = "0";
//     if(n==1) return f[n] = "1";
//     if(n>=2) {
//       return  f[n] = sum(fibo(n-1),fibo(n-2));
//     }
//     else return f[n];
// // }

// vector<int> f(MAX,0);
// int fibo(int n) {
//     if(n==0) return f[n] = 0;
//     if(n==1) return f[n] = 1;
//     if(f[n]==0 && n>=2) {
//         return f[n] = fibo(n-1) + fibo(n-2);
//     }
//     else return f[n];
// }

// int main() {
//     int n; cin>>n;
//     cout <<fibo(n)%(mod);

// #include <iostream>
// #include <string>
// #include <algorithm>

// std::string subtractLargeNumbers(std::string num1, std::string num2) {
//     // Đảm bảo num1 luôn lớn hơn hoặc bằng num2 bằng cách đảo hai số nếu cần
//     if (num1.length() < num2.length() || (num1.length() == num2.length() && num1 < num2)) {
//         std::swap(num1, num2);
//     }

//     int len1 = num1.length();
//     int len2 = num2.length();

//     std::string result = ""; // Chuỗi kết quả
//     int carry = 0; // Biến nhớ khi trừ

//     // Lặp qua từng chữ số của hai số ngược từ phải sang trái
//     for (int i = 0; i < len1; ++i) {
//         int digit1 = num1[len1 - 1 - i] - '0'; // Chuyển ký tự sang số nguyên
//         int digit2 = i < len2 ? num2[len2 - 1 - i] - '0' : 0; // Lấy chữ số tương ứng hoặc 0 nếu đã vượt qua độ dài của num2

//         int diff = digit1 - digit2 - carry; // Tính hiệu giữa hai chữ số và biến nhớ
//         if (diff < 0) {
//             diff += 10; // Nếu diff âm, thêm 10 và gán biến nhớ
//             carry = 1;
//         } else {
//             carry = 0; // Ngược lại, không cần biến nhớ
//         }

//         result += (diff + '0'); // Chuyển số nguyên thành ký tự và thêm vào chuỗi kết quả
//     }

//     // Xoá các số 0 dư thừa ở đầu chuỗi kết quả
//     while (result.length() > 1 && result.back() == '0') {
//         result.pop_back();
//     }

//     std::reverse(result.begin(), result.end()); // Đảo ngược chuỗi kết quả để có kết quả đúng

//     return result;
// }

// int main() {
//     std::string num1, num2;
//     std::cout << "Enter the first large number: ";
//     std::cin >> num1;
//     std::cout << "Enter the second large number: ";
//     std::cin >> num2;

//     std::string result = subtractLargeNumbers(num1, num2);
//     std::cout << "Result: " << result << std::endl;

//     return 0;
// }
// }

// #25 EDPC_Fibo_2
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const int mod = 1e9+7;

// struct matrix{
//     ll f[2][2];
//     matrix() {
//         // 1 1
//         // 1 0
//         f[0][0] = 1;
//         f[0][1] = 1;
//         f[1][0] = 1;
//         f[1][1] = 0;
//     }
//     // define multiple two matrix
//     friend matrix operator * (const matrix& a, const matrix& b){
//         matrix res;
//         for(int i=0;i<2;i++){
//             for(int j=0;j<2;j++){
//                 res.f[i][j] = 0;
//                 for(int q = 0;q<2;q++){
//                     res.f[i][j] += (((a.f[i][q]%mod) * (b.f[q][j]%mod))%mod);
//                     res.f[i][j] %= mod;  // Modulo operation to prevent overflow
//                 }
//                 res.f[i][j] %=mod;
//             }
//         }
//         return res;
//     }
// };
// matrix pow_ma(matrix x, ll a){
// 	if(a==1) return x;
// 	matrix res = pow_ma(x,a/2);
// 	if(a%2==0) return res*res;
// 	else return res*res*x;
// }

// int main() {
//     matrix x = matrix();
//     ll n;
//     cin >> n;
//     matrix res = pow_ma(x, n);
//     cout << res.f[0][1] << endl;
//     return 0;
// }

// #26 EDPC_Xuc xac
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// const int mod = 1e9+7;

// int x[100],cnt=0,sum=0;
// ll n;
// void ql(int i,int bd,int sum) {
//     for (int j=1;j<=6;j++) {
//         x[i] = j;
//         if(sum+j==n) {
//             ++cnt;
//         }
//         else if(sum+j<n) ql(i+1,j,sum+j);
//     }
// }
// int main() {
//     cin>>n;
//     ql(1,1,0);
//     cout <<cnt%mod;
// }

// c2: qhd
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9+7;
// int main() {
//     // dp[i] : so cach tao ra tong =i
//     int n; cin>>n;
//     vector<int> dp(n+1);
//     dp[0] = 1;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=6;j++) {
//             if(i>=j) {
//                 // chen j vao tong i
//                 // dp[i] = dp[i-1] + dp[i-2] +.... : tong so cach co the tao ra tong bang i
//                 dp[i] = dp[i] + dp[i-j];
//                 dp[i] = dp[i] % mod;
//             }
//         }
//     }
//     cout <<dp[n];
// }

// #27 EDPC_Robot

// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// // dp[i][j] : so dong xu nhat duoc khi di toi toa do i j
// int main() {
//     int n,m; cin>>n>>m;
//     vector<string> a(n);
//     for (int i=0;i<n;i++) cin>>a[i];
//     vector<vector<int>> f(n,vector<int>(m));
//     FOR(i,0,n-1) {
//         FOR(j,0,m-1) {
//             f[i][j] = (a[i][j]=='*');
//         }
//     }
//     vector<vector<int>>dp(n,vector<int>(m));
//     dp[0][0] = f[0][0];
//   hang 1
//     FOR(i,1,m-1) dp[0][i] = f[0][i] + dp[0][i-1];
// cot 1
//     FOR(i,1,n-1) dp[i][0] = f[i][0] + dp[i-1][0];
// cac vi tri con lai co 2 cach di
//     FOR(i,1,n-1){
//         FOR(j,1,m-1) dp[i][j]=max(dp[i-1][j],dp[i][j-1]) + f[i][j];
//     }

//     cout <<dp[n-1][m-1];
//     // FOR(i,1,m) {
//     FOR(j,1,n) {cout <<dp[i][j]<<' ';}
//     cout <<endl;
// }
// }
// 4 4
// *..*
// .*..
// ..*.
// *..*

// #MaximumnumberLength
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // so nguyen duong lon nhat co n chu so co tong s
//     long long n, s;
//     cin >> n >> s;
//     int cnt = 0;
//     if (s == 0 && n == 1)
//     {
//         cout << 0;
//         return 0;
//     }
//     if (9 * n < s || s == 0)
//     {
//         cout << -1;
//         return 0;
//     }
//     string num(n, '0');
//     for (int i = 0; i < n; i++)
//     {
//         if (s >= 9)
//         {
//             num[i] = '9';
//             s -= 9;
//         }
//         else
//         {
//             num[i] = s + '0';
//             s = 0;
//         }
//     }
//     cout << num;
//     return 0;
// }

// #MinsumProductArray
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n;cin>>n;
//     vector<long long>a(n),b(n);
//     for (auto &it:a) cin>>it;
//     sort(a.begin(),a.end());
//     for (auto &it:b) cin>>it;
//     sort(b.begin(),b.end());
//     long long sum=0;
//     for (int i=0;i<n;i++) {
//         sum+=(long long)(a[i]*b[n-i-1]);
//     }
//     cout <<sum;
// }
// -1 2 3
// -5 6 7

// #CONTEST_002:Bai2
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main() {
//     int n; cin>>n;
//     ll sum=0;
//     vector<ll> v(n);
//     for(auto &it:v) cin>>it;
//     sort(v.begin(),v.end());
//     for (int i=0;i<n;i++) {
//         sum+=(abs(v[i]-v[n/2]));
//     }
//     cout <<sum;
// }

// #CONTEST_001:Bai1

// #include <bits/stdc++.h>
// #define MAX 1000
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// string add(string a,string b) {
//     while(a.size()>0 && a[0]=='0') a.erase(0,1);
//     while(b.size()>0 && b[0]=='0') b.erase(0,1);
//     int n = max(a.size(),b.size());
//     while(a.size()<n) a.insert(0,1,'0');
//     while(b.size()<n) b.insert(0,1,'0');
//     string c=""; int res = 0;
//     for (int i=n-1;i>=0;i--)  {
//         int kq = (a[i]-'0' + b[i]-'0' + res)  ;
//         c+=(kq%10 +'0');
//         res = kq/10;
//     }
//     if(res) c+=(res+'0');
//     reverse(c.begin(),c.end());
//     return c;
// }

// string c[MAX][MAX];
// int main() {
//     int n,k; cin>>n>>k;
//     FOR(i,0,n) {
//         FOR(j,0,i) {
//             if(j==0 || j==i) c[i][j] = "1";
//             else {
//                 c[i][j] = add(c[i-1][j-1],c[i-1][j]);
//             }
//         }
//     }
//     cout <<c[n][k];
// }

// #include <bits/stdc++.h>
// #define FOR(i, a, b) for (int i = a; i <= b; i++)
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> a(n + 1, vector<int>(m + 1));
//     map<int, int> mp;

//     FOR(i, 1, n) {
//         int soldier_count = 0;
//         FOR(j, 1, m) {
//             cin >> a[i][j];
//             if (a[i][j] == 1) {
//                 soldier_count++;
//             }
//         }
//         mp[i] = soldier_count;
//     }

//     vector<pair<int, int>> v;
//     FOR(i, 1, n) {
//         v.push_back({mp[i], i});
//     }

//     sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
//         if (a.first == b.first) {
//             // neu cung tan xuat in thanh pho nho hon
//             return a.second < b.second;
//         }
//         return a.first < b.first;
//     });

//     int k;
//     cin >> k;

//     cout << v[k - 1].second << endl;

//     return 0;
// }

// 4 4
// 1 0 0 0
// 1 1 1 1
// 1 0 0 0
// 1 1 0 0
// 2

// #CONTEST_002 : Bài 4

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// string cmp(string a, string b) {
//     int len = min(a.size(), b.size());
//     for (int i = 0; i < len; ++i) {
//         if (a[i] != b[i]) {
//             return a.substr(0, i);
//         }
//     }
//     return a.substr(0, len);  // Trả về phần chung dài nhất nếu tất cả các ký tự khớp trong phạm vi len
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<string> v(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> v[i];
//     }

//     string res = v[0];
//     for (int i = 1; i < n; ++i) {
//         res = cmp(res, v[i]);
//     }

//     cout << res << endl;

//     return 0;
// }

// KTLT_024 : Số lượng phân đoạn với tổng lớn (Tag : 2 con trỏ)
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n,s; cin>>n>>s;
//     vector<long long> a(n);
//     for (int i=0;i<n;i++) cin>>a[i];
//     long long cnt=0,sum=0,l=0,r=0;
//     while(r<=n) {
//         sum+=a[r];
//         while(sum>=s) {cnt+=(n-r);sum-=a[l];l++;}
//         r++;
//     }
//     cout <<cnt;
// }

// KTLT_023 : Số lượng phân đoạn với tổng nhỏ (Tag : 2 con trỏ)
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;

// // cong tuan tu r -> n , neu sum>s cat bot a[l]
// int main() {
//     ll n,s; cin>>n>>s;
//     vector<ll> a(n);
//     for (int i=0;i<n;i++) cin>>a[i];
//     ll cnt=0,sum=0,l=0,r=0;
//     while(r<n) {
//         sum+=a[r];
//         while(sum>s) {
//             sum-=a[l];
//             l++;
//         }
//         cnt = r-l+1;
//         r++;
//     }
//        cout <<cnt;
// }
// 7 20
// 2 6 4 3 6 8 9
// 9

// #KTLT_022 : Phân đoạn với tổng lớn (Tag : 2 con trỏ)
// #include <bits/stdc++.h>
// #include<algorithm>
// #define ll long long
// #define FOR(i,a,b) for(int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     ll n,s ; cin>>n>>s;
//     vector<ll> v(n);
//     FOR(i,0,n-1) cin>>v[i];
//     int l=0,r=0;
//     ll sum=0;
//     int min_len=INT_MAX;
//     while(r<=n) {
//         sum+=v[r];
//         while(sum>=s) {
//             // do dai phan doan (r-l+1),
//             // dem so phan doan : n- r
//             min_len = min(min_len,r-l+1);
//             sum-=v[l];
//             l++;
//         }
//         r++;
//     }
//     cout <<min_len<<endl;
// }

// #KTLT_021 : Phân đoạn với tổng nhỏ (Tag : 2 con trỏ)

// #include<bits/stdc++.h>
// #define ll long long
// #include <algorithm>

// using namespace std;

// int main() {
//     int n,s; cin>>n>>s;
//     vector<int> a(n);
//     for (int i=0;i<n-1;i++) cin>>a[i];
//     ll sum=0;
//     int max_len = INT_MIN,l=0,r=0;
//     while(r<n) {
//         sum+=a[r];
//         while(sum>s) {
//             sum-=a[l];
//             l++;
//         }
//         max_len = max(max_len,r-l+1);
//         r++;
//     }
//     cout <<max_len<<endl;
// }

// KTLT_020 : Mê cung (Tag : BFS (Loang)
// #include <vector>
// #include <iostream>
// #include <tuple>
// #include <queue>

// using namespace std;

// const int INF = 1e9;
// const int dx[] = {-1,0,1,0};
// const int dy[] = {0,1,0,-1};

// int main() {
//     int n,m; cin>>n>>m;
//     vector<string> v(n);
//     pair<int,int> s,e;
//     for (int i=0;i<n;i++) {
//         cin>>v[i];
//         for (int j=0;j<m;j++) {
//             if(v[i][j]=='A') s={i,j};
//             else if(v[i][j]=='B') e={i,j};
//         }
//     }

//     vector <vector<int>> d(n,vector<int>(m,INF));
//     queue<pair<int,int>> q;
//     q.push(s);
//     d[s.first][s.second] = 0;
//     while(!q.empty()) {
//         int x,y;
//         tie(x,y) = q.front();
//         q.pop();
//         for(int k=0;k<4;k++) {
//             int nx = x + dx[k];
//             int ny = y + dy[k];
//         // d[nx][ny]: danh dau chua duoc tham
//         if(nx>=0 && nx<n && ny>=0 && ny<m && v[nx][ny]!='#' && d[nx][ny]==INF) {
//             d[nx][ny] = d[x][y] + 1;
//             q.push({nx,ny});
//         }
//         }
//     }
//     int result = d[e.first][e.second];
//     if(result==INF) cout <<-1;
//     else cout <<result;

// }
// 5 8
// ########
// #.A#...#
// #.##.#B#
// #......#
// ########
// 9

// KTLT_019 : Cộng trừ nhân chia (Tag : Case work)
// #include <iostream>
// #include <cmath>

// // Function to check if it's possible to obtain c using a and b
// bool is_possible(int a, int b, int c) {
//     // Check addition
//     if (a + b == c)
//         return true;
//     // Check subtraction
//     if (std::abs(a - b) == c)
//         return true;
//     // Check multiplication
//     if (a * b == c)
//         return true;
//     // Check division (avoid division by zero)
//     if (b != 0 && a % b == 0 && a / b == c)
//         return true;
//     if (a != 0 && b % a == 0 && b / a == c)
//         return true;
//     return false;
// }

// int main() {
//     int Q;
//     std::cin >> Q;

//     for (int i = 0; i < Q; ++i) {
//         int a, b, c;
//         std::cin >> a >> b >> c;

//         if (is_possible(a, b, c))
//             std::cout << "Possible" << std::endl;
//         else
//             std::cout << "Impossible" << std::endl;
//     }

//     return 0;
// }

// // BITWISE OPERATIONS
// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// // Function to perform bitwise operations
// unsigned int bitwise_operation(unsigned int a, unsigned int b, const string& command) {
//     if (command == "AND") {
//         return a & b;
//     } else if (command == "OR") {
//         return a | b;
//     } else if (command == "XOR") {
//         return a ^ b;
//     } else if (command == "NOT") {
//         return (~a) ^ (~b);
//     } else if (command == "LEFT") {
//         return a << b;
//     } else if (command == "RIGHT") {
//         return a >> b;
//     } else {
//         return 0; // Invalid command
//     }
// }

// int main() {
//     int Q;
//     cin >> Q;

//     for (int i = 0; i < Q; ++i) {
//         unsigned int a, b;
//         string command;
//         cin >> a >> command >> b;

//         cout << bitwise_operation(a, b, command) << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main ()
// {
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for (int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     // f[i]: tong phan doan lon nhat cua i phan tu ma cac phan tu khong lien ke
//     vector<long long> f(n+1);
//     f[0]=0;
//     f[1]=a[0];

//     for (int i=2;i<=n;i++)
//     {
//         // neu chon a[i-1] thi f[i] = a[i-1] + f[i-2]
//         // neu khong thi f[i] =  f[i-1];
//         f[i]=max(a[i-1] + f[i-2], f[i-1]);

//     }
//     for (int i=0;i<=n;i++) cout <<f[i]<<' ';
//     return 0;
// }

// EDPC_Dice Combinations (Tag : dp)
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// const int mod = 1e9;
// int x[100],cnt=0,n;
// ll sum=0;
// void ql(int i,int bd,int sum){
//     for (int j=1;j<=6;j++) {
//         x[i]=j;
//         if(sum+j==n) ++cnt;
//         else if(sum+j<n) ql(i+1,j,sum+j);
//     }
// }

// int main() {
//     cin>>n; ql(1,1,0);
//     cout <<cnt;
// }

// dp
// #include <bits/stdc++.h>
// const int mod = 1e9+7;
// using namespace std;

// // dp[i]: so cach tao ra tong nut bang i
// int main() {
//     int n; cin>>n;
//     vector<int> dp(n+1);
//     dp[0]=1;
//     for(int i=1;i<=n;i++) {
//         for (int j=1;j<=6;j++) {
//             if(i>=j) {
//                 // chen j vao tong i
//                 dp[i] +=dp[i-j];
//                 dp[i]%=mod;
//             }
//         }
//     }
//     for (int i=0;i<n;i++)cout <<dp[i]<<' ';
// }

// #Chương 1 - Bài 9 - TongTichDaySoPhuc

// #include <iostream>
// #include <vector>
// using namespace std;

// struct sophuc {
//     int t, a;

//     // Friend functions for input and output
//     friend istream& operator>>(istream &in, sophuc &sp);
//     friend ostream& operator<<(ostream &os, const sophuc &sp);

//     // Friend function for addition
//     friend sophuc operator+(const sophuc &x, const sophuc &y);

//     // Member function for multiplication
//     sophuc operator*(const sophuc &another) const;

//     // Member functions for input and output array of sophuc
//     static void nhap(vector<sophuc> &x);
//     static void xuat(const vector<sophuc> &x);

//     // Member functions for adding and multiplying array of sophuc
//     static sophuc add_array(const vector<sophuc> &x);
//     static sophuc mul_array(const vector<sophuc> &x);
// };

// // Input operator
// istream& operator>>(istream &in, sophuc &sp) {
//     return in >> sp.t >> sp.a;
// }

// // Output operator
// ostream& operator<<(ostream &os, const sophuc &sp) {
//     if (sp.a >= 0) {
//         return os << sp.t << "+" << sp.a << "i";
//     } else {
//         return os << sp.t << sp.a << "i";
//     }
// }

// // Addition operator
// sophuc operator+(const sophuc &x, const sophuc &y) {
//     return {x.t + y.t, x.a + y.a};
// }

// // Multiplication operator
// sophuc sophuc::operator*(const sophuc &another) const {
//     return {t * another.t - a * another.a, t * another.a + a * another.t};
// }

// // Input array of sophuc
// void sophuc::nhap(vector<sophuc> &x) {
//     for (auto &sp : x) {
//         cin >> sp;
//     }
// }

// // Output array of sophuc
// void sophuc::xuat(const vector<sophuc> &x) {
//     for (const auto &sp : x) {
//         cout << sp << endl;
//     }
// }

// // Add array of sophuc
// sophuc sophuc::add_array(const vector<sophuc> &x) {
//     sophuc result = x[0];
//     for (size_t i = 1; i < x.size(); ++i) {
//         result = result + x[i];
//     }
//     return result;
// }

// // Multiply array of sophuc
// sophuc sophuc::mul_array(const vector<sophuc> &x) {
//     sophuc result = x[0];
//     for (size_t i = 1; i < x.size(); ++i) {
//         result = result * x[i];
//     }
//     return result;
// }

// int main() {
//     int size;
//     cin >> size;
//     vector<sophuc> x(size);
//     sophuc::nhap(x);

//     sophuc add = sophuc::add_array(x);
//     sophuc mul = sophuc::mul_array(x);

//     cout << add << endl;
//     cout << mul << endl;

//     return 0;
// }

// Chương 1 - Bài 8 - 2DPoint
// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// struct Point {
//     double x, y;

//     // Friend functions for input and output
//     friend istream& operator>>(istream& in, Point &p);
//     friend ostream& operator<<(ostream& os, const Point &p);

//     // Functions to find symmetric points
//     //  hàm này không thay đổi trạng thái của đối tượng, bảo vệ dữ liệu của đối tượng,
//     //  tăng tính rõ ràng của mã và cho phép gọi hàm trên các đối tượng const.
//     Point symmetricX() const;
//     Point symmetricY() const;
//     Point symmetricOrigin() const;

//     // Static function to calculate distance between two points
//     static double distance(const Point &p1, const Point &p2);
// };

// // Input operator
// istream& operator>>(istream& in, Point &p) {
//     return in >> p.x >> p.y;
// }

// // Output operator
// ostream& operator<<(ostream& os, const Point &p) {
//     os << p.x << " " << p.y;
//     return os;
// }

// // Function to find symmetric point through Y-axis
// Point Point::symmetricX() const {
//     return {-x, y};
// }

// // Function to find symmetric point through X-axis
// Point Point::symmetricY() const {
//     return {x, -y};
// }

// // Function to find symmetric point through the origin
// Point Point::symmetricOrigin() const {
//     return {-x, -y};
// }

// // Static function to calculate distance between two points
// double Point::distance(const Point &p1, const Point &p2) {
//     return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
// }

// int main() {
//     Point p1, p2, p3;
//     cin >> p1 >> p2 >> p3;

//     Point symX = p1.symmetricX();
//     Point symY = p1.symmetricY();
//     Point symOrigin = p1.symmetricOrigin();

//     double dist = Point::distance(p2, p3);

//     cout << symX << endl;
//     cout << symY << endl;
//     cout << symOrigin << endl;
//     cout << fixed << setprecision(6) << dist << endl;

//     return 0;
// }

// Chương 1 - Bài 5 - SoPhuc
// #include <iostream>

// using namespace std;

// struct ComplexNumber {
//     float real; // Phần thực
//     float imag; // Phần ảo

//     // Định nghĩa toán tử cộng
//     ComplexNumber operator+(const ComplexNumber& other) const {
//         ComplexNumber result;
//         result.real = real + other.real;
//         result.imag = imag + other.imag;
//         return result;
//     }

//     // Định nghĩa toán tử trừ
//     ComplexNumber operator-(const ComplexNumber& other) const {
//         ComplexNumber result;
//         result.real = real - other.real;
//         result.imag = imag - other.imag;
//         return result;
//     }

//     // Định nghĩa toán tử nhân
//     ComplexNumber operator*(const ComplexNumber& other) const {
//         ComplexNumber result;
//         result.real = real * other.real - imag * other.imag;
//         result.imag = real * other.imag + imag * other.real;
//         return result;
//     }
// };

// int main() {
//     // Nhập hai số phức
//     ComplexNumber num1, num2;
//     cin >> num1.real >> num1.imag;
//     cin >> num2.real >> num2.imag;

//     // Tính tổng và in ra kết quả
//     ComplexNumber sum = num1 + num2;
//     cout << sum.real << " " << sum.imag << endl;

//     // Tính hiệu và in ra kết quả
//     ComplexNumber diff = num1 - num2;
//     cout << diff.real << " " << diff.imag << endl;

//     // Tính tích và in ra kết quả
//     ComplexNumber product = num1 * num2;
//     cout << product.real << " " << product.imag << endl;

//     return 0;
// }

// Chương 1 - Bài 6 - PhanSo
// #include <iostream>
// #include <algorithm>

// using namespace std;

// // Tìm ước chung lớn nhất của hai số
// int findGCD(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// // Struct biểu diễn phân số
// struct Fraction {
//     int numerator; // Tử số
//     int denominator; // Mẫu số

//     // Rút gọn phân số
//     void simplify() {
//         int gcd = findGCD(abs(numerator), abs(denominator));
//         numerator /= gcd;
//         denominator /= gcd;
//         // Đảm bảo dấu "-" chỉ xuất hiện ở tử số
//         if (denominator < 0) {
//             numerator *= -1;
//             denominator *= -1;
//         }
//     }

//     // Qui đồng phân số
//     void makeCommonDenominator(Fraction& other) {
//         int lcm = abs(denominator) * abs(other.denominator) / findGCD(abs(denominator), abs(other.denominator));
//         numerator *= lcm / denominator;
//         other.numerator *= lcm / other.denominator;
//         denominator = lcm;
//         other.denominator = lcm;
//     }

//     // Tính tổng của hai phân số
//     Fraction operator+(const Fraction& other) const {
//         Fraction result;
//         result.numerator = numerator * other.denominator + other.numerator * denominator;
//         result.denominator = denominator * other.denominator;
//         result.simplify();
//         return result;
//     }

//     // Tính hiệu của hai phân số
//     Fraction operator-(const Fraction& other) const {
//         Fraction result;
//         result.numerator = numerator * other.denominator - other.numerator * denominator;
//         result.denominator = denominator * other.denominator;
//         result.simplify();
//         return result;
//     }

//     // Tính tích của hai phân số
//     Fraction operator*(const Fraction& other) const {
//         Fraction result;
//         result.numerator = numerator * other.numerator;
//         result.denominator = denominator * other.denominator;
//         result.simplify();
//         return result;
//     }

//     // Tính thương của hai phân số
//     Fraction operator/(const Fraction& other) const {
//         Fraction result;
//         result.numerator = numerator * other.denominator;
//         result.denominator = denominator * other.numerator;
//         result.simplify();
//         return result;
//     }

//     // So sánh hai phân số
//     int compare(const Fraction& other) const {
//         Fraction temp = *this - other;
//         if (temp.numerator < 0) return -1;
//         else if (temp.numerator > 0) return 1;
//         else return 0;
//     }
// };

// int main() {
//     // Nhập hai phân số
//     Fraction frac1, frac2;
//     char slash;
//     cin >> frac1.numerator >> slash >> frac1.denominator;
//     cin >> frac2.numerator >> slash >> frac2.denominator;

//     // Tính tổng
//     Fraction sum = frac1 + frac2;
//     cout << sum.numerator << "/" << sum.denominator << endl;

//     // Tính hiệu
//     Fraction difference = frac1 - frac2;
//     cout << difference.numerator << "/" << difference.denominator << endl;

//     // Tính tích
//     Fraction product = frac1 * frac2;
//     cout << product.numerator << "/" << product.denominator << endl;

//     // Tính thương
//     Fraction quotient = frac1 / frac2;
//     cout << quotient.numerator << "/" << quotient.denominator << endl;

//     // Rút gọn phân số và in ra
//     frac1.simplify();
//     frac2.simplify();
//     cout << frac1.numerator << "/" << frac1.denominator << " ";
//     cout << frac2.numerator << "/" << frac2.denominator << endl;

//     // Qui đồng phân số và in ra
//     frac1.makeCommonDenominator(frac2);
//     cout << frac1.numerator << "/" << frac1.denominator << " ";
//     cout << frac2.numerator << "/" << frac2.denominator << endl;

//     // So sánh hai phân số và in ra
//     cout << frac1.compare(frac2) << endl;

//     return 0;
// }

// tung
// #include<bits/stdc++.h>
// using namespace std;

// struct ps{
//     long long tu;
//     long long mau;
// };

// int ss(ps a, ps b);
// void quydong(ps &a, ps &b);
// void nhap(ps &x);
// void xuat(ps x);
// void chuanhoa(ps &x);
// int ktthuong(ps a, ps b, ps &c);
// ps tich(ps a, ps b);
// ps hieu(ps a, ps b);
// ps tong(ps a, ps b);
// void rutgon(ps &x);
// long long int ucln(long long int a, long long int b);

// int main()
// {
//     ps a,b;
//     nhap(a);nhap(b);
//     chuanhoa(a);chuanhoa(b);
//     ps a1,a2;
//     a1=a;
//     a2=b;

//     ps tongps=tong(a,b);xuat(tongps);cout<<endl;
//     ps hieups=hieu(a,b);xuat(hieups);cout<<endl;
//     ps tichps=tich(a,b);xuat(tichps);cout<<endl;
//     ps thuongps;
//     if(ktthuong(a,b,thuongps) == -1) cout<<"K chia dc"<<endl;
//     else xuat(thuongps);cout<<endl;

//     rutgon(a);rutgon(b);
//     xuat(a);
//     cout<<" ";
//     xuat(b);
//     cout<<endl;

//     quydong(a,b);
//     xuat(a);cout<<" ";
//     xuat(b);cout<<endl;

//     cout<<ss(a,b);

//     return 0;
// }

// int ss(ps a, ps b){
//     if(a.tu*b.mau > b.tu*a.mau) return 1;
//     if(a.tu*b.mau < b.tu*a.mau) return -1;
//     return 0;
// }
// void quydong(ps &a, ps &b){
//     int bcnn=a.mau*b.mau/ucln(a.mau,b.mau);
//     a.tu=a.tu*bcnn/a.mau;
//     b.tu=b.tu*bcnn/b.mau;
//     a.mau=bcnn;
//     b.mau=bcnn;
// }
// void nhap(ps &x){
//     string temp;
//     getline(cin,temp);
//     string lay="";
//     int index=0;
//     for(int i=0;i<temp.size();i++){
//         if(temp[i] != '/'){
//             lay += temp[i];
//             index++;
//         }
//         else{
//             x.tu=stoi(lay);
//             lay.erase();
//             index=0;
//         }
//     }
//     x.mau=stoi(lay);
// }

// void xuat(ps x){
//     cout<<x.tu<<"/"<<x.mau;
// }
// void chuanhoa(ps &x){
//     if(x.mau<0){
//         x.tu=-x.tu;
//         x.mau=-x.mau;
//     }
// }
// int ktthuong(ps a, ps b, ps &c){
//     if(b.tu == 0) return -1;
//     c.tu=a.tu*b.mau;
//     c.mau=a.mau*b.tu;
//     chuanhoa(c);
//     rutgon(c);
//     return 1;
// }
// ps tich(ps a, ps b){
//     ps c;
//     c.tu=a.tu*b.tu;
//     c.mau=a.mau*b.mau;
//     rutgon(c);
//     return c;
// }
// ps hieu(ps a, ps b){
//     ps c;
//     c.tu=a.tu*b.mau-b.tu*a.mau;

//     c.mau=a.mau*b.mau;
//     rutgon(c);
//     return c;
// }
// ps tong(ps a, ps b){
//     ps c;
//     c.tu=a.tu*b.mau+b.tu*a.mau;
//     c.mau=a.mau*b.mau;
//     rutgon(c);
//     return c;
// }
// void rutgon(ps &x){
//     long long int uc=ucln(x.tu, x.mau);
//     x.tu=x.tu/uc;
//     x.mau=x.mau/uc;
// }
// long long int ucln(long long int a, long long int b){
//    if(b==0) return a;
//    return ucln(b,a%b);
// }

// Chương 1 - Bài 4 - DATE
// #include <iostream>

// using namespace std;

// // Struct DATE
// struct Date {
//     int day;
//     int month;
//     int year;
// };

// // Hàm kiểm tra năm nhuận
// bool isLeapYear(int year) {
//     return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
// }

// // Hàm kiểm tra tính hợp lệ của ngày
// bool isValidDate(const Date& date) {
//     if (date.month < 1 || date.month > 12) return false;
//     if (date.day < 1) return false;

//     int daysInMonth;
//     switch (date.month) {
//         case 2:
//             daysInMonth = (isLeapYear(date.year)) ? 29 : 28;
//             break;
//         case 4: case 6: case 9: case 11:
//             daysInMonth = 30;
//             break;
//         default:
//             daysInMonth = 31;
//             break;
//     }

//     return date.day <= daysInMonth;
// }

// // Hàm tính số ngày trong năm
// int daysInYear(int year) {
//     return isLeapYear(year) ? 366 : 365;
// }

// // Hàm tính số ngày trong tháng
// int daysInMonth(int month, int year) {
//     switch (month) {
//         case 2:
//             return (isLeapYear(year)) ? 29 : 28;
//         case 4: case 6: case 9: case 11:
//             return 30;
//         default:
//             return 31;
//     }
// }

// // Hàm tính khoảng cách giữa hai ngày
// int dayDifference(const Date& date1, const Date& date2) {
//     int totalDays = 0;

//     // Kiểm tra ngày tháng năm hợp lệ
//     if (!isValidDate(date1) || !isValidDate(date2))
//         return -1;

//     // Tính tổng số ngày của năm thứ nhất từ tháng đầu tiên đến trước tháng của date1
//     for (int month = 1; month < date1.month; ++month) {
//         totalDays += daysInMonth(month, date1.year);
//     }

//     // Cộng thêm số ngày của date1 trong tháng đó
//     totalDays += date1.day;

//     // Nếu năm của date1 và date2 khác nhau, cộng thêm số ngày của những năm ở giữa
//     if (date1.year != date2.year) {
//         for (int year = date1.year + 1; year < date2.year; ++year) {
//             totalDays += daysInYear(year);
//         }
//     }

//     // Trừ đi số ngày của date2 từ tháng đầu tiên đến trước tháng của date2
//     for (int month = 1; month < date2.month; ++month) {
//         totalDays -= daysInMonth(month, date2.year);
//     }

//     // Trừ đi số ngày của date2 trong tháng đó
//     totalDays -= (daysInMonth(date2.month, date2.year) - date2.day);

//     return totalDays;
// }

// int main() {
//     // Nhập hai ngày
//     Date date1, date2;
//     char slash;
//     cin >> date1.day >> slash >> date1.month >> slash >> date1.year;
//     cin >> date2.day >> slash >> date2.month >> slash >> date2.year;

//     // Tính và in ra khoảng cách giữa hai ngày
//     cout << dayDifference(date1, date2) << endl;

//     return 0;
// }

// Chương 1 - Bài 3 - THOIGIAN
// #include<bits/stdc++.h>
// using namespace std;

// struct phanso{
//     int t,m;
//     friend istream& operator >> (istream &in ,phanso &ps);
//     friend ostream& operator << (ostream &os ,phanso &ps);
//     bool operator < (phanso another) {
//         return t < another.t;
//     }
//     phanso operator + (phanso another);
//     phanso operator - (phanso another);
//     phanso operator * (phanso another);
//     phanso operator / (phanso another);
// };

// int gcd(int a,int b) {
//     if(b) return gcd(b,a%b);
//     return a;
// }
// int lcm(int a,int b) {
//     return (a*b)/gcd(a,b);
// }
// phanso rutgon(phanso &x) {
//     int uc = gcd(abs(x.t),abs(x.m));
//     x.t = x.t/uc;
//     x.m = x.m/uc;
//     if(x.m<0) {
//         x.t *= -1;
//         x.m *= -1;
//     }
//     return {x.t,x.m};
// }
// phanso phanso::operator +(phanso another) {
//     phanso result;
//     int bc = lcm(m,another.m);
//     result.m = bc;
//     result.t = (t*(bc/m) + another.t*(bc/another.m));
//     rutgon(result);
//     return result;
// }
// phanso phanso::operator -(phanso another) {
//     phanso result;
//     int bc = lcm(m,another.m);
//     result.m = bc;
//     result.t = (t*(bc/m) - another.t*(bc/another.m));
//     rutgon(result);
//     return result;
// }
// phanso phanso::operator * (phanso another) {
//     if(another.t ==0 || m==0) return {0,0};
//     phanso result;
//     result.t = t*another.t;
//     result.m = m*another.m;
//     rutgon(result);
//     return result;
// }

// phanso phanso::operator / (phanso another) {
//     phanso result;
//     if(m==0 || another.m ==0 ) return {0,0};
//     result.t = t * another.m;
//     result.m = m * another.t;
//     rutgon(result);
//     return result;
// }

// bool ss(const phanso &x,const phanso &y) {
//     int bc = lcm(abs(x.m),abs(y.m));
//     int xt = x.t * (bc/x.m);
//     int yt = y.t * (bc/y.m);
//     return xt > yt;
// }
// // dong dau tien chua phan so lon nhat
// phanso find_Max(phanso x[],int &n) {
//     phanso max_ps = x[0];
//     for (int i=1;i<n;i++){
//         if(ss(x[i],max_ps)) max_ps = x[i];
//         max_ps = rutgon(max_ps);
//     }
//     rutgon(max_ps);
//     return max_ps;
// }
// // tong mang phan so
// phanso sum(phanso x[],int n) {
//     phanso sum_ps = x[0];
//     for (int i=1;i<n;i++) {
//         sum_ps = sum_ps + x[i];
//     }
//     rutgon(sum_ps);
//     return sum_ps;
// }
// // tich phan so
// phanso mul(phanso x[],int n) {
//     phanso mul_ps = x[0];
//     for (int i=1;i<n;i++) {
//         mul_ps = mul_ps * x[i];
//     }
//     rutgon(mul_ps);
//     return mul_ps;
// }
// // hieu mang phan so
// phanso sub(phanso x[],int n) {
//     phanso sub_ps = x[0];
//     for (int i=1;i<n;i++) {
//         sub_ps = sub_ps - x[i];
//     }
//     rutgon(sub_ps);
//     return sub_ps;
// }
// // nghich dao mang phan so
// void nghichdao(phanso x[],int &n) {
//     phanso nd = {1,1};
//     for (int i=0;i<n;i++) {
//         x[i]=(nd/x[i]);
//     }
//     for (int i=0;i<n;i++) cout <<x[i]<<' ';
// }
// istream& operator >> (istream &in,phanso &ps) {
//     return in>>ps.t>>ps.m;
// }
// ostream& operator << (ostream &os,phanso &ps) {
//     return os<<ps.t<<' '<<ps.m;
// }
// void nhap(phanso x[],int n) {
//     for (int i=0;i<n;i++) cin>>x[i];
// }
// void xuat(phanso x[],int n) {
//     for (int i=0;i<n;i++) cout<<x[i]<<' ';
// }

// int main() {
//     int n; cin>>n;
//     phanso ps[n],max_kq,sum_kq,mul_kq;
//     nhap(ps,n);
//     max_kq = find_Max(ps,n);
//     sum_kq = sum(ps,n);
//     mul_kq = mul(ps,n);
//     cout <<max_kq<<endl;
//     cout <<sum_kq<<endl;
//     cout <<mul_kq<<endl;
//     nghichdao(ps,n);
// }

// in:
// 18
// -4 -7
// 6 6
// -3 5
// 4 -10
// -7 -9
// 4 7
// -6 -5
// 6 -1
// -6 10
// 1 -6
// -8 -2
// 1 -7
// 3 1
// -4 5
// 2 6
// -4 9
// 10 -3
// -6 7
// out:
// 4 1
// -397 210
// 16384 643125
// 7 4 1 1 -5 3 -5 2 9 7 7 4 5 6 -1 6 -5 3 -6 1 1 4 -7 1 1 3 -5 4 3 1 -9 4 -3 10 -7 6

// dung vector
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct phanso {
//     int t, m;

//     friend istream& operator >> (istream &in, phanso &ps);
//     friend ostream& operator << (ostream &os, const phanso &ps);

//     phanso operator + (const phanso &another) const;
//     phanso operator - (const phanso &another) const;
//     phanso operator * (const phanso &another) const;
//     phanso operator / (const phanso &another) const;

//     phanso rutgon() const;
// };

// int gcd(int a, int b) {
//     if (b) return gcd(b, a % b);
//     return a;
// }

// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }
// phanso rutgon(phanso &x) {
//     int uc = gcd(abs(x.t),abs(x.m));
//     x.t = x.t/uc;
//     x.m = x.m/uc;
//     if(x.m<0) {
//         x.t *= -1;
//         x.m *= -1;
//     }
//     return {x.t,x.m};
// }
// phanso phanso::rutgon() const {
//     int uc = gcd(abs(t), abs(m));
//     int new_t = t / uc;
//     int new_m = m / uc;
//     if (new_m < 0) {
//         new_t *= -1;
//         new_m *= -1;
//     }
//     return {new_t, new_m};
// }

// phanso phanso::operator +(const phanso &another) const {
//     int bc = lcm(m, another.m);
//     phanso result;
//     result.m = bc;
//     result.t = (t * (bc / m) + another.t * (bc / another.m));
//     return result.rutgon();
// }

// phanso phanso::operator -(const phanso &another) const {
//     int bc = lcm(m, another.m);
//     phanso result;
//     result.m = bc;
//     result.t = (t * (bc / m) - another.t * (bc / another.m));
//     return result.rutgon();
// }

// phanso phanso::operator *(const phanso &another) const {
//     phanso result;
//     result.t = t * another.t;
//     result.m = m * another.m;
//     return result.rutgon();
// }

// phanso phanso::operator /(const phanso &another) const {
//     phanso result;
//     result.t = t * another.m;
//     result.m = m * another.t;
//     return result.rutgon();
// }

// bool ss(const phanso &x, const phanso &y) {
//     int bc = lcm(abs(x.m), abs(y.m));
//     int xt = x.t * (bc / x.m);
//     int yt = y.t * (bc / y.m);
//     return xt > yt;
// }

// phanso find_Max(const vector<phanso> &x) {
//     phanso max_ps = x[0];
//     for (size_t i = 1; i < x.size(); i++) {
//         if (ss(x[i], max_ps))
//             max_ps = x[i];
//             max_ps = rutgon(max_ps);
//     }

//     return max_ps;
// }

// phanso sum(const vector<phanso> &x) {
//     phanso sum_ps = x[0];
//     for (size_t i = 1; i < x.size(); i++) {
//         sum_ps = sum_ps + x[i];
//     }
//     sum_ps = rutgon(sum_ps);
//     return sum_ps;
// }

// phanso mul(const vector<phanso> &x) {
//     phanso mul_ps = x[0];
//     for (size_t i = 1; i < x.size(); i++) {
//         mul_ps = mul_ps * x[i];
//     }
//     mul_ps = rutgon(mul_ps);
//     return mul_ps;
// }

// phanso sub(const vector<phanso> &x) {
//     phanso sub_ps = x[0];
//     for (size_t i = 1; i < x.size(); i++) {
//         sub_ps = sub_ps - x[i];
//     }
//     sub_ps = rutgon(sub_ps);
//     return sub_ps;
// }

// void nghichdao(vector<phanso> &x) {
//     phanso nd = {1, 1};
//     for (size_t i = 0; i < x.size(); i++) {
//         x[i] = (nd / x[i]);
//     }
// }

// istream& operator >> (istream &in, phanso &ps) {
//     return in >> ps.t >> ps.m;
// }

// ostream& operator << (ostream &os, const phanso &ps) {
//     return os << ps.t << ' ' << ps.m;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<phanso> ps(n);

//     for (int i = 0; i < n; i++) {
//         cin >> ps[i];
//     }

//     phanso max_kq = find_Max(ps);
//     phanso sum_kq = sum(ps);
//     phanso mul_kq = mul(ps);

//     cout << max_kq << endl;
//     cout << sum_kq << endl;
//     cout << mul_kq << endl;

//     nghichdao(ps);

//     for (int i = 0; i < n; i++) {
//         cout << ps[i] << ' ';
//     }

//     return 0;
// }

// Chương 03 - Bài 12 - Sum(Sum(n)) , n < 10^10
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // Hàm nhân hai số lớn
// string multiply(string num1, string num2) {
//     int n1 = num1.size();
//     int n2 = num2.size();
//     vector<int> result(n1 + n2, 0);

//     for (int i = n1 - 1; i >= 0; i--) {
//         for (int j = n2 - 1; j >= 0; j--) {
//             int mul = (num1[i] - '0') * (num2[j] - '0');
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
//     return res.empty() ? "0" : res;
// }

// // Hàm cộng hai số lớn
// string add(string num1, string num2) {
//     int carry = 0;
//     int n1 = num1.size();
//     int n2 = num2.size();
//     string res = "";

//     while (n1 > 0 || n2 > 0 || carry) {
//         int digit1 = n1 > 0 ? num1[--n1] - '0' : 0;
//         int digit2 = n2 > 0 ? num2[--n2] - '0' : 0;
//         int sum = digit1 + digit2 + carry;
//         carry = sum / 10;
//         sum %= 10;
//         res.push_back(sum + '0');
//     }

//     reverse(res.begin(), res.end());
//     return res;
// }

// // Hàm chia một số lớn cho một số nguyên
// string divide(string num, int divisor) {
//     string result = "";
//     int index = 0;
//     int temp = num[index] - '0';

//     while (temp < divisor) {
//         temp = temp * 10 + (num[++index] - '0');
//     }

//     while (num.size() > index) {
//         result += (temp / divisor) + '0';
//         temp = (temp % divisor) * 10 + num[++index] - '0';
//     }

//     if (result.empty()) {
//         return "0";
//     }

//     return result;
// }

// // Hàm tính S(n)
// string calculateSN(string n) {
//     string n1 = add(n, "1");
//     string n2 = add(n, "2");
//     string n3 = add(n, "3");

//     string numerator = multiply(multiply(n, n1), n2);
//     string denominator = "6";

//     return divide(numerator, stoi(denominator));
// }

// int main() {
//     string n;
//     cin >> n;
//     string result = calculateSN(n);
//     cout << result << endl;
//     return 0;
// }

// Chương 03 - Bài 11 - Product2BigNum
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// // Hàm nhân hai số lớn
// string multiply(string num1, string num2) {
//     int n1 = num1.size();
//     int n2 = num2.size();
//     vector<int> result(n1 + n2, 0);

//     for (int i = n1 - 1; i >= 0; i--) {
//         for (int j = n2 - 1; j >= 0; j--) {
//             int mul = (num1[i] - '0') * (num2[j] - '0');
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
//     return res.empty() ? "0" : res;
// }

// int main() {
//     string num1, num2;
//     cin >> num1 >> num2;
//     string result = multiply(num1, num2);
//     cout << result << endl;
//     return 0;
// }

// Chương 03 - Bài 10 - CountCharTypes
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     string s; cin>>s;
//     int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
//     for (int i=0;i<s.size();i++) {
//         if(islower(s[i])) ++cnt1;
//         else if(isupper(s[i])) ++cnt2;
//         else if(isdigit(s[i])) ++cnt3;
//         else ++cnt4;
//     }
//     cout <<cnt1<<' '<<cnt2<<' '<<cnt3<<' '<<cnt4;
// }

// Chương 03 - Bài 09 - SortAndInsertArray
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     vector<int> v(n+1);
//     for (int i=0;i<n+1;i++) cin>>v[i];
//     sort(v.begin(),v.end(),[](int a,int b) {
//         return a>b;
//     });
//     for (auto it:v) cout <<it<<' ';
// }

// #Chương 03 - Bài 08 - Sum(1/n) > A
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int a;cin>>a;
//     double sum=0; int k=1;
//     while(sum<=a) {
//         sum+=(1.0/k);
//         k++;
//     }
//     cout <<k-1;
// }

// Chương 03 - Bài 07 - Fibonacci(n)
// #include <bits/stdc++.h>
// using namespace std;

// int fibo(int n) {
//     if(n<=1) return n;
//     int a=0,b=1,c;
//     for (int i=2;i<=n;i++) {
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return b;
// }

// int main() {
//     int n; cin>>n;
//     cout <<fibo(n);
// }

// Chương 03 - Bài 06 - Sum(x^n/n!)
// #include<bits/stdc++.h>

// using namespace std;

// typedef long long ll;

// string multiplyStrings(string num1, string num2) {
//     int len1 = num1.size();
//     int len2 = num2.size();
//     string result(len1 + len2, '0');

//     for (int i = len1 - 1; i >= 0; i--) {
//         int carry = 0;
//         for (int j = len2 - 1; j >= 0; j--) {
//             int temp = (result[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
//             result[i + j + 1] = temp % 10 + '0';
//             carry = temp / 10;
//         }
//         result[i] += carry;
//     }

//     size_t startPos = result.find_first_not_of('0');
//     if (startPos != string::npos) {
//         return result.substr(startPos);
//     }

//     return "0";
// }
// string gt(int n){
//     string mul="1";
//     for (int i=1;i<=n;i++) {
//         mul = multiplyStrings(mul,to_string(i));
//     }
//     return mul;
// }
// ll pow(ll a, ll b) {
//     if (b == 0) return 1;
//     ll x = pow(a, b / 2);
//     x = x * x;
//     if (b % 2 != 0) x = x * a;
//     return x;
// }

// int main() {
//     int n,x; cin>>n>>x;
//     double sum = 0;
//     for (int i=0;i<=n;i++) {
//         sum += (pow(x,i)*1.0/stoll(gt(i)));
//     }
//     cout <<fixed<<setprecision(2)<<sum;

// }

// Chương 03 - Bài 05 - Sum(1/n!)
// #include <bits/stdc++.h>
// using namespace std;

// string multiplyStrings(string num1, string num2) {
//     int len1 = num1.size();
//     int len2 = num2.size();
//     string result(len1 + len2, '0');

//     for (int i = len1 - 1; i >= 0; i--) {
//         int carry = 0;
//         for (int j = len2 - 1; j >= 0; j--) {
//             int temp = (result[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
//             result[i + j + 1] = temp % 10 + '0';
//             carry = temp / 10;
//         }
//         result[i] += carry;
//     }

//     size_t startPos = result.find_first_not_of('0');
//     if (startPos != string::npos) {
//         return result.substr(startPos);
//     }

//     return "0";
// }
// string gt(int n){
//     string mul="1";
//     for (int i=1;i<=n;i++) {
//         mul = multiplyStrings(mul,to_string(i));
//     }
//     return mul;
// }

// int main() {
//     int n; cin>>n;
//     double sum = 0;
//     for (int i=0;i<=n;i++) {
//         sum += (1.0/stod(gt(i)));
//     }
//     cout<<fixed<<setprecision(2)<<sum;
// }

// Chương 03 - Bài 04 - Sum(n!)

// #include <bits/stdc++.h>
// using namespace std;

// string multiplyStrings(string num1, string num2) {
//     int len1 = num1.size();
//     int len2 = num2.size();
//     string result(len1 + len2, '0');

//     for (int i = len1 - 1; i >= 0; i--) {
//         int carry = 0;
//         for (int j = len2 - 1; j >= 0; j--) {
//             int temp = (result[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
//             result[i + j + 1] = temp % 10 + '0';
//             carry = temp / 10;
//         }
//         result[i] += carry;
//     }

//     size_t startPos = result.find_first_not_of('0');
//     if (startPos != string::npos) {
//         return result.substr(startPos);
//     }

//     return "0";
// }
// string gt(int n){
//     string mul="1";
//     for (int i=1;i<=n;i++) {
//         mul = multiplyStrings(mul,to_string(i));
//     }
//     return mul;
// }

// int main() {
//     int n; cin>>n;
//     long long sum = 0;
//     for (int i=1;i<=n;i++) {
//        sum = sum + stoll(gt(i));
//     }
//     cout<<sum;
// }

// Chương 03 - Bài 03 - Sum(1/Sum(n))
// #include <bits/stdc++.h>
// using namespace std;

// string mul(string num1, string num2) {
//     int len1 = num1.size();
//     int len2 = num2.size();
//     string result(len1 + len2, '0');

//     for (int i = len1 - 1; i >= 0; i--) {
//         int carry = 0;
//         for (int j = len2 - 1; j >= 0; j--) {
//             int temp = (result[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
//             result[i + j + 1] = temp % 10 + '0';
//             carry = temp / 10;
//         }
//         result[i] += carry;
//     }

//     size_t startPos = result.find_first_not_of('0');
//     if (startPos != string::npos) {
//         return result.substr(startPos);
//     }

//     return "0";
// }

// string add(string num1, string num2) {
//     string result;
//     int carry = 0;
//     int i = num1.length() - 1;
//     int j = num2.length() - 1;

//     while (i >= 0 || j >= 0 || carry > 0) {
//         int digit1 = (i >= 0) ? num1[i] - '0' : 0;
//         int digit2 = (j >= 0) ? num2[j] - '0' : 0;

//         int sum = digit1 + digit2 + carry;
//         carry = sum / 10;
//         sum %= 10;

//         result.push_back(sum + '0');

//         i--;
//         j--;
//     }

//     reverse(result.begin(), result.end());

//     return result;
// }
//  string dev(string num1, string num2) {
//     int n1 = num1.size(), n2 = num2.size();
//     if (n1 < n2 || (n1 == n2 && num1 < num2))
//         return "0";

//     string quotient = ""; // Kết quả thương
//     string remainder = num1.substr(0, n2); // Phần dư ban đầu
//     int divisor = stoi(num2); // Chuyển chuỗi num2 thành số nguyên

//     for (int i = n2; i <= n1; i++) {
//         int temp = stoi(remainder);
//         int quotientDigit = temp / divisor;
//         quotient += to_string(quotientDigit);

//         // Tính phần dư mới
//         temp = temp % divisor;
//         if (i < n1)
//             remainder = to_string(temp) + num1[i];
//         else
//             remainder = to_string(temp);
//     }

//     // Loại bỏ các số 0 không cần thiết ở đầu kết quả
//     while (quotient.size() > 1 && quotient[0] == '0')
//         quotient.erase(0, 1);

//     return quotient;
// }

// int sum(int n) {
//     string s = dev(mul(to_string(n),to_string(n+1)),"2");
//     return stoll(s);
// }

// int main() {
//     int n; cin>>n;
//     double s = 0;
//     for (int i=1;i<=n;i++) {
//         s = s + (1.0/sum(i));
//     }
//     cout <<fixed<<setprecision(6)<<s;
// }

// Chương 03 - Bài 02 - Sum(Sum(n)) , n < 10^6
// #include<bits/stdc++.h>

// using namespace std;

// string mul(string num1, string num2) {
//     int len1 = num1.size();
//     int len2 = num2.size();
//     string result(len1 + len2, '0');

//     for (int i = len1 - 1; i >= 0; i--) {
//         int carry = 0;
//         for (int j = len2 - 1; j >= 0; j--) {
//             int temp = (result[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
//             result[i + j + 1] = temp % 10 + '0';
//             carry = temp / 10;
//         }
//         result[i] += carry;
//     }

//     size_t startPos = result.find_first_not_of('0');
//     if (startPos != string::npos) {
//         return result.substr(startPos);
//     }

//     return "0";
// }

// string add(string num1, string num2) {
//     string result;
//     int carry = 0;
//     int i = num1.length() - 1;
//     int j = num2.length() - 1;

//     while (i >= 0 || j >= 0 || carry > 0) {
//         int digit1 = (i >= 0) ? num1[i] - '0' : 0;
//         int digit2 = (j >= 0) ? num2[j] - '0' : 0;

//         int sum = digit1 + digit2 + carry;
//         carry = sum / 10;
//         sum %= 10;

//         result.push_back(sum + '0');

//         i--;
//         j--;
//     }

//     reverse(result.begin(), result.end());

//     return result;
// }
//  string dev(string num1, string num2) {
//     int n1 = num1.size(), n2 = num2.size();
//     if (n1 < n2 || (n1 == n2 && num1 < num2))
//         return "0";

//     string quotient = ""; // Kết quả thương
//     string remainder = num1.substr(0, n2); // Phần dư ban đầu
//     int divisor = stoi(num2); // Chuyển chuỗi num2 thành số nguyên

//     for (int i = n2; i <= n1; i++) {
//         int temp = stoi(remainder);
//         int quotientDigit = temp / divisor;
//         quotient += to_string(quotientDigit);

//         // Tính phần dư mới
//         temp = temp % divisor;
//         if (i < n1)
//             remainder = to_string(temp) + num1[i];
//         else
//             remainder = to_string(temp);
//     }

//     // Loại bỏ các số 0 không cần thiết ở đầu kết quả
//     while (quotient.size() > 1 && quotient[0] == '0')
//         quotient.erase(0, 1);

//     return quotient;
// }

// int sum(int n) {
//     string s = dev(mul(to_string(n),to_string(n+1)),"2");
//     return stoll(s);
// }

// int main() {
//     int n; cin>>n;
//     long long s = 0;
//     for (int i=1;i<=n;i++) {
//         s = s + (sum(i));
//     }
//     cout <<s;
// }

// Chương 02 - Bài 12 - Minesweeper
// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     int n; cin>>n;
//     vector<vector<int>> a(n,vector<int>(n));
//     FOR(i,0,n-1) {
//         FOR(j,0,n-1) cin>>a[i][j];
//     }
//     int dx[]={-1,-1,-1,0,1,1,1,0};
//     int dy[]={-1,0,1,1,1,0,-1,-1};
//     vector<vector<int>> v(n,vector<int>(n));
//     FOR(i,0,n-1) {
//         FOR(j,0,n-1) {
//             if(a[i][j]!=1) {
//             int cnt=0;
//             FOR(k,0,7) {
//                 int ix = i + dx[k];
//                 int jy = j + dy[k];
//                 if(ix>=0 && ix<n && jy>=0 && jy<n && a[ix][jy]) {
//                     ++cnt;
//                 }
//             }
//             v[i][j] = cnt;
//             }
//             else v[i][j]=-1;
//         }
//     }
//     FOR(i,0,n-1) {
//         FOR(j,0,n-1) cout <<v[i][j]<<' ';
//         cout <<endl;
//     }
// }

// cong tru so nguyen lon
// #include <iostream>
// #include <string>
// using namespace std;
//
//// Hàm cộng hai số nguyên lớn
// string addLargeNumbers(string num1, string num2) {
//     string result = "";
//     int carry = 0;
//     int i = num1.size() - 1;
//     int j = num2.size() - 1;
//
//     while (i >= 0 || j >= 0 || carry > 0) {
//         int digit1 = (i >= 0) ? num1[i] - '0' : 0;
//         int digit2 = (j >= 0) ? num2[j] - '0' : 0;
//         int sum = digit1 + digit2 + carry;
//         result = to_string(sum % 10) + result;
//         carry = sum / 10;
//         i--;
//         j--;
//     }
//
//     return result;
// }
//
//// Hàm trừ hai số nguyên lớn (num1 - num2)
// bool cmp(string a, string b) {
//     if (a.size() == b.size())
//         return a < b;
//     return a.size() < b.size();
// }
//

// cong tru so lon
//  SumDiffBigNum
// #include <bits/stdc++.h>
// using namespace std;

// string addS(const string &n1, const string &n2)
// {
//     int i = n1.size() - 1, j = n2.size() - 1, carry = 0;
//     string result;
//     while (i >= 0 || j >= 0 || carry)
//     {
//         int sum = carry;
//         if (i >= 0)
//             sum += n1[i--] - '0';
//         if (j >= 0)
//         sum += n2[j--] - '0';
//         result += sum % 10 + '0';
//         carry = sum / 10;
//     }
//     reverse(result.begin(), result.end());
//     return result;
// }

// string subS(const string &n1, const string &n2)
// {
//     int i = n1.size() - 1, j = n2.size() - 1, borrow = 0;
//     string result;
//     while (i >= 0 || j >= 0)
//     {
//         int diff = (n1[i] - '0') - borrow;
//         if (j >= 0)
//             diff -= (n2[j--] - '0');
//         if (diff < 0){ diff += 10; borrow = 1;}
//         else borrow = 0;
//         result += diff + '0';
//         i--;
//     }
//     while (result.size() > 1 && result.back() == '0')
//         result.pop_back();
//     reverse(result.begin(), result.end());
//     return result;
// }

// int cmpS(const string &n1, const string &n2)
// {
//     if (n1.size() != n2.size())
//         return n1.size() > n2.size() ? 1 : -1;
//     return n1.compare(n2);
// }
// string add(const string &a, const string &b)
// {
//     bool A_am = (a[0] == '-');
//     bool B_am = (b[0] == '-');
//     string n1 = A_am ? a.substr(1) : a;
//     string n2 = B_am ? b.substr(1) : b;
//     string result;
//     if (A_am == B_am)
//     {
//         result = addS(n1, n2);
//         if (A_am)
//             result = "-" + result;
//     }
//     else
//     {
//         int cmp = cmpS(n1, n2);
//         if (cmp == 0)
//         {
//             result = "0";
//         }
//         else if (cmp > 0)
//         {
//             result = subS(n1, n2);
//             if (A_am)
//                 result = "-" + result;
//         }
//         else
//         {
//             result = subS(n2, n1);
//             if (B_am)
//                 result = "-" + result;
//         }
//     }
//     return result;
// }
// string sub(const string &a, const string &b) {
//     bool A_am = (a[0] == '-');
//     bool B_am = (b[0] == '-');
//     string n1 = A_am ? a.substr(1) : a;
//     string n2 = B_am ? b.substr(1) : b;
//     string result;
//     if (A_am && B_am) {
//         if (cmpS(n1, n2) > 0) { result = subS(n1, n2);result = "-" + result; }
//          else result = subS(n2, n1);
//     } else if (!A_am && B_am) { result = addS(n1, n2);
//     } else if (A_am && !B_am) {result = addS(n1, n2); result = "-" + result;
//     } else {
//         if (cmpS(n1, n2) >= 0)   result = subS(n1, n2);
//         else { result = subS(n2, n1);   result = "-" + result; }
//     }
//      while (result.size() > 1 && result[0]=='0') result.erase(0,1);
//     if (result == "-0") result = "0"; return result;
// }

// int main() {
//     string a,b; cin>>a>>b;
//     cout <<add(a,b)<<endl;
//     cout <<sub(a,b);
// }

// #Chương 02 - Bài 10 - IsValidDate
// #include <iostream>
// using namespace std;

// int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// // Hàm kiểm tra năm nhuận
// bool isLeapYear(int y)
// {
//     return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
// }

// // Hàm kiểm tra ngày hợp lệ
// bool isValidDate(int d, int m, int y)
// {
//     // Kiểm tra tháng hợp lệ
//     if (m < 1 || m > 12)
//     {
//         return false;
//     }

//     // Nếu là năm nhuận, tháng 2 có 29 ngày
//     if (isLeapYear(y) && m == 2)
//     {
//         daysInMonth[2] = 29;
//     }

//     // Kiểm tra ngày hợp lệ
//     if (d < 1 || d > daysInMonth[m])
//     {
//         return false;
//     }

//     return true;
// }

// // Hàm để tính ngày tiếp theo
// void nextDay(int &d, int &m, int &y)
// {
//     // Tăng ngày
//     d++;

//     // Kiểm tra nếu ngày vượt quá số ngày trong tháng
//     if (d > daysInMonth[m])
//     {
//         d = 1;
//         m++;
//         if (m > 12)
//         {
//             m = 1;
//             y++;
//         }
//     }
// }

// int main()
// {
//     int d, m, y;
//     cin >> d >> m >> y;

//     if (isValidDate(d, m, y))
//     {
//         nextDay(d, m, y);
//         cout << d << " " << m << " " << y << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }

//     return 0;
// }

//  Bài 09 - Decimal2BinaryOctalHexa
// #include<bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// void convert(int n,int k){
//     vector<int> v;
//     while(n) {
//         v.push_back(n%k);
//         n/=k;
//     }
//     reverse(v.begin(),v.end());
//     for(auto it:v) {
//         if(k==16) {
//             if(it<10) cout <<it;
//             else cout<<char(it+55);
//         }
//         else
//         cout <<it;
//     }
//     cout<<endl;
// }

// int main() {
//     int n; cin>>n;
//     convert(n,2);
//     convert(n,8);
//     convert(n,16);
// }
// #Chương 02 - Bài 08 - MinConvex
// #include <bits/stdc++.h>
// #define MAX_VAL 100000.0
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<double>> v(n, vector<double>(m));

//     // Input the matrix values
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cin >> v[i][j];
//         }
//     }

//     // Direction vectors for moving top, right, bottom, and left
//     int dx[4] = {-1, 0, 1, 0};
//     int dy[4] = {0, 1, 0, -1};

//     double Min_val = MAX_VAL; // Since matrix values are < 100000
//     int idx_i = -1, idx_j = -1;

//     // Loop through each element to find peaks
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             bool is_peak = true;
//             for (int k = 0; k < 4; ++k) {
//                 int ix = i + dx[k];
//                 int jx = j + dy[k];
//                 if (ix >= 0 && ix < n && jx >= 0 && jx < m) {
//                     if (v[i][j] <= v[ix][jx]) {
//                         is_peak = false;
//                         break;
//                     }
//                 }
//             }
//             if (is_peak && v[i][j] < Min_val) {
//                 Min_val = v[i][j];
//                 idx_i = i;
//                 idx_j = j;
//             }
//         }
//     }

//     // Output the result
//     if (Min_val == MAX_VAL) {
//         cout << "-1" << endl;
//     } else {
//         cout << idx_i << ' ' << idx_j << endl;
//     }

//     return 0;
// }

// }
// 3 4
// 3 9 5 6
// 4 6 8 7
// 8 11 7 10

// Chương 02 - Bài 07 - StringNormalization
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;getline(cin,s);
//     stringstream ss(s);
//     string result="";
//     vector<string> v;
//     while(ss>>result) {
//         v.push_back(result);
//     }
//     for(int i=0;i<v.size();i++) {
//         if(i==0)
//         v[i][0] = toupper(v[i][0]);
//         if(i!=v.size()-1){
//             cout <<v[i]<<' ';
//         }
//             else cout <<v[i];
//     }
// }

// Chương 02 - Bài 06 - Merge2Array
// #include<bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     int N; cin>>N;
//     vector<int> a(N),b(N),c;
//     FOR(i,0,N-1) cin>>a[i];
//     FOR(i,0,N-1) cin>>b[i];
//     int cnt1=0,cnt2=0;
//     FOR(i,0,2*N-1) {
//         if(i%2==0) c.push_back(a[cnt1++]);
//         else c.push_back(b[cnt2++]);
//     }
//      FOR(i,0,2*N-1) cout <<c[i]<<' ';
// }
// 5
// 1 2 3 4 5
// 6 7 8 9 10
// 1 6 2 7 3 8 4 9 5 10

// 1DArrayTo2DArray
// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(m * n);

//     // Đọc các giá trị đầu vào vào vector a
//     FOR(i, 0, m * n - 1) {
//         cin >> a[i];
//     }

//     // Tạo ma trận 2D từ vector a
//     vector<vector<int>> v(n, vector<int>(m));
//     int cnt = 0;
//     FOR(i, 0, n - 1) {
//         FOR(j, 0, m - 1) {
//             v[i][j] = a[cnt++];
//         }
//     }

//     // In ra ma trận 2D
//     FOR(i, 0, n - 1) {
//         FOR(j, 0, m - 1) {
//             cout << v[i][j] << ' ';
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 3 3
// 1 2 3 4 5 6 7 8 9

// SORT
// #include <bits/stdc++.h>
// using namespace std;

// bool cmp(string a,string b) {
//     if(a.size()==b.size()) return a<b;
//     return a.size()<b.size();
// }
// int main() {
//     int n; cin>>n;
//     vector<string> v(n);
//     for (int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end(),cmp);
//     for (auto it:v) cout <<it<<endl;
// }

// TapCon
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// // Hàm cộng hai số lớn biểu diễn dưới dạng chuỗi
// string addStrings(const string& num1, const string& num2) {
//     int carry = 0;
//     string result;
//     int i = num1.size() - 1, j = num2.size() - 1;

//     while (i >= 0 || j >= 0 || carry) {
//         int sum = carry;
//         if (i >= 0) sum += num1[i--] - '0';
//         if (j >= 0) sum += num2[j--] - '0';
//         carry = sum / 10;
//         result.push_back(sum % 10 + '0');
//     }
//     reverse(result.begin(), result.end());
//     return result;
// }

// // Hàm chia một số lớn biểu diễn dưới dạng chuỗi cho 2
// string divideByTwo(const string& num) {
//     string result;
//     int carry = 0;
//     for (char digit : num) {
//         int current = carry * 10 + (digit - '0');
//         result.push_back(current / 2 + '0');
//         carry = current % 2;
//     }
//     // Xóa các số 0 ở đầu kết quả
//     while (result.size() > 1 && result[0] == '0') {
//         result.erase(result.begin());
//     }
//     return result;
// }

// // Hàm đếm số cách chia tập hợp {1, 2, ..., N} thành hai tập con có tổng bằng nhau
// string countPartitions(int N) {
//     // Tính tổng của các số từ 1 đến N
//     int totalSum = N * (N + 1) / 2;

//     // Nếu tổng là số lẻ, không thể chia thành hai tập con có tổng bằng nhau
//     if (totalSum % 2 != 0) {
//         return "0";
//     }

//     // Tổng của mỗi tập con cần phải là halfSum
//     int halfSum = totalSum / 2;

//     // Mảng dp để lưu số cách để đạt được mỗi tổng từ 0 đến halfSum
//     vector<string> dp(halfSum + 1, "0");
//     dp[0] = "1"; // Có 1 cách để đạt tổng bằng 0 là không chọn số nào

//     // Lặp qua từng số từ 1 đến N
//     for (int i = 1; i <= N; ++i) {
//         for (int j = halfSum; j >= i; --j) {
//             dp[j] = addStrings(dp[j], dp[j - i]);
//         }
//     }

//     // Chúng ta cần chia đôi số cách đếm được vì mỗi cách được tính hai lần (hoán vị của hai tập con)
//     return divideByTwo(dp[halfSum]);
// }

// int main() {
//     int N;
//     cin >> N;
//     cout << countPartitions(N) << endl;
//     return 0;
// }

// Chương 02 - Bài 04 - 2DArrayTo1DArray

// #include <iostream>

// int main() {
//     int n,m; std::cin>>n>>m;
//     std::vector<int> v;
//     for (int i=0;i<m*n;i++) {
//         int x; std::cin>>x;
//         v.push_back(x);
//     }
//     for (auto it:v) std::cout <<it<<' ';
// }

// Insert_Delete_Update_Search_Array
// them sua xoa tim
// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to add an element at a specific position
// void addElement(vector<int> &arr, int position, int value) {
//     arr.insert(arr.begin() + position, value);
// }

// // Function to modify an element at a specific position
// void modifyElement(vector<int> &arr, int position, int newValue) {
//     arr[position] = newValue;
// }

// // Function to delete an element at a specific position
// void deleteElement(vector<int> &arr, int position) {
//     arr.erase(arr.begin() + position);
// }

// // Function to search for an element in the array
// int searchElement(const vector<int> &arr, int value) {
//     for (size_t i = 0; i < arr.size(); ++i) {
//         if (arr[i] == value) {
//             return i;
//         }
//     }
//     return -1;
// }

// // Function to print the array
// void printArray(const vector<int> &arr) {
//     for (size_t i = 0; i < arr.size(); ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<int> arr(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> arr[i];
//     }

//     int B, C;
//     cin >> B >> C;
//     addElement(arr, B, C);
//     printArray(arr);

//     int D, E;
//     cin >> D >> E;
//     modifyElement(arr, D, E);
//     printArray(arr);

//     int F;
//     cin >> F;
//     deleteElement(arr, F);
//     printArray(arr);

//     int X;
//     cin >> X;
//     int position = searchElement(arr, X);
//     cout << position << endl;

//     return 0;
// }

// // FindXSentinel
// #include <iostream>
// #include <vector>
// using namespace std;

// int sentinelSearch(vector<int>& A, int N, int X) {
//     // Thêm lính canh vào cuối mảng
//     A.push_back(X);

//     // Thực hiện tìm kiếm
//     int i = 0;
//     while (A[i] != X) {
//         ++i;
//     }

//     // Loại bỏ lính canh
//     A.pop_back();

//     // Nếu vị trí tìm thấy nằm trong khoảng của mảng ban đầu
//     if (i < N) {
//         return i;
//     } else {
//         return -1;
//     }
// }

// int main() {
//     int N, X;
//     cin >> N >> X;

//     vector<int> A(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> A[i];
//     }

//     int result = sentinelSearch(A, N, X);
//     cout << result << endl;

//     return 0;
// }

// Bai4_ChuoiConChung
// #include <bits/stdc++.h>
// #define FOR(i,a,b) for(int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     string a,b; cin>>a>>b;
//     int n = a.size();
//     int m = b.size();
//     vector<vector<int>> dp(n+1,vector<int>(m+1,0));
//     FOR(i,0,n) {
//         FOR(j,0,m) {
//             if(i==0 || j==0) dp[i][j] = 0;
//             else if(a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
//             else {
//                 dp[i][j] = max (dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     cout <<dp[n][m]<<endl;

// }
// CEACEEC
// AECECA

// Bai2_TongPSToiGian
// #include <iostream>
// #include <vector>

// using namespace std;

// struct PhanSo {
//     int tu, mau;
// };

// int gcd(int a, int b) {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }

// PhanSo rutgon(PhanSo ps) {
//     int ucln = gcd(ps.tu, ps.mau);
//     ps.tu /= ucln;
//     ps.mau /= ucln;
//     return ps;
// }

// PhanSo tong(const vector<PhanSo>& A) {
//     PhanSo result = {0, 1};
//     for (const PhanSo& ps : A) {
//         result.tu = result.tu * ps.mau + ps.tu * result.mau;
//         result.mau *= ps.mau;
//         result = rutgon(result);
//     }
//     return result;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<PhanSo> A(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> A[i].tu >> A[i].mau;
//     }
//     PhanSo tong_PhanSo = tong(A);
//     cout << tong_PhanSo.tu << " " << tong_PhanSo.mau << endl;
//     return 0;
// }

// BAI4_MINE
// #include<bits/stdc++.h>
// #define FOR(i,a,b) for(int i=a;i<=b;i++)
// using namespace std;
// int main() {
//     int count=0;
//     int dx[] = {-1,-1,-1,0,1,1,1,0};
//     int dy[] = {-1,0,1,1,1,0,-1,-1};
//     int n,m; cin>>n>>m;
//     vector<vector<int>> v(n+1,vector<int>(n+1,0));
//     FOR(i,1,n) {
//         FOR(j,1,n) cin>>v[i][j];
//     }
//     FOR(i,1,n) {
//         FOR(j,1,n){
//             int cnt=0;
//             if(v[i][j]==0) {
//             FOR(k,0,7) {
//                 int ix = i + dx[k];
//                 int jy = j + dy[k];
//                 if(ix>=1 && ix<=n && jy>=1 && jy <=n && v[ix][jy]) ++cnt;
//             }
//             if(cnt>m) ++count;
//             }
//         }
//     }
//     cout <<count;
// }
// gpt
// #include <iostream>
// #include <vector>

// using namespace std;

// int countMines(const vector<vector<int>>& matrix, int x, int y) {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
//     int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//     int count = 0;
//     for (int k = 0; k < 8; ++k) {
//         int nx = x + dx[k];
//         int ny = y + dy[k];
//         if (nx >= 0 && nx < n && ny >= 0 && ny < m && matrix[nx][ny] == 1) {
//             count++;
//         }
//     }
//     return count;
// }

// int countCellsWithMoreThanKmines(const vector<vector<int>>& matrix, int K) {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     int result = 0;
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             if (matrix[i][j] == 0) {
//                 if (countMines(matrix, i, j) > K) {
//                     result++;
//                 }
//             }
//         }
//     }
//     return result;
// }

// int main() {
//     int N, K;
//     cin >> N >> K;
//     vector<vector<int>> matrix(N, vector<int>(N));
//     for (int i = 0; i < N; ++i) {
//         for (int j = 0; j < N; ++j) {
//             cin >> matrix[i][j];
//         }
//     }
//     int result = countCellsWithMoreThanKmines(matrix, K);
//     cout << result << endl;
//     return 0;
// }

// BAI3_DAYCON
// #include<bits/stdc++.h>
// #define MAX 1000000
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// bool p[MAX];
// void Erathenos_Prime() {
//     FOR(i,2,1000000) {
//         p[i]=1;
//     }
//     FOR(i,2,sqrt(1000000)) {
//         if(p[i]) {
//             for (int j=i*i;j<=1000000;j+=i){
//                 p[j]=0;
//             }
//         }
//     }
// }

// int main() {
//     Erathenos_Prime();
//     int n; cin>>n;
//     vector<int> v(n);
//     FOR(i,0,n-1) cin>>v[i];
//     vector<int> dp(n,1);
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<=i;j++) {
//             if(v[j]<v[i] && p[v[j]]) {
//                 dp[i] = max(dp[i],dp[j] + 1);
//             }
//         }
//     }
//     cout <<*max_element(dp.begin(),dp.end());
// }

// BAI2_TimViTriPSGanXNhat
// #include<bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)

// using namespace std;

// int main() {
//     int n; cin>>n;
//     double x; cin>>x;
//     vector<double> v;
//     for (int i=0;i<n;i++) {
//         int t,m; cin>>t>>m;
//         double x = 1.0*t/m;
//         v.push_back(x);
//     }
//     double min_dis = 1000000.0;
//     int mark_index;
//     for (int i=0;i<v.size();i++) {
//         if(abs(v[i]-x) < min_dis){ min_dis = abs(v[i]-x); mark_index = i;}
//     }
//     cout <<mark_index;
// }

// BAITAP_TOHOP
// #include<bits/stdc++.h>
// #include<algorithm>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// string add(string a, string b) {
//     int l_max = max(a.size(), b.size());
//     while (a.size() < l_max) a.insert(0, 1, '0');
//     while (b.size() < l_max) b.insert(0, 1, '0');
//      string c = "";
//     int carry = 0;
//     for (int i = l_max - 1; i >= 0; i--) {
//         int sum = (a[i] - '0') + (b[i] - '0') + carry;
//         c += (sum % 10) + '0';
//         carry = sum / 10;
//     }
//     if (carry) c += (carry + '0');
//      reverse(c.begin(), c.end());
//     return c;
// }
// int main() {
//     int n,k; cin>>n>>k;
//     vector<vector<string>> dp(n+1,vector<string>(n+1,"0"));
//     for (int i=0;i<=n;i++) {
//         for (int j=0;j<=i;j++) {
//             if(j==0 || i==j) dp[i][j] = "1";
//             else
//             dp[i][j] = add(dp[i-1][j] ,dp[i-1][j-1]);
//         }
//     }
//     cout <<dp[n][k];
// }

// #4_THOADUOC
// #include<bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     int count = 0;
//     int m,n,k; cin>>n>>m>>k;
//     vector<vector<int>> v(n,vector<int> (m,0));
//     FOR(i,0,n-1) {
//         FOR(j,0,m-1) cin>>v[i][j];
//     }
//     int dx[8]={-1,-1,-1,0,1,1,1,0};
//     int dy[8]={-1,0,1,1,1,0,-1,-1};

//     FOR(i,0,n-1){
//         FOR(j,0,m-1){
//             int avg = 0,cnt=0;
//             FOR(k,0,7) {
//                 int ix = i + dx[k];
//                 int jy = j + dy[k];
//                 if(ix>=0 && ix<n && jy>=0 && jy<m) {
//                      avg += (v[ix][jy]);
//                     ++cnt;
//                 }
//             }
//             if(abs(avg*1.0/cnt - v[i][j]) < k) ++count;
//         }
//     }
//     cout <<count;

// }
// 3 4 2
// 4 5 6 7
// 9 8 3 2
// 11 12 10 1

// #include<bits/stdc++.h>
// #define MAXN 100
// #define FOR(i,a,b) for(int i=a;i<=b;i++)
// using namespace std;

// bool cmp(string a,string b) {
//     while(a.size()>1 && a[0]=='0') a.erase(0,1);
//     while(b.size()>1 && b[0]=='0') b.erase(0,1);
//     if(a.size()!=b.size()) return a.size()<b.size();
//     return a<b;
// }

// int main() {
//     string a,b; cin>>a>>b;
//     a = '0' + a;
//     b = '0' + b;
//     int n = a.size();
//     int m = b.size();
//     vector<vector<string>> dp(MAXN+1,vector<string> (MAXN+1));
//     FOR(i,0,a.size())
//     dp[i][0] = "0";
//     FOR(i,0,b.size())
//     dp[0][i] = "0";
//     FOR(i,1,n-1) {
//         FOR(j,1,m-1) {
//             if(a[i]==b[j]) {
//                 dp[i][j] = dp[i-1][j-1] + a[i];
//             }
//             else {
//                 if(cmp(dp[i-1][j],dp[i][j-1])) dp[i][j] = dp[i][j-1];
//                 else dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     string s = dp[n-1][m-1];
//     if (s.size() == 1)
//     {
//         cout << -1;
//         return 0;
//     }
//     while (s.size() > 1 && s[0] == '0')
//         s.erase(s.begin());
//     cout << s<<endl;

// }
// 12345
// 453012

// #include <bits/stdc++.h>
// using namespace std;

// // dp[i][j] : tong lon nhat la j khi chia mang(i phan tu) lam 2 phan co do chenh nho nhat
// int solve(const vector<int> &a,int &n) {
//     int s = 0;
//     for (auto it:a) s +=it;
//     vector<vector<bool>> dp(n+1,vector<bool> (s/2 + 1,false));
//     for (int i=0;i<=n;i++) {
//         // khong chon duoc cach nao neu tong = 0;
//         dp[i][0] = true;
//     }

//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=s/2;j++) {
//             // chon hoac khong chon phan tu a[i-1] vao tong
//             if(j>=a[i-1])  { dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];}
//             else dp[i][j] = dp[i-1][j];
//         }
//     }

//     int min_dis = s;
//     for (int j=s/2;j>=0;j--) {
//         if(dp[n][j]) {
//             min_dis = s - 2*j;
//             break;
//         }
//     }
//     return min_dis;
// }

// int main() {
//     int n; cin>>n;
//     vector<int> a(n);
//     for (int i=0;i<n;i++) cin>>a[i];
//     cout <<solve(a,n);
// }

// 1_FIBO
// #include<bits/stdc++.h>
// using namespace std;
// const int MAXN =  101;
// int main() {
//     int n; cin>>n;
//     int a[MAXN];
//     a[0]=0;a[1]=1;
//     for (int i=2;i<=n;i++) {
//         a[i] = a[i-1] + a[i-2];
//     }
//     cout <<a[n];

// }
// #include <bits/stdc++.h>
// using namespace std;

// struct mang {
//     string value;
// };

// string str_plus(string a, string b) {
//     int n = max(a.size(), b.size());
//     // Chèn số 0 vào đầu chuỗi cho đồng bộ
//     while (a.size() < n) a.insert(0, "0");
//     while (b.size() < n) b.insert(0, "0");
//     int res = 0;
//     string c;
//     for (int i = n - 1; i >= 0; i--) {
//         int tmp = (a[i] - '0') + (b[i] - '0') + res;
//         res = tmp / 10;
//         c += char(tmp % 10 + '0');
//     }
//     // Nếu có số nhớ cuối cùng
//     if (res != 0) c += char(res + '0');
//     // Đảo ngược chuỗi kết quả
//     reverse(c.begin(), c.end());
//     return c;
// // }

// mang a[200];

// string fibonacci(int n) {
//     // Trả về giá trị đã tính nếu đã được tính trước đó hoặc nếu n là 0
//     if (a[n].value != "0" || n == 0) return a[n].value;
//     // Tính giá trị Fibonacci và lưu vào mảng
//     a[n].value = str_plus(fibonacci(n - 1), fibonacci(n - 2));
//     return a[n].value;
// }

// string giathua(int n) {
//     // Trường hợp cơ bản
//     if (n == 0 || n == 1) return "1";
//     string result = "1";
//     // Tính giai thừa
//     for (int i = 2; i <= n; i++) {
//         result = str_plus(result, to_string(i));
//     }
//     return result;
// }

// int main() {
//     int n;
//     cin >> n;
//     // Khởi tạo tất cả các giá trị của mảng a
//     for (int i = 0; i <= n; i++) {
//         a[i].value = "0";
//     }
//     // Gán giá trị cho a[0] và a[1]
//     a[0].value = "0";
//     a[1].value = "1";

//     cout << "Fibonacci(" << n << "): " << fibonacci(n) << endl;
//     cout << "Giai thua(" << n << "): " << giathua(n) << endl;

//     return 0;
// }

// BÀI 4 KTLT - HK2 - 2018 - 2019
// #include <iostream>
// #include <bitset>

// int main() {
//     int n, k;
//     std::cin >> n >> k;

//     // Chuyển đổi n sang số không dấu để dễ xử lý bit
//     unsigned int unsigned_n = static_cast<unsigned int>(n);

//     // Xoay trái k bit
//     unsigned int rotated = (unsigned_n << k) | (unsigned_n >> (32 - k));

//     // Chuyển đổi kết quả xoay về số có dấu
//     int m = static_cast<int>(rotated);

//     std::cout << m << std::endl;

//     return 0;
// }

// BÀI 3 KTLT - HK2 - 2018 - 2019
// #include<bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// #include <algorithm>

// using namespace std;

// int main() {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     vector<vector<int>> v(8,vector<int>(8,0));
//     int dx[9] ={0,-2,-2,-1,1,2,2,1,-1};
//     int dy[9] ={0,1,-1,-2,-2,-1,1,2,2};
//     for (int k=1;k<=8;k++) {
//         int imoi = a + dx[k];
//         int jmoi = b + dy[k];
//         if(imoi>=0 && imoi<8 && jmoi>=0 && jmoi <8) {
//             if(imoi == c && jmoi == d) {
//                 cout <<k;
//                 return 0;
//             }
//        }
//     }
//     cout <<0;
// }

// BÀI 2 KTLT - HK2 - 2018 - 2019
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// void solve(const vector<int> &a,int k,int index,int cur_s,int &max_s) {
//     if(index==a.size()) {
//         if(cur_s%k==0 ){
//             max_s = max(max_s,cur_s);
//         }
//         return;
//     }

//     // ko chon a[i];
//     solve(a,k,index+1,cur_s,max_s);
//     // chon
//     solve(a,k,index+1,cur_s+a[index],max_s);
// }

// int main() {
//     int n,k; cin>>n>>k;
//     vector<int> a(n);
//     for(int i=0;i<n;i++) cin>>a[i];
//     int max_s = 0;
//     solve(a,k,0,0,max_s);
//     cout<<max_s;
// }

// #BÀI 1 KTLT - HK2 - 2018 - 2019
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// const int Max = 100;

// // Function to add two large numbers represented as strings
// string add(const string &a, const string &b) {
//     string result = "";
//     int carry = 0;
//     int len = max(a.size(), b.size());
//     string paddedA = string(len - a.size(), '0') + a;
//     string paddedB = string(len - b.size(), '0') + b;

//     for (int i = len - 1; i >= 0; --i) {
//         int sum = (paddedA[i] - '0') + (paddedB[i] - '0') + carry;
//         result.push_back((sum % 10) + '0');
//         carry = sum / 10;
//     }
//     if (carry > 0) {
//         result.push_back(carry + '0');
//     }
//     reverse(result.begin(), result.end());
//     return result;
// }

// // Function to multiply a large number represented as a string by a single digit character
// string mul(const string &a, char digit) {
//     if (digit == '0') return "0";
//     if (digit == '1') return a;

//     int carry = 0;
//     string result = "";
//     int d = digit - '0';

//     for (int i = a.size() - 1; i >= 0; --i) {
//         int prod = (a[i] - '0') * d + carry;
//         result.push_back((prod % 10) + '0');
//         carry = prod / 10;
//     }

//     if (carry > 0) {
//         result.push_back(carry + '0');
//     }

//     reverse(result.begin(), result.end());
//     return result;
// }

// // Function to multiply a large number represented as a string by an integer represented as a string
// string mul(const string &a, const string &b) {
//     string result = "0";
//     for (int i = b.size() - 1; i >= 0; --i) {
//         string partial = mul(a, b[i]);
//         partial.append(b.size() - 1 - i, '0');
//         result = add(result, partial);
//     }
//     return result;
// }

// // Function to compare two large numbers represented as strings
// bool isLessOrEqual(const string &a, const string &b) {
//     string num1 = a;
//     string num2 = b;
//     num1.erase(0, min(num1.find_first_not_of('0'), num1.size() - 1));
//     num2.erase(0, min(num2.find_first_not_of('0'), num2.size() - 1));

//     if (num1.size() < num2.size()) return true;
//     if (num1.size() > num2.size()) return false;

//     return num1 <= num2;
// }

// int main() {
//     string m;
//     cin >> m;
//     if(m=="2") {
//         cout <<0;
//         return 0;
//     }
//     vector<string> f(Max);
//     f[0] = "2";
//     f[1] = "4";
//     f[2] = "6";

//     int i = 3;
//     while (true) {
//         f[i] = add(add(mul(f[i - 3], "2"), mul(f[i - 2], "4")), mul(f[i - 1], "6"));
//         if (!isLessOrEqual(f[i], m)) {
//             break;
//         }
//         i++;
//     }

//     cout << (i - 1) << endl; // Because we increment i after finding the condition where f[i] > m

//     return 0;
// }

// Chương 06 - Bài 15 - ChiaKeo
// #include<bits/stdc++.h>
// using namespace std;

// int  solve(const vector<int> &a,int n) {
//     int s = accumulate(a.begin(),a.end(),0);
//     int t = s/2;
//     vector<bool> dp(t/2,false);
//     for (int i=0;i<=t/2;i++) dp[i]=false;
//     // trong moi goi keo duyet tung tong co the tao lon nhat
//     for (auto x:a) {
//         for (int i=t/2;i>=x;i--) {
//             dp[i] = dp[i] || dp[i-x];
//         }
//     }
//     // tim min dis
//     for(int i=t/2;i>=0;i--) {
//         if(dp[i]) {
//             int diff = s-2*i;
//             return diff;
//         }
//     }

// }

// Chương 06 - Bài 12 - LCS(s1, s2)
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int longestCommonSubsequence(const string& A, const string& B) {
//     int n = A.length();
//     int m = B.length();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= m; ++j) {
//             if (A[i - 1] == B[j - 1]) {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//             } else {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }

//     return dp[n][m];
// }

// int main() {
//     string A, B;
//     cin >> A >> B;

//     int result = longestCommonSubsequence(A, B);
//     cout << result << endl;

//     return 0;
// }

// Chương 06 - Bài 11 - LIS(list)
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     vector<int> a(n),v;
//     for (int i=0;i<n;i++) cin>>a[i];
//     for (int i=0;i<n;i++) {
//         auto it = lower_bound(v.begin(),v.end(),a[i]);
//         if(it==v.end()) {
//             v.push_back(a[i]);
//         }
//         else *it = a[i];
//     }
//     cout <<v.size();
// }
// 5
// 1 3 2 3 4

// Chương 06 - Bài 10 - ReverseWords(s)

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s; getline(cin,s);
//     stringstream ss(s);
//     string res="";
//     vector<string> result;
//     while(ss>>res) {
//         result.push_back(res);
//     }
//     for (int i=0;i<result.size();i++) {
//     reverse(result[i].begin(),result[i].end());
//     }
//     for (auto it:result) cout <<it<<' ';
// }

// Chương 06 - Bài 04 - RemoveDuplicates(list)
// #include <iostream>
// #include <vector>
// #include <unordered_set>

// using namespace std;

// // Hàm xóa các phần tử trùng nhau trong dãy, chỉ giữ lại một phần tử
// vector<int> removeDuplicates(const vector<int>& arr) {
//     unordered_set<int> seen; // Lưu trữ các phần tử đã thấy
//     vector<int> result; // Lưu trữ kết quả cuối cùng

//     for (int num : arr) {
//         // Nếu phần tử chưa xuất hiện trong `seen`
//         if (seen.find(num) == seen.end()) {
//             result.push_back(num); // Thêm phần tử vào kết quả
//             seen.insert(num); // Đánh dấu phần tử đã xuất hiện
//         }
//     }

//     return result;
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<int> arr(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> arr[i];
//     }

//     vector<int> result = removeDuplicates(arr);

//     for (int num : result) {
//         cout << num << " ";
//     }

//     return 0;
// }
// Chương 05 - Bài 12 - AllPermutation(list)
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     vector<int> arr(N);

//     // Đọc N phần tử của mảng
//     for (int i = 0; i < N; ++i) {
//         cin >> arr[i];
//     }

//     // Sắp xếp mảng theo thứ tự tăng dần
// sort(arr.begin(), arr.end());

// // In ra tất cả các hoán vị theo thứ tự từ điển
// do {
//     for (int i = 0; i < N; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// } while (next_permutation(arr.begin(), arr.end()));

// return 0;
// }

// Chương 05 - Bài 06 - F(n)
// #include <iostream>
// #include <unordered_map>
// #define ll long long

// using namespace std;

// unordered_map<ll, ll> memo;

// ll F(ll N) {
//     if (N == 0) return 0;
//     if (N == 1) return 1;
//     if (memo.find(N) != memo.end()) return memo[N];

//     if (N % 2 == 0) {
//         memo[N] = F(N / 2);
//     } else {
//         memo[N] = F(N / 2) + F(N / 2 + 1);
//     }

//     return memo[N];
// }

// int main() {
//     ll N;
//     cin >> N;
//     cout << F(N) << endl;
//     return 0;
// }

// Chương 05 - Bài 05 - CountBit1(n)
// int bitcount(unsigned int N) {
//     int count = 0;
//     while (N) {
//         count += N & 1; // Kiểm tra bit cuối cùng có phải là 1 không
//         N >>= 1; // Dịch chuyển N sang phải 1 bit
//     }
//     return count;
// }

// int main() {
//     unsigned int N;
//     cin >> N;
//     cout << bitcount(N) << endl;
//     return 0;
// }

// Chương 04 - Bài 15 - TSP(n)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// const int INF = 1e9;

// int N;
// vector<vector<int>> cost;
// vector<bool> visited;
// int minCost = INF;

// void travel(int city, int visitedCities, int currentCost) {
//     if (visitedCities == (1 << N) - 1) { // Đã ghé thăm hết các thành phố
//         minCost = min(minCost, currentCost + cost[city][0]); // Cập nhật chi phí nhỏ nhất
//         return;
//     }

//     for (int nextCity = 0; nextCity < N; ++nextCity) {
//         if (!visited[nextCity]) {
//             visited[nextCity] = true;
//             travel(nextCity, visitedCities | (1 << nextCity), currentCost + cost[city][nextCity]);
//             visited[nextCity] = false;
//         }
//     }
// }

// int main() {
//     cin >> N;

//     cost.assign(N, vector<int>(N));
//     visited.assign(N, false);

//     for (int i = 0; i < N; ++i) {
//         for (int j = 0; j < N; ++j) {
//             cin >> cost[i][j];
//         }
//     }

//     visited[0] = true; // Bắt đầu từ thành phố 0
//     travel(0, 1, 0); // Bắt đầu từ thành phố 0, đã ghé thăm thành phố 0

//     cout << minCost << endl;

//     return 0;
// }

// int visited[100], x[100],c[100][100], ans = INT_MAX, n,dis=0;

// cach 2: 7/10
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;

// int n;
// vector<vector<int>> c;
// vector<int> x, visited;
// int dis = 0, ans = INT_MAX;

// void People_visit(int i) {
//     for (int j = 1; j <= n; j++) {
//         if (!visited[j]) {
//             x[i] = j;
//             // Đánh dấu
//             visited[j] = 1;
//             // Tính chi phí từ tp x[i-1] -> x[i]
//             dis += c[x[i - 1]][x[i]];
//             // Tìm chi phí nhỏ nhất
//             if (i == n) {
//                 // Chi phí từ tp n -> 1
//                 ans = min(ans, dis + c[x[n]][1]);
//             } else {
//                 // Duyệt tới tp tiếp theo
//                 People_visit(i + 1);
//             }
//             // Reset lại (backtrack)-> duyệt tổ hợp đường đi mới
//             visited[j] = 0;
//             dis -= c[x[i - 1]][x[i]];
//         }
//     }
// }

// void solve_People_visit() {
//     cin >> n;
//     // Khởi tạo vector c và visited với kích thước n+1
//     c.assign(n + 1, vector<int>(n + 1));
//     visited.assign(n + 1, 0);
//     x.assign(n + 1, 0);

//     // Nhập ma trận chi phí
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) cin >> c[i][j];
//     }
//     x[1] = 1;
//     visited[1] = 1;
//     People_visit(2);
//     cout << ans;
// }

// int main() {
//     solve_People_visit();
//     return 0;
// }

// CuoiKy_KTLT_HK2_2013_Bai1
// #include <bits/stdc++.h>
// using namespace std;

// int sum(int n) {
//     int s=0;
//     for (int i=1;i<=n;i++) s+=i;
//     return s;
// }
// int main() {
//     string s; cin>>s;
//     string token="";
//     stringstream ss(s);
//     vector<string> v;
//     while(getline(ss,token,'X')){
//         v.push_back(token);
//     }
//     int S = 0;
//     for (int i=0;i<v.size();i++) {
//         S += (sum(v[i].size()));
//     }
//     cout <<S;
// }
// // CuoiKy_KTLT_HK2_2013_Bai2
// #include <iostream>
// using namespace std;

// // Hàm đếm số lượng bit 1 trong biểu diễn nhị phân 32 bit của một số nguyên
// int countBits(int n) {
//     // Chuyển n thành số dương để xử lý trường hợp n là số âm
//     unsigned int num = static_cast<unsigned int>(n);
//     int count = 0;
//     while (num) {
//         count += num & 1;  // Kiểm tra bit cuối cùng có phải là 1 không
//         num >>= 1;  // Dịch phải 1 bit
//     }
//     return count;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << countBits(n) << endl;
//     return 0;
// }

// CuoiKy_KTLT_HK2_2013_Bai3
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string S;
//     getline(cin, S); // Đọc toàn bộ dòng bao gồm cả khoảng trắng

//     int lowerCaseCount = 0;
//     int upperCaseCount = 0;
//     int digitCount = 0;
//     int otherCount = 0;

//     for (char c : S) {
//         if (islower(c)) {
//             lowerCaseCount++;
//         } else if (isupper(c)) {
//             upperCaseCount++;
//         } else if (isdigit(c)) {
//             digitCount++;
//         } else {
//             otherCount++;
//         }
//     }

//     cout << lowerCaseCount << " " << upperCaseCount << " " << digitCount << " " << otherCount << endl;

//     return 0;
// }

// CuoiKy_KTLT_HK2_2013_Bai4_Camera
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m, k;
//     cin >> n >> m >> k;
//     vector<vector<int>> v(n, vector<int>(m, 0));

//     int dx[] = {-2, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 2};
//     int dy[] = {0, -1, 0, 1, -2, -1, 0, 1, 2, -1, 0, 1, 0};

//     for (int i = 0; i < k; i++) {
//         int x, y;
//         cin >> x >> y;
//         for (int k = 0; k < 13; k++) {
//             int imoi = x + dx[k];
//             int jmoi = y + dy[k];
//             if (imoi >= 0 && imoi < n && jmoi >= 0 && jmoi < m) {
//                 v[imoi][jmoi] = 1;
//             }
//         }
//     }

//     int cnt = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (v[i][j] == 1) {
//                 cnt++;
//             }
//         }
//     }
//     cout << cnt;
//     return 0;
// }

// // MEETING
// #include<bits/stdc++.h>
// using namespace std;

// bool cmp(pair<int,int> &a,pair<int,int> &b) {
//     return a.second < b.second;
// }
// int main() {
//     vector<pair<int,int>> v;
//     int n; cin>>n;
//     for (int i=0;i<n;i++) {
//         int x,y; cin>>x>>y;
//         v.push_back({x,y});
//     }
//     sort(v.begin(),v.end(),cmp);
//     int cnt=1;
//     int end_t = v[0].second;
//     for (int i=0;i<n;i++) {
//         if(v[i].first>=end_t) {
//             end_t = v[i].second;
//             ++cnt;
//         }
//     }
//     cout <<cnt;
// }

// cach 2
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// Struct để lưu trữ thông tin của mỗi cuộc họp
// struct Meeting {
//     int start;
//     int end;
// };

// // Hàm so sánh để sắp xếp các cuộc họp theo thời gian kết thúc tăng dần
// bool compareMeeting(const Meeting &a, const Meeting &b) {
//     return a.end < b.end;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<Meeting> meetings(n);

//     for (int i = 0; i < n; ++i) {
//         cin >> meetings[i].start >> meetings[i].end;
//     }

//     // Sắp xếp các cuộc họp theo thời gian kết thúc
//     sort(meetings.begin(), meetings.end(), compareMeeting);

//     int count = 0;
//     int last_end_time = 0;

//     for (int i = 0; i < n; ++i) {
//         if (meetings[i].start >= last_end_time) {
//             // Chọn cuộc họp này
//             last_end_time = meetings[i].end;
//             ++count;
//         }
//     }

//     cout << count << endl;
//     return 0;
// }

// CuoiKy_CLC_KTLT_HK2_2019_Bai1
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     long long sum = 0;
//     int n; cin>>n;
//     for(int i=1;i<=n;i++) {
//         long long term = ((i%2==0) ? -1 : 1) *  (1LL * i * (i + 1) / 2);
//         sum+=term;
//     }
//     cout <<sum;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// // Hàm đệ quy để sinh và liệt kê các xâu thỏa mãn yêu cầu
// void generateStrings(int n, string s) {
//     // Nếu độ dài của chuỗi đã đạt đến n thì in chuỗi và kết thúc hàm đệ quy
//     if (s.length() == n) {
//         cout << s << endl;
//         return;
//     }

//     // Nếu kí tự cuối cùng là 'B' thì chỉ có thể thêm 'A' vào sau
//     if (s.length() > 0 && s.back() == 'B') {
//         generateStrings(n, s + 'A');
//     } else {
//         // Nếu kí tự cuối cùng là 'A' hoặc chuỗi rỗng, có thể thêm 'A' hoặc 'B'
//         generateStrings(n, s + 'A');
//         generateStrings(n, s + 'B');
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     // Gọi hàm đệ quy để sinh và liệt kê các xâu thỏa mãn yêu cầu
//     generateStrings(n, "");

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <cmath>

// using namespace std;

// // Hàm chuyển số nhị phân sang số thập phân
// int binaryToDecimal(string binary) {
//     int decimal = 0;
//     int n = binary.length();
//     for (int i = 0; i < n; ++i) {
//         decimal += (binary[i] - '0') * pow(2, n - i - 1);
//     }
//     return decimal;
// }

// // Hàm chuyển số thập phân sang số nhị phân
// string decimalToBinary(int decimal) {
//     if (decimal == 0) return "0";

//     string binary = "";
//     while (decimal > 0) {
//         binary = to_string(decimal % 2) + binary;
//         decimal /= 2;
//     }
//     return binary;
// }

// // Hàm thực hiện thay đổi mức lương của mỗi nhân viên theo yêu cầu
// int maxSalaryAfterBitChange(string salary) {
//     int decimal = binaryToDecimal(salary);
//     // Thay đổi tất cả các bit ở vị trí lẻ thành 1
//     for (int i = 1; i < salary.length(); i += 2) {
//         salary[i] = '1';
//     }
//     return binaryToDecimal(salary);
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<string> salaries(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> salaries[i];
//         salaries[i] = to_string(maxSalaryAfterBitChange(salaries[i]));
//     }

//     // Tìm mức lương cao nhất sau khi thay đổi
//     int maxSalary = 0;
//     for (int i = 0; i < N; ++i) {
//         int decimalSalary = binaryToDecimal(salaries[i]);
//         if (decimalSalary > maxSalary) {
//             maxSalary = decimalSalary;
//         }
//     }

//     cout << maxSalary << endl;

//     return 0;
// }

// // tim nhi phan nho nhat
// #include <iostream>
// #include <vector>
// #include <string>
// #include <bitset> // Include bitset header

// using namespace std;

// // Hàm chuyển đổi dãy bit từ nhị phân sang thập phân
// int binaryToDecimal(const string& binary) {
//     return stoi(binary, nullptr, 2);
// }

// // Hàm chuyển đổi số thập phân sang nhị phân với độ dài n bit
// string decimalToBinary(int decimal, int n) {
//     string binary = bitset<50>(decimal).to_string(); // Chuyển số thập phân sang nhị phân
//     return binary.substr(binary.size() - n); // Trích xuất n bit cuối cùng
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<string> rows(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> rows[i];
//     }

//     // Tìm số nhị phân nhỏ nhất từ các hàng
//     int minDecimal = binaryToDecimal(rows[0]); // Giả sử số nhỏ nhất là số thập phân từ hàng đầu tiên
//     for (const string& row : rows) {
//         int decimal = binaryToDecimal(row); // Chuyển đổi dãy bit từ hàng sang số thập phân
//         minDecimal = min(minDecimal, decimal); // Tìm số thập phân nhỏ nhất từ hàng
//     }

//     // Tìm số nhị phân nhỏ nhất từ các cột
//     for (int j = 0; j < n; ++j) {
//         string column;
//         for (int i = 0; i < n; ++i) {
//             column += rows[i][j]; // Tạo dãy bit từ cột
//         }
//         int decimal = binaryToDecimal(column); // Chuyển đổi dãy bit từ cột sang số thập phân
//         minDecimal = min(minDecimal, decimal); // Tìm số thập phân nhỏ nhất từ cột
//     }

//     // Tìm số nhị phân nhỏ nhất từ đường chéo chính
//     string mainDiagonal;
//     for (int i = 0; i < n; ++i) {
//         mainDiagonal += rows[i][i]; // Tạo dãy bit từ đường chéo chính
//     }
//     int decimal = binaryToDecimal(mainDiagonal); // Chuyển đổi dãy bit từ đường chéo chính sang số thập phân
//     minDecimal = min(minDecimal, decimal); // Tìm số thập phân nhỏ nhất từ đường chéo chính

//     // Tìm số nhị phân nhỏ nhất từ đường chéo phụ
//     string secondaryDiagonal;
//     for (int i = 0; i < n; ++i) {
//         secondaryDiagonal += rows[i][n - 1 - i]; // Tạo dãy bit từ đường chéo phụ
//     }
//     decimal = binaryToDecimal(secondaryDiagonal); // Chuyển đổi dãy bit từ đường chéo phụ sang số thập phân
//     minDecimal = min(minDecimal, decimal); // Tìm số thập phân nhỏ nhất từ đường chéo phụ

//     string minBinary = decimalToBinary(minDecimal, n); // Chuyển số thập phân nhỏ nhất sang nhị phân

//     cout << minBinary; // In ra số nhị phân nhỏ nhất đã tìm được

//     return 0;
// }

// // sum (i^2 -> n)
// return (long long)n * (n + 1) * (2 * n + 1) / 6;

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,m; cin>>n>>m;
//     multiset<int> ms;
//     for (int i=0;i<n;i++) {
//         int x;cin>>x;
//         ms.insert(x);
//     }
//     int ans=0;
//     while(ms.size()>1) {
//         ++ans;
//         // return iterator
//         int max = *ms.rbegin();
//         // erase value of iterator
//         ms.erase(ms.find(max));
//         // tim phan tu lien truoc > m-max (<=m-max)
//         multiset<int>::iterator it = ms.upper_bound(m-max);
//         if(it==ms.begin()) continue; // ko co lien truoc
//         --it;
//         ms.erase(it);
//     }
//     cout <<ans + ms.size();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> m >> n;
//     multiset<int> s;

//     // Gia ve
//     for (int i = 0; i < m; i++) {
//         int x;
//         cin >> x;
//         s.insert(x);
//     }

//     // Khach

//     for (int i = 0; i < n; i++) {
//         int x; cin>> x;
//         auto it = s.upper_bound(x);
//         if(it==s.begin()) cout<<-1<<'\n';
//         else {
//             --it;
//             cout <<*it<<'\n';
//             s.erase(it);
//         }

// }
// }
// Gio cao diem ( so khach nhieu nhat tai mot thoi diem)
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin>>n;
//     map<int,int> mp;
//     for (int i=0;i<n;i++) {
//         int x,y; cin>>x>>y;
//         mp[x]++;
//         mp[y]--;
//     }
//     int ans=0,max_val=INT_MIN;
//     for (auto &it:mp) {
//         ans+=it.second;
//         max_val = max(ans,max_val);
//     }
//     cout <<max_val<<endl;
// }

// Dem cap nghich the so lon
// #include <iostream>
// #include <vector>

// using namespace std;

// long long merge(vector<int>& nums, int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     vector<int> L(n1);
//     vector<int> R(n2);

//     for (int i = 0; i < n1; ++i) {
//         L[i] = nums[left + i];
//     }
//     for (int j = 0; j < n2; ++j) {
//         R[j] = nums[mid + 1 + j];
//     }

//     long long inversions = 0;

//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             nums[k++] = L[i++];
//         } else {
//             nums[k++] = R[j++];
//             inversions += n1 - i; // Đếm số lượng phần tử còn lại trong mảng L
//         }
//     }

//     while (i < n1) {
//         nums[k++] = L[i++];
//     }
//     while (j < n2) {
//         nums[k++] = R[j++];
//     }

//     return inversions;
// }

// long long mergeSort(vector<int>& nums, int left, int right) {
//     long long inversions = 0;
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         inversions += mergeSort(nums, left, mid);
//         inversions += mergeSort(nums, mid + 1, right);

//         inversions += merge(nums, left, mid, right);
//     }
//     return inversions;
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<int> A(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> A[i];
//     }

//     cout << mergeSort(A, 0, N - 1) << endl;

//     return 0;
// }

// // Doi tien X={1,5,7} x=11 -> 5,5,1
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// const int inf = 1e9;

// int main() {
//     int n, x;
//     cin >> n >> x;

//     vector<int> c(n);
//     for (int i = 0; i < n; i++) {
//         cin >> c[i];
//     }

//     sort(c.begin(), c.end()); // Sắp xếp mảng đồng xu

//     vector<int> dp(x + 1, inf);
//     dp[0] = 0;

//     for (int i = 1; i <= x; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i >= c[j]) {
//                 dp[i] = min(dp[i], dp[i - c[j]] + 1);
//             } else {
//                 break; // Sử dụng break khi giá trị i không thể đạt được bằng c[j]
//             }
//         }
//     }

//     if (dp[x] == inf) {
//         cout << -1;
//     } else {
//         cout << dp[x];
//     }

//     return 0;
// }

// Knapsack so lon
// #include <bits/stdc++.h>
// using namespace std;
// const long long inf = 1e18;

// // dp[i][j] : value max khi dang o do vat thu i, suc chua j
// int main() {
//     int n,W;
//     cin>>n>>W;
//     vector<int> w(n),v(n);
//     int sum=0;
//     for (int i=0;i<n;i++) {cin>>w[i]>>v[i] ; sum+=v[i];};
//     vector<long long> dp(sum+1,inf);
//     dp[0]=0;
//     for (int i=0;i<n;i++) {
//         for (int j=sum;j>=v[i];j--) {
//             dp[j] = min(dp[j],dp[j-v[i]] + w[i]);
//     }
//     }
//     for (int i=sum;;i--) {
//         if(dp[i]<=W) {
//             cout <<i;
//             return 0;
//         }
//     }
// }

// Thu lao voi so lon
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Job {
//     long long start;
//     long long end;
//     long long value;
// };

// bool compareJobs(const Job& a, const Job& b) {
//     return a.end < b.end;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<Job> jobs(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> jobs[i].start >> jobs[i].end >> jobs[i].value;
//     }

//     sort(jobs.begin(), jobs.end(), compareJobs);

//     vector<long long> dp(n);
//     dp[0] = jobs[0].value;

//     for (int i = 1; i < n; ++i) {
//         long long currentMaxValue = jobs[i].value;
//         int latestNonConflictJobIndex = -1;
//         for (int j = i - 1; j >= 0; --j) {
//             if (jobs[j].end <= jobs[i].start) {
//                 latestNonConflictJobIndex = j;
//                 break;
//             }
//         }
//         if (latestNonConflictJobIndex != -1) {
//             currentMaxValue += dp[latestNonConflictJobIndex];
//         }
//         dp[i] = max(dp[i - 1], currentMaxValue);
//     }

//     cout << dp[n - 1] << endl;

//     return 0;
// }

// so luong phan doan rieng biet so lon
// phan doan tot neu kh nhiu hon k gia tri rieng biet trong l....r
// #include <iostream>
// #include <map>
// #include <vector>

// using namespace std;

// int countGoodSegments(vector<int>& nums, int k) {
//     map<int, int> count;
//     int distinctCount = 0;
//     int goodSegments = 0;

//     for (int i = 0, j = 0; i < nums.size(); ++i) {
//         if (count[nums[i]] == 0) {
//             distinctCount++;
//         }
//         count[nums[i]]++;

//         while (distinctCount > k) {
//             count[nums[j]]--;
//             if (count[nums[j]] == 0) {
//                 distinctCount--;
//             }
//             j++;
//         }

//         goodSegments += i - j + 1;
//     }

//     return goodSegments;
// }

// int main() {
//     int n, k;
//     cin >> n >> k;

//     vector<int> nums(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> nums[i];
//     }

//     int result = countGoodSegments(nums, k);
//     cout << result << endl;

//     return 0;
// }

// phan doan tot: do lon giua so lon va nho <= k
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int countGoodSegments(vector<int>& nums, int k) {
//     int n = nums.size();
//     int left = 0, right = 0;
//     int maxVal = nums[0], minVal = nums[0];
//     int goodSegments = 0;

//     while (right < n) {
//         // Cập nhật giá trị lớn nhất và nhỏ nhất
//         maxVal = max(maxVal, nums[right]);
//         minVal = min(minVal, nums[right]);

//         // Kiểm tra điều kiện độ lớn giữa số lớn nhất và nhỏ nhất
//         if (maxVal - minVal > k) {
//             // Di chuyển left sang phải để giảm kích thước phân đoạn
//             left++;
//             // Cập nhật lại giá trị lớn nhất và nhỏ nhất trong phân đoạn mới
//             maxVal = *max_element(nums.begin() + left, nums.begin() + right + 1);
//             minVal = *min_element(nums.begin() + left, nums.begin() + right + 1);
//         } else {
//             // Cập nhật số lượng phân đoạn tốt
//             goodSegments += right - left + 1;
//         }

//         // Di chuyển right sang phải để xem xét phân đoạn tiếp theo
//         right++;
//     }

//     return goodSegments;
// }

// int main() {
//     int n, k;
//     cin >> n >> k;

//     vector<int> nums(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> nums[i];
//     }

//     int result = countGoodSegments(nums, k);
//     cout << result << endl;

//     return 0;
// }

// chia tap 1->n thanh 2 tap con có tong bang nhau
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// // Hàm cộng hai số lớn biểu diễn dưới dạng chuỗi
// string addStrings(const string& num1, const string& num2) {
//     int carry = 0;
//     string result;
//     int i = num1.size() - 1, j = num2.size() - 1;

//     while (i >= 0 || j >= 0 || carry) {
//         int sum = carry;
//         if (i >= 0) sum += num1[i--] - '0';
//         if (j >= 0) sum += num2[j--] - '0';
//         carry = sum / 10;
//         result.push_back(sum % 10 + '0');
//     }
//     reverse(result.begin(), result.end());
//     return result;
// }

// // Hàm chia một số lớn biểu diễn dưới dạng chuỗi cho 2
// string divideByTwo(const string& num) {
//     string result;
//     int carry = 0;
//     for (char digit : num) {
//         int current = carry * 10 + (digit - '0');
//         result.push_back(current / 2 + '0');
//         carry = current % 2;
//     }
//     // Xóa các số 0 ở đầu kết quả
//     while (result.size() > 1 && result[0] == '0') {
//         result.erase(result.begin());
//     }
//     return result;
// }

// // Hàm đếm số cách chia tập hợp {1, 2, ..., N} thành hai tập con có tổng bằng nhau
// string countPartitions(int N) {
//     // Tính tổng của các số từ 1 đến N
//     int totalSum = N * (N + 1) / 2;

//     // Nếu tổng là số lẻ, không thể chia thành hai tập con có tổng bằng nhau
//     if (totalSum % 2 != 0) {
//         return "0";
//     }

//     // Tổng của mỗi tập con cần phải là halfSum
//     int halfSum = totalSum / 2;

//     // Mảng dp để lưu số cách để đạt được mỗi tổng từ 0 đến halfSum
//     vector<string> dp(halfSum + 1, "0");
//     dp[0] = "1"; // Có 1 cách để đạt tổng bằng 0 là không chọn số nào

//     // Lặp qua từng số từ 1 đến N
//     for (int i = 1; i <= N; ++i) {
//         for (int j = halfSum; j >= i; --j) {
//             dp[j] = addStrings(dp[j], dp[j - i]);
//         }
//     }

//     // Chúng ta cần chia đôi số cách đếm được vì mỗi cách được tính hai lần (hoán vị của hai tập con)
//     return divideByTwo(dp[halfSum]);
// }

// int main() {
//     int N;
//     cin >> N;
//     cout << countPartitions(N) << endl;
//     return 0;
// }

// dong goi hcn
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll W,H,N;

// bool f(long long mid) {
//     ll w = mid/W;
//     ll h = mid/H;
//     ll total = w*h;
//     return total>=N;

// }
// int main() {
//     cin>>W>>H>>N;
//     ll l=0,r=1;
//     while(!f(r)) r*=2;
//     r++;
//     while(r-l>1) {
//         ll mid = (r+l)/2;
//         if(f(mid)) r = mid;
//         else l = mid;
//     }
//     cout <<r;
//     return 0;
// }

// // tích 8 số xung quanh -> ước nhiều nhâts -> in ra vị trí
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

// #Bai5
// #include <bits/stdc++.h>
// #include <algorithm>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int n,m,X,Y,k;
// vector<vector<int>> v;
// int dx[8]={-1,-1,-1,0,1,1,1,0};
// int dy[8]={-1,0,1,1,1,0,-1,-1};
// void ql(int i,int j){
//             --k;
//             int min_val = INT_MAX;
//             int idx_i,idx_j;
//             FOR(k,0,7) {
//                 int ix = i + dx[k];
//                 int jy = j + dy[k];
//                 if(ix>=1 && ix<=n && jy>=1 && jy<=m) {
//                     if(v[ix][jy]<min_val) {
//                         min_val = v[ix][jy];
//                         idx_i = ix;
//                         idx_j = jy;
//                     }
//                 }
//             }
//             cout <<idx_i<<' '<<idx_j<<' '<<k<<endl;
//             if(idx_i!=1 && idx_j!=1 && k>0) {
//                 ql(idx_i,idx_j);
//             }
//             else if(idx_i!=1 && idx_j!=1 && idx_i!=4 && idx_j!=4 && k==0 ) {
//                 cout<<"NO\n";
//                 cout <<idx_i<<' '<<idx_j<<endl;
//                 return;
//             }
//             else if((idx_i==1 || idx_j==1 || idx_i==4 || idx_j==4 ) && (k>0)) {
//                 cout <<"YES\n";
//                 cout <<k;
//                 return;
//             }

// }

// int main() {
//     cin>>n>>m;
//     v.resize(n + 1, vector<int>(m + 1));
//     cin>>X>>Y>>k;
//     FOR(i,1,n) {
//         FOR(j,1,m) {
//             cin>>v[i][j];
//         }
//     }
//     if(X==1 || Y==1 || X==4 || Y==4) {
//         cout <<"YES";
//         return 0;
//     }
//     else
//     ql(X,Y);
// }

// 4 4
// 3 3
// 1
// 14 15 4 3
// 1 2 7 12
// 13 11 6 10
// 9 5 8 16

// CONTEST_002 : Bài 5
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int x, y;
//     cin >> x >> y;
//     int k = 0;

//     while (true) {
//         k++;
//         // Nam's turn
//         if (x >= 2 && y >= 2) {
//             x -= 2;
//             y -= 2;
//         } else if (x >= 1 && y >= 12) {
//             x -= 1;
//             y -= 12;
//         } else if (y >= 22) {
//             y -= 22;
//         } else {
//             cout << "Minh" << endl;
//             cout << k << endl;
//             break;
//         }

//         k++;
//         // Minh's turn
//         if (y >= 22) {
//             y -= 22;
//         } else if (x >= 1 && y >= 12) {
//             x -= 1;
//             y -= 12;
//         } else if (x >= 2 && y >= 2) {
//             x -= 2;
//             y -= 2;
//         } else {
//             cout << "Nam" << endl;
//             cout << k << endl;
//             break;
//         }
//     }

//     return 0;
// }

// CONTEST_001 : Bài 4
// #include <iostream>
// #include <vector>

// // ko dc nhay vao o 0 , khac 2 , khac 0 -> tang gia tri len 1 don vi
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     bool ok = false;
//     int cnt = 0;
//     int dx[4] = {-1, 0, 1, 0};
//     int dy[4] = {0, 1, 0, -1};
//     vector<vector<int>> v(n, vector<int>(m));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//             cin >> v[i][j];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//              if (v[i][j])
//             {
//                 if (ok)
//                 {
//                     ++cnt;
//                     ok = false;
//                 }
//                 for (int k = 0; k < 4; k++)
//                 {
//                     int ix = i + dx[k];
//                     int jy = j + dy[k];
//                     if (ix >= 0 && ix < n && jy >= 0 && jy < m && v[ix][jy] != 2 && v[ix][jy] != 0)
//                     {
//                         v[ix][jy]++;
//                         ok = true;
//                     }
//                 }
//             }
//         }
//     }
//     cout << cnt;
// }

// 123 = 12^3 => cong chuoi Y = 123 + 123 == 12^3 + 12^3 

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// using namespace std;

// int main() {
//     char s[100];
//     int sum = 0;
//     scanf("%[^\n]",s);
//     const char* d = " Y+=";
//     char* token = strtok(s,d);
//     while(token!=NULL) {
//         int num = atoi(token);
//         int exp = num%10;
//         int curr = num/10;
//         int kq = 1;
//         for (int i=1;i<=exp;i++) {
//             kq*=curr;
//         }
//         sum+=kq;
//         token = strtok(NULL,d);
//     }
//     printf("%d",sum);
//     return 0;
    
// }

// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// // syn: <datatype_return> + <operator> + <+,-,...>
// struct point{
//     int x,y;
//     friend istream& operator >> (istream &in,point &p);
//     friend ostream& operator << (ostream &os,point &p);
// };
// bool sort_greater(point &p1,point &p2) {
//         if(p1.x==p2.x) return p1.y<p2.y ;
//         if(p1.y==p2.y) return p1.x<p2.x ;
//         return p1.x < p2.x && p1.y<p2.y; 
//     }
// istream& operator >> (istream &in,point &p ) {
//     return in>>p.x>>p.y;
// }
// ostream& operator << (ostream &os,point &p) {
//     return os<<p.x<<' '<<p.y;
// }

// double distance(point &p1, point &p2) {
//     return sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));
// }



// int main() {
//     // int size; cin>>size;
//     // vector<point> p(size);
//     // FOR(i,0,size-1) cin>>p[i];
//     // sort(p.begin(),p.end(),sort_greater);
//     // FOR(i,0,size-1) cout <<p[i]<<' ';
//     // point p1,p2; cin>>p1>>p2;
//     // cout <<distance(p2,p1);
// }


// MT1-Array1D-2022-11-24-Bai5 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin>>n;
//     vector<int> v(n);
//     for (int &it:v) cin>>it;
//     int cnt=0,i=0;
//     while(i<n-1) {
//         if(v[i]==v[i+1]) {
//             int s = i;
//             while(i<n-1 && v[i] == v[i+1]) {
//                 ++i;
//             }
//             if(i-s+1>=2) ++cnt;
//         }
//         ++i;
//     }
//     cout <<cnt<<endl;
// }

// MT1-Array1D-202211-24-Bai4
// #include <iostream>

// #define ll long long

// using namespace std;

// int  main(){

//     int n, x, dem=0; cin >> n;

//     ll tich=1;

//     for (int i=0; i<n; i++){

//         cin >> x;

//         tich*=x;

//         while (tich!=0){

//             if (tich%10==0){

//                 tich/=10;

//                 dem++;

//             }

//             else break;

//         }

//     }

//     cout << dem;

// }

// MT1-Array1D-2022-11-24-Bai3 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     long long n; cin>>n;
//     vector<long long> v(n);
//     for (long long &it:v) cin>>it;
//     sort(v.begin(),v.end());
//     int i=n-1,j=n-2;
//     while(i>=0 && j>=0) {
//         if(v[i]!=v[j]) {
//             cout <<v[i]*v[j];
//             return 0;
//         }
//         --j;
//     }
//     cout <<0;
// }

// MT1-Array1D-2022-11-24-Bai2 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Tính tổng của toàn bộ mảng
    int totalSum = 0;
    for (int num : a) {
        totalSum += num;
    }

    int leftSum = 0; // Tổng của phần a[0..i]
    for (int i = 0; i < n; ++i) {
        leftSum += a[i]; // Cộng dần từng phần tử vào tổng của phần a[0..i]

        // Nếu tổng của phần a[0..i] bằng với tổng của phần còn lại (totalSum - leftSum)
        // thì đó chính là vị trí cần tìm
        if (leftSum == totalSum - leftSum) {
            cout << i;
            return 0;
        }
    }

    // Nếu không có vị trí nào thỏa mãn
    cout << -1;

    return 0;
}

// 5
// 1 1 1 2 1