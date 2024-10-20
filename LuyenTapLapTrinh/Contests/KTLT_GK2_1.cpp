
// #A
// #include<bits/stdc++.h>
// using namespace std;

// string convertToUpper(string &s) {
//     for (auto &c: s) {
//         c = toupper(c);
//     }
//     return s;
// }

// string convertToLower(string &s) {
//     for (auto &c: s) {
//        c = tolower(c);
//     }
//     return s;
// }
// int main() {
//     string s;
//     getline(cin, s);
//     int cnt1 = 0, cnt2 = 0;
//     for (char c : s) {
//         if (isupper(c)) ++cnt1;
//         else if (islower(c)) ++cnt2;
//     }
//     if (cnt1 > cnt2) {
//         cout << convertToUpper(s);
//     } else {
//         cout << convertToLower(s);
//     }
//     return 0;
// }

// #B so luong phan tu lon nhat trong hang va nho nhat trong cot 
// #include <bits/stdc++.h>
// #define FOR(i, a, b) for (int i = a; i <= b; i++)
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> v(n + 1, vector<int>(m + 1));
//     FOR(i, 1, n) {
//         FOR(j, 1, m) cin >> v[i][j];
//     }

//     vector<int> max_row(n + 1); // Kích thước n + 1
//     FOR(i, 1, n) {
//         max_row[i] = *max_element(v[i].begin() + 1, v[i].end());
//     }

//     vector<int> min_col(m + 1, INT_MAX); // Kích thước m + 1, khởi tạo với INT_MAX
//     FOR(j, 1, m) {
//         FOR(i, 1, n) {
//             if (v[i][j] < min_col[j]) min_col[j] = v[i][j];
//         }
//     }

//     int cnt = 0;
//     FOR(i, 1, n) {
//         FOR(j, 1, m) {
//             if (v[i][j] == min_col[j] && v[i][j] == max_row[i]) ++cnt;
//         }
//     }
//     cout << cnt;
// }

// 3 3
// 8 6 6
// 4 5 5
// 2 7 5

// // #E di chuyen toa do ve 0 dem so buoc it nhat 

// #include <iostream>
// #include <cmath>

// using namespace std;

// long long min_moves(long long X) {
//     X = abs(X);
//     // Giả sử b là số bước di chuyển 3 đơn vị và a là số bước di chuyển 2 đơn vị.
//     long long min_steps = LLONG_MAX;
    
//     for (long long b = X / 3; b >= 0; --b) {
//         long long remaining = X - 3 * b;
//         if (remaining % 2 == 0) {
//             long long a = remaining / 2;
//             min_steps = min(min_steps, a + b);
//         }
//     }
//     return min_steps;
// }

// int main() {
//     long long X;
//     cin >> X;
//     cout << min_moves(X) << endl;
//     return 0;
// }

// #D 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>

// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> A[i];
//     }

//     // Initialize the dp array
//     vector<long long> dp(N);
//     for (int i = 0; i < N; ++i) {
//         dp[i] = A[i];
//     }

//     // Update dp array based on the described logic
//     for (int i = 1; i < N; ++i) {
//         for (int j = 0; j < i; ++j) {
//             if (A[j] >= A[i]) {
//                 dp[i] = max(dp[i], dp[j] + A[i]);
//             }
//         }
//     }

//     // Find the maximum value in dp array
//     long long max_sum = LLONG_MIN;
//     for (int i = 0; i < N; ++i) {
//         max_sum = max(max_sum, dp[i]);
//     }

//     // Output the result
//     cout << max_sum << endl;

//     return 0;
// }

// Lan 2
// #1 
// #include<bits/stdc++.h>
// using namespace std;
// bool check(char c) {
//     string s = "ueoaiUEOAI";
//     if (s.find(c) != string::npos) return true; // If not found, return false
//     return false; // If found, return true
// }

// int main() {
//     string s; cin>>s;
//     for (int i=0;i<s.size();i++) {
//         if(check(s[i])) s.erase(i,1);
//     }
//     cout <<s;
// }

// #2 
// #include<bits/stdc++.h>
// #include<algorithm>
// #define FOR(i,a,b) for(int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     int n,k,cnt=0; cin>>n>>k;
//     vector< vector<int> > v(n,vector<int>(n));
//     FOR(i,1,n-1) {
//         FOR(j,1,n-1) cin>>v[i][j];
//     }
//     FOR(i,1,n-1) {
//         if(binary_search(v[i].begin(),v[i].end(),k)) ++cnt;
//     }
//     cout <<cnt;
// }
// 6 12
// 4 6 8 10 12 
// 6 9 12 15 18
// 8 12 16 20 24
// 10 15 20 25 30
// 12 18 24 30 36
// 4

