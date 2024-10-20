// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// #define MOD 10000007
// using ll = long long;

// mua n cuon giam cuon thu 3i; (giam dan)
// int a[100];
// int main() {
//     int n; cin>>n;
//     for (int i=1;i<=n;i++) {
//         cin>>a[i];
//     }
//     for (int i=1;i<=n;i++) {
//         for (int j= i +1;j<=n;j++) {
//             if(a[j]>a[i]) swap(a[j],a[i]);
//         }
//     }
//     int sum=0;
//     for (int i=1;i<=n;i++) {
//         if(i%3==0) continue;
//         sum+=a[i];
//     }
//     cout <<sum;

// }

// boc soi : n vien soi moi lan boc toi da m vien
// int n,m;
// void UserPlay() {
//     int x; cout <<"Nhap vao so da: ";
//     cin>>x;
//     if(x>m || x>n) cout <<"nhap lai: ";
//     else {
//         UserPlay;
//     }
//     n-=x;
// }

// void BotPlay() {
//     if(n%(m+1) == 0) {
//         cout <<"Bot boc 1 vien";
//         n--;
//     }
//     else {
//         int x = n % (m+1);
//         cout << "Bot boc "<<x<<" vien"<<endl;
//         n-=x;
//     }
// }

// void Show() {
//     cout <<"So da con lai: "<< n << endl;
// }

// int main() {
//     cin>>n>>m;
//     while(true) {
//         Show();
//         UserPlay();
//         if(n==0) {cout <<"Ban thang";return 0;}
//         BotPlay();
//         if(n==0) {cout <<"May thang";return 0;}
//     }
// }

// #1:doi tien
// int tien[] = {1000,500,200,100,50,20,10,5,2,1};

// void solve1() {
//     int cnt = 0 , idx = 0;
//     int n; cin>>n;
//     while(n) {
//         cnt+=n/tien[idx];
//         n%=tien[idx];
//         idx++;
//     }
//     cout <<cnt;

// }

// int main() {
//     solve1();
// }

// #2: 5->6 , 6->5 in tong max/min

// int cnt_5=0,cnt_6=0;
// void dem(string s) {
//     for (int i=0;i<s.size();i++) {
//         if(s[i] == '5') ++cnt_5;
//         else if(s[i] == '6') ++cnt_6;
//     }
// }
// void solve2() {
//     string s1,s2; cin>>s1>>s2;
//     dem(s1);dem(s2);
//     cout <<"Max: "<<stod(s1) + stod(s2) + cnt_5<<"\n";
//     cout <<"Min: "<<stod(s1) + stod(s2) - cnt_6 ;
// }

// int main() {
//     solve2();
// }

// #3: Max Product sum  (sum Ai*i)
// void solve3() {
//     int n; cin>>n; int a[n];
//     for (auto &it:a) cin>>it;
//     sort(a,a+n);
//     ll sum = 0;
//     for (int i=n-1;i>=0;i--) {
//         sum+=(1ll*a[i]*i);
//         sum%=MOD;
//     }
//     cout <<sum;
// }

// int main() {
//     solve3();
// }

// #4: chia tap 2 mang (k , n-k :phan tu sao cho hieu hai mang lon nhat)



// void solve4_c2()
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     for (auto &it : a)
//         cin >> it;
//     sort(a, a + n);
//     int s1 = 0, s2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (i < k)
//             s1 += a[i];
//         else
//             s2 += a[i];
//     }
//     cout << s2 - s1;
// }


// logic math
// sk + sn-k =s
// sk - sn-k = max
// => max = abs(2*sk-s)
// sk min = sum k phan tu dai tien dc sap xep
// void solve4_c3() {
//     int n,k,s=0,sk=0; cin>>n>>k;
//     vector<int> a(n);
//     for (auto &it:a) {
//         cin>>it; s+=it;
//     }
//     sort(a.begin(),a.end());
//     for (int i=0;i<k;i++) {
//         sk+=a[0];
//     }
//     cout <<abs(s-s*sk)<<endl;
// }
// int main() {
//     solve4_c2();
// }

// #6
// Dao mang
// Ví dụ với mảng A[] = {1, 6, 3, 4, 5, 2, 7} ta có câu trả lời là Yes vì: ta chọn mảng con {3,
// 4, 5} và đảo ngược để nhận được mảng A[]={1, 6, 5, 4, 3, 2, 7}, chọn tiếp mảng con {6,
// 5, 4, 3, 2} và đảo ngược ta nhận được mảng A[]={1, 2, 3, 4, 5, 6, 7}. Hãy cho biết ta có
// thể sắp xếp được mảng A[] bằng cách thực hiện các thao tác kể trên hay không?
// bool solve() {
//     int n; cin>>n;
//     vector<int> v(n);
//     for (auto &it:v) cin>>it;
//     vector<int> res(v);
//     sort(res.begin(),res.end());
//     for (int i=0;i<n;i++) if(res[i]!=v[i] && res[i]!=v[n-i-1]) return false;
//     return true;
// }

// int main() {
//     if(solve()) cout <<"YES";
//     else cout <<"NO";
// }

// #7
//  Cho mảng A[], B[] đều có N phần tử. Nhiệm vụ của bạn là tìm giá trị nhỏ nhất của biểu
// thức P = A[0]*B[0] + A[1]*B[1] + ..+A[N-1]*B[N-1] bằng cách tráo đổi vị trí các phần
// tử của cả mảng A[] và B[].

