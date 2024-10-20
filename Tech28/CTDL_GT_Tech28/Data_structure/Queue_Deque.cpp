
// 1. Queue
// queue (hàng đợi) là một cấu trúc dữ liệu tuân theo nguyên tắc FIFO (First In First Out), nghĩa là phần tử được thêm vào trước sẽ được lấy ra trước.

// Các đặc điểm chính:
// Chỉ cho phép thêm phần tử vào cuối hàng đợi và lấy phần tử ra từ đầu hàng đợi.
// Không cho phép truy cập trực tiếp các phần tử giữa hàng đợi.
// Các thao tác chính:
// push(): Thêm phần tử vào cuối hàng đợi.
// pop(): Loại bỏ phần tử ở đầu hàng đợi.
// front(): Truy cập phần tử ở đầu hàng đợi.
// back(): Truy cập phần tử ở cuối hàng đợi.
// empty(): Kiểm tra xem hàng đợi có rỗng hay không.
// size(): Trả về số lượng phần tử trong hàng đợi.

// 2. Deque
// deque (double-ended queue - hàng đợi hai đầu) là một cấu trúc dữ liệu cho phép chèn và xóa phần tử ở cả hai đầu (đầu và cuối) của hàng đợi.

// Các đặc điểm chính:
// Cho phép thêm và loại bỏ phần tử ở cả hai đầu của hàng đợi.
// Cho phép truy cập ngẫu nhiên tới các phần tử giữa hàng đợi.
// Các thao tác chính:
// push_front(): Thêm phần tử vào đầu hàng đợi.
// push_back(): Thêm phần tử vào cuối hàng đợi.
// pop_front(): Loại bỏ phần tử ở đầu hàng đợi.
// pop_back(): Loại bỏ phần tử ở cuối hàng đợi.
// front(): Truy cập phần tử ở đầu hàng đợi.
// back(): Truy cập phần tử ở cuối hàng đợi.
// operator[]: Truy cập phần tử ngẫu nhiên trong hàng đợi.
// empty(): Kiểm tra xem hàng đợi có rỗng hay không.
// size(): Trả về số lượng phần tử trong hàng đợi.

// *Queue Tech
// // ctdl hang doi
// // syntax : queue <int> q;
// // hang doi :vd push(1),(2),.. -> queue(hang doi) :4 3 2 1
// // push : vao trai
// // pop : xoa 1 value ben phai
// // empty:
// // size
// // front : lay 1 value ben phai (value do van con)

// // in ra cac so nhi phan tu 1 -> n
// #include <bits/stdc++.h>
// using namespace std;
// vector<string> res;
// void init()
// {
//     queue<string> q;
//     q.push("1");
//     res.push_back("1");
//     while (res.size() < 1000)
//     {
//         string top = q.front();
//         q.pop(); // xoa phan tu dau hang doi
//         // khoi tao so nhi phan
//         res.push_back(top + "0"); // 10,100,110..
//         res.push_back(top + "1"); // 11,111,101,...
//         // day cap moi vao hang doi
//         q.push(top + "0");
//         q.push(top + "1");
//     }
// }
// void solve()
// {
//     init();
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//         cout << res[i] << " ";
// }

// int main() {
//     solve();
// }

// // tim so min chi bao gom so 0 vs 9 ma chia het cho n

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// int solvebai2(int n)
// {
//     queue<string> q;
//     q.push("9");
//     while (1)
//     {
//         string top = q.front();
//         q.pop();
//         ll temp1 = stoll(top + "0");
//         ll temp2 = stoll(top + "9");
//         if (temp1 % n == 0)
//             return temp1;
//         else if (temp2 % n == 0)
//             return temp2;
//         q.push(top + "0");
//         q.push(top + "9");
//     }
// }

// int main()
// {
//     cout << solvebai2(3);
// }

// // liet ke cac so loc phat (6,8) ko qua n chu co
// void solvebai3(){
//     vector <string> v;
//     int n;cin>>n;
//     queue <string> q;
//     q.push("8");
//     v.push_back("8");
//     q.push("6");
//     v.push_back("6");
//     bool ok = true;
//     while(1){
//         string top = q.front();
//         if(top.size()==n) break;
//         q.pop();
//         v.push_back(top+"6");
//         v.push_back(top+"8");
//         q.push(top+"6");
//         q.push(top+"8");
//     }
//     for (auto&x:v) cout <<x<<" ";

// }
// // tinh so bc dich chuyen it nhat
// // vd s=2,t=5 -> co 4 bc :
// // 2*2 = 4 , 4-1 = 3, 3*2 =6 , 6-1 =5
// // 2 5 -> 4

// #include <bits/stdc++.h>
// using namespace std;

// int solvebai4()
// {
//     int S, T;
//     cin >> S >> T;
//     queue<pair<int, int>> q;
//     set<int> se;
//     // luu value vao set de tranh bi lap
//     se.insert(S);
//     // {gia tri hien tai , so bc}
//     q.push({S, 0});
//     while (!q.empty())
//     {
//         pair<int, int> top = q.front();
//         q.pop();
//         if (top.first == T)
//             return top.second;
//         if (top.first * 2 == T || top.first - 1 == T)
//             return top.second + 1;
//         // tim value da co trong set chx neu chua thi push vao q
//         if (se.find(top.first * 2) == se.end() && top.first < T)
//         {
//             // do nho hon T nen so bc Cong 1
//             q.push({top.first * 2, top.second + 1});
//             // luu vao set de kiem tra cho cac value khac
//             se.insert(top.first * 2);
//         }
//         if (se.find(top.first - 1) == se.end() && top.first > 1)
//         {
//             q.push({top.first - 1, top.second + 1});
//             se.insert(top.first - 1);
//         }
//     }
// }

// int main()
// {
//     cout << solvebai4();
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int s,t; cin>>s>>t;

//     queue<pair<int,int>> q;
//     set<int> se;

//     q.push({s,0});
//     se.insert(s);

//     while(!q.empty()) {
//         auto [cur,step] = q.front(); q.pop();

//         if(cur == t) {
//             cout <<step;
//             return 0;
//         }
//         if(cur*2 == t || cur-1 == t) {
//             cout <<step+1;
//             return 0;
//         }

//         if(cur<t && se.find(cur*2)==se.end()) {
//             se.insert(cur*2);
//             q.push({cur*2,step+1});
//         }