// #3
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// string subtractStrings(const string &num1, const string &num2)
// {
//     int i = num1.size() - 1, j = num2.size() - 1, borrow = 0;
//     string result;
//     while (i >= 0 || j >= 0)
//     {
//         int diff = (num1[i] - '0') - borrow;
//         if (j >= 0)
//             diff -= (num2[j--] - '0');
//         if (diff < 0)
//         { diff += 10;borrow = 1;}
//         else borrow = 0;
//         result += diff + '0';
//         i--;
//     }
//     while (result.size() > 1 && result.back() == '0')
//     {
//         result.pop_back();
//     }
//     reverse(result.begin(), result.end());
//     return result;
// }
// int compareStrings(const string &num1, const string &num2)
// {
//     if (num1.size() != num2.size())
//         return num1.size() > num2.size() ? 1 : -1;
//     return num1.compare(num2);
// }
// pair<string, string> divideStrings(const string &num1, const string &num2)
// {
//     if (num2 == "0")
//         throw invalid_argument("Division by zero");
//     string quotient, remainder = "0";
//     for (char digit : num1)
//     {
//         remainder += digit;
//         while (remainder.size() > 1 && remainder[0] == '0')
//         {
//             remainder.erase(remainder.begin());
//         }
//         int count = 0;
//         while (compareStrings(remainder, num2) >= 0)
//         {
//             remainder = subtractStrings(remainder, num2);
//             count++;
//         }
//         quotient += (count + '0');
//     }
//     while (quotient.size() > 1 && quotient[0] == '0')
//     {
//         quotient.erase(quotient.begin());
//     }
//     return {quotient, remainder};
// }

// string div(const string &a, const string &b)
// {
//     bool isANegative = (a[0] == '-');
//     bool isBNegative = (b[0] == '-');
//     string num1 = isANegative ? a.substr(1) : a;
//     string num2 = isBNegative ? b.substr(1) : b;
//     pair<string, string> result = divideStrings(num1, num2);
//     string quotient = result.first;
//     if (isANegative != isBNegative && quotient != "0")
//     {
//         quotient = "-" + quotient;
//     }
//     return quotient;
// }

// //mod 
// string mod(const string &a, const string &b)
// {
//     bool isANegative = (a[0] == '-');
//     bool isBNegative = (b[0] == '-');
//     string num1 = isANegative ? a.substr(1) : a;
//     string num2 = isBNegative ? b.substr(1) : b;
//     pair<string, string> result = divideStrings(num1, num2);
//     string remainder = result.second;
//     if (isANegative && remainder != "0")
//     {
//         remainder = "-" + remainder;
//     }
//     return remainder;
// }
// int main() {
//     string a,b; cin>>a>>b;
//     cout <<mod(a,b);
// }
// 745691847215687125658756912435425781
// 457612947564129546324234123423446
// 240355633720094696579525378632247

// #5
// #include <bits/stdc++.h>
// #define FOR(i,a,b) for (int i=a;i<=b;i++)
// using namespace std;

// int main() {
//     int n,m,cnt=0; cin>>n>>m;
//     vector<vector<int>> v(n+1,vector<int>(m+1));
//     FOR (i,1,n) {
//         FOR(j,1,m) cin>>v[i][j];
//     }
//     int dx[]={1,1,1,0,-1,-1,-1,0};
//     int dy[]={-1,0,1,1,1,0,-1,-1};
//     FOR(i,1,n) {
//         FOR(j,1,m) {
//             bool cnt1=true,cnt2=true;
//             FOR(k,1,8) {
//                 int imoi = i + dx[k];
//                 int jmoi = j + dy[k];
//                 if(k%2==0) {
//                     if(imoi>1 && imoi <= n && jmoi >=0 && jmoi <=m && v[imoi][jmoi]>= v[i][j]) cnt1 = false;
//                 }
//                 else {
//                     if(imoi>1 && imoi <= n && jmoi >=0 && jmoi <=m && v[imoi][jmoi]<= v[i][j]) cnt2 = false;
//                 }
//             }
//             if(cnt1 && cnt2) cnt++;
//         }
//     }
//     cout <<cnt;
// }


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Nhập số phần tử của mảng: ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Khởi tạo mảng dp_odd và dp_even
    vector<int> dp_odd(n, 0);
    vector<int> dp_even(n, 0);

    // Khởi tạo giá trị đầu tiên
    if (a[0] % 2 == 0) {
        dp_even[0] = a[0];
    } else {
        dp_odd[0] = a[0];
    }

    int max_sum = max(dp_odd[0], dp_even[0]);

    // Tính giá trị dp cho từng phần tử trong mảng
    for (int i = 1; i < n; i++) {
        if (a[i] % 2 == 0) {
            dp_even[i] = a[i];
            if (dp_odd[i - 1] > 0) {
                dp_even[i] = max(dp_even[i], dp_odd[i - 1] + a[i]);
            }
        } else {
            dp_odd[i] = a[i];
            if (dp_even[i - 1] > 0) {
                dp_odd[i] = max(dp_odd[i], dp_even[i - 1] + a[i]);
            }
        }
        max_sum = max(max_sum, max(dp_odd[i], dp_even[i]));
    }

    cout << "Tổng lớn nhất của dãy con chẵn lẻ luân phiên nhau là: " << max_sum << endl;

    return 0;
}

6
2 -100 -1 2 1 -100 
// out: 4 ( 2 -1 2 1)