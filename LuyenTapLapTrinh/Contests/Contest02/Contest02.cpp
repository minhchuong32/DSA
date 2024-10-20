// // #include<iostream>
// // #include<cmath>
// // using namespace std;

// // // nh có một đồng hồLED là đồng hồloại 12 giờ, hiển thịthời gian từ12:00tới 11:59. 
// // // Giờkhông có sốkhông đứng đầu nhưng phút có thểcó sốkhông đứng đầu, chẳng hạn như 2:07hoặc 11:03.Khi nhìn vào chiếc đồng hồLED của mình,
// // //  Minh thích nhìn ra các dãy cấp sốcộng từthời gian hiển thịtrên đó. Ví dụnhư thời gian 12:34và 2:46là những khoảng thời gian yêu thích của anh ấy,
// // //   vì các chữsốtạo thành dãy cấp sốcộng.Một dãy cấp sốcộng nếu mỗi chữsốtrừchữsốđầu tiên bằng sốphía trước cộng với một công sai không đổi.
// // //    Ví dụ1, 2, 3, 4là dãy cấp sốcộng có công sai là 1và dãy 2, 4, 6là dãy cấp sốcộng có công sai là 2.Giảsửchúng ta bắt đầu nhìn đồng hồvào buổi trưa (nghĩa là khi nó chỉ12:00)
// // //     và xem đồng hồtrong vài phút. Có bao nhiêu khoảng thời gian là yêu thích của Minh.Đầu vàoMột sốnguyên D(0 ≤ D ≤1000 000 000)duy nhấtlà khoảng thời gian chúng ta quan sát đồng hồ.
// // // 	Đầu raMột sốnguyên duy nhất là sốlượng khoảng thời gian là yêu của thích Minh nếu chúng ta quan sát đồng hồtrong D phút bắt đầu từgiữa trưa (nghĩa là khi nó chỉ12:00).
// // // 	Subtask:-Subtask 1 (1 điểm) : 0 ≤D ≤1 000-Subtask 2(1 điểm) : 1000 < D ≤1000 000-Subtask 3 (0.5 điểm) : 1000 000 < D ≤1000 000 000Ví dụ:InputOutput341Giải thích: Giữa 12:00và 12:34chỉcó 12:34là 
// // 	// thời gian yêu thích của Minh.

// // bool check(char s[4]) {
// // 	bool check_d = false;
// // 	// min:sec 
// // 	// 12:34
// // 	if (s[0] != 0) {
// // 		int d1 = s[1] - s[0];
// // 		int d2 = s[2] - s[1];
// // 		int d3 = s[3] - s[2];
// // 		if (d1 == d2 && d2 == d3) check_d = true;
// // 	}
// // 	// 01:23 
// // 	else {
// // 		int d1 = s[2] - s[1];
// // 		int d2 = s[3] - s[2];
// // 		if (d1 == d2) check_d = true;
// // 	}
// // 	return check_d;
// // }

// // int main() {
// // 	char s1[4] = { 1,2,0,0 }; int count = 0;
// // 	char* s = s1;
// // 		int D; cin >> D;
// // 	for (int i = 1; i <= D; i++) {
// // 		// ++second 
// // 		s[3]++;
// // 		// 09s -> 10s
// // 		if (s[3] > 9) {
// // 			s[3] = 0, s[2]++;
// // 		}
// // 		// 00:60 ->01:00 
// // 		if (s[2] > 5) {
// // 			s[1]++;
// // 			s[2] = 0;
// // 		}
// // 		// 13:00 -> 01:00 
// // 		if (s[1] == 3 && s[0] == 1) {
// // 			s[1] = 1;
// // 			s[0] = 0;
// // 		}	
// // 		// 10:00 ; 11:00 ; 12:00
// // 		if (s[1] > 9) {
// // 			s[0] = 1;
// // 			s[1] %= 10;
// // 		}
// // 		if (check(s) == true) count++;
// // 	}
// // 	cout << count;
// // 	return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// bool check(int h, int m) {
//     vector<int> digits;
//     if (h >= 10) {
//         digits.push_back(h / 10);
//         digits.push_back(h % 10);
//     } else {
//         digits.push_back(h);
//     }
//     digits.push_back(m / 10);
//     digits.push_back(m % 10);
//     for (int i = 2; i < digits.size(); ++i) {
//         if (digits[i] - digits[i-1] != digits[1] - digits[0]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int D;
//     cin >> D;
//     int h = 12, m = 0;
//     int kq = 0;
//     while (D >= 0) {
//         if (check(h, m)) {
//             ++kq;
//         }
//         m++;
//         if (m == 60) {
//             m = 0;
//             h++;
//             if ( h== 13) {
//                 h = 1;
//             }
//         }
//         D--;
//     }
    
//     cout << kq;
//     return 0;
// }


// // bai B 
// // #include <bits/stdc++.h>
// // using namespace std;


// // dua ve index n/2 mang tang dan 
// // int main() {
// //     int n;
// //     cin >> n;
// //     vector<int> a(n);
// //     for (int i = 0; i < n; i++) {
// //         cin >> a[i];
// //     }
// //     sort(a.begin(), a.end());
// //     int index = a[n / 2];
// //     long long tb = 0;
// //     for (int i = 0; i < n; i++) {
// //         tb += abs(a[i] - index);
// //     }
// //     cout << tb;
// //     return 0;
// // }