//         if(cur>1 && se.find(cur-1)==se.end()){
//             se.insert(cur-1);
//             q.push({cur-1,step+1});
//         }
//     }
// }
// // duong di ngan nhat tren luoi
// // input : m,n,s,e -> dung pair luu toa do , queue de duyet duong di
// // s : toa do ban dau , e toa do can den
// // idea : dung queue de luu toa do hien tai + phep loang 2D de duyet tat ca cac duong di ,
// // khi gap dich thi return d + 1 (d : distance trc do) neu ko thi push vao queue va cap nhat distance = d +1;
// int d[100][100];
// int a[100][100];
// int dx[4]={-1,0,1,0};
// int dy[4]={0,1,0,-1};
// pair<int,int> s,e;
// int m,n;
// void inp(){
//     cin>>m>>n>>s.first>>s.second>>e.first>>e.second;
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++)cin>>a[i][j];
//     }
//     memset(d,0,sizeof(d));
// }
// int check(){
//      // luu td vao hang doi
//     queue<pair<int,int>> p;
//     p.push({s.first,s.second});
//     // distance co so = 0
//     d[s.first][s.second]=0;
//     while(!p.empty()){
//         pair<int,int> top = p.front();
//         // pop de tranh lay lai toa do trc do
//         p.pop();
//         // lay i,j ra de kt phan tu lan can
//         int i=top.first;
//         int j=top.second;
//         for (int k=0;k<4;k++){
//             int imoi=i+dx[k];
//             int jmoi=j+dy[k];
//             if(a[imoi][jmoi] && imoi >=0 && imoi<m && jmoi>=0 && jmoi<n) {
//                 a[imoi][jmoi]=0 ; // de ko duyet lai
//                if(imoi == e.first && jmoi == e.second)
//                // distance moi =  distance trc do(i,j) + 1;
//                return  d[i][j]+1;
//                // day vao hang doi de kiem tra i,j lan can tiep theo
//                p.push({imoi,jmoi});
//                d[imoi][jmoi]=d[i][j]+1;
//             }
//         }
//     }
//     // ko tim thay duong di ngan nhat
//     return -1;
// }
// void solvebai5(){
//     inp();
//     // toa do dau va cuoi phai =1 -> tao duong di ngan nhat chi toan 1
//     if(a[s.first][s.second] && a[e.first][e.second]) {
//         cout <<check();
//     }
// }

// int main(){
//     solvebai5();
// }
// // 9 10 0 0 3 4
// // 1 0 1 1 1 1 0 1 1 1
// // 1 0 1 0 1 1 1 0 1 1
// // 1 1 1 0 1 1 0 1 0 1
// // 0 0 0 0 1 0 0 0 0 1
// // 1 1 1 0 1 1 1 0 1 0
// // 1 0 1 1 1 1 0 1 0 0
// // 1 0 0 0 0 0 0 0 0 1
// // 1 0 1 1 1 1 0 1 1 1
// // 1 1 0 0 0 0 1 0 0 1
// // -> 11

// *Deque Tech :
// #include <bits/stdc++.h>
// using namespace std;

// // deque : FIFO(first in first out)
// // syntax: deque<int> d;
// // push_front/back(): day vao dau/sau
// // pop_front/back():xoa day/sau
// // size();
// //front():lay phan tu dau(phai)
// // back(): lay phan tu cuoi(trai)
// // empty()

// // sliding windown maximum : 9 3  array :7 3 1 2 8 6 4 1 0 -> 7(7 3 1) 3 8 8 8 6 4
// // c1
// void slidingwindown(){
//     int n, k; cin>>n>>k; int a[n];
//     for (auto&x:a) cin>>x;
//     for (int i=0;i<=n-k;i++) {
//         int tmp=a[i];
//         for (int j=i;j<=i+k-1;j++){
//             tmp = max(tmp,a[j]);
//         }
//         cout <<tmp<<" ";
//     }
// }

// // c2
// void slidingwindown2(){
//     int n,k;cin>>n>>k;
//     int a[n];
//     for (auto&x:a) cin>>x;
//     multiset<int> ms;
//     // tao 1 slidedown co so
//     for (int i=0;i<k;i++){
//         ms.insert(a[i]);
//     }
//     // 1 3 7 ..
//     // xoa value theo mang nhung sx theo multiset
//     for (int i=k;i<n;i++){
//          ms.erase(ms.find(a[i-k])) ; // xoa phan tu dau tien cua mang a[i] trong slide ms tiep theo
//         // 3 1 (xoa 7)
//          ms.insert(a[i]); // chen phan tu moi vao slide
//          // 1 2 3
//          cout <<*ms.rbegin()<<" ";
//     }
// }
// // dung deque
// void slidedown3(){
//     int n,k; cin>>n>>k; int a[n];
//     for (auto&x:a) cin>>x;
//     deque<int> d;
//     for (int i=0;i<k;i++){
//         // cout <<a[d.back()]<<endl;
//         while(!d.empty() && a[i]>a[d.back()]) {
//             d.pop_back();
//         }
//         d.push_back(i);
//     }
//     cout <<a[d.front()]<<" ";
//     for (int i=k;i<n;i++){
//         // xoa value neu nam ngoai slidedown
//         if(d.front()<=i-k) d.pop_front();
//         while(!d.empty() && a[i]>=a[d.back()]) {
//             d.pop_back();
//         }
//         d.push_back(i);
//         cout <<a[d.front()]<<" ";
//     }
// }

// // ctdt hang doi uu tien
// // priority_queue : value top max
// // push
// // size
// // empty
// // top
// // pop

// // in ra phan tu min dung priority queue
// void ex(){
//     priority_queue <int , vector<int> ,greater<int>> pq;
//     pq.push(1);
//     pq.push(2);
//     pq.push(3);
//     cout <<pq.top(); // 1
// }
// // in ra phan tu max
// void ex2(){
//     priority_queue <int> pq;
//     pq.push(1);
//     pq.push(2);
//     pq.push(3);
//     cout <<pq.top(); //3
// }
// // bai toan noi day , value = price , tim price min khi noi 2 sợi dây
// // vd : 4 3 2 6 -> 4 5 6 (5) -> 9 6 (9) -> 15 (15) -> tong chi phí = 5 + 9 + 15 = 29
// void solveproblem(){
//     int n; cin>>n;int a[n];
//     priority_queue<int ,vector<int>,greater<int>> pq;
//     for (auto&x:a) {
//         cin>>x ;
//         pq.push(x);
//     }
//    long long s=0;
//    while(pq.size()>1) {
//     // cong 2 phan tu nho nhat
//     long long top1 = pq.top(); pq.pop();
//     long long top2 = pq.top(); pq.pop();
//     s+= top1 + top2;
//     // push tong 2 phan tu do
//     pq.push(top1 + top2);
//    }
//    cout <<s;
// }
// // gia tri nho nhat xau :in: ABCC (vs k)-> 1^2 + 1^2 + 2^2 = 6 .xoa k(vd k=1) ki tu - 1^2 +1^2 + 1^2 =3 (out)
// // tong binh phuong tan xuat xh cua cac ki tu . cho phep xoa k ki tu -> in ra gia tri min
// void solveproblem2(){
//     string s;int k;cin>>s>>k;
//     map<char,int> mp;
//     for (auto&x:s) mp[x]++;
//     priority_queue<int> pq ;
//     // luu tan so vao priority
//    for (auto&x:mp) {
//     pq.push(x.second);
//    }
//     while(k>0){
//      int top = pq.top(); pq.pop();
//      --k;--top;
//      // de phong k > size S : (top ko am)
//      top=max(top,0);
//      pq.push(top);
//     }
//     long long ans=0;
//     while(!pq.empty()) {
//         // tong binh phuong tan xuat
//          ans+=pq.top()*pq.top();
//          pq.pop();
//     }
//     cout <<ans;
// }
// int main(){
//     solveproblem2();
// }

