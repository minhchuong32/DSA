// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// *Linear binary search :
// Bai tap tim vi tri x 
// #include <iostream>
// #include <vector>

// using namespace std;

// void linear_search(const vector<int> &arr, int x, vector<int> &result);
// void binary_search(const vector<int> &arr, int x, vector<int> &result);
// int main()
// {
//     vector<int> Arr = {2, 4, 5, 7, 1, 2, 3, 6};
//     vector<int> x_value = {2, 4};
//     vector<int> Result;
//     cout << "Linear_search \n";
//     for (int x : x_value)
//     {
//         linear_search(Arr, x, Result);
//         cout << "Phan tu " << x << " xuat hien tai vi tri ";
//         for (int y : Result)
//         {
//             cout << " " << y + 1 << " ";
//         }
//         cout << endl;
//         Result.clear();
//     }
//     cout << "Binary_search \n";
//     for (int x : x_value)
//     {
//         binary_search(Arr, x, Result);
//         cout << "Phan tu " << x << " xuat hien tai vi tri ";
//         for (int y : Result)
//         {
//             cout << " " << y + 1 << " ";
//         }
//         cout << endl;
//         Result.clear();
//     }
// }

// void binary_search(const vector<int> &arr, int x, vector<int> &result)
// {
//     int n = arr.size();
//     int left = 0, right = n - 1;
//     while (left <= right)
//     {
//         int m = left + (right - left) / 2;
//         if (arr[m] == x)
//         {
//             result.push_back(m);
//             // Kiểm tra các phần tử bên trái và bên phải của m có bằng x không
//             int left = m - 1;
//             while (left >= 0)
//             {
//                 if (arr[left] == x)
//                     result.push_back(left);
//                 left--;
//             }
//             int right = m + 1;
//             while (right < n)
//             {
//                 if (arr[right] == x)
//                     result.push_back(right);
//                 right++;
//             }
//             return;
//         }
//         else if (arr[m] < x)
//         {
//             left = m + 1;
//         }
//         else
//         {
//             right = m - 1;
//         }
//     }
// }

// void linear_search(const vector<int> &arr, int x, vector<int> &result)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//             result.push_back(i);
//     }
// }
// * Ham do time 
#include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <fstream>

// using namespace std;
// using namespace std::chrono;

// // Hàm tìm kiếm tuyến tính
// int linearSearch(int a[], int n, int x, int &compare)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         compare++;
//         if (a[i] == x)
//             return i; // Trả về chỉ số của phần tử nếu tìm thấy
//     }
//     return -1; // Trả về -1 nếu không tìm thấy
// }

// // Hàm tìm kiếm nhị phân
// int binarySearch(int a[], int left, int right, int x, int &compare)
// {
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         compare++;
//         if (a[mid] == x)
//             return mid; // Trả về chỉ số của phần tử nếu tìm thấy
//         else if (a[mid] < x)
//             left = mid + 1; // Tiếp tục tìm kiếm bên phải của mảng
//         else
//             right = mid - 1; // Tiếp tục tìm kiếm bên trái của mảng
//     }
//     return -1; // Trả về -1 nếu không tìm thấy
// }

// int main()
// {
//     srand(time(0));
//     // b. Tạo một mảng ngẫu nhiên gồm n = 10 phần tử kiểu số nguyên có giá trị trong khoảng từ 1 đến 10.
//     ofstream ofs("cau_b.txt");
//     if (!ofs)
//     {
//         cout << "Error opening file." << endl;
//         return 1;
//     }

//     int N = 100000;
//     int random_array[N];
//     for (int i = 0; i < N; ++i)
//     {
//         random_array[i] = rand() % 1000000 + 1;
//     }

//     // Thực hiện chạy các thuật toán trên 10 lần
//     const int runs = 10;
//     for (int run = 0; run < runs; ++run)
//     {
//         // random x can tim 
//         int x ;
//         x = rand() % 100;
//         int compare_linear = 0, compare_binary = 0;
//         // do thoi gian linear 
//         auto start_linear = steady_clock::now();
//         linearSearch(random_array, N, x, compare_linear);
//         auto stop_linear = steady_clock::now();
//         auto duration_linear = duration_cast<nanoseconds>(stop_linear - start_linear);
//         // do thoi gian binary 
//         auto start_binary = steady_clock::now();
//         binarySearch(random_array, 0, N - 1, x, compare_binary);
//         auto stop_binary = steady_clock::now();
//         auto duration_binary = duration_cast<nanoseconds>(stop_binary - start_binary);

//         ofs << "Run " << run + 1 << ":" << x << endl;
//         ofs << "Linear Search:"
//             << " So phep so sanh: " << compare_linear << ", Thoi gian chay: " << duration_linear.count() << " nanoseconds" << endl;
//         ofs << "Binary Search:"
//             << " So phep so sanh: " << compare_binary << ", Thoi gian chay: " << duration_binary.count() << " nanoseconds" << endl;
//     }
//     ofs.close();
//     return 0;
// }




// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// //linear search :tim phan tu trong array
// // 5(n) 3(x)
// // 1 2 3 4 5
// bool ls(int a[],int n,int x) // (ten array,so luong  phan tu, variable x)
//  {
// 	for (int i=0;i<n;i++) {  
// 		if (a[i]==x) return true;
// 	} return false;									
// }

// // binary search:tim phan tu trong array
// bool bn(int a[],int n,int x) {
// 	int l=0,r=n-1;//  left right index
// 	while (l<=r) {
//      	int m=(r+l)/2;// midle index
// 		if (a[m]==x) return true;
// 		else if (a[m]>x) {
// 			r=m-1;
// 		}
// 		else  {
// 			l=m+1;
// 		}
// 	} return false;
// }
// // sd binary search de quy
// bool bn2 (int a[],int l,int r,int x) {
// 	if(l>r) return false;
// 		int m=(r+l)/2;
// 		if(a[m]==x) return true;
// 		else if (a[m]<x) return bn2 (a,m+1,r,x) ;// update index of left
// 		else return bn2 (a,l,m-1,x);// update index of right
// }
// //binary_search( a+x,a+y,value) :tim kiem value trong a[x] -> a[y-1]
// //binary_search(v.begin(),v.begin() + n,value):tim kiem value a[0] ->a[n-1]
// void bs() {
// 	int  n,x;cin>>n>>x;
// 	vector< int > v(n);
// 	for (int i=0;i<n;i++) {
// 		cin >>v[i];
// 	} 
// 	for (vector<int> :: iterator it=v.begin();it!=v.end();it++) {
// 		cout << *it<<endl;
// 	} 
// 	if (binary_search(v.begin(),v.end(),x)) {
// 		cout << "Found";
// 	} else { cout <<" Not Found";	
// 	}
// } 
// // tim vi tri xh dau tien va cuoi cung cua phan tu  3
// //in: 1 2 2 3 3 3 3 4 
// //out :3 6
// int first_pos(int a[],int n,int x) {
// 	int res=-1;
//    	int l =0,r=n-1;
//    	while (l<=r) {
//    		int m=(r+l)/2;
//    		if (a[m]==x) {
//    			res=m;// index can tim 
//    			r=m-1;// tim them ben trai con ko : left ....midle ....right
// 		   }
// 		else if(a[m]>x) {
// 			l=m+1;
// 		}
// 		else { r=m-1;
// 		}
// 	   } return res;// in ra vi tri dau tien
// }

// int last_pos(int a[],int n,int x) {
// 	int res=-1;
// 	int l=0,r=n-1;
// 	while(l<=r) {
// 		int m=(r+l)/2;
// 		if(a[m]==x) {
// 			res=m;// tim ben phai
// 			l=m+1;
// 		}
// 		else if (a[m]<x) {
// 			l=m+1;
// 		}
// 		else {r=m-1;
// 		}
// 	 } return res;//in ra vi tri cuoi cung
// } 
// // ap dung cho vector,map,set da dc sap xep
// //lower_bound(a,a+n,x):tra ve vi tri dau tien trong mang cua phan tu x
// void lb() {
// 	int n,x;cin>>n>>x;
// 	int a[n];
// 	for (int i=0;i<n;i++) {
// 		cin >>a[i];
// 	}
// 	auto it=lower_bound(a,a+n,x);// return distance
// 	cout << it-a;

	
// } 
// int main () {
//    int n,x;
//   cin>>n>>x;
//   int a[n];
//   for (int i=0;i<n;i++) {
//   	cin>>a[i];
//   }
//  cout <<first_pos(a,n,x);
// }


// // // a[n]
// // // *(a+x) -> value 
// // // (a+x) -> address (hexan)
// // binary_search(a,a+n,value) -> return true/false;
// // // array 
// // auto it = lower_bound(a,a+n,x) -> return iterator of value >=x ( it = a + x) 
// // it - a -> index ;
// // *it -> return value
// // // vector 
// // auto it = lower_bound(a.begin(),a.end(),x) -> return iterator of value >=x ( it = a + x) -> index = it - a
// // auto it = upper_bound(a,a+n,x) -> return iterator of value >x 

// // Ex: in ra so luong cap so co tong bang k 
// void bai1() {
//     int n,k ; cin>>n>>k; int a[n];
//     for (auto &x :a) cin >>x; 
//     // 1 2 2 4 4, k = 5 
//     sort (a,a+n);
//     ll ans = 0;
//     for (int i=0;i<n;i++) {
//         // vi tri dau tien >= k-a[i]
//         // i + 1 -> tranh lap lai cac cap 
//         // dem so 4 ( a[i] = 1)
//         auto it1 = lower_bound(a+i+1,a+n,k-a[i]);
//         // vi tri dau tien lon > k-a[i]
//         auto it2 = upper_bound(a+i+1,a+n,k-a[i]);
//         // so luong cap co tong = k;
//         ans+= it2-it1; 
//     }
//     cout <<ans;
// }

