// #include <bits/stdc++.h>
// #include <algorithm>

// using namespace std;

// void bai1_set() {
//     int test_case; cin>>test_case;
//     while(test_case) {
//         set<int> se;
//         int n ; cin>>n; int a[n];
//         for (auto&x:a) {
//             cin>>x; 
//             se.insert(x);
//     }
//     cout <<se.size();
//     test_case--;
// }
// }
// void bai1_map() {
//     int test_case;
//     cin >> test_case;
//     while (test_case) {
//         int cnt = 0;
//         map<int, int> mp;
        
//         int n;
//         cin >> n;
        
//         int a[n];
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             mp[a[i]]++;
//         }
        
//         for (int i = 0; i < n; ++i) {
//             if (mp[a[i]]) {
//                 ++cnt;
//                 mp[a[i]] = 0;
//             }
//         }
        
//         cout << cnt << endl;
//         --test_case;
//     }
// }


// // mp/se.find(value) -> return iterator (mp/se.begin(),me/se.end())
// void bai2_set() {
//     int test_case;
//     cin>>test_case;
//     while(test_case) {
//         int n; cin>>n;
//         int a[n];
//         set <int> se;
//         for (auto &x:a) {cin>>x;se.insert(x);}
//         int t; cin>>t;
//         while(t) {
//             int num_test;
//             cin>>num_test;
//             if(se.find(num_test)!=se.end()) cout <<"YES";
//             else cout <<"NO";
//             t--;
//         }
//         test_case--;
//     }
// }

// void bai2_map() {
//     int test_case;
//     cin>>test_case;
//     while(test_case) {
//         int n ; cin>>n; 
//         int a[n];
//         map<int,int> mp;
//         for (auto &x:a)  {
//             cin>>x;
//             mp[x]++;
//         }
//         int t ; cin>>t;
//         while(t) {
//             int num_test;
//             cin>>num_test;
//             if(mp.find(num_test)!=mp.end()) cout <<"YES";
//             else cout <<"NO";
//         }
//         int num_test;
//     }
// }

// // give 2 integer arrays , count of elements of first array, without second array
// void bai3_set() {
//     int test_case;
//     cin>>test_case;
//     while(test_case) {
//         int n1,n2;
//         cin>>n1>>n2;
//         int a[n1],b[n2];
//         set<int> se;
//         for (auto&x:a) cin>>x;
//         for (auto&x:b) {cin>>x;se.insert(x);}
//         int flag = 0;
//         for (auto x:a) {
//             ++flag;
//             if(se.find(x)==se.end()) cout <<x<<" ";
//         }
//         if(!flag) cout <<"Not Found";
//     }
// }
// void bai3_map() {
//     int test_case;
//     cin>>test_case;
//     while(test_case) {
//         int n1,n2;
//         cin>>n1>>n2;
//         int a[n1],b[n2];
//         map<int,int> mp;
//         for (auto &x:a) cin>>x;
//         for (auto &x:b) {
//             cin>>x;
//             mp[x]++;
//         }
//         int flag = 0;
//         for (auto x:a) {
//             ++flag;
//             if(!mp[x]) cout <<x<<" ";
//         }
//         if(!flag) cout <<"Not Found";

//     }
// }

// //find the number that appear the most time in arrays

// void bai4() {
//     int t; cin>>t;
//     while(t) {
//         int n; cin>>n; int a[n];
//         map<int,int> mp;
//         for (auto &x:a) {
//             cin>>x;
//             mp[x]++;
//         }
//         int value = 0, fre_value = 0;
//         for (auto it : mp) {
//             if(it.second > fre_value) {
//                 value = it.first;
//                 fre_value = it.second;
//             }
//         }
//         cout <<value <<' '<<fre_value;
//         --t;
// }
// }
// // find the character that appear the most time in string;
// bool cmp(pair<char,int> a, pair <char,int> b) {
//     // the same frequence 
//     if(a.second == b.second) {
//         // return the order of dictionary 
//         return a.first > b.first;
//     }
//     // difference frequence return max frequence
//     return a.second < b.second;
// }
// void bai5() {
//     int t; cin>>t;
//     while(t){
//     string s;
//     cin.ignore();
//     getline(cin,s);
//     map<char,int> mp;
//     for (int i=0;i<s.size();i++) {
//         mp[s[i]]++;
//     }
//     // push frequence vs charrater vao vector - pair 
//     vector <pair<char,int>> v;
//     for (auto it : mp) {
//         v.push_back({it.first,it.second});
//     }
//     sort(v.begin(),v.end(),cmp);