// BT
// #DSA08001
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     queue<int> q;
//     int t ; cin>>t;
//     while(t--) {
//         int n; cin>>n;
//         while(n--) {
//             int x; cin>>x;
//             if(x==1) {
//                 cout <<q.size();
//             }
//             else if(x==2) {
//                 if(q.empty()) cout <<"YES";
//                 else cout <<"NO";
//             }
//             else if(x==3) {
//                 int num; cin>>num;
//                 q.push(num);
//             }
//             else if(x==4) {
//                 if(q.empty()) cout <<-1;
//                 else q.pop();
//             }
//             else if(x==5) {
//                 if(q.empty()) cout <<-1;
//                 else cout <<q.back();
//             }
//         }
//     }
// }

// #DSA08002
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     queue<int> q;
//     int t; cin>>t;
//     while(t--) {
//         string s; cin>>s;
//         if(s=="PRINTFRONT") {
//                 if(q.empty()) cout <<"NONE";
//                 else cout <<q.front();
//         }
//         else if(s=="POP") {
//             if(q.empty()) continue;
//             else q.pop();
//         }
//         else {
//             int n ; cin>>n;
//             q.push(n);
//         }
//     }
// }

// #DSA08003
// #include <algorithm>
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     vector<int> result;
//     deque<int> dq;
//     int t;
//     cin >> t;
//     cin.ignore(); // To consume the newline character after reading t
//     while(t--) {
//         string s;
//         getline(cin, s);
//         if(s == "PRINTBACK") {
//             if(!dq.empty()) {
//                 result.push_back(dq.back());
//             } else {
//                 cout << "NONE\n";
//             }
//         }
//         else if(s == "POPFRONT") {
//             if(!dq.empty()) dq.pop_front();
//         }
//         else if(s == "POPBACK") {
//             if(!dq.empty()) dq.pop_back();
//         }
//         else if(s == "PRINTFRONT") {
//             if(dq.empty()) {
//                 cout << "NONE\n";
//             } else {
//                 result.push_back(dq.front());
//             }
//         }
//         else {
//             if (isdigit(s[s.size() - 1]))
//             {
//                 int x = stoll(s.substr(s.size() - 1, 1));
//                 if (s[s.size() - 3] == 'T')
//                 {
//                     dq.push_front(x);
//                 }
//                 else
//                     dq.push_back(x);
//             }
//         }
//     }

//     for(auto it : result) {
//         cout << it << endl;
//     }

//     return 0;
// }

// #DSA08005
// 1 10 11 100 101 110 111 ,..

// #include<bits/stdc++.h>
// using namespace std;

// void bin(int n){
//     vector<int> result;
//     while(n){
//         result.push_back(n%2);
//         n/=2;
//     }
//     reverse(result.begin(),result.end());
//     for (auto it:result) cout <<it;
// }

// int main() {
//     int k; cin>>k;
//     for (int i=1;i<=k;i++) {bin(i);if(i!=k) cout <<' ';}
// }

// cach2 : dung queue
// #include <bits/stdc++.h>
// using namespace std;

// void generateBinNum(int n)
// {
//     queue<string> q;
//     q.push("1");
//     for (int i = 1; i <= n; i++)
//     {
//         string current = q.front();
//         q.pop();
//         cout << current << ' ';
//         q.push(current + "0");
//         q.push(current + "1");
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     generateBinNum(n);
// }

// #DSA08006.
// #include <iostream>
// #include <queue>
// #include <set>
// #include <string>

// using namespace std;

// string findSmallestMultiple(int N) {
//     queue<string> q;
//     set<int> visited; // To avoid processing the same remainder more than once

//     q.push("9");
//     while (!q.empty()) {
//         string current = q.front();
//         q.pop();

//         // Convert current string to number
//         long long num = stoll(current);

//         // Check if the current number is divisible by N
//         if (num % N == 0) {
//             return current;
//         }

//         // Get the remainder when num is divided by N
//         int remainder = num % N;

//         // If this remainder hasn't been encountered before
//         if (visited.find(remainder) == visited.end()) {
//             // Mark this remainder as visited
//             visited.insert(remainder);
//             // Append "0" and "9" to the current number and push to queue
//             q.push(current + "0");
//             q.push(current + "9");
//         }
//     }

//     // Should not reach here for positive N
//     return "-1";
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N;
//         cin >> N;
//         cout << findSmallestMultiple(N) << endl;
//     }
//     return 0;
// }

// # cre cit
// #include <bits/stdc++.h>
// using namespace std;

// void solve(int n){
//     queue<string> q;
//     set<int> s;
//     q.push("9");
//     while(!q.empty()) {
//         string cur = q.front();
//         q.pop();
//         int remainder = stoll(cur)%n;
//         if(remainder==0) {
//             cout <<cur;
//             return;
//         }
//         if(s.find(remainder)==s.end()){
//             s.insert(remainder);
//             q.push(cur+"0");
//             q.push(cur+"9");
//         }
//     }
// }

// int main() {
//     int n; cin>>n;
//     solve(n);
// }

// DS08007
// #include <bits/stdc++.h>
// using namespace std;

// int solve(int n)
// {
//     int cnt = 0;
//     queue<string> q;
//     q.push("1");
//     while (true)
//     {
//         string cur = q.front();
//         int x = stoll(cur);
//         q.pop();
//         if (x <= n)
//         {
//             ++cnt;
//             cout << x << ' ';
//         }
//         else
//             return cnt;
//         q.push(cur + "0");
//         q.push(cur + "1");
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << solve(n);
// }