// // Ex: so luong cap co tong <= k 
// void bai2() {
//     int n,k ; cin>>n>>k; int a[n];
//     for (auto &x :a) cin >>x; 
//     // 1 2 2 4 4, k = 5 
//     sort (a,a+n);
//     ll ans = 0;
//     for (int i=0;i<n;i++) {
//         // a[i] + a[j] <= k 
//     //    tim so vi tri <= k - a[j]
//     auto it = lower_bound(a+i+1,a+n,k-a[i]);
//     it--;
//     // dem so cap < k ( so vi tri co value < k - a[i])
//     ans += it - (a + i);
//     }
//     cout <<ans;
// }
// // Ex: so luong cap co tong > k 
// void bai2_1() {
//     int n,k ; cin>>n>>k; int a[n];
//     for (auto &x :a) cin >>x; 
//     // 1 2 2 4 4, k = 5 
//     sort (a,a+n);
//     ll ans = 0;
//     for (int i=0;i<n;i++) {
//         // a[i] + a[j] > k 
//     //    tim so vi tri > k - a[i]
//     auto it = upper_bound(a+i+1,a+n,k-a[i]);
//     // dem so cap < k ( so vi tri co value < k - a[i])
//     ans += a + n - it;
//     }
//     cout <<ans;
// }
// // lantern 0___a[i]_____l
// void lantern_dis() {
//     int n,l; cin>>n>>l; int a[n];
//     for (auto &x:a) cin>>x;
//     int max_dis = (a[0],l-a[n-1]);
//     for (int i=1;i<n;i++) {
//         // ban kinh -> /2 = dis chiu sang lon nhat cua lantern
//         max_dis = max(max_dis,(a[i] - a[i-1])/2);
//     }
//     cout <<fixed<<setprecision(2)<<max_dis;
// }
// // kirito power 
// // kirito se chien dau voi n con rong co suc manh tuong ung khac nhau -> sau moi tran thang 
// // kirito se dc cong point cua chinh con rong do, dk thang power of kirito > power dragon , neu danh bai tat ca rong -> return S else return A.
// void kirito() {
//     ll n,s;
//     // s : power of kirito 
//     cin>>n>>s;
//     vector <pair<ll ,ll>> v;
//     for (int i=0;i<n;i++) {
//         // nhap suc manh cho rong ( x: power , y : point)
//         ll x,y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
//     // sx power of dragon (vector<pair> sort first)
//     sort(v.begin(),v.end());
//     for (int i=0;i<n;i++) {
//         if(s<=v[i].first) {
//             cout <<"NO_Kirito_A";
//             return ;
//         }
//         else {
//             s += v[i].second;
//         }
//     }
//     cout <<"YES_kirito_S";
// }
// // BerSU BALL
// // ghep cap khieu vu (chi so ki nang ko lech qua 1)
// void BerSU_Ball() {
//     int m,n; cin>>m>>n;
//     vector <int> x(m),y(n);
//     for (auto &it:x) cin>>it;
//     for (auto &it:y) cin>>it;
//     sort(x.begin(),x.end());
//     sort(y.begin(),y.end());
//     int i=0,j=0,cnt=0;
//     while(i<x.size() && j<y.size()) {
//         if(abs(x[i]-y[j])<=1) {
//             ++cnt; ++i;++j;
//         }
//         else {
//             if(x[i]-y[j]>1) {
//                 j++;
//             }
//             else i++;
//         }
//     }
//     cout <<cnt;
// }
// // hoa nhac 
// // mang 1 : danh sach ve 
// // mang 2 : ds khach 
// // ung vs moi value mang2 tim value mang1 (max) <= value trong mang 2
// // vd : 5 3
// // 5 3 7 8 5 -> 3 5 5 7 8
// // 4 8 3
// // -> 3 7 -1(ko co ve)
// void hoaNhac() {
//     // luu  tang dan trung nhau 
//     multiset<int> ms;
//     int m,n; cin>>m>>n;
//     // ve 
//     for (int i=0;i<n;i++) {
//         int x; cin>>x;
//         ms.insert(x);
//     }
//     // khach
//     for (int i=0;i<m;i++) {
//         int x; cin>>x;
//         // tim ve lon nhat >= x
//         auto it = ms.upper_bound(x);
//         // dich trai -> value mang 1 (max) <= value mang 2
//         --it;
//         cout <<*it;
//         // xoa ve do 
//         ms.erase(it);
//     }
// }
// // store 
// // input : n dong mo ta khac hang , moi khach hang {time arrive, time out} 
// // output : so khach hang nhieu nhat co the co

// void store() {
//     int n; cin>>n;
//     vector <pair<int,int>> v;
//     for (int i=0;i<n;i++) {
//         int x,y; cin>>x>>y;
//         // khach den
//         v.push_back({x,1});
//         // khach roi di
//         v.push_back({y,-1});
//     }
//     // sort theo first 
//     sort(v.begin(),v.end());
//     int ans = 0 , res = 0;
//     for (auto x:v) {
//         res += x.second;
//         // cap nhat ki luc so khach den 
//         ans = max (ans,res);
//     }
//     cout <<ans;
// }
// // lien hoan phim
// // xem duoc nhieu nhat bao nhieu phim

// // sx time end of film 
// bool cmp(pair <int,int> a, pair <int,int> b) {
//     return a.second < b.second;
// }
// void film () {
//     int n; cin >> n;
//     pair <int,int> a[n];
//     for (int i=0;i<n;i++) {
//         // time start vs time end 
//         cin>>a[i].first >> a[i].second;
//     }
//     sort (a,a+n,cmp);
//     // so film xem duoc 
//     int cnt=1;
//     int time_end = a[0].second;
//     for (int i=1;i<n;i++) {
//         if(a[i].first >= time_end) {
//             time_end = a[i].second;
//             ++cnt;
//         }
//     }
//     cout <<cnt;

// }
// int main() {
//     store();
// }



// *BAI TAP:
// #include <bits/stdc++.h>
// using namespace std;

// // in phan tu lon nhat - nho nhat, lon thu hai- nho thu hai
// void bai21(){
//     int n;cin>>n;int a[n];
//     for (auto&x:a) cin>>x;
//     int l=0,r=n-1;
//     sort(a,a+n);
//     while(l<r) {
//         cout <<a[r]<<" "<<a[l]<<" ";
//         l++;r--;
//     }
//     if(n%2) cout <<a[l];

// }
// // sap xep 0 1 2
// void bai22(){
//     int n ; cin>>n; int a[n];
//     int cnt[3]={0};
//     for (int i=0;i<n;i++){
//         cin>>a[i];
//         cnt[a[i]]++;
//     }
//     for (int i=0;i<3;i++){
//          for (int j=0;j<cnt[i];j++) cout <<i<<" ";
//     }
// }
// // dem so luong cap so co tong bang k
// void bai23(){
//     int n,k;cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;
//     int cnt=0;
//     for (int i=0;i<n;i++){
//         for (int j=i+1;j<n;j++){
//             if(j!=i && a[i]+a[j]==k) ++cnt;
//         }
//     }
//   cout <<cnt;
// }
// // c2 - map
// void bai23_c2(){
//     int n,k;cin>>n>>k;int a[n];
//     map<int,int> mp;
//     for (auto&x:a) {
//         cin>>x;
//         mp[x]++;
//     }
//    int cnt=0;
//    for (int i=0;i<n;i++){
//     cnt+=mp[k-a[i]];
//     if(a[i]*2==k) {
//         --cnt; //tan xuat bi thua(1) do dem chinh no 
//     }
//    }
//    cout <<cnt/2;