// // dua ve trung binh 

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<long long> a(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }

//     // Tìm giá trị trung bình của mảng
//     long long sum = 0;
//     for (int i = 0; i < n; ++i) {
//         sum += a[i];
//     }
//     long long avg = sum / n;

//     // Tính số lượng thao tác ít nhất để các phần tử trong mảng bằng nhau
//     long long operations = 0;
//     for (int i = 0; i < n; ++i) {
//         operations += abs(a[i] - avg);
//     }

//     // In ra kết quả
//     cout << operations << endl;

//     return 0;
// }


// bai C 
// #include <iostream>
// #include <vector>
// using namespace std;

// const int MOD = 1e9 + 7;

// int countValidStrings(int n) {
//     if (n == 0) return 1; // Empty string is valid

//     // Initialize dp array
//     vector<long long> dp(n + 1, 0);
//     dp[0] = 1; // Empty string is valid
//     dp[1] = 3; // Strings of length 1: 'a', 'b', 'c'

//     // Calculate dp[i] for i = 2 to n
//     for (int i = 2; i <= n; ++i) {
//         dp[i] = (3 * dp[i-1]) % MOD; // Append 'a', 'b', or 'c' to strings of length i-1

//         if (i >= 2) {
//             dp[i] = (dp[i] - dp[i-2] + MOD) % MOD; // Subtract invalid strings ending with 'a' + 'b'
//         }
//     }
//     // Nếu i >= 2, ta cập nhật dp[i] bằng dp[i] - dp[i-2]: Điều này là để loại bỏ các trường hợp không hợp lệ, trong đó hai ký tự cuối cùng là 'a' và 'b'. Ví dụ, nếu cuối cùng là 'a' và 'b',
//     //  thì ký tự tiếp theo không thể là 'a' (do không phép hai ký tự giống nhau liên tiếp).
//     //  Bằng cách trừ đi số lượng chuỗi hợp lệ có độ dài i-2, chúng ta loại bỏ những chuỗi không hợp lệ này khỏi tổng số lượng chuỗi hợp lệ.

//     return dp[n];
// }

// int main() {
//     int n;
//     cin >> n;

//     // Tính số lượng chuỗi thoả mãn yêu cầu và in ra kết quả
//     int result = countValidStrings(n);
//     cout << result << endl;

//     return 0;
// }


// bai D
// // #include<iostream>
// // #include<vector>
// // #include<string>
// // using namespace std;

// // string check(vector<string> &s){
// //     string result = s[0];
// //     for(int i = 1; i < s.size(); i++){
// //         int j = 0;
// //         while(j < s[i].size() && result[j] == s[i][j]){
// //             // j ki tu chung 
// //             j++;
// //         }
// //         result = result.substr(0, j);
// //     }
// //     return result;
// // }

// // int main(){
// //     int n; cin >> n;
// //     vector<string> strings(n);
// //     for(int i = 0; i < n; i++){
// //         cin >> strings[i];
// //     }
// //     string res = check(strings);
// //     cout << res;
// //     return 0;
// // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // void sosanh(string &a, string b){
// // 	int i;
// // 	for(i=0;i<a.length();i++){
// // 		if(a[i]!=b[i]) break;
// // 	}
// // 	a.erase(i,a.length()-i);
// // }
// // int main(){
// // 	int n; cin>>n;
// // 	string a;
// // 	vector<string> v;
// // 	for(int i=0;i<n;i++) {cin>>a; v.push_back(a);
// // 	}
// // 	string b=v[0];
// // 	for(int i=1;i<n;i++) sosanh(b,v[i]);
// // 	cout<<b;
// // }

// // // cach 2 : cre:chuongIT 
// // #include <bits/stdc++.h>
// // #define MAX 10000
// // using namespace std;

// // // xau chung dai nhat 

// // string cmp(string a,string b) {
// //     string c;
// //     int max_size,index=0; c="";
// //     if(a.size()!=b.size()) {
// //         max_size = max(a.size(),b.size());
// //     }
// //     else max_size = a.size();
// //     while(index<max_size) {
// //         if(a[index]==b[index]) {c+=a[index];++index;}
// //         else break;
// //     }
// //     return c;
// // }

// // void solve(){
// //     int n; cin>>n;
// //     string c,m = "";
// //     vector<string> v;
// //     for (int i=0;i<n;i++) {
// //         string s; cin>>s;
// //         v.push_back(s);
// //     }
// //     c = v[0];
// //     for (int i=1;i<n;i++) c = cmp(c,v[i]);
// //     cout <<c<<endl;

// // }

// // int main() {
// //     solve();
// // }


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int x,y; cin>>x>>y; int cnt=0;
//     while(true) {
//         // NAM 
//         if(cnt%2==0) {
//             if(x>=2 && y>=2) {x-=2;y-=2;}
//             else if(x==1 && y>=12) {x-=1;y-=12;}
//             else if(x==0 && y>=22) {y-=22;}
//             else {
//                 cout <<"MINH\n";
//                 break;
//             }
//         }
//         // MINH
//         else {
//             if(y>=-22) y-=22;
//             else if(x==1 && y>=12) {x-=1;y-=12;}
//             else if(x>=2 && y>=2) {x-=2;y-=2;}
//             else {
//                 cout <<"NAM\n";
//                 break;
//             }
//         }
//         ++cnt;
//     }
//     cout <<cnt+1;
// }