// DSA08008
// #include<bits/stdc++.h>
// using namespace std;

// void solve(int n){
//     queue <string> q;
//     q.push("1");
//     while(true) {
//         string cur = q.front();
//         q.pop();
//         if(stoll(cur)%n==0) {
//             cout <<cur<<endl;
//             return;
//         }
//         q.push(cur+"0");
//         q.push(cur+"1");
//     }
// }
// int main() {
//     int n; cin>>n;
//     solve(n);
// }

// DSA08019
// DSA08017,
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// void solve(int n){
//     vector<int> result;
//     queue<string> q;
//     q.push("8");
//     q.push("6");
//     while(!q.empty()){
//         string cur = q.front();
//         q.pop();
//         result.push_back(stoll(cur));
//         if(cur.size()<n){
//         q.push(cur+"8");
//         q.push(cur+"6");
//         }
//     }
//     sort(result.begin(),result.end());
//     for (auto it:result ) cout <<it<<' ';
// }
// int main() {
//     int n; cin>>n;
//     solve(n);
// }

// DSA08004
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int k;
//     cin >> k;
//     string s;
//     cin >> s;
//     map<char, int> mp;
//     for (int i = 0; i < s.size(); i++)
//     {
//         mp[s[i]]++;
//     }

//     // Sử dụng một vector để chứa các phần tử của map
//     vector<pair<char, int>> vec(mp.begin(), mp.end());

//     // Sắp xếp vector dựa trên giá trị của các phần tử trong map
//     sort(vec.begin(), vec.end(), [](const pair<char, int> &a, const pair<char, int> &b) {
//         return a.second > b.second; // Sắp xếp giảm dần theo số lần xuất hiện
//     });

//     // Giảm k lần xuất hiện của ký tự có số lần xuất hiện lớn nhất
//     if (!vec.empty())
//     {
//         // tru di tan so
//         vec[0].second -= k;
//         if (vec[0].second < 0) vec[0].second = 0;
//     }

//     // Tính tổng bình phương số lần xuất hiện
//     int sum = 0;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         sum += pow(vec[i].second, 2);
//     }

//     cout << sum << endl;

//     return 0;
// }

// DSA08009
// #include <iostream>
// #include <queue>
// #include <unordered_set>
// #include <vector>
// using namespace std;

// // Hàm tìm số bước ít nhất để dịch chuyển từ S đến T
// int minSteps(int S, int T) {
//     if (S >= T) {
//         return S - T; // Chỉ cần thực hiện thao tác trừ 1
//     }

//     queue<pair<int, int>> q; // Hàng đợi lưu các trạng thái (giá trị của S, số bước)
//     unordered_set<int> visited; // Tập hợp lưu các trạng thái đã được xét

//     q.push({S, 0});
//     visited.insert(S);

//     while (!q.empty()) {
//         pair<int, int> currentPair = q.front();
//         q.pop();

//         int current = currentPair.first;
//         int steps = currentPair.second;

//         // Nếu tìm thấy T, trả về số bước
//         if (current == T) {
//             return steps;
//         }

//         // Thực hiện thao tác (a): Trừ S đi 1
//         if (current - 1 > 0 && visited.find(current - 1) == visited.end()) {
//             q.push({current - 1, steps + 1});
//             visited.insert(current - 1);
//         }

//         // Thực hiện thao tác (b): Nhân S với 2
//         if (current * 2 < 2 * T && visited.find(current * 2) == visited.end()) {
//             q.push({current * 2, steps + 1});
//             visited.insert(current * 2);
//         }
//     }

//     return -1; // Trường hợp không tìm thấy (không thể xảy ra trong bài toán này)
// }

// int main() {
//     int T;
//     cin >> T;
//     vector<pair<int, int>> testCases(T);

//     for (int i = 0; i < T; ++i) {
//         cin >> testCases[i].first >> testCases[i].second;
//     }

//     for (int i = 0; i < T; ++i) {
//         int S = testCases[i].first;
//         int T = testCases[i].second;
//         cout << minSteps(S, T) << endl;
//     }

//     return 0;
// }
// DSA08025  Kinght
// #include <bits/stdc++.h>
// using namespace std;

// // Kiểm tra vị trí có hợp lệ trên bàn cờ không
// bool is_valid(int x, int y) {
//     return x >= 0 && x < 8 && y >= 0 && y < 8;
// }

// // Chuyển đổi từ ký tự cột (a-h) và hàng (1-8) sang tọa độ trên bàn cờ
// pair<int, int> convertToIndex(const string& p) {
//     return {p[0] - 'a', p[1] - '1'};
// }

// // Các nước đi hợp lệ của quân mã trên bàn cờ vua
// const vector<pair<int, int>> Moves = {
//     {-2, -1}, {-2, 1}, {2, 1}, {2, -1},
//     {1, 2}, {1, -2}, {-1, -2}, {-1, 2}
// };

// // Hàm tìm số bước di chuyển ít nhất của quân mã từ vị trí start đến end
// int solve(string s, string e) {
//     pair<int, int> pos_s = convertToIndex(s);
//     pair<int, int> pos_e = convertToIndex(e);
//     if (pos_s == pos_e) return 0;

//     queue<pair<pair<int, int>, int>> q;
//     set<pair<int, int>> visited;

//     q.push({pos_s, 0});
//     visited.insert(pos_s);

//     while (!q.empty()) {
//         pair<pair<int,int>,int> cur_move = q.front();
//         pair<int,int> cur = cur_move.first;
//         int step = cur_move.second;
//         q.pop();
//         // auto [cur, step] = q.front();
//         // q.pop();

//         for (const auto &it : Moves) {
//             int nx = cur.first + it.first;
//             int ny = cur.second + it.second;
//             if (nx == pos_e.first && ny == pos_e.second) return step + 1;
//             if (is_valid(nx, ny) && visited.find({nx, ny}) == visited.end()) {
//                 visited.insert({nx, ny});
//                 q.push({{nx, ny}, step + 1});
//             }
//         }
//     }

//     return -1; // Trường hợp không thể xảy ra trong bài toán này
// }

// int main() {
//     int t;
//     cin >> t;
//     vector<pair<string, string>> v(t);
//     for (int i = 0; i < t; ++i) {
//         string x, y;
//         cin >> x >> y;
//         v[i] = {x, y};
//     }

//     for (int i = 0; i < t; ++i) {
//         cout << solve(v[i].first, v[i].second) << endl;
//     }