// }
// // c3
// // ham nhi phan tim kiem vi tri dau tien cua phan tu
// int first_pos(int a[],int l ,int r,int x){
//     int res=-1;
//     while(l<=r) {
//         int m=(l+r)/2;
//         if(a[m]==x) {
//             res=m;
//             r=m-1;
//         }
//         else if(a[m]>x) {
//             r=m-1;
//         }
//         else {
//             l=m+1;
//         }
//     }
//     return res;
// }
// // vi tri cuoi 
// int last_pos(int a[],int l ,int r,int x){
//     int res=-1;
//     while(l<=r) {
//         int m=(l+r)/2;
//         if(a[m]==x) {
//             res=m;
//             l=m+1;
//         }
//         else if(a[m]>x) {
//             r=m-1;
//         }
//         else {
//             l=m+1;
//         }
//     }
//     return res;
// }
// void bai23_c3(){
//     int n,k;cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;int cnt=0;
//     sort(a,a+n);
//     for (int i=0;i<n;i++){
//         int f=first_pos(a,i+1,n-1,k-a[i]);
//         int l=last_pos(a,i+1,n-1,k-a[i]);
//         // kiem tra so do co trong mang hay khong
//         if(l!=-1) 
//         cnt +=(l-f)+1;
//     }
//     cout <<cnt;
// }
// // dem cap so nho hon k cho truoc
// void bai24(){
//     int n,k;cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;
//     int cnt=0;
//     for (int i=0;i<n-1;i++){
//         for (int j=i+1;j<n;j++){
//             if(a[i]+a[j]<k) ++cnt;
//         }
//     }
//     cout<<cnt;
// }
// // c2
// // ham tim vi tri cuoi cung nho hon x cho truoc
// int last_index(int a[],int l, int r, int x) {
//     int res=-1;
//     while(l<=r) {
//         int m=(l+r)/2;
//        if(a[m]<x) {
//         res=m;
//         l=m+1;
//        }
//        else r=m-1;
//     }
//     return res;
// }
// void bai24_c2(){
//     int n,k;cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;
//     sort(a,a+n);
//     int cnt=0;
//     for (int i=0;i<n;i++){
//         // vi tri xh cuoi cung nho hon k-a[i]
//         int l=last_index(a,i+1,n-1,k-a[i]);
//         if(l!=-1)  // co phan tu dang xet trong mang
//         {
//             cnt+=l-i;// tao toi da 3 cap neu i=0 va l=4
//         }
//     }
//     cout<<cnt;
// }
// // dem so cap lon hon k cho truoc
// // ham tim vi tri dau tien lon hon k-a[i]
// int first_index(int a[],int l, int r, int x) {
//     int res=-1;
//     while(l<=r) {
//         int m=(l+r)/2;
//         if(a[m]>x) {
//             res=m;
//             r=m-1;
//         }
//         else {
//             l=m+1;
//         }
//     }
//     return res;
// }
// void bai25(){
//     int n,k;cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;
//     int cnt=0;
//     sort(a,a+n);
//     for (int i=0;i<n;i++){
//         int f=first_index(a,i+1,n-1,k-a[i]);
//         if(f!=-1) {
//             cnt+=(n-f);
//         }
//     }
//     cout <<cnt;
// }
// // tim tich giua phan tu lon nhat va phan tu nho nhat trong 2 mang
// void bai26(){
//     int m,n;cin>>m>>n;int a[m],b[n];
//     for (auto&x:a) cin>>x;
//     for (auto&x:b) cin>>x;
//     int m1= *max_element(a,a+m);
//     int m2= *min_element(b,b+n);
//     cout <<1ll*m1*m2;
// }
// // hop nhat 2 mang
// void bai27(){
//     int m,n;cin>>m>>n;int a[m],b[n];
//     for (auto&x:a) cin>>x;
//     sort(a,a+m);
//     for (auto&x:b) cin>>x;
//     sort(b,b+n);
//     vector<int> v;
//     int cnt=0,i=0,j=0;
//     while(i<m && j<n) {
//         if(a[i]<b[j]) {
//             v.push_back(a[i]);
//             i++;
//         }
//         else {v.push_back(b[j]);j++;}
//     }
//     while(i<m) {v.push_back(a[i]);i++;}
//     while(j<n) {v.push_back(b[j]);j++;}
//     for (auto&x:v) cout <<x<<" ";
// }
// // dien so con thieu
// void bai28(){
//     int n;cin>>n;int a[n];
//     for (auto&x:a) {cin>>x;}
//     sort(a,a+n);int cnt=0;
//    for (int i=0;i<n-1;i++){
//      if(a[i+1]-a[i]>1) ++cnt;
//    }
//    cout <<cnt;
// }
// // dung mang danh dau
// void bai28_c2(){
//   int n;cin>>n;int a[n],cnt[100];
//   int l=INT_MAX,r=INT_MIN;
//   for (auto&x:a) {
//     cin>>x;
//     r=max(r,x);
//     l=min(l,x);
//     cnt[x]=1;
//   }
//   int ans=0;
//   for (int i=l;i<=r;i++) {
//     if(cnt[i]!=1) ++ans;
//   }
//   cout <<ans;
// }
// // sap xep theo abs , in ra mang ban dau 
// // idea : tao 1 veco pair ( first : a[i], second: abs(x-a[i])) -> sort theo cmp(sx second tang dan)
// // ham sap xep abs
// bool cmp(pair<int,int> a,pair<int,int> b) {
//     return a.second<b.second;
// }
// void bai29(){
//     int n,x;cin>>n>>x;int a[n];
//     for (auto&x:a) cin>>x;
//     vector <pair<int,int>> v;
//     for (int i=0;i<n;i++) {
//         // dua cap mang ban dau va mang abs vao pair
//         v.push_back(make_pair(a[i],abs(x-a[i])));
//     }
//     sort(v.begin(),v.end(),cmp);
//     for (auto it:v) {
//         // in ra mang ban dau
//         cout <<it.first<<" ";
//     }  
// }
// // c2
// // ham sort theo abs
// int n,x;
// // sap xep theo abs(x-a) tang dan 
// bool check(int a,int b){
//     return abs(x-a)<abs(x-b);
// }
// void bai29_c2(){
//     cin>>n>>x;int a[n];
//     for (auto&x:a) cin>>x;
//     sort(a,a+n,check);
//     for (auto&x:a) cout <<x<<" ";
// }
// // tim hop va giao 2 mang
// void bai30(){
//     int m,n;cin>>m>>n;int a[m],b[n];
//     for (auto&x:a) cin>>x;
//     for (auto&x:b) cin>>x;
//     vector<int> v1;
//     vector<int> v2;
//     int i=0,j=0;
//     while(i<m && j< n){
//         if(a[i]<b[j]) {
//             // kiem tra xem a[i] da co trong mang hay chua
//             auto it=find(v1.begin(),v1.end(),a[i]);
//             if(it!=v1.end()) {
//                 ++i;
//             }
//             else {v1.push_back(a[i]);i++;}
//         }
//         else if(a[i]==a[j]) {
//             v1.push_back(a[i]);
//             v2.push_back(a[i]);
//             i++;
//             j++;
//         }
//         else {
//             auto it=find(v1.begin(),v1.end(),b[j]);
//             if(it!=v1.end()) {
//                 j++;
//             }
//             else {
//                  v1.push_back(b[j]);j++;
//             }
          
//         }
//     }
//     while(i<m) {
//         v1.push_back(a[i]);i++;
//     }
//     while(j<n) {
//         v1.push_back(b[j]);j++;
//     }
//     cout <<"Hop 2 mang: ";
//     for (auto&x:v1) cout <<x<<" ";
//     cout <<endl;
//     cout <<"Giao 2 mang: ";
//     for (auto&x:v2) cout <<x<<" ";
// }
// // c2
// void bai30_c2(){
//     int m,n;cin>>m>>n;int a[m],b[n];
//     vector<int> v;
//     set<int> se;
//     for (auto&x:a) {cin>>x;v.push_back(x);}
//     for (auto&x:b) {cin>>x;v.push_back(x);}
//     map<int,int> mp;
//     for (auto&x:v) {
//         se.insert(x);
//         mp[x]++;
//     }
//     cout <<"Hop 2 mang: ";
//     for (auto&x:se) cout <<x<<" ";
//     cout <<endl;
//     cout <<"Giao 2 mang: ";
//     for (auto&x:v) {
//         if(mp[x]>1) {cout <<x<<" "; mp[x]=0;}
//     }
    
// }
// // spa xep lai day con
// // int:10(1) 12 20 30(4) 25 40 32 31 35(9) 50 60
// // out:4 9 
// //idea : tim l( duyet xuoi) va r (duyet nguoc) , tim min max trong l->r cap nhat l va r
// void bai31(){
//     int n;cin>>n;int a[n];
//     for (auto&x:a) cin>>x;
//     int l,r;
//     for (int i=0;i<n;i++){
//         if(a[i+1]-a[i]<0) {
//             l=i;break;
//         }
//     }
//     for (int i=n-1;i>=0;i--) {
//         if(a[i-1]-a[i]>0) {
//             r=i;break;
//         }
//     }
//     // tim chi so min max tu l -> r
//     auto it2=max_element(a+l,a+r+1);
//     auto it1=min_element(a+l,a+r+1);
//     for(int i=0;i<=l;i++){
//         if(*it1<a[i]) {
//             l=i;break;
//         }
//     }
//     for (int i=n-1;i>=r;i--){
//         if(*it2>a[i]) {
//             r=i;break;
//         }
//     }
//    cout <<l+1<<" "<<r+1;
    
// }
// // sap xep chu so
// // in : 102 23 
// // out : 0 1 2 3
// // ham tach so
// string tachso(int n){
//     string s="";
//     while(n) {
//       s+=(char)((n%10)+'0');
//       n/=10;
//     } 
//     return s;
// }
// // 
// void bai32() {
//     int n;cin>>n;int a[n];
//     for (auto&x:a) cin>>x;
//     set<char> se;
//     for (int i=0;i<n;i++){
//         string s="";
//         s=tachso(a[i]);
//         for (auto&x:s) se.insert(x);
//     }
//     for (auto&x:se) cout <<x<<" ";
// }
// // cach 2
// void bai32_c2(){
//     string s;getline(cin,s);
//     int a[10]={0};
//     for (auto&x:s) {
//         if(isdigit(x)) {
//             a[x-'0']=1;// danh dau so
//         }
//     }
//     for (int i=0;i<10;i++){
//         if(a[i]) cout <<i<<" ";
//     }
// }

// // bai 33
// // sep theo so lan xuat hien
// // 5
// //in : 5 5 4 6 4
// //out: 4 4 5 5 6
// bool cmp2(pair <int,int> a ,pair<int,int> b) {
//    if(a.second!=b.second) 
//    {
//     // neu khac tan so thi sep theo tan so lon hon truoc
//     return a.second>b.second;
//    }
//    // neu cung tan so thi sep gia tri nho hon truoc
//    else if(a.second==b.second) {
//     return a.first<b.first;
//    }
// }