//     auto it = v.rbegin();
//     cout <<(*it).first<<' '<<(*it).second<<endl;
//     t--;
//     }
// }
// //  xau pangram
// void bai6() {
//     string s ; 
//     cin>>s;
//     set<char> se;
//     for (auto it : s) se.insert(it);
//     if(se.size()==26) cout <<"Yes";
//     else cout <<"No";
// }

// // word differen if string 
// void bai7() {
//     int t;cin>>t;
//     while(t) {
//     string s;
//     cin.ignore();
//     getline(cin,s);
//     set <string> se;
//     string word = "";
//     stringstream ss(s);
//     while(ss>>word) {
//         se.insert(word);
//     }
//     cout <<se.size();
//         t--;
//     }
// }

// // find the word that appear the most time in arrays
// bool cmp_2(pair <string,int> a,pair<string,int> b) {
//     // tu co thu tu tu dien nho hon -> ve cuoi day 
//     if(a.second == b.second) return a.first > b.first;
//     // tu co tan xuat lon nhat ve cuoi day 
//     return a.second < b.second;
// }
// void bai8() {
//     int t; cin>>t;
//     while(t) {
//         string s;
//         cin.ignore();
//         getline(cin,s);
//         stringstream ss(s);
//         string tmp = "";
//         vector <string> v;
//         while(ss>>tmp) {
//             v.push_back(tmp);
//         }
//         map<string,int> mp;
//         for (auto it:v) {
//             mp[it]++;
//         }
//         vector <pair<string,int>> ve;
//         for (auto it : mp) {
//             ve.push_back({it.first,it.second});
//         }
//         sort(ve.begin(),ve.end(),cmp_2);
//         // lay iterator cua tu co tan xuat hien lon nhat 
//         auto it = ve.rbegin();
//         cout <<(*it).first<<' '<<(*it).second<<endl;
//     }
// }
// // find the first repeated word
// void bai9() {
//     int t; cin>>t; 
//     while(t) {
//         string s;
//         cin.ignore();
//         getline(cin,s);
//         map<string,int> mp;
//         vector <string> v;
//         string res="";
//         stringstream ss(s);
//         while(ss>>res) {
//             v.push_back(res);
//         }
//         for (auto it :v) {
//             mp[it]++;
//             if(mp[it]==2) {
//                 cout <<it<<endl;
//                 return;
//             }
//         }
//     }
// }
// // name of user 
// void bai10() {
//     int n; cin>>n;
//     vector <string> v;
//     map<string,int> mp;
//     for (int i=0;i<n;i++) {
//         string s;
//         getline(cin,s);
//         v.push_back(s);
//     }
//     for (auto it:v) {
//         if(mp[it]==0) {
//             cout <<it<<endl;
//         } 
//         else cout <<it<<mp[it]<<endl;
//         mp[it] ++;
//     }

// }
// // get1 - get2 
// void get_str(string s,string &get1,string &get2) {
//     int idx = s.find('-');
//     get1 = s.substr(0,idx-1);
//     get2 = s.substr(idx+2,s.size()-idx-1);
// }
// void bai11() {
//     int t; cin>> t;
//     cin.ignore();
//     while(t) {
//         string s,s1,s2;
//         getline(cin,s);
//         map<string,vector<string>> mp;
//         get_str(s,s1,s2);
//         mp[s1].push_back(s2);
//         mp[s2].push_back(s1);
//         for (auto it:mp) {
//             vector<string> v = it.second;
//             // sx theo thu tu tu dien 
//             sort(v.begin(),v.end());
//             cout <<it.first<<": ";
//             for (int i=0;i<v.size();i++) {
//                 // list of fc 
//                 cout <<v[i];
//                 // chua phai chuoi cuoi cung 
//                 if(i < v.size()-1)
//                 cout <<", ";
//         }
//         cout <<endl;
//         }
// }
// }
// void bai11_c2() {
//     int t; cin>> t;
//     cin.ignore();
//     while(t) {
//         string s,s1,s2;
//         getline(cin,s);
//         map<string,multiset<string>> mp;
//         get_str(s,s1,s2);
//         mp[s1].insert(s2);
//         mp[s2].insert(s1);
//         for (auto it:mp) {
//             cout <<it.first<<": ";
//             for (auto x: it.second) {
//                 cout <<x<<" ";
//             }
//             cout <<endl;
//         }
// }
// }