//     return 0;
// }

// DSA08010
// #include<bits/stdc++.h>
// using namespace std;

// int check(int n){
//     int x = sqrt(n);
//     if(x*x == n) return x;
//     int max_res = INT_MAX;
//     for (int i=1;i<=x;i++) {
//         if(n%i==0) {
//             max_res = min(max_res,max(i,n/i));
//         }
//     }
//     return max_res;
// }

// int solve(int n) {
//     queue<pair<int,int>> q;
//     unordered_set<int> s;

//     if(n==1) return 0;

//     q.push({n,0});
//     s.insert(n);

//     while(!q.empty()) {
//         pair<int,int> res = q.front();

//         q.pop();

//         int cur = res.first;
//         int step = res.second;

//         if(n==1) return step;

//         if(cur-1>0 && s.find(cur-1)==s.end()) {
//             s.insert(cur-1);
//             q.push({cur-1,step+1});
//         }
//         if(cur==2) return step+1;
//         if(cur%2==0 && s.find(check(cur))==s.end()) {
//             s.insert(check(cur));
//             q.push({check(cur),step+1});
//         }
//     }
//     return -1;
// }

// int main() {
//     int t; cin>>t;
//     vector<int> v(t);
//     for (int i=0;i<t;i++) cin>>v[i];
//     for (int i=0;i<t;i++) cout <<solve(v[i])<<endl;
// }

// DSA08012
// #include<bits/stdc++.h>
// using namespace std;

// bool check_2(int n) {
//     string s = to_string(n);
//     map<char,int> mp;
//     for (int i=0;i<s.size();i++) {
//         mp[s[i]]++;
//     }
//     for (char c:s) {
//         if(mp[c]>=2) return false;
//     }
//     return true;
// }

// bool check(int n) {
//     while(n) {
//         int res = n%10;
//         if(res>5) return false;
//         n/=10;
//     }
//     return true;
// }

// int solve(int l,int r) {
//     int cnt=0;
//     for (int i=l;i<=r;i++) {
//         if(check(i) && check_2(i)) ++cnt;
//     }
//     return cnt;
// }

// int main() {
//     cout<<solve(4,13);
// }

// DSA08020
// #include <bits/stdc++.h>
// using namespace std;

// bool check_prime(int n) {
//     for (int i = 2; i <= sqrt(n); i++)
//         if (n % i == 0) return false;
//     return n>1;
// }

// int solve(int s, int e) {
//     queue<pair<int, int>> q;
//     unordered_set<int> vi;

//     q.push({s, 0});
//     vi.insert(s);

//     while (!q.empty()) {
//         pair<int, int> res = q.front();
//         int Num = res.first;
//         int step = res.second;

//         if (Num == e) return step;
//         string num_cur = to_string(Num);
//         q.pop();
//         // duyet tung chu so ban dau: -> duyet tung so 0->9
//         // neu khac -> thay so do -> tao so moi -> check (nguyento/>=1000/chuadctham)  -> push hang doi
//         for (int i = 0; i < 4; i++) {
//             for (char digit = '0'; digit <= '9'; digit++) {
//                 if (num_cur[i] != digit) {
//                     string num_cur_tmp = num_cur;
//                     num_cur_tmp[i] = digit;
//                     int num = stoi(num_cur_tmp);

//                     if (num >= 1000 && check_prime(num) && vi.find(num) == vi.end()) {
//                         vi.insert(num);
//                         q.push({num, step + 1});
//                     }
//                 }
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     int t;
//     cin >> t;
//     vector<pair<int, int>> v(t);
//     for (int i = 0; i < t; i++) {
//         cin >> v[i].first >> v[i].second;
//     }

//     for (int i = 0; i < t; i++) {
//         cout << solve(v[i].first, v[i].second) << endl;
//     }

//     return 0;
// }

//
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> v;
// int global_size;
// int max_num = -1;

// void Try(int i, string num, vector<bool>& check) {
//     for (int j = 0; j < global_size; j++) {
//         if (!check[j]) {
//             check[j] = true;
//             num += to_string(v[j]);
//             if (i == global_size - 1) {
//                 if (stoi(num) % 3 == 0) {
//                     max_num = max(max_num, stoi(num));
//                 }
//             } else {
//                 Try(i + 1, num, check);
//             }
//             num.pop_back(); // Loại bỏ phần tử vừa thêm vào
//             check[j] = false;
//         }
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         cin >> global_size;
//         v.resize(global_size);
//         for (int i = 0; i < global_size; i++) {
//             cin >> v[i];
//         }
//         vector<bool> check(global_size, false);
//         max_num = -1;
//         Try(0, "", check);
//         cout << max_num << endl;
//     }
//     return 0;
// }

// C n k
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> a; // Vector thay cho mảng a
// int n, k;

// void in() {
//     for (int i = 1; i <= k; i++) cout << a[i];
// }

// void Try(int i) {
//     for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
//         a[i] = j;
//         if (i == k) {
//             in();
//             cout << endl;
//         } else {
//             Try(i + 1);
//         }
//     }
// }

// void Try(int i) {
//     for (int j=)
// }
// int main() {
//     cin >> n >> k;
//     a.resize(k + 1); // Khởi tạo kích thước của vector a
//     Try(1);
//     return 0;
// }

// DSA08022
// #include <bits/stdc++.h>
// using namespace std;

// void solve(vector<int> &v)
// {
//     int n = v.size();
//     int sum = accumulate(v.begin(), v.end(), 0);
//     int reminder = sum % 3;

//     queue<int> q0, q1, q2;

//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] % 3 == 0)
//             q0.push(v[i]);
//         else if (v[i] % 3 == 2)
//             q2.push(v[i]);
//         else if (v[i] % 3 == 1)
//             q1.push(v[i]);
//     }

//     if (reminder == 1)
//     {
//         // bo di 1 phan tu du 1 || 2 phan tu du 2
//         if (!q1.empty())
//         {
//             q1.pop();
//         }
//         else
//         {
//             if (q2.size() >= 2)
//             {
//                 q2.pop();
//                 q2.pop();
//             }
//             else
//             {
//                 cout << "-1\n";
//             }
//         }
//     }

//     else if (reminder == 2)
//     {
//         // bo di 1 phan tu du 2 hoac 2 phan tu du 1
//         if (!q2.empty())
//         {
//             q2.pop();
//         }
//         else
//         {
//             if (q1.size() >= 2)
//             {
//                 q1.pop();
//                 q1.pop();
//             }
//             else
//             {
//                 cout << "-1\n";
//                 return;
//             }
//         }
//     }