// void bai33(){
//     int n;cin>>n;int a[n];
//     vector<pair<int,int>> v;
//     map<int,int> mp;
//     for (auto&x:a) {
//         cin>>x;
//         mp[x]++;
//     }  
//     for (auto&x:a) {
//         v.push_back(make_pair(x,mp[x]));
//     }
//     sort(v.begin(),v.end(),cmp2);
//     for (int i=0;i<n;i++){
//     if(v[i].second){
//         for (int k=0;k<v[i].second;k++) {cout <<v[i].first<<" ";v[i].second=0;}
//     }
//    }
// }
// // chi dung map
// map<int,int> mp1;
// // ham ss tan xuat 
// bool cmp3(int a,int b){
//     if(mp1[a]!=mp1[b]) {
//         return mp1[a]>mp1[b];
//     }
//     // in gia tri nho hon neu cung tan xuat
//     return a<b;
// }
// void bai33_c2(){
//     int n;cin>>n; int a[n];
//     for (auto&x:a) {
//         cin>>x;mp1[x]++;
//     }
//     // sap xep mang theo ham cmp3
//     sort(a,a+n,cmp3);
//    for (auto&x:a) cout <<x<<" ";
// }
// // doi cho it nhat
// // in: 4 3 2 1
// // out : 2 ( swap 2 lan)
// void bai34(){
//    int n;cin>>n;int a[n];int cnt=0;
//    for (auto&x:a) cin>>x;
//    for (int i=0;i<n;i++){
//     int min_pos=i;
//     for (int j=i+1;j<n;j++){
//         if(a[j]<a[min_pos]) min_pos=j;
//     }
//     if(a[i]!=a[min_pos]) {
//     swap (a[min_pos],a[i]);++cnt;
//     }
//    }
//    for (auto&x:a) cout <<x<<" ";
//    cout<<endl;
//    cout <<cnt;
// } 
// // dem so cap x^y>y^x
// // x thuoc mang X , y thuoc mang Y
// // idea : x< y -> x^y > y^x tru cap x=1,2,2:y=2,3,4 
// // ham tim vi tri xh dau tien > x trong [l,r]
// int firstpos(int a[],int l,int r, int x) {
//     int res=-1;
//     while(l<=r){
//         int m=(l+r)/2;
//         if(a[m]>x) {
//             res=m;
//             // rut ngan mang ve ben trai
//             r=m-1;
//         }
//         else {
//             l=m+1;
//         }
//     }
//     return res;
// }
// int cnt[5];
// int count(int y[],int m,int x) {
//    if(x==0) return 0;
//    if(x==1)  {
//     // 1^0>0^1
//     return cnt[0];
//    } 
//    // neu x ko phai 0 va 1 thi cong tat ca phan tu co value =0 va =1
//    // vi x^n(x!= 0,1) > n^y (voi x>y)
//    // vd : 2^0 > 0^2( or 1^2).
//    long long res= cnt[0] +cnt[1];
//    long long l=firstpos(y,0,m-1,x);
//    // hoac dung ham
//    // auto it=upper_bound(y,y+m,x);
//    // res+=(y+m-it); it= y+index  (y+m-it == m-index(vi tri dau tien co phan tu lon hon x))
//    if(l!=-1) {
//     // cong bat dau tu chi so cua phan tu dau tien lon hon x
//     // l: vi tri dau tien > x thi cac phan tu sau l(m-l) deu thoa mang
//      res+=m-l;
//    }
//    // th dac biet : 2<3 nhung 2^3<3^2 nen tru di cac cap co 3 va 4
//    if(x==2) {
//     res-=cnt[3]+cnt[4];
//    }
//    // th dac biet 3<2 nhung 3^2>2^3 
//    if(x==3) {
//     res+=cnt[2];
//    }
//    return res;
// }
// void bai35(){
//     int x;cin>>x;int a[x];
//     int y;cin>>y;int b[y];
//     for (int i=0;i<x;i++) cin>>a[i];
//     for (int i=0;i<y;i++){
//         cin>>b[i];
//         if(b[i]<=4) cnt[b[i]]++;
//     }
//     sort(b,b+y);
//     int ans=0;
//     for (auto&x:a) {
//          ans+=count(b,y,x);
//     }
//     cout <<ans;
// }
// // giao 3 day so da sap xep

// void bai36(){
//     int m,n,q;cin>>m>>n>>q;
//     int a[m],b[n],c[q];
//     vector<int> v;
//     for (auto&x:a) {cin>>x;v.push_back(x);}
//     for (auto&x:b) {cin>>x;v.push_back(x);}
//     for (auto&x:c) {cin>>x;v.push_back(x);}
//     map<char,int> mp;
//     for (auto&x:v) {
//         mp[x] ++;
//     }
//     for (auto&x:v) {
//         if(mp[x]==3){ cout <<x<<" ";mp[x]=0;}
//     }
// }
// // sap xep chan le
// bool evan_old(int a,int b){
//     if(a%2==0 && b%2==0) return a<b;
//     else if(a%2!=0 && b%2!=0) return a>b;
// }
// void bai37(){
//     int n;cin>>n;int a[n];
//     vector <int> v1,v2;
//     for (auto&x:a)
//      {
//         cin>>x;
//         if(x%2==0) {
//             v1.push_back(x);
//         }
//         else {
//             v2.push_back(x);
//         }
//     }
//     sort(v1.begin(),v1.end());
//     sort(v2.begin(),v2.end(),greater<int>());
//     int cnt1=0,cnt2=0;
//     for (int i=0;i<n;i++){
//         if(a[i]%2==0)
//         // neu la value chan thi in vecto chan ra da sort
//          {
//             cout <<v1[cnt1++]<<" ";
//         }
//         else cout <<v2[cnt2++]<<" ";
//     }

// }
// //
// void bai37_c2(){
//     int n;cin>>n;int a[n];
//     for (auto&x:a) cin>>x;
//     for (int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[i] && a[j]%2==0 && a[i]%2==0) swap (a[j],a[i]);
//             else if(a[j]>a[i] && a[j]%2!=0 && a[i]%2!=0) swap(a[j],a[i]);
//         }
//     }
//     for (auto&x:a) cout <<x<<" ";
// }
// // bieu thuc nho nhat . cho mang n va so k . dat k dau cong va cac dau tru vao vi tri con lai de bieu thuc lon nhat
// void bai38(){
//     int n,k;cin>>n>>k; int a[n];
//     for (auto&x:a) cin>>x;
//     int s=a[0];
//     sort(a+1,a+n);
//     int dem_tru=n-1-k;
//     for (int i=1;i<n;i++){
//         if(dem_tru) {
//             s-=a[i];
//             dem_tru--;
//         }
//       else { s+=a[i];}
//     }
//     cout <<s;
// }
// // xep hang
// // cho cac cap thoi diem x , y
// // x : thoi diem den, y : thoi gian hoan thanh thu tuc
// // chi phuc vu cho 1 hang khach cho moi luot -> in ra thoi diem ket thuc thu tuc cho hanh khach cuoi
// // vd: in: 2-1 , 5-7 , 8-3 
// // 3h(hanh khach 1 xong) , 12h(hanh khach 2 xong) , hk 3 cho du den luc 8h nhung doi hk 2 lam xong den 12h -> cong them 3h cho thu tuc hk thu3 => 15h : thoi diem ket thuc
// // out : 15h
// // idea : ss thoi diem hk1 ket thuc vs thoi diem ban dau cua hk 2 -> lay max cua 1 trong 2 thoi diem (5), roi cong don voi thoi gian lam thu tuc cua hk 2 (5+7), roi lai ss thoi diem ket thuc hk2 
// // voi thoi diem bat dau lam thu tuc hk 3 (12,8), roi cong voi thoi diem ket thuc hk 3 (12 +3) => 15
// void bai39(){
//     int n;cin>>n;
//     pair<int,int> a[n];
//     for (int i=0;i<n;i++){
//         cin>>a[i].first>>a[i].second;
//     }
//     sort(a,a+n);
//     // sx theo thoi diem den(first)
//     int end_time=a[0].first+a[0].second;
//     for (int i=1;i<n;i++){
//         // ss tong thoi gian lam thu tuc nguoi thu i voi thoi diem den nguoi i+1 . Cong don khoang tg thuc hien thu tuc cua nguoi thu i+1
//         // vd nguoi 1 : 2 -> 4(h): thoidiem xong thu tuc:6h , nguoi thu 2 :3->2(h):nguoi thu 2 phai doi toi 6h (mac du den luc 3h)moi toi luot va mat them 2 tieng lam thu tuc -> 8h ca 2 hoan thanh thu tuc
//        end_time=max(end_time,a[i].second) +a[i].first;
//     }
//     cout <<end_time;
// }
// // tim cap co tong gan 0 nhat
// // int : -8 -66 -60
// // out : -68
// void bai40(){
//     int n;cin>>n;int a[n];
//     for (auto&x:a) cin>>x;
//     int min=1e9;
//     for (int i=0;i<n;i++){
//         for (int j=i+1;j<n;j++){
//             int sum=a[j]+a[i];
//             if( abs(sum-0)<min) min=sum;
//         }
//     }
//     cout <<min;
// }
// int main(){
//   bai40();
// }  


// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// //linear search :tim phan tu trong array
// // 5(n) 3(x)
// // 1 2 3 4 5
// bool ls(int a[],int n,int x) // (ten array,so luong  phan tu, variable x)
//  {
// 	for (int i=0;i<n;i++) {  
// 		if (a[i]==x) return true;
// 	} return false;									
// }

// // binary search:tim phan tu trong array
// bool bn(int a[],int n,int x) {
// 	int l=0,r=n-1;//  left right index
// 	while (l<=r) {
//      	int m=(r+l)/2;// midle index
// 		if (a[m]==x) return true;
// 		else if (a[m]>x) {
// 			r=m-1;
// 		}
// 		else  {
// 			l=m+1;
// 		}
// 	} return false;
// }
// // sd binary search de quy
// bool bn2 (int a[],int l,int r,int x) {
// 	if(l>r) return false;
// 		int m=(r+l)/2;
// 		if(a[m]==x) return true;
// 		else if (a[m]<x) return bn2 (a,m+1,r,x) ;// update index of left
// 		else return bn2 (a,l,m-1,x);// update index of right
// }
// //binary_search( a+x,a+y,value) :tim kiem value trong a[x] -> a[y-1]
// //binary_search(v.begin(),v.begin() + n,value):tim kiem value a[0] ->a[n-1]
// void bs() {
// 	int  n,x;cin>>n>>x;
// 	vector< int > v(n);
// 	for (int i=0;i<n;i++) {
// 		cin >>v[i];
// 	} 
// 	for (vector<int> :: iterator it=v.begin();it!=v.end();it++) {
// 		cout << *it<<endl;
// 	} 
// 	if (binary_search(v.begin(),v.end(),x)) {
// 		cout << "Found";
// 	} else { cout <<" Not Found";	
// 	}
// } 
// // tim vi tri xh dau tien va cuoi cung cua phan tu  3
// //in: 1 2 2 3 3 3 3 4 
// //out :3 6
// int first_pos(int a[],int n,int x) {
// 	int res=-1;
//    	int l =0,r=n-1;
//    	while (l<=r) {
//    		int m=(r+l)/2;
//    		if (a[m]==x) {
//    			res=m;// index can tim 
//    			r=m-1;// tim them ben trai con ko : left ....midle ....right
// 		   }
// 		else if(a[m]>x) {
// 			l=m+1;
// 		}
// 		else { r=m-1;
// 		}
// 	   } return res;// in ra vi tri dau tien
// }