// // name stc diem 
// double dtb(vector <pair<int,int>> v) {
//     int sum1=0,sum2=0;
//     for (auto it:v) {
//         sum1+=(it.first*it.second);
//         sum2+=it.first;
//     }
//     return (double)sum1/sum2;
// }
// void bai12() {
//     map<string,vector<pair<int,int>>> mp;
//     string ten;
//     while (cin>>ten);
//     int stc,diem;
//     cin>>stc>>diem;
//     mp[ten].push_back({stc,diem});
//     for (auto it = mp.rbegin();it != mp.rend();it++) {
//         cout <<(*it).first<<" : ";
//         cout << dtb((*it).second);
//     }
// }
// // send mail 
// void bai13() {
//     int n; cin>>n; int a[n];
//     for (auto&x:a) cin>>x;
//     for (int i=0;i<n;i++) {
//         if(i==0) {
//             cout <<abs(a[i+1]-a[i]) <<' '<<abs(a[n-1]-a[i])<<endl;
//         }
//         else if (i==n-1) {
//             cout <<abs(a[i]-a[i-1])<<' '<<abs(a[i]-a[0])<<endl;
//         }
//         else {
//             cout <<min(abs(a[i+1]-a[i]),abs(a[i]-a[i-1]))<<' '<<max(abs(a[n-1]-a[i]),abs(a[i]-a[0]))<<endl;
//         }
//     }
// }
// int main() {
//     system("cls");
//     bai13();
// }


// *Theory 

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// // problem : find min time to create 7 sp 
// // 3 7 (sp)
// // 3 2 5 == 3s-1sp/2s-1s/5s-1sp
// // out :8 (8/3 + 8/2 + 8/5 = 7) 8 == value min 
// bool check(int a[],int time_min,int n,int count_of_product) {
//     int sum_time = 0;
//     for (int i=0;i<n;i++) {
//         sum_time += (time_min/a[i]);
//     }
//     return sum_time>=count_of_product;
// }

// int bai1() {
//     int n ,k; cin>>n>>k; int a[n];
//     for (auto&x:a) cin>>x;
//     // min value of arrays * k -> time min de tao sp (thoi gian nho nhat tao 1 sp * so sp can tao -> time min thoa man)
//     int l = 0, r = 1ll * (*min_element(a,a+n)) * k;
//     // r == 1e18
//     ll ans = -1;
//     while(l<=r) {
//         // mid -> time check 
//         ll m = (l+r)/2;
//         if(check(a,m,n,k))
//         {
//             ans = a[m];
//             // tim ben trai con phan tu nao thoa man k 
//             r = m - 1;
//         }
//         else 
//         {
//             l = m + 1;
//         }
//     }
//   //     10 15 12 13
// // out : 10 (cat tai 10 -> 5 + 2 + 3 == L == 10 -> thoa man)

// bool check_2 (int a[],int n, int H, int L) {
//     int sum_wood = 0;
//     for (int i=0;i<n;i++) {
//         sum_wood += (a[i]-H);
//     }
//     return sum_wood >= L;
// }
// int bai2() {
//     int n,L; cin>>n>>L;
//     int a[n];
//     for (auto&x:a) cin>>x;
//     int l = 0 , r = 1ll*(*max_element(a,a+n));
//     ll ans = -1;
//     while(l<=r) {
//         // mid -> H ~ chieu cao lon nhat co the cat de thu duoc L go 
//         int m = (l+r)/2;
//         if(check_2(a,n,m,L)) {
//             ans = m;
//             // tim them ben phai (do tim max H)
//             l = m+1;
//         }
//         else {
//             r = m-1;
//         }
//     }
//     return ans;
// }