//     vector<int> result;
//     while (!q0.empty())
//     {
//         result.push_back(q0.front());
//         q0.pop();
//     }
//     while (!q1.empty())
//     {
//         result.push_back(q1.front());
//         q1.pop();
//     }
//     while (!q2.empty())
//     {
//         result.push_back(q2.front());
//         q2.pop();
//     }

//     if (result.empty())
//     {
//         cout << "-1\n";
//     }
//     else
//         sort(result.begin(), result.end(), [](int a, int b)
//              { return a > b; });
//     for (auto it : result)
//         cout << it;
//     // cout <<endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];
//         solve(v);
//     }
//     return 0;
// }

// cach 2
// #include <bits/stdc++.h>
// using namespace std;

// // idea: danh dau nhung so ko hop le -> push nhung so hop le vao vector -> sort -> lay so lon nhat
// void solve(vector<int> &v)
// {
//     int sum = accumulate(v.begin(), v.end(), 0);
//     int reminder = sum % 3;
//     // Neu chia 3 du 1 -> 1 so du 1 || 2 so du 2
//     if (reminder == 1)
//     {
//         bool check = false;
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (v[i] % 3 == 1)
//             {
//                 v[i] = -1;
//                 check = true;
//                 break;
//             }
//         }

//         if (!check)
//         {
//             int cnt = 0;
//             for (int i = 0; i < v.size(); i++)
//             {
//                 if (v[i] % 3 == 2)
//                 {
//                     v[i] = -1;
//                     ++cnt;
//                     if (cnt == 2)
//                     {
//                         break;
//                     }
//                 }
//             }
//             if (cnt != 2)
//             {
//                 cout << "-1\n";
//                 return;
//             }
//         }
//     }
//     // Neu sum du 2 ->1 so du 2 hoac 2 so du 1
//     else if (reminder == 2)
//     {
//         bool check = false;
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (v[i] % 3 == 2)
//             {
//                 v[i] = -1;
//                 check = true;
//                 break;
//             }
//         }
//         if (!check)
//         {
//             int cnt = 0;
//             for (int i = 0; i < v.size(); i++)
//             {
//                 if (v[i] % 3 == 1)
//                 {
//                     v[i] = -1;
//                     ++cnt;
//                     if (cnt == 2)
//                     {
//                         break;
//                     }
//                 }
//             }
//             if (cnt != 2)
//             {
//                 cout << "-1\n";
//                 return;
//             }
//         }
//     }

//     vector<int> result;
//     for (auto it : v)
//     {
//         if (it != -1)
//         {
//             result.push_back(it);
//         }
//     }
//     if (result.empty())
//     {
//         cout << "-1\n";
//         return;
//     }
//     else
//     {
//         sort(result.begin(), result.end());
//     }

//     for (int i = result.size() - 1; i >= 0; i--)
//         cout << result[i];
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];
//         solve(v);
//     }
//     return 0;
// }

// DSA08011
// #include<bits/stdc++.h>
// using namespace std;

// bool check(string a,string b) {
//     int cnt=0;
//     for (int i=0;i<a.size();i++){
//         if(a[i]!=b[i]) ++cnt;
//     }
//     return cnt==1;
// }

// int solve(string s,string t,int n) {
//     queue<pair<string,int>> q;
//     unordered_set<string> vi;

//     q.push({s,1});
//     vi.insert(s);

//     while(!q.empty()) {
//         pair<string,int> res = q.front(); q.pop();
//         string cur_word = res.first;
//         int step = res.second;

//         if(cur_word==t) return step;
// bfs
//         for (int i=0;i<v.size();i++) {
//             if(check(v[i],cur_word) && vi.find(v[i])==vi.end()) {
//                 vi.insert(v[i]);
//                 q.push({v[i],step+1});
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n;
//         string s,t; cin>>s>>t;
//         cout << solve(s,t,n);
//     }
// }

// GPT
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <unordered_set>
// #include <sstream>
// using namespace std;

// bool check(string a, string b) {
//     int diffCount = 0;
//     for (int i = 0; i < a.size(); ++i) {
//         if (a[i] != b[i]) {
//             diffCount++;
//             if (diffCount > 1) return false; // Nếu đã khác nhiều hơn 1 ký tự thì dừng
//         }
//     }
//     return diffCount == 1; // Nếu khác đúng 1 ký tự thì trả về true
// }

// int solve(string s, string t, int n, vector<string>& words) {
//     queue<pair<string, int>> q;
//     unordered_set<string> visited;

//     q.push({s, 1});
//     visited.insert(s);

//     while (!q.empty()) {
//         auto curr = q.front();
//         q.pop();
//         string currWord = curr.first;
//         int steps = curr.second;

//         if (currWord == t) {
//             return steps;
//         }

//         for (const auto& word : words) {
//             if (check(currWord, word) && visited.find(word) == visited.end()) {
//                 visited.insert(word);
//                 q.push({word, steps + 1});
//             }
//         }
//     }

//     return -1; // Nếu không tìm thấy đường đi từ s -> t
// }

// int main() {
//     int T;
//     cin >> T;
//     cin.ignore(); // Đọc ký tự '\n' sau số lượng test case

//     while (T--) {
//         int n;
//         cin >> n;
//         string s, t;
//         cin >> s >> t;

//         cin.ignore(); // Đọc ký tự '\n' sau dòng chứa s và t
//         string line;
//         getline(cin, line);

//         vector<string> words;
//         stringstream ss(line);
//         string word;
//         while (ss >> word) {
//             words.push_back(word);
//         }

//         int result = solve(s, t, n, words);
//         cout << result << endl;
//     }

//     return 0;
// }

// DSA08013
// #include <bits/stdc++.h>
// using namespace std;

// struct point
// {
//     int x, y, step;
// };

// bool isValid(const vector<vector<bool>> &vi, int x, int y, int N,const vector<vector<char>> &v)
// {
//     return x >= 0 && x < N && y >= 0 && y < N && !vi[x][y] && v[x][y] == '.';
// }

// int solve(const vector<vector<char>> &v, int N, int a, int b, int c, int d)
// {
//     vector<vector<bool>> vi(N, vector<bool>(N, false));
//     queue<point> q;

//     q.push({a, b, 0});
//     vi[a][b] = true;

//     vector<int> dx = {-1, 0, 0, 1};
//     vector<int> dy = {0, 1, -1, 0};

//     while (!q.empty())
//     {
//         point curr = q.front();
//         q.pop();

//         if (curr.x == c && curr.y == d)
//             return curr.step;