// int last_pos(int a[],int n,int x) {
// 	int res=-1;
// 	int l=0,r=n-1;
// 	while(l<=r) {
// 		int m=(r+l)/2;
// 		if(a[m]==x) {
// 			res=m;// tim ben phai
// 			l=m+1;
// 		}
// 		else if (a[m]<x) {
// 			l=m+1;
// 		}
// 		else {r=m-1;
// 		}
// 	 } return res;//in ra vi tri cuoi cung
// } 
// // ap dung cho vector,map,set da dc sap xep
// //lower_bound(a,a+n,x):tra ve vi tri dau tien trong mang cua phan tu x
// void lb() {
// 	int n,x;cin>>n>>x;
// 	int a[n];
// 	for (int i=0;i<n;i++) {
// 		cin >>a[i];
// 	}
// 	auto it=lower_bound(a,a+n,x);// return distance
// 	cout << it-a;

	
// } 
// int main () {
//    int n,x;
//   cin>>n>>x;
//   int a[n];
//   for (int i=0;i<n;i++) {
//   	cin>>a[i];
//   }
//  cout <<first_pos(a,n,x);
// }




// // *Part 2: 

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// void bai1(){
//     int a[4]={5,7,3,2};
//     for (int i=0;i<4-1;i++){
//         for (int j=i+1;j<4;j++){
//             if(a[j]<a[i]) swap(a[j],a[i]);
//         }
//         cout <<"buoc "<<i+1<<" :";
//         for (auto&x:a) cout<<x<<" ";
//         cout <<endl;
//     }
// }
// // insertion sort (chon)
// void bai2(){
//     int a[4]={5,7,3,2};
//     for (int i=0;i<3;i++){
//         int min_pos=i;
//         for (int j=i+1;j<4;j++){
//             if(a[j]<a[min_pos]){ min_pos=j; }
//         }
//         swap(a[min_pos],a[i]);
//         cout <<"Buoc "<<i+1<<": ";
//         for (auto&x:a) cout <<x<<" ";
//         cout <<endl;
//     }
// }
// // selection sort
// void bai3(){
//     int a[4]={5,7,3,2};
//     for (int i=0;i<4;i++){
//         int pos=i-1,x=a[i];
//         while(pos>=0 && x<a[pos]) {
//             a[pos+1]=a[pos];
//             pos--;
//         }
//         a[pos+1]=x;
//         cout <<"buoc "<<i+1<<" :";
//         for (int j=0;j<=i;j++) {
//             cout <<a[j]<<" ";
//         }
//         cout <<endl;
//     }
// }
// // buoc 1 :5 
// // buoc 2 :5 7 
// // buoc 3 :3 5 7 
// // buoc 4 :2 3 5 7

// // buble sort
// void bai4(){
//   int a[4]={5,7,3,2};
//   for (int i=0;i<3;i++) {
//     // -1 -> duyet toi n-1 ; -i : giam vong lap sau khi day dc 1 phan tu ve cuoi
//     bool ok=false;
//     for (int j=0;j<4-1-i;j++){
//         if(a[j]>a[j+1]) {swap(a[j],a[j+1]);ok=true;}
//     }
//     if(ok) {
//         cout <<"buoc "<<i+1<<": ";
//         for (auto&x:a) cout <<x<<" ";
//         cout <<endl;
//     }
//   }
// }
// // kt phan tu co trong mang hay khong
// //c1
// void bai5(){
//     int n,k;cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;
//     bool ok=false;
//     for (auto&x:a) {
//         if(x==k) ok=true;
//     }
//     if(ok) cout <<1;
//     else cout <<0;
// }
// // c2
// void bai5_c2(){
//     int n,k;cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;
//     sort(a,a+n);
//     auto it=binary_search(a,a+n,k);
//     if(it) cout <<1;
//     else cout <<0;
// }
// // c3 
// void bai5_c3(){
//     int n,k;cin>>n>>k;int a[n];
//     for (auto&x:a) cin>>x;
//     auto it =find(a,a+n,k);
//     if(it!=a+n) cout <<1;
//     else cout <<0;
// }
// // c4 thuat toan tim kiem nhi phan
// bool bai5_c4(int a[],int n, int x) {
//     int l=0,r=n-1;
//     while(l<=r) {
//         int m=(l+r)/2;
//         if(a[m]==x) return true;
//         else if(a[m]>x) {
//             r=m-1;
//         }
//         else {
//             l=m+1;
//         }
//     }
//     return false;
// }
// // phan tu dau tien bang x -> lower_bound
// void bai7(){
//     int n,x;cin>>n>>x;int a[n];
//     for (auto&x:a) cin>>x;
//     auto it=lower_bound(a,a+n,x);
//     cout <<"vi tri dau tien bang "<<x<<" la: "<<it-a +1;
// }
// // thuat toan tim kiem vi tri dau tien 
// int bai7_c2(int a[],int n,int x){
//     int pos=-1,l=0,r=n-1;
//     while(l<=r){
//      int m=(l+r)/2;
//      if(a[m]==x) {
//         r=m-1; // tim them be trai con ko
//         pos=m+1; // cap nhat vi tri (+1 do pos=-1)
//      }
//      else if(a[m]<x) {
//         l=m+1;
//      }
//      else {
//         r=m-1;
//      }
//     }
//     return pos;
// }
// // vi tri cuoi
// int bai7_c3(int a[],int n,int x){
//     int pos=-1,l=0,r=n-1;
//     while(l<=r){
//      int m=(l+r)/2;
//      if(a[m]==x) {
//         l=m+1; // tim them be trai con ko
//         pos=m+1; // cap nhat vi tri (+1 do pos=-1)
//      }
//      else if(a[m]<x) {
//         l=m+1;
//      }
//      else {
//         r=m-1;
//      }
//     }
//     return pos;
// }
// // dem so luong phan tu bang x trong mang
// void count(){
//     int n,x;cin>>n>>x;int a[n];
//     for (auto&x:a) cin>>x;
//     int i=bai7_c2(a,n,x); // vi tri dau
//     int j=bai7_c3(a,n,x);// vi tri cuoi
//     cout <<"so lan xh : "<< j-i+1;
// }
// // mot phan cua lomuto (quiksort) 
// // input : 8 7 2 1 5 3 6 4 -> out : 2 1 3 [4] 5 8 6 7 
// void bai10(int a[], int l , int r) {
//     int pivot=a[r];
//     int i=-1, j=l;
//     for (int j=l;j<=r;j++){
//         if(a[j]<pivot) {
//             ++i;
//             swap(a[i],a[j]);
//         }
//     }
//     ++i;
//     swap(a[r],a[i]);
//     for (int j=l;j<=r;j++) {
//         if(j==i) cout <<"["<<a[j]<<"]"<<" ";
//         else cout <<a[j]<<" ";
//     }
// }
// // tron 2 day da sap xep in ra ten mang kem chi so
// void bai11(){
//     int m,n;cin>>m>>n;
//     int b[m],c[n];
//     for(auto&x:b) cin>>x;
//     for(auto&x:c) cin>>x;
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(b[i]<c[j]) {
//             cout <<"b"<<i+1<<" ";
//             i++;
//         }
//         else {
//             cout <<"c"<<j+1<<" ";
//             j++;
//         }
//     }
//     // in not cac phan tu con lai 1 trong 2 mang
//     while(i<m) {
//         cout <<"b"<<i+1<<" ";
//         i++;
//     }
//     while(j<n){
//         cout <<"c"<<j+1<<" ";
//         j++;
//     }
// }
// // ghep doi
// void bai12(){
//     int m,n;cin>>m>>n;
//     int a[m],b[n];
//     for (auto&x:a) cin>>x;
//     sort(a,a+m);
//     for (auto&x:b) cin>>x;
//     sort(b,b+n);
//     int cnt=0,i=0,j=0;
//     while(i<m && j<n){
//         if(a[i]<b[j]) {
//             ++i;
//         }
//         else {
//             ++cnt;
//             ++j;++i;
//         }
//     }
//     cout <<cnt;
// }
// // nha gan nhau nhat
// void bai13(){
//     int n;cin>>n;int a[n];
//     for (auto&x:a) cin>>x;
//     sort(a,a+n);
//     int min=INT_MAX;
//     for (int i=0;i<n-1;i++){
//       if (a[i+1]-a[i]<min) min=a[i+1]-a[i];
//     }
//     cout <<min;
// }
// // xep gach
// void bai14(){
//     int n;cin>>n;int a[n];
//     for (auto&x:a) cin>>x;
//     sort(a,a+n,greater<int>());
//     int ans=1;
//     int docung=a[0];
//     for (int i=1;i<n;i++){
//         if(docung>=1)
//             {++ans;}
//             else break;
//             // cap nhat do cung khi xep 1 vien a[i] len
//             docung=min(docung-1,a[i]);
        
//     }
//     cout <<ans;
// }
// // vat sua bo
// void bai15(){
//     int n;cin>> n; int a[n];
//     for (auto&x:a) cin>>x;
//     int sum=0;
//     sort(a,a+n,greater<int>());
//     for (int i=0;i<n;i++){
//         if(a[i]>i){
//         sum+=a[i]-i;
//         }
//         else break;
//     }
//     cout <<sum;
// }
// // in ra chi so 2 phan tu swap
// void bai16(int a[],int l ,int r){
//     int i=l; int j=r;int x=a[r];
//     while(i<=j) {
//         // phan ben trai nho hon x , ben phai lon hon x
//         while(a[i]<x) ++i;
//         while(a[j]>x) --j;
//         if(i<=j){
//             swap(a[i],a[j]) ;
//             if(i!=j)
//            { cout <<i+1<<" "<<j+1<<endl;}
//         }
//         ++i;--j;
//     }
//     // ket thuc loop -> i va j da di qua nhau -> chia 2 phan l-> j  vs i -> r
//     if(l<j) bai16(a,l,j);
//     if(i<r) bai16(a,i,r);
// }
// // 
// void bai17(){
//     int n;cin>>n;int a[n];
//     for(auto&x:a) cin>>x;
//     for (int i=0;i<n;i++){
//         int pos=i-1,x=a[i];
//         while(pos>=0 && a[pos]>x) {
//            a[pos+1]=a[pos];
//            pos--;
//         }
//         // in ra value vs vi tri dc chen 
//         cout <<x<<" "<<pos+1<<endl;
//         a[pos+1]=x;
//     }
// }
// // tach nhom tu mot mang , nhom duoc tach co cac value cach nhau 1 don vi
// void bai18(){
//     int n;cin>>n;int a[n];
//     for (auto&x:a) cin>>x;int cnt=1;
//     sort(a,a+n); int d=0;
//     for (int i=0;i<n-1;i++){
//        if(a[i+1]-a[i]>1) {
//         cout <<"Nhom "<<cnt++<<":";
//         for (int j=d;j<=i;j++) cout <<a[j]<<" ";
//         d=i+1;
//         cout <<endl;
//        }
//     }
//     // in ra cac phan tu con lai
//     cout <<"Nhom "<<cnt++<<":";
//     for (int i=d;i<n;i++)cout <<a[i]<<" ";

// }
// // ham sap xep 
// bool check(pair<int,int> a, pair<int,int> b) {
//     return a.second<b.second;
// }
// // dem co bao nhieu cap so ko bi giao nhau vd 1-2 vs 3-4 ko giao nhau
// // idea: luu cac cap vao vector pair , sap xep v.second tang dan , duyet mang neu v.first > v.second => ko trung ++cnt
// void bai19(){
//     int n;cin>>n;
//     vector<pair<int,int>> v(n);
//     for (int i=0;i<n;i++){
//         cin>>v[i].first>>v[i].second;
//     }
//     sort(v.begin(),v.end(),check);
//     for (int i=0;i<n;i++){
//         cout << v[i].first<<" "<<v[i].second<<endl;
//     }
//     int tmp=v[0].second;
//     int ans=1;
//     for (int i=1;i<n;i++){
//         if(v[i].first>tmp) {
//             ++ans;
//             tmp=v[i].second;
//         }
//     }
//     cout <<ans;

// }
// int main(){
//     bai19();
// }

// *Quiksort:
// #include <iostream>
// #include <vector>

// using namespace std;

// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j <= high - 1; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     vector<int> arr = {64, 25, 12, 22, 11};
//     int n = arr.size();
//     quickSort(arr, 0, n - 1);
//     cout << "Sorted array: ";
//     for (int i : arr) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }


// *Mergesort
// #include <iostream>
// #include <vector>

// using namespace std;

// void merge(vector<int>& arr, int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;
    
//     vector<int> L(n1), R(n2);

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];