// // photo  
// // input : so_ban(n) time1 time2  (time -> pho ra 1 ban)
// // output : thoi gian nho nhat de pho du n ban
// // ex: 5 1 2 -> 4 ( 1ban(may1(1giay)) + 1ban+2ban(2giay -> may1: 1ban/ may2:2ban) + 1ban(may1))
// bool check_3(int x, int y, int time,int n) {
//     // time pho  1 ban -> de co du 2 ban : goc vs ban sao dua vao 2 may 
//     time-= min(x,y);
//     // da pho dc 1 ban -> con n-1 ban can pho 
//     return time/x + time/y >= n-1;
// }

// int bai3() {
//     int n,x,y; cin>>n>>x>>y;
//     // vd : pho 2 ban ( co 2 may1(1s), may2(2s)) -> time toi uu = right = min(may1,may2) * so ban(n)
//     int l =0, r = 1ll*(min(x,y))*n;
//     int ans=-1;
//     while(l<=r) {
//         // mid - time min de photo 
//         int m = (l+r)/2;
//         if(check_3(x,y,m,n)) {
//             ans = m;
//             r = m-1;
//         }
//         else {
//             l = m+1;
//         }
//     }
//     return ans;
// }

// // day con nho nhat : chia mang thanh <= k day con co tong max
// // input : n k : 5 3
// //               2 4 7 3 5
// // output: 8(3 + 5) -> day con max => chia nhu sau : (2,4) ; (7) ; (3,5) 

// bool check_4(int a[],int n, int k, int sum) {
//     int cnt=0;
//     int tong = 0;
//     for (int i=0;i<n;i++) {
//         tong+=a[i];
//         if(tong > sum) {
//             // them 1 day con thoa man (<=sum)
//             ++cnt;
//             // cap nhat day con moi 
//             tong = a[i];
//         }
//     }
//     // so day con tim dc <= sum 
//     ++ cnt;
//     // so day con cho phep <= k  => thoa man 
//     return cnt <= k;
// }

// int bai4() {
//     int n,k; cin>>n>>k;
//     int a[n]; int sum=0;
//     for (int i=0;i<n;i++) {cin>>a[i];sum+=a[i];}
//     // day con co so la tung phan tu trong mang (max_element -> cho phep tat ca value mang -> day con)
//     int l = 1ll * (*max_element(a,a+n));
//     int r = sum; 
//     // day con lon nhat -> sum of arrays 
//     int ans = -1;
//     while(l<=r) {
//         int m = (l+r)/2;
//         if(check_4(a,n,k,m)) {
//             ans = m;
//             // left -> right ( so day con giam dan )
//             // tang so day con 
//             r = m-1;
//         }
//         else {
//             l = m+1;
//         }
//     }
//     return ans;
// }
// // xep domino : 
// // input : width height count_domino 2 3 10
// // output: min-size-square  9 ( 4x3 -> xep toi da 12 domino )

// int bai5() {
//     int x,y,d; cin>>x>>y>>d;
//     int r = max (x,y) * d;
//     // canh hinh vuon : l-> r(lon nhat khi size_max_domino * count_domino) xep thanh 1 hang ngang
//     int l = 0 ;
//     int ans = -1;
//     while(l<=r) {
//         int m = (l+r)/2;
//         // so domino can xep 
//         if(( (m/x) * (m/y) )>=d) {
//             ans = m;
//             r = m-1;
//         }
//         else {
//             l = m+1;
//         }
//     }
//     return ans;
// }
// // cat day: cho n soi day ,  cat n soi day sao cho thu duoc k soi ( chieu dai moi soi cat duoc la lon nhat co the )