//         for (int i = 0; i < 4; i++)
//         {
//             int nx = curr.x, ny = curr.y;
//             while (isValid(vi, nx + dx[i], ny + dy[i], N, v))
//             {
//                 nx += dx[i];
//                 ny += dy[i];
//                 if (vi[nx][ny])
//                     break;
//                 vi[nx][ny] = true;
//                 q.push({nx, ny, curr.step + 1});
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<vector<char>> v(n, vector<char>(n));
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//                 cin >> v[i][j];
//         }
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         cout << solve(v, n, a, b, c, d);
//     }
// }

// DSA08014
// #include<bits/stdc++.h>
// using namespace std;

// struct point{
//     int x,y,step;
// };

// bool isValid( vector<vector<bool>> &vi,int r,int c,int x,int y, vector<vector<int>> &v) {
//     return x>=0 && x<r && y>=0 && y<c && !vi[x][y] && v[x][y] == 1;
// }

// int solve(vector<vector<int>> &v,int r,int c){
//     queue<point> q;
//     vector<vector<bool>> vi(r,vector<bool>(c,false));

//     for (int i=0;i<r;i++) {
//         for (int j=0;j<c;j++) {
//             if(v[i][j]==2) q.push({i,j,0});
//         }
//     }

//     vector<int> dx = {-1,0,0,1};
//     vector<int> dy = {0,-1,1,0};

//     int days=0;
//     while(!q.empty()) {
//         point cur = q.front(); q.pop();
//         days = cur.step;
//         for (int i=0;i<4;i++) {
//             int nx = cur.x + dx[i];
//             int ny = cur.y + dy[i];
//             // days sẽ đc lưu vào ô đang xét -> nhảy vào ô khác -> tăng days
//             if(isValid(vi,r,c,nx,ny,v)) {
//                 vi[nx][ny] = true;
//                 v[nx][ny] = 2;
//                 q.push({nx,ny,days+1});
//                 cout <<nx<<' '<<ny<<' '<<endl;
//             }
//         }
//     }

//     for (int i=0;i<r;i++) {
//         for (int j=0;j<c;j++) {
//             if(v[i][j]==1) return -1;
//         }
//     }
//     return days;
// }

// int main() {
//     int t; cin>>t;
//     while(t--) {
//         int r,c; cin>>r>>c;
//         vector<vector<int>> v(r,vector<int> (c));
//         for (int i=0;i<r;i++) {
//             for (int j=0;j<c;j++) cin>>v[i][j];
//         }
//         int result = solve(v,r,c);
//         cout <<result<<endl;
//     }
//     return 0;
// }

// DSA08015
// 3 4 5
// S....
// .###.
// .##..
// ###.#
// #####
// #####
// ##.##
// ##...

// #####
// #####
// #.###
// ####E

// #include <bits/stdc++.h>
// using namespace std;

// struct point {
//     int x, y, z, step;
// };

// bool check(const vector<vector<vector<bool>>> &vi, const vector<vector<vector<char>>> &v, int x, int y, int z, int A, int B, int C) {
//     return (x >= 0 && x < A && y >= 0 && y < B && z >= 0 && z < C && !vi[x][y][z] && (v[x][y][z] == '.' || v[x][y][z] == 'E'));
// }

// int solve(const vector<vector<vector<char>>> &v, int e, int f, int g, int A, int B, int C, int a, int b, int c) {
//     vector<vector<vector<bool>>> vi(A, vector<vector<bool>>(B, vector<bool>(C, false)));
//     queue<point> q;

//     q.push({a, b, c, 0});
//     vi[a][b][c] = true;

//     vector<int> dx = {-1, 1, 0, 0, 0, 0};
//     vector<int> dy = {0, 0, -1, 1, 0, 0};
//     vector<int> dz = {0, 0, 0, 0, -1, 1};

//     while (!q.empty()) {
//         point cur = q.front();
//         q.pop();

//         if (cur.x == e && cur.y == f && cur.z == g) {
//             return cur.step;
//         }

//         for (int i = 0; i < 6; i++) {
//             int nx = cur.x + dx[i];
//             int ny = cur.y + dy[i];
//             int nz = cur.z + dz[i];

//             if (check(vi, v, nx, ny, nz, A, B, C)) {
//                 vi[nx][ny][nz] = true;
//                 q.push({nx, ny, nz, cur.step + 1});
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int A, B, C;
//         cin >> A >> B >> C;
//         vector<vector<vector<char>>> v(A, vector<vector<char>>(B, vector<char>(C)));
//         for (int i = 0; i < A; i++) {
//             for (int j = 0; j < B; j++) {
//                 for (int z = 0; z < C; z++) {
//                     cin >> v[i][j][z];
//                 }
//             }
//         }

//         bool found_start = false, found_end = false;
//         int sx, sy, sz, ex, ey, ez;
//         for (int i = 0; i < A; i++) {
//             for (int j = 0; j < B; j++) {
//                 for (int z = 0; z < C; z++) {
//                     if (v[i][j][z] == 'S') {
//                         found_start = true;
//                         sx = i, sy = j, sz = z;
//                     } else if (v[i][j][z] == 'E') {
//                         found_end = true;
//                         ex = i, ey = j, ez = z;
//                     }
//                 }
//             }
//         }

//         if (!found_start || !found_end) {
//             cout << "-1\n";
//         } else {
//             int result = solve(v, ex, ey, ez, A, B, C, sx, sy, sz);
//             cout << result << endl;
//         }
//     }
//     return 0;
// }

// GPT
// #include <bits/stdc++.h>
// using namespace std;

// struct Point {
//     int x, y, z, dist;
// };

// bool isValid(int x, int y, int z, int A, int B, int C, vector<vector<vector<char>>> &grid, vector<vector<vector<bool>>> &visited) {
//     return (x >= 0 && x < A && y >= 0 && y < B && z >= 0 && z < C && grid[x][y][z] != '#' && !visited[x][y][z]);
// }

// int bfsShortestPath(vector<vector<vector<char>>> &grid, Point start, Point end, int A, int B, int C) {
//     vector<vector<vector<bool>>> visited(A, vector<vector<bool>>(B, vector<bool>(C, false)));
//     queue<Point> q;
//     q.push(start);
//     visited[start.x][start.y][start.z] = true;

//     vector<int> dx = {-1, 1, 0, 0, 0, 0};
//     vector<int> dy = {0, 0, -1, 1, 0, 0};
//     vector<int> dz = {0, 0, 0, 0, -1, 1};

//     while (!q.empty()) {
//         Point current = q.front();
//         q.pop();