//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(vector<int>& arr, int l, int r) {
//     if (l >= r) return;
//     int m = l + (r - l) / 2;
//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);
//     merge(arr, l, m, r);
// }

// int main() {
//     vector<int> arr = {64, 25, 12, 22, 11};
//     int n = arr.size();
//     mergeSort(arr, 0, n - 1);
//     cout << "Sorted array: ";
//     for (int i : arr) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// *Insertion sort:
// #include <iostream>
// #include <vector>

// using namespace std;

// void insertionSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     vector<int> arr = {64, 25, 12, 22, 11};
//     insertionSort(arr);
//     cout << "Sorted array: ";
//     for (int i : arr) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// *Selection sort:
// #include <iostream>
// #include <vector>

// using namespace std;

// void selectionSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         swap(arr[i], arr[min_idx]);
//     }
// }

// int main() {
//     vector<int> arr = {64, 25, 12, 22, 11};
//     selectionSort(arr);
//     cout << "Sorted array: ";
//     for (int i : arr) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }


// *Buble sort:
// #include <iostream>
// #include <vector>

// using namespace std;

// void bubbleSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     vector<int> arr = {64, 25, 12, 22, 11};
//     bubbleSort(arr);
//     cout << "Sorted array: ";
//     for (int i : arr) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }


// *Sort _ Bai tap :
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// //sort(a,a+n):sx tang dan tu 0 -> n-1
// void sort1() {
// 	int n;cin>>n;
// 	vector <int> v(n);
// 	for (int i=0;i<n;i++) {
// 		cin>>v[i];
// 	}
// 	sort (v.begin(),v.end());
// 	for(auto x:v) {
// 		cout << x<<" ";
// 	} 
// 	cout << endl;
// 	for (vector<int> ::iterator it=v.begin();it!=v.end();it++) {
// 		cout <<*it<<"";
// 	}
// }
// // sort(a,a+n,greater <int> ()):giam dan
// void sort2() {
// 		int n;cin>>n;
// 	vector <int> v(n);
// 	for (int i=0;i<n;i++) {
// 		cin>>v[i];
// 	}
// 		sort (v.begin(),v.end(),greater<int> ());
// 	for(auto x:v) {
// 		cout << x<<" ";
// 	} 
// }

// // sx cac phan tu tang dan theo abs giu index
// // stable_sort: sx tang dan giu index or sd ham sort(a,a+n,cmp) cmp la ham ss a vs b
// bool cmp (int a, int b) 
// {
// 	return abs(a)<abs(b); // sx theo abs
// }
//  void sort3() 
// {
// 	int n;cin>>n;int a[n];
// 	for (auto &x:a) cin>>x;
// 	stable_sort(a,a+n,cmp);
// 	for (auto x:a) cout <<x<<" ";
// }
// // sap xep tu theo chiu dai cua tu
// bool str(string a , string b) 
// {
// 	if(a.length()!=b.length()) return  a.length()>b.length();
// 	else return a<b;
// }
// void sort4() 
// {
// 	int n;cout <<"Nhap n: ";cin>>n;
// 	string a[n];
//     for (auto &x:a)	cin>>x;
// 	sort(a,a+n,str);
// 	for (auto x:a) cout <<x<<" ";
// }
// // selection sort
// void selectionsort(int a[],int n) 
// {
// 	for (int i=0;i<n-1;i++) 
// 	{
// 		int min_pos=i;
// 		for (int j=i+1;j<n;j++) 
// 		{
// 			if(a[j]>a[min_pos]) min_pos=j;
// 		}
// 		swap(a[i],a[min_pos]);
// 	}
// }
// // bubble sort 
// void bubblesort(int a[],int n) 
// {
// 	for (int i=0;i<n-1;i++) 
// 	{
// 		for (int j=0;j<n-i-1;j++) // sau moi loop (i) 1 phan tu dc sx troi ve cuoi -> n-i-1
// 		{
// 			if(a[j]>a[j+1]) swap (a[j],a[j+1]);
// 		}
// 	}
// }
// // insertion sort
// void insertionsort(int a[],int n) 
// {
// 	for (int i=1;i<n;i++)  {
//       int pos=i-1; int x=a[i];
// 	  while(pos>=0 && x<a[pos]) 
// 	  {
// 		a[pos+1]=a[pos];
// 		pos--;
// 	  }
// 	  a[pos+1]=x;
// 	}
// }
// //counting sort
// int cnt[100000];
// void countingsort() 
// {
// 	int n;cout <<"Input count of array: ";cin>>n;
// 	int a[n];
//     int m=INT_MIN;
// 	for (int i=0;i<n;i++) 
// 	{
// 		cin>>a[i];cnt[a[i]]++; // tang tan so xh cua phan tu 
//         m=max(a[i],m); // lay phan tu lon nhat
// 	}
// 		for (int i=0;i<=m;i++) // duyet tung phan tu co trong mang 
// 	{
// 		if(cnt[i]!=0) // neu tan xuat khac 0
// 		// cnt[i] : tan xuat cua i(value cua mang)
// 		{
// 			for (int j=0;j<cnt[i];j++) cout <<i<<" ";
// 		}
// 	}
  
// }
// // Quicksort (phan hach Lomuto)-> chon pivot(chot) o phan tu cuoi
// // tao partition(vach ngan) chuyen tat ca cac phan tu nho hon pivot mot ben
// int partition(int a[],int l,int r) 
// {
// 	int pivot =a[r];
// 	int i=l-1;// de goi de quy l thay doi nen ko dc gan truc tiep i=-1;
// 	for (int j=l;j<r;j++) 
// 	{
//       if(a[j]<=pivot) 
// 	  {
// 		++i; swap (a[j],a[i]);
// 	  }
// 	}
// 	++i;swap(pivot,a[i]);return i;// dua phan tu pivot (chot) ve giua
// }
// //  recursive
// void quicksort(int a[],int l,int r) 
// {
// 	if(l>=r) return;
// 	int p = partition(a,l,r); // lay index cua phan tu pivot (chot)
// 	quicksort(a,l,p-1);
// 	quicksort(a,p+1,r);
// }
// // Quicksort (phan hach Hoare) -> chon pivot o phan tu dau
// int partition2(int a[],int l,int r) 
// {
// 	int i=l-1;int j=r+1; int pivot =a[l];
// 	while(1) 
// 	{
// 		do{++i;} 
// 		while(
// 			a[i]<pivot
// 		);
// 		do{++j;} 
// 		while(
// 			a[j]>pivot
// 		);
// 		if(i<j) swap(a[i],a[j]);
// 		 return j; // index cua pivot
// 	}
// }