// bool check_6(int a[],int n,ll len,int k) {
//     // dem soi cat dc 
//     int cnt = 0;
//     for (int i=0;i<n;i++) {
//         cnt += (int)(a[i]/len);
//     }
//     // tong so soi thu duoc phai nho hon or bang gia thiet(k soi)
//     return cnt >= k;
// }
// int bai6(){
//     int n,k; cin>>n>>k; 
//     int a[n];
//     for (int i=0;i<n;i++) cin>>a[i];
//     // chieu dai soi cat duoc : l-> r 
//     int l = 0;
//     ll r = (*max_element(a,a+n));
//     ll ans = -1;
//     while(l<=r) {
//         ll m = (l+r)/2;
//         if(check_6(a,n,m,k)) {
//             ans = m;
//             l = m + 1;
//         }
//         else {
//             r = m - 1;
//         }
//     }
//     return ans;
// }
// // output -> so thuc 
// void bai6_2(){
//     int n,k; cin>>n>>k; 
//     int a[n];
//     for (int i=0;i<n;i++) cin>>a[i];
//     // chieu dai soi cat duoc : l-> r 
//     double l = 0;
//     double r = 9e18;
//     ll ans = -1;
//     for (int i=1;i<=100;i++) {
//         double m= (r + l)/2;
//         if(check_6(a,n,m,k)) {
//             ans = m ;
//             l = m;
//         }
//         else {
//             r = m;
//         }
//     }
//    cout <<fixed<<setprecision(6)<<ans<<endl;
// }
// // dem so day con co tong = X 
// void child_array() {
//     int n,x; cin>>n>>x;
//     int a[n];
//     for (auto&x:a) cin>>x;
//    ll tong = 0;int cnt=0;
// //    danh dau tong 
//    map <ll,int> mp;     
//    for (int i=0;i<n;i++) {
//     tong += a[i];
//     if(tong == x) ++cnt;
//     if(mp.count(tong-x)) ++cnt;
//     mp[tong] = 1;
//     }
//     cout <<cnt;
// }

// // co so am 
// void child_array_2() {
//     int n,x; cin>>n>>x;
//     int a[n];
//     for (auto&x:a) cin>>x;
//    ll tong = 0;int cnt=0;
// //    danh dau tong 
//    map <ll,int> mp;     
//    for (int i=0;i<n;i++) {
//     tong += a[i];
//     if(tong == x) ++cnt;
//     if(mp.count(tong-x)) cnt += mp[tong-x];
//     // co nhieu hon mot cap tong-x 
//     mp[tong] ++;
//     }
//     cout <<cnt;
// }
// // dung prefix sum 
// void child_array_3() {
//     int n,x; cin>>n>>x;
//     int a[n],b[n];
//     for (auto&x:a) cin>>x;
//     b[0] = a[0];
//     for (int i=1;i<n;i++) {
//         b[i] = b[i-1] + a[i];
//     }
//    ll tong = 0;int cnt=0;
// //    danh dau tong 
//    map <ll,int> mp;     
//    for (int i=0;i<n;i++) {
//     if(b[i]==x) {++cnt;cout <<a[i]<<' '<<a[i-1]<<endl;}
//     if(mp.count(b[i]-x)) ++cnt;
//     mp[b[i]] = 1;
//    }
//    cout <<cnt;
// }
// // 9 5 
// // 1 4 2 3 7 4 1 5 3
// // 9(n)  5(x)
// // 1 4 2 3 7 4 1 5 3
// // 4 (1,4) (2,3) (4,1) (5)
// int main() {
//     child_array_3();
// }  return ans;
// }

// // cat go bob 
// // problem : bob can L go , may cua se cat (H) tat ca cay trong 1 lan cat 
// // ex: chieu cao cua cac cay go : 8 10 11 4 13 , H = 6 -> luong go thu : 2 + 4 + 5 + 0 + 7 + 18 >= L(so go ma bob can) output tim value min >=L
// // -> cat tai H -> thu duoc tong go >= L => tim max H 
// // input : so cay , L  
// // output: H max de thu duoc L (go)
// // in: 4 10


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<pair<int, int>> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         v.push_back({x, y});
//     }
//     int xm = v[0].first, ym = v[0].second;
//     for (int i = 1; i < v.size(); i++)
//     {
//         xm = max(xm,v[i].first);
//         ym = max(ym,v[i].second);
//     }
//     // find() -> return iterator 
//     pair <int,int> point_check = make_pair(xm,ym);
//     auto it = find(v.begin(),v.end(),point_check);
//     if(it!=v.end()) cout <<"Max point: "<< xm<< ' '<<ym;
//     else cout <<"Not Found!";
// }

// // Độ phức tạp thời gian: O(n)
// // Biểu thức O(n) ("big O of n") cho biết thuật toán thực hiện một số phép
// //  toán tỉ lệ thuận với kích thước đầu vào n
// //  (số phần tử trong mảng v).
// // Hàm lặp for duyệt qua tất cả n phần tử của mảng v một lần.
// //  Trong mỗi lần lặp, có các phép toán so sánh và gán hằng số,
// //   không phụ thuộc vào n. Do đó, tổng số phép toán thực hiện tỉ lệ thuận với n.