//         if (current.x == end.x && current.y == end.y && current.z == end.z) {
//             return current.dist;
//         }

//         for (int i = 0; i < 6; ++i) {
//             int nx = current.x + dx[i];
//             int ny = current.y + dy[i];
//             int nz = current.z + dz[i];

//             if (isValid(nx, ny, nz, A, B, C, grid, visited)) {
//                 visited[nx][ny][nz] = true;
//                 q.push({nx, ny, nz, current.dist + 1});
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int A, B, C;
//         cin >> A >> B >> C;

//         vector<vector<vector<char>>> grid(A, vector<vector<char>>(B, vector<char>(C)));
//         Point start, end;
//         bool foundStart = false, foundEnd = false;

//         for (int i = 0; i < A; ++i) {
//             for (int j = 0; j < B; ++j) {
//                 for (int k = 0; k < C; ++k) {
//                     cin >> grid[i][j][k];
//                     if (grid[i][j][k] == 'S') {
//                         start = {i, j, k, 0};
//                         foundStart = true;
//                     }
//                     if (grid[i][j][k] == 'E') {
//                         end = {i, j, k, 0};
//                         foundEnd = true;
//                     }
//                 }
//             }
//         }

//         if (foundStart && foundEnd) {
//             int result = bfsShortestPath(grid, start, end, A, B, C);
//             cout << result << endl;
//         } else {
//             cout << -1 << endl; // Either 'S' or 'E' not found
//         }
//     }
//     return 0;
// }

// DSA08045
// #include <iostream>
// #include <vector>
// #include <deque>
// #include <set>
// #include <map>
// #include <unordered_map>
// #include <algorithm>

// using namespace std;

// // Structure to represent a point
// struct Point {
//     int x, y;
//     bool operator<(const Point& other) const {
//         return x == other.x ? y < other.y : x < other.x;
//     }
// };

// // BFS to find all connected components (regions)
// void bfs(const Point& start, const map<Point, vector<Point>>& adjacency_list, set<Point>& visited, vector<Point>& component) {
//     deque<Point> queue;
//     queue.push_back(start);
//     visited.insert(start);

//     while (!queue.empty()) {
//         Point point = queue.front();
//         queue.pop_front();
//         component.push_back(point);

//         for (const Point& neighbor : adjacency_list.at(point)) {
//             if (visited.find(neighbor) == visited.end()) {
//                 visited.insert(neighbor);
//                 queue.push_back(neighbor);
//             }
//         }
//     }
// }

// // Function to check if a point is inside a polygon using ray-casting algorithm
// bool is_inside_polygon(const Point& p, const vector<Point>& polygon) {
//     int n = polygon.size();
//     bool inside = false;
//     for (int i = 0, j = n - 1; i < n; j = i++) {
//         if (((polygon[i].y > p.y) != (polygon[j].y > p.y)) &&
//             (p.x < (polygon[j].x - polygon[i].x) * (p.y - polygon[i].y) / (polygon[j].y - polygon[i].y) + polygon[i].x)) {
//             inside = !inside;
//         }
//     }
//     return inside;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, M;
//         cin >> N >> M;

//         vector<tuple<int, int, int, int>> fences(N);
//         for (int i = 0; i < N; ++i) {
//             cin >> get<0>(fences[i]) >> get<1>(fences[i]) >> get<2>(fences[i]) >> get<3>(fences[i]);
//         }

//         vector<Point> cows(M);
//         for (int i = 0; i < M; ++i) {
//             cin >> cows[i].x >> cows[i].y;
//         }

//         map<Point, vector<Point>> adjacency_list;
//         set<Point> points_set;

//         for (const auto& [Ax, Ay, Bx, By] : fences) {
//             Point p1 = {Ax, Ay}, p2 = {Bx, By};
//             adjacency_list[p1].push_back(p2);
//             adjacency_list[p2].push_back(p1);
//             points_set.insert(p1);
//             points_set.insert(p2);
//         }

//         set<Point> visited;
//         vector<vector<Point>> regions;

//         for (const auto& point : points_set) {
//             if (visited.find(point) == visited.end()) {
//                 vector<Point> component;
//                 bfs(point, adjacency_list, visited, component);
//                 regions.push_back(component);
//             }
//         }

//         unordered_map<int, int> region_bull_count;
//         int region_index = 0;

//         for (const auto& region : regions) {
//             for (const auto& cow : cows) {
//                 if (is_inside_polygon(cow, region)) {
//                     region_bull_count[region_index]++;
//                 }
//             }
//             region_index++;
//         }

//         int max_bulls = 0;
//         for (const auto& [_, count] : region_bull_count) {
//             max_bulls = max(max_bulls, count);
//         }

//         cout << max_bulls << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <queue>
// #include <map>
// #include <string>
// #include <algorithm>

// using namespace std;

// string rotateLeft(const string &state)
// {
//     string newState = state;
//     newState[0] = state[6];
//     newState[1] = state[0];
//     newState[2] = state[1];
//     newState[3] = state[2];
//     newState[4] = state[3];
//     newState[5] = state[4];
//     newState[6] = state[5];
//     return newState;
// }

// string rotateRight(const string &state)
// {
//     string newState = state;
//     newState[6] = state[0];
//     newState[0] = state[1];
//     newState[1] = state[2];
//     newState[2] = state[3];
//     newState[3] = state[4];
//     newState[4] = state[5];
//     newState[5] = state[6];
//     return newState;
// }

// int bfs(const string &start)
// {
//     const string target = "1234567800";
//     if (start == target)
//         return 0;

//     queue<pair<string, int>> q;
//     map<string, bool> visited;

//     q.push({start, 0});
//     visited[start] = true;

//     while (!q.empty())
//     {
//         auto [state, steps] = q.front();
//         q.pop();

//         string nextState = rotateLeft(state);
//         if (nextState == target)
//             return steps + 1;
//         if (!visited[nextState])
//         {
//             visited[nextState] = true;
//             q.push({nextState, steps + 1});
//         }

//         nextState = rotateRight(state);
//         if (nextState == target)
//             return steps + 1;
//         if (!visited[nextState])
//         {
//             visited[nextState] = true;
//             q.push({nextState, steps + 1});
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         vector<int> hex(10);
//         for (int i = 0; i < 3; ++i)
//             cin >> hex[i];
//         for (int i = 3; i < 7; ++i)
//             cin >> hex[i];
//         for (int i = 7; i < 10; ++i)
//             cin >> hex[i];

//         string start;
//         for (int num : hex)
//             start += to_string(num);

//         cout << bfs(start) << endl;
//     }

//     return 0;
// }