// void quicksort2(int a[],int l,int r) 
// {
// 	if(l>=r) return;
// 	int p =partition2(a,l,r); //(return pivot)
// 	quicksort2(a,l,p);
// 	quicksort2(a,p+1,r);
// }
// //    int n;cout <<"Nhap so luong phan tu : ";cin>>n;
// //    int a[1000];
// //    srand(time(NULL));
// //    for (int i=0;i<n;i++) {a[i]= rand() %1000;}
// //    quicksort(a,0,n-1);
// //    for (int i=0;i<n;i++) cout <<a[i]<<" ";
// //    return 0;
// // sap xep tron 2 mang da duoc sap xep
// void merge1() 
// {
// 	int c[13]={};int cnt=0;
// 	int a[5]={1,2,3,3,4};
// 	int b[8]={0,1,6,7,8,8,9,10};
// 	int i=0,j=0;
// 	while(i<5 && j<8) 
// 	{
// 		if(a[i]<=b[j]) 
// 		{
//              c[cnt++]=a[i] ;++i; // hoac cout truc tip
// 		} 
// 		else {c[cnt++]=b[j];++j;}
// 	}
// 		// in ra cac phan tu con lai cua mot trong 2 mang a va b
// 		while(i<5) {c[cnt++]=a[i++];}
// 		while(j<8) {c[cnt++]=b[j++];}
// 	 for (int i=0;i<13;i++) {cout <<c[i]<<" ";}
//    return ;
// }
// // tao ham sx tron 2 mang con da dc tach trc do(da sx) (Merge) 
// void Merge(int a[],int l,int m,int r)
//  {
// 	vector<int> x (a+l,a+m+1); // copy phan tu tu chi so left -> midle vao vecto x
// 	vector<int> y (a+m+1,a+r+1); // midle+1 -> right
// 	int j=0,i=0;
// 	while(i<x.size() && j<y.size()) 
// 	{
// 		if(x[i]<=y[j]) a[l++]=x[i++];
// 		else a[l++]=y[j++];
// 	}
// 	// duyet cac phan tu con lai trong mang a or b ( vd mang a dai hon mang b a ket thuc truoc -> in ra cac phan tu con lai trong mang b)
// 	while(i<x.size()) a[l++]=x[i++];
// 	while(j<y.size())  a[l++]=y[j++];
//  } 
// // mergesort (sx tron)
// void mergesort(int a[],int l, int r) 
// {
// 	if(l>=r) return; // return value tai index =l=r
// 	int m =(l+r)/2;
// 	mergesort(a,l,m);
// 	mergesort(a,m+1,r);
// 	Merge(a,l,m,r);
// }
// // Heapsort (sx vun dong) 
// // xay dung heap max (binary tree)
// void heapify(int a[],int n, int i) 
// {
// 	int l= 2*i +1;
// 	int r= 2*i +2;
//     int largest =i;//chi so bat dau thao tac heap max
// 	// r va l > n : dam bao cac chi so nam trong mang
// 	if(r<n && a[r]>a[largest]) 
// 	{
// 		largest=r;
// 	}
// 	if(l<n && a[l]>a[largest]) 
// 	{
// 		largest=l;
// 	}
// 	if(i!=largest) {swap(a[i],a[largest]);
// 	heapify(a,n,largest); }// tiep tuc duyet cho nhung nhanh tiep theo
// }
// // xay dung thuat toan heapsort
// void heapsort(int a[],int n) 
// {
// 	// bat dau duyet heapmax tu ô:  n/2-1 ( ko phai nhanh la)
// 	for (int i=n/2-1;i>=0;i--) 
// 	{
// 		heapify(a,n,i); 
// 	}
// 	// sort
// 	for (int i=n-1;i>=0;i--) 
// 	{
// 		swap(a[i],a[0]); // swap phan tu cuoi (max) voi phan tu dau
// 		heapify(a,i,0);  // tim maxheap nhung bo di phan tu cuoi(chi con i phan tu) (sx tang dan)
// 	}

// }
// int main () {
//  int n=100;int a[100];
//  srand(time(NULL)) ;
//  for (int i=0;i<n;i++) a[i]=rand()%1000;
//  heapsort(a,n);
//  for (int i=0;i<n;i++) cout <<a[i]<<" ";
//  return 0;
// }


// * Dem so phep gan/ time run fun sort: 
// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <vector>

// using namespace std;
// using namespace std::chrono;

// long long compare_count = 0;
// long long assign_count = 0;
// long long compare_count_key = 0;
// long long assign_count_key = 0;

// void merge(int *array, int left, int middle, int right, long long &compare_count, long long &assign_count);
// void merge_sort(int *array, int left, int right, long long &compare_count, long long &assign_count);
// void selection_sort(int *array, int size, long long &compare_count, long long &assign_count);
// void insertion_sort(int *array, int size, long long &compare_count, long long &assign_count);
// void input(int *&array, int &size);
// void output(int *array, int size);

// int main()
// {
//     srand(time(0));
//     ofstream outFile("bai_1c.txt");
//     if (!outFile)
//     {
//         cout << "Can't Open File !" << endl;
//         return 1;
//     }

//     const int num_runs = 10;
//     int n = 10;

//     for (int run = 1; run <= num_runs; run++)
//     {
//         // create a dynamic array
//         int *Array = new int[n];
//         input(Array, n);
//         long long compare_count_merge = 0;
//         long long assign_count_merge = 0;
//         long long compare_count_selection = 0;
//         long long assign_count_selection = 0;
//         long long compare_count_insertion = 0;
//         long long assign_count_insertion = 0;
//         // time run merge
//         auto start_merge = system_clock::now();
//         merge_sort(Array, 0, n - 1, compare_count_merge, assign_count_merge);
//         auto end_merge = system_clock::now();
//         auto duration_merge = duration_cast<nanoseconds>(end_merge - start_merge);

//         // time run selection
//         auto start_selection = system_clock::now();
//         selection_sort(Array, n, compare_count_selection, assign_count_selection);
//         auto end_selection = system_clock::now();
//         auto duration_selection = duration_cast<nanoseconds>(end_selection - start_selection);

//         // time run selection
//         auto start_insertion = system_clock::now();
//         insertion_sort(Array, n, compare_count_insertion, assign_count_insertion);
//         auto end_insertion = system_clock::now();
//         auto duration_insertion = duration_cast<nanoseconds>(end_insertion - start_insertion);

//         output(Array,n);


//         outFile << "Run:"<<run+1<<endl
//                 << "So phep so sanh,"
//                 << " So phep gan,"
//                 << " Time" << endl
//                 << " Merge sort: " << compare_count_merge << "," << assign_count_merge << "," << duration_merge.count() << " nanoseconds" << endl
//                 << " Selection Sort: " << compare_count_selection << "," << assign_count_selection << "," << duration_selection.count() << " nanosecond " << endl
//                 << " Insertion Sort: " << compare_count_insertion << "," << assign_count_insertion << "," << duration_insertion.count() << " nanosecond " << endl;

//         delete[] Array;
//     }
// }

// void input(int *&array, int &size)
// {
//     array = new int[size];
//     for (int i = 0; i < size; i++)
//     {
//         array[i] = rand() % 1000000000 + 1; // tao so ngau nhien 1->1e9
//     }
// }

// void output(int *array, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
//     cout <<"____________________________________"<<endl;
// }

// void selection_sort(int *array, int size, long long &compare_count, long long &assign_count)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int flag = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             compare_count++;
//             if (array[j] > array[flag])
//                 flag = j;
//         }
//         if (flag != i)
//         {
//             swap(array[i], array[flag]);
//             assign_count += 3;
//         }
//     }
// }

// void insertion_sort(int *array, int size, long long &compare_count, long long &assign_count)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int key = array[i];
//         int j = i - 1;
//         while (j >= 0 && array[j] < key)
//         {
//             array[j + 1] = array[j];
//             assign_count++;
//             j--;
//         }
//         array[j + 1] = key;
//         assign_count++;
//     }
// }

// void merge(int *array, int left, int middle, int right, long long &compare_count, long long &assign_count)
// {
//     vector<int> x(array + left, array + middle + 1);
//     vector<int> y(array + middle + 1, array + right + 1);
//     int i = 0, j = 0;
//     while (i < x.size() && j < y.size())
//     {
//         compare_count++;
//         if (x[i] < y[j])
//         {
//             array[left++] = x[i++];
//             assign_count++;
//         }
//         else
//         {
//             array[left++] = y[j++];
//             assign_count++;
//         }
//     }
//     while (i < x.size())
//     {
//         assign_count++;
//         array[left++] = x[i++];
//     }
//     while (j < y.size())
//     {
//         assign_count++;
//         array[left++] = y[j++];
//     }
// }

// void merge_sort(int *array, int left, int right, long long &compare_count, long long &assign_count)
// {
//     if (left >= right)
//         return;
//     int middle = (left + right) / 2;
//     merge_sort(array, left, middle, compare_count, assign_count);
//     merge_sort(array, middle + 1, right, compare_count, assign_count);
//     merge(array, left, middle, right, compare_count, assign_count);
// }


// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <vector>

// using namespace std;
// using namespace std::chrono;

// long long compare_count = 0;
// long long assign_count = 0;
// long long compare_count_key = 0;
// long long assign_count_key = 0;