// void solve() {
//     int n; cin>>n;
//     vector<int> a(n),b(n);
//     for (auto &it:a) cin>>it;
//     for (auto &it:b) cin>>it;
//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());
//     int s = 0;
//     for (int i=0;i<n;i++) {
//         s+=(a[i]*b[n-i-1]);
//     }
//     cout <<s;
// }

// int main() {
//     solve();
// }

// #8
// Cho hệ gồm N hành động. Mỗi hành động được biểu diễn như một bộ đôi <Si, Fi> tương
// ứng với thời gian bắt đầu và thời gian kết thúc của mỗi hành động. Hãy tìm phương án
// thực hiện nhiều nhất các hành động được thực hiện bởi một máy hoặc một người sao cho
// hệ không xảy ra mâu thuẫn.
//  Dòng đầu tiên đưa vào số lượng bộ test T.
//  Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất
// đưa vào số lượng hành động N; dòng tiếp theo đưa vào N số Si tương ứng với thời
// gian bắt đầu mỗi hành động; dòng cuối cùng đưa vào N số Fi tương ứng với thời
// gian kết thúc mỗi hành động; các số được viết cách nhau một vài khoảng trống.
//  T, N, Si, Fi thỏa mãn ràng buộc: 1≤T≤100; 1≤N, Fi, Si≤1000.

// 1
// 6
// 1 3 0 5 8 5
// 2 4 6 7 9 9
// out : 4
// bool cmp(pair<int, int> a, pair<int, int> b)
// {
//     return a.second < b.second;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         pair<int, int> p[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> p[i].first >> p[i].second;
//         }
//         sort(p, p + n, cmp);
//         int cnt = 1;
//         int res = p[0].second; // Khởi tạo res bằng giá trị của phần tử đầu tiên
//         for (int i = 1; i < n; i++)
//         {
//             if (p[i].first > res)
//             { // So sánh giá trị của phần tử thứ i với res hiện tại
//                 res = p[i].second;
//                 ++cnt; // Cập nhật res nếu giá trị mới lớn hơn
//             }
//         }
//         cout <<cnt<<endl;
//     }
// }
// 1
// 6
// 1 3 0 5 8 5
// 2 4 6 7 9 9
// 4

// // #9
// Cho N công việc. Mỗi công việc được biểu diễn như một bộ 3 số nguyên dương <JobId, 
// Deadline, Profit>, trong đó JobId là mã của việc, Deadline là thời gian kết thúc của việc, 
// Profit là lợi nhuận đem lại nếu hoàn thành việc đó đúng thời gian. Thời gian để hoàn toàn 
// mỗi công việc là 1 đơn vị thời gian. Hãy cho biết lợi nhuận lớn nhất có thể thực hiện các 
// việc với giả thiết mỗi việc được thực hiện đơn lẻ.

// #include<bits/stdc++.h>
// using namespace std;


// struct Job {
//     int id,deadline,profit;
// };
// bool cmp(Job a, Job b) {
//     return a.deadline>b.deadline;
// }
// int main() {
//     int n; cin>>n;Job a[n];
//     for (int i=0;i<n;i++) {
//         cin>>a[i].id>>a[i].deadline>>a[i].profit;
//     }
//     sort(a,a+n,cmp);
//     priority_queue<int> pq;
//     int cur_date = a[0].deadline;
//     int idx=0,res=0;
//     while(cur_date>=1) 
//         while(idx<n && a[idx].deadline>=cur_date){{
//             pq.push(a[idx].profit);
//             idx++;
//         }
//         if(!pq.empty()) {
//             res+=pq.top();
//             pq.pop();
//         }
//         cur_date--;
//     }
//     cout <<res;
// }

// 4
// 1 4 20
// 2 1 10
// 3 1 40
// 4 1 30

// #10 Noi day 
// Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. Nhiệm vụ của bạn là nối N
// sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. Biết chi phí nối sợi dây
// thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A[i] và A[j].



// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;cin>>n;
//     vector<int> v(n);
// giam dan 
//     priority_queue<int,vector<int>,greater<int>> pq;
// tang dan 
// priority_queue<ll> pq;
//     for (auto &x:v) {
//         int x; cin>>x;
//         pq.push(x);
//     }
//     long long res=0;
//     while(!(pq.empty())) {
//         int s1 = pq.top();pq.pop();
//         int s2 = pq.top();pq.pop();
//         res+=(t1+t2);
//         pq.push(t1+t2);
//     }
//     cout <<res;
// }
// 4
// 4 3 2 6
// 3-2(5) 5-4(9) 9-6(15) : 5 + 9 16 = 29 
// 29

// #17

// tinh tong binh phuong so lan xh sau khi thuc hien xoa k ki tu 
// tim tong nho nhat -> push tan xuat vao pq : tan xuat lon nhat o day pq -> xoa 
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int k; cin>>k;
//     string s; cin>>s;
//     int d[256]={0};
//     for (auto x:s) d[x]++;
//     priority_queue<int> pq;
//     for (int i=0;i<256;i++) {
//         if(d[i]) pq.push(d[i]);
//     }
//     while(pq.size() &p&  k--) {
//         int u = pq.to();pq.pop();
//         if(u-1>=1) pq.push(u-1);
//     }
//     long long res = 0;
//     while(!(pq.empty())){
//         int u=pq.top();pq.pop();
//         res+=(long long)*u*u;
//     }
// }

// #12 Cho xâu ký tự S bao gồm các ký tự in thường. Nhiệm vụ của bạn là kiểm tra xem ta có
// thể sắp đặt lại các ký tự trong S để hai ký tự giống nhau đều không kề nhau hay không?
// Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa
// ra -1.

// -> tan xuat ki tu lon nhat <= len/2 + 1(len le) else <=n/2  : 1 