// void merge(int *array, int left, int middle, int right, long long &compare_count, long long &assign_count,long long &compare_count_key,long long &assign_count_key);
// void merge_sort(int *array, int left, int right, long long &compare_count, long long &assign_count,long long &compare_count_key,long long &assign_count_key);
// void selection_sort(int *array, int size, long long &compare_count, long long &assign_count,long long &compare_count_key,long long &assign_count_key);
// void insertion_sort(int *array, int size, long long &compare_count, long long &assign_count,long long &compare_count_key,long long &assign_count_key);
// void input(int *&array, int &size);
// void output(int *array, int size);

// int main()
// {
//     srand(time(0));
//     ofstream outFile("bai_1d.txt");
//     if (!outFile)
//     {
//         cout << "Can't Open File !" << endl;
//         return 1;
//     }

//     const int num_runs = 10;
//     int n = 100;

//     for (int run = 1; run <= num_runs; run++)
//     {

//         // assign vs compare
//         long long compare_count_merge = 0;
//         long long assign_count_merge = 0;
//         long long compare_count_selection = 0;
//         long long assign_count_selection = 0;
//         long long compare_count_insertion = 0;
//         long long assign_count_insertion = 0;

//         // assign key & compare key
//         long long assign_count_key_merge = 0;
//         long long compare_count_key_merge = 0;
//         long long assign_count_key_selection = 0;  
//         long long compare_count_key_selection = 0;
//         long long assign_count_key_insertion = 0;
//         long long compare_count_key_insertion = 0;
       
//         // create a dynamic array
//         int *Array = new int[n];
//         input(Array, n);
//         // time run merge
//         auto start_merge = system_clock::now();
//         merge_sort(Array, 0, n - 1, compare_count_merge, assign_count_merge,compare_count_key_merge,assign_count_key_merge);
//         auto end_merge = system_clock::now();
//         auto duration_merge = duration_cast<nanoseconds>(end_merge - start_merge);

//         // time run selection
//         auto start_selection = system_clock::now();
//         selection_sort(Array, n, compare_count_selection, assign_count_selection,compare_count_key_selection,assign_count_key_selection);
//         auto end_selection = system_clock::now();
//         auto duration_selection = duration_cast<nanoseconds>(end_selection - start_selection);

//         // time run selection
//         auto start_insertion = system_clock::now();
//         insertion_sort(Array, n, compare_count_insertion, assign_count_insertion,compare_count_key_insertion,assign_count_key_insertion);
//         auto end_insertion = system_clock::now();
//         auto duration_insertion = duration_cast<nanoseconds>(end_insertion - start_insertion);

//         outFile << "Run "<<run+1<<":" <<endl
//                 << "So phep so sanh,"
//                 << " So phep gan,"
//                 << " So phep so sanh khoa,"
//                 << " So phep gan khoa,"
//                 << " Time" << endl
//                 << " Merge sort: " << compare_count_merge << "," << assign_count_merge << "," << compare_count_key_merge << "," << assign_count_key_merge << "," << duration_merge.count() << " nanoseconds" << endl
//                 << " Selection Sort: " << compare_count_selection << "," << assign_count_selection << "," << compare_count_key_selection << "," << assign_count_key_selection << "," << duration_selection.count() << " nanosecond " << endl
//                 << " Insertion Sort: " << compare_count_insertion << "," << assign_count_insertion << "," << compare_count_key_insertion << "," << assign_count_key_insertion << "," << duration_insertion.count() << " nanosecond " << endl;

//         delete[] Array;
//     }
// }

// void input(int *&array, int &size)
// {
//     array = new int[size];
//     for (int i = 0; i < size; i++)
//     {
//         array[i] = rand() % 1000000000 + 1; // tao so ngau nhien 1->1e9
//     }
// }

// void output(int *array, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

// void selection_sort(int *array, int size, long long &compare_count, long long &assign_count,long long &compare_count_key,long long &assign_count_key)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int flag = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             compare_count++;
//             if (array[j] > array[flag])
//                 flag = j;
//                 compare_count_key++;
//                 assign_count_key++;
//         }
//         if (flag != i)
//         {
//             swap(array[i], array[flag]);
//             assign_count += 3;
//         }
//     }
// }

// void insertion_sort(int *array, int size, long long &compare_count, long long &assign_count,long long &compare_count_key,long long &assign_count_key)
// {
//     for (int i = 1; i < size; i++)
//     {
//         int key = array[i];
//         int j = i - 1;
//         while (j >= 0 && array[j] < key)
//         {
//             compare_count ++;
//             compare_count_key++;
//             array[j + 1] = array[j];
//             assign_count++;
//             j--;
//         }
//         array[j + 1] = key;
//         assign_count_key++;
//     }
// }

// void merge(int *array, int left, int middle, int right, long long &compare_count, long long &assign_count,long long &compare_count_key,long long &assign_count_key)
// {
//     vector<int> x(array + left, array + middle + 1);
//     vector<int> y(array + middle + 1, array + right + 1);
//     int i = 0, j = 0;
//     while (i < x.size() && j < y.size())
//     {
//         compare_count++;
//         if (x[i] < y[j])
//         {
//             compare_count_key++;
//             array[left++] = x[i++];
//             assign_count++;
//             assign_count_key++;
//         }
//         else
//         {
//             array[left++] = y[j++];
//             assign_count++;
//             assign_count_key++;

//         }
//     }
//     while (i < x.size())
//     {
//         compare_count_key++;
//         assign_count++;
//         array[left++] = x[i++];
//         assign_count_key++;

//     }
//     while (j < y.size())
//     {
//         compare_count_key++;
//         assign_count++;
//         array[left++] = y[j++];
//         assign_count_key++;

//     }
// }

// void merge_sort(int *array, int left, int right, long long &compare_count, long long &assign_count,long long &compare_count_key,long long &assign_count_key)
// {
//     if (left >= right)
//         return;
//     int middle = (left + right) / 2;
//     merge_sort(array, left, middle, compare_count, assign_count, compare_count_key,assign_count_key);
//     merge_sort(array, middle + 1, right, compare_count, assign_count, compare_count_key,assign_count_key);
//     merge(array, left, middle, right, compare_count, assign_count, compare_count_key,assign_count_key);
// }


// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// using namespace std;
// using namespace std::chrono;

// void quick_sort(int *array, int left, int right, long long &assign_count, long long &compare_count);
// void partition_first_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count);
// void partition_last_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count);
// void partition_random_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count);
// int getRandomPivot(int left, int right);
// void input(int *&array, int &size);
// void output(int *array, int size);

// int main()
// {
//     srand(time(0)); // Seed for random number generator

//     ofstream outFile;
//     outFile.open("cau2.txt");

//     int num_runs = 10;
//     int n = 100;

//     for (int run = 1; run <= num_runs; run++)
//     {
//         int *Array = new int[n];
//         input(Array, n);
//         long long assign_count = 0;
//         long long compare_count = 0;

//         auto start = system_clock::now();
//         quick_sort(Array, 0, n - 1, assign_count, compare_count);
//         auto end = system_clock::now();
//         auto duration = duration_cast<nanoseconds>(end - start);
//         cout << duration.count() << endl;

//         outFile << "Lan " << run << ":" << endl;
//         outFile << "So phep ghan: " << assign_count << endl;
//         outFile << "So phep so sanh: " << compare_count << endl;
//         outFile << "Thoi gian chay: " << duration.count() << "nanoseconds: " << endl;
//         outFile << "-------------------------------------" << endl;

//         delete[] Array;
//     }

//     outFile.close();

//     return 0;
// }

// int getRandomPivot(int left, int right)
// {
//     srand(time(NULL));
//     return left + rand() % (right - left);
// }

// void input(int *&array, int &size)
// {
//     array = new int[size];
//     for (int i = 0; i < size; i++)
//     {
//         array[i] = rand() % 1000000 + 1; // tao so ngau nhien 1->100
//     }
// }

// void output(int *array, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

// void partition_random_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count)
// {
//     int pivot_idx = getRandomPivot(left, right);
//     swap(array[pivot_idx], array[right]);
//     assign_count += 3;
//     int pivot = array[right];
//     int i = left - 1;
//     for (int j = left; j <= right - 1; j++)
//     {
//         compare_count++; // dem so phep so sanh
//         if (array[j] > pivot)
//         {
//             i++;
//             swap(array[j], array[i]);
//             assign_count += 3;
//         }
//     }
//     i++;
//     swap(array[i], array[right]);
//     assign_count += 3;
//     pivot_index = i;
// }

// void partition_first_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count)
// {
//     int pivot = array[left];
//     int j = right + 1;
//     for (int i = right-1; i >= left; i--)
//     {
//         compare_count++;
//         if (array[i] >= pivot)
//         {
//             j--;
//             swap(array[j], array[i]);
//             assign_count += 3;
//         }
//     }
//     --j;
//     swap(array[j], array[left]);
//     assign_count += 3;
//     pivot_index = j;
// }

// void partition_last_pivot(int *array, int left, int right, int &pivot_index, long long &assign_count, long long &compare_count)
// {
//     int pivot = array[right];
//     int i = left - 1;
//     for (int j = left; j <= right - 1; j++)
//     {
//         compare_count++; // dem so phep so sanh
//         if (array[j] <= pivot)
//         {
//             i++;
//             swap(array[i], array[j]);
//             assign_count += 3; // dem so phep gan
//         }
//     }
//     i++;
//     swap(array[i], array[right]);
//     assign_count += 3;
//     pivot_index = i;
// }

// void quick_sort(int *array, int left, int right, long long &assign_count, long long &compare_count)
// {
//     if (left >= right)
//         return;

//     int pivot;
//     partition_first_pivot(array, left, right, pivot, assign_count, compare_count);
//     quick_sort(array, left, pivot - 1, assign_count, compare_count);
//     quick_sort(array, pivot + 1, right, assign_count, compare_count);
// }
