// #include <bits/stdc++.h>
// #include <stack>
// using namespace std;

// //LIFO : Last In First Out
// // push() : day 1 phan tu vao stack
// // pop() : xoa ra 1 phan tu o dinh
// // top() : lay ra 1 phan tu o dinh
// // size()
// // empty() -> check xem stack co rong ko
// // !st.empty() -> chung nao stack chua rong ...
// // chuyen doi thap -> nhi dung stack

// void Binary(){
//     int n;cin>>n;
//     stack <int> st;
//     while(n){
//         st.push(n%2);
//         n/=2;
//     }
//     while (!st.empty()){
//          cout <<st.top(); // lay ra
//          st.pop();// xoa
//     }
// }

// // in ra tu thu tu nguoc lai
// void Reverse(){
//     string s; getline(cin,s);
//     stack<string> st;
//     string token="";
//     stringstream ss(s);
//     while(ss>>token){
//        st.push(token);
//     }
//     while(!st.empty()){
//         cout << st.top()<<" ";
//         st.pop();
//     }
// }

// // check ((((())))) -> hop le . gap mo thi push vao stack , dong thi pop
// // th1 : ()() -> valid
// // th2 : )) -> invalid
// void RoundBracket(){
//     string s;cin>>s;
//     stack<char> st;
//     for (int i=0;i<s.size();i++){
//         if(s[i]=='(') st.push(s[i]);
//         else {
//             // chi chua dau dong ))
//             if(st.empty()) {
//                 cout <<'INVALID';
//                 return ;
//             }
//             else {
//                 // xoa ((
//                 st.pop();
//             }
//         }
//     }
//     // neu rong -> valid
//     if(!st.empty()) cout <<"INVALID\n";
//     else cout <<"VALID\n";
// }
// // 3 4 2 5 1 6 2  -> 4 5 5 6 6 -1 -1 . in ra phan tu lon hon no sau no, ko co in -1
// // c1 dung for
// void Num1(){
//     int n;cin>>n;int a[n];
//     for (auto&x:a) cin>>x;
//     for (int i=0;i<n;i++){
//         int res=-1;
//         for (int j=i+1;j<n;j++){
//             if(a[j]>a[i]) {
//                 res=a[j];
//                 break;
//             }
//         }
//         cout <<res<<" ";
//     }
// }
// void Num(){
//    int n; cin>>n;
//    int a[n],b[n];
//    for (auto &x:a) {
//     cin>>x ;
//    }
//    stack<int> st;
//    for (int i=0;i<n;i++){
//     // neu stack rong thi push i
//     if(st.empty()){
//         // push index
//         st.push(i);
//     }
//     else {
//         // stack chua rong
//         while(!st.empty() && a[st.top()]<a[i]){
//             // luu a[i] vao mang moi
//             b[st.top()]=a[i];
//             st.pop();
//         }
//         // cap nhat ki luc
//         st.push(i);
//     }
//    }
//    // neu gap phan tu sau lon hon thi stack trong con neu co phan tu nho hon no stack con luu lai index cua phan tu do
//    while(!st.empty()) {
//     b[st.top()]=-1;
//     st.pop();
//    }
//    for (auto&x:b) cout <<x<<" ";
// }
// int main(){
//     Num();
// }

// #include <bits/stdc++.h>
// using namespace std;

// // stack
// // push ,pop (xoa phan tu top) , top (lay phan top), size,empty (kt xem con phan tu trong stack ko neu con -> false)
// // stack <datatype> name

// // chuyen 1 so he 10 -> he 2 bang stack
// int binary(int n)
// {
//     stack <int> st;
//     while(n!=0)
//     {
//        st.push(n%2);
//        n/=2;
//     }
//     while(!st.empty())
//     {
//         cout <<st.top();// in ra phan tu daudau
//         st.pop();//xoa phan tu dau
//     }
// }
// // in ra tu nguoc lai dung stack
// string binary2(string s)
// {
//     stack<string> st;
//     string token;
//     stringstream ss (s);
//     while(ss>>token) {
//      st.push(token);
//     }
//     while(!st.empty())
//     {
//         cout <<st.top()<<" ";
//         st.pop();
//     }
// }
// // Valid Parentheses (kt dau ngoac hop le) vd (()) -> VALID(hop le)
// void check(string s)
// {
//     stack <char> st;

//         for (auto & x: s)
//     {
//         if(x=='(') st.push(x);
//         else
//         {
//             if(st.empty())  // chi toan dau dong ')' or rong
//             {
//                cout <<"INVALID !"; return;
//             }
//             else
//             {
//                st.pop();
//             }
//         }

//     }
//     if(!st.empty())
//     {
//         cout <<"INVALID!";
//     }
//     else cout <<"VALID!";
// }
// // in ra phan tu lon hon ben phai dau tien
// void Kostack(int a[],int n)
// {
//     int cnt=0;
//     for (int i=0;i<n;i++)
//     {
//         for (int j=i+1;j<n;j++)
//         {
//             if(a[j]>a[i])  {  a[i]=a[j]; ++cnt;break;}

//         }
//         if(cnt==0) a[i]=-1;
//         cnt=0;
//      }
//      for (int i=0;i<n;i++) cout <<a[i]<<" ";
// }
// // dung stack
// int main()
// {
//     int n;cin>>n;int a[n];
//     for (auto &x :a) cin>>x;
//    Kostack(a,n);
// }

// BT Stack C++ (B22) - YT
// 1/ in ra so dau ngoac can bo sung de hop le

// #include<iostream>
// #include<string.h>
// #include<stack>
// #include<math.h>

// using namespace std;

// int solve(string s){
//     stack<char> st;
//     int cnt=0;
//     for (int i=0;i<s.size();i++) {
//         if (s[i]=='(')
//          st.push(s[i]);
//          else ++cnt;
//     }
//     int n = st.size();
//     return abs(n-cnt);
// }

// int main() {
//     string s; cin>>s;
//     int result = solve(s);
//     if (result==0) cout <<"Empty\n";
//     else cout <<result;
// }

// 2/ Duplicates
// #include<bits/stdc++.h>
// using namespace std;

// string solve(string s){
//     stack<char> st;
//     string res="";
//     // abba -> a -> ab -> a -> ""
//     for (int i=0;i<s.size();i++) {
//         if (!st.empty() && s[i]==st.top()) {
//             st.pop(); //ab -> a
//         }
//         else st.push(s[i]);
//     }
//     while(!st.empty()) {
//         res+=st.top();st.pop();
//     }
//     reverse(res.begin(),res.end());
//     if (res=="") return "EMPTY";
//     return res;
// }

// int main() {
//     string s; cin>>s;
//     cout <<solve(s);
// }

// 3/ xoa 3 ki tu lien ke
// #include<bits/stdc++.h>
// using namespace std;

// string solve(string s,int k){
//     stack<pair<char,int>> st;
//     for (int i=0;i<s.size();i++) {
//         if (!st.empty() && s[i]==st.top().first && st.top().second==k-1) {
//             st.pop();
//         }
//         else {
//             if(st.empty() || st.top().first != s[i]) st.push({s[i],1});
//             else {
//                 st.top().second++;
//             }
//         }
//     }
//     string res="";
//     while(!st.empty()) {
//         auto it = st.top(); st.pop();
//         int fre = it.second;
//         for (int i=0;i<fre;i++) {
//             res+=it.first;
//         }
//     }
//     reverse(res.begin(),res.end());
//     return res;
// }

// int main() {
//     string s;int k; cin>>s>>k;
//     cout <<solve(s,k);
// }

// 4/ cho bieu thuc check xem co du thua dau ngoac hay khong
// #include <bits/stdc++.h>
// using namespace std;

// int solve(string s)
// {
//     stack<int> st;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '(')
//             st.push(i);
//         else if (s[i] == ')')
//         {
//             int j = st.top();
//             if (i - j == 2)
//                 return 1;
//             else if (s[j + 1] == '(' && s[i - 1] == ')')
//                 return 1;
//             else
//                 st.pop();
//         }
//     }
//     return 0;
// }

// int main()
// {
//     string s;
//     cin >> s;
//     if (solve(s))
//         cout << "Yes";
//     else
//         cout << "No";
//     return 0;
// }

// 6/ xac dinh so dau ngoac can them vao de hop le 

// #include<bits/stdc++.h>
// using namespace std;

// int solve(string s){
//     stack<int> st;
//     int cnt=0;
//     for (int i=0;i<s.size();i++) {
//         if(s[i]=='(') st.push(i);
//         else {
//             if(st.empty()) {
//                 // 1 dau bi loi 
//                 ++cnt;
//                 st.push(i);
//             }
//             else st.pop();
//         }
//     }
//     // thua  dau ( or )  -> so dau bi loi chia doi
//     cnt+=st.size()/2;
//     return cnt;
// }


// int main() {
//     string s; cin>>s;
//     cout <<solve(s);
// }


// 7/convert tien to -> hau to 

// #include<bits/stdc++.h>
// using namespace std;

// string solve(string s){
//     stack<string> st;
//     for (int i=s.size()-1;i>=0;i--) {
//         if(isalpha(s[i])) {
//             st.push(string(1,s[i]));
//         }
//         else {
//             // string res="";
//             // while(!st.empty()) {
//             //     res+=st.top();st.pop();
//             // }
//             // st.push(res+s[i]);
//             string o1 = st.top();st.pop();
//             string o2 = st.top();st.pop();
//             string res = o1 + o2 + s[i];
//             st.push(res);
//         }
//     }
//     return st.top();
// }

// int main() {
//     string s; cin>>s;
//     cout << solve(s);
// }

// 8/  +-7/451 -> 1 5 4 -> 4/5 = 0 -> 1 0 7 -> 7-0 =7 -> 1 7 -> 7+1 =8 =result

// #include<bits/stdc++.h>
// using namespace std;

// int solve(string s){
//     stack<int> st;
//     for (int i=s.size()-1;i>=0;i--) {
//        if(isdigit(s[i])) st.push(s[i]-'0');
//         else {
//             int n1 = st.top();st.pop();
//             int n2 = st.top();st.pop();
//             if (s[i]=='/') {
//                 st.push(n1/n2);
//             }
//             else if(s[i]=='+') {
//                 st.push(n1+n2);
//             }
//             else if(s[i]=='-'){
//                 st.push(n1-n2);
//             }
//             else if(s[i]=='*'){
//                 st.push(n1*n2);
//             }
//         }
//     }
//     return st.top();
// }

// int main() {
//     string s; cin>>s;
//     cout <<solve(s);
// }

// 9/  in van ban theo thu tu nguoc 

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string s; getline(cin,s);
//     stringstream ss(s);
//     string res="";
//     stack<string> st;
//     while(ss>>res) {
//         st.push(res);
//     }
//     while(!st.empty()) {
//         cout <<st.top()<<' ';
//         st.pop();
//     }
// }

// cach2 

// int main() {
//     string s;
//     stack<string> st;
//     while(cin>>s) {
//         st.push(s);
//     }
//     while(!st.empty()){
//         cout <<st.top()<' ';
//         st.pop();
//     }
// }

// 10/ tim phan tu dau tien lon hon ben phai 

// #include<bits/stdc++.h>
// using namespace std;

// void solve(int a[],int n,int d[]) {
//     stack<int> st;
//     for (int i=0;i<n;i++) {
//         // di tim phan tu lon hon 
//         while(!st.empty() && a[i]>a[st.top()]) {
//             d[st.top()] = a[i];
//             st.pop();
//         }
//         // neu ko push i 
//         st.push(i);
//     }
// cho cac vi tri ko tim dc phan tu lon hon -> =-1 
//     while(!st.empty()) {
//         d[st.top()] = -1;
//         st.pop();
//     }
// }

// int main() {
//     int n; cin>>n;
//     int a[n], d[n];
//     for (int&x:a) cin>>x;
//     solve(a,n,d);
//     for (int x:d) cout <<x<<' ';
// }

// 11/ tim dien tich lon nhat boi cac o che phu trong ban do 
// 7
// 6 2 5 4 5 1 6
// 12
// #include<bits/stdc++.h>
// using namespace std;

// void smaller_left(int a[],int n,int L[]){
//     stack<int> st;
//     for (int i=n-1;i>=0;i--) {
//         while(!st.empty() && a[i]<a[st.top()]) {
//             L[st.top()] = i;
//             st.pop();
//         }
//          st.push(i);
//     }

//     while(!st.empty()) {
//         L[st.top()] = -1;
//         st.pop();
//     }
// }

// void smaller_right(int a[],int n,int R[]) {
//     stack<int> st;
//     for (int i=0;i<n;i++) {
//         while(!st.empty() && a[i]<a[st.top()]) {
//             R[st.top()] = i;
//             st.pop();
//         }
//         st.push(i);
//     }

//     while(!st.empty()) {
//         R[st.top()] = n;
//         st.pop();
//     }
// }

// int main() {
//     int n; cin>>n;long long max_s = 0;
//     int a[n],L[n],R[n];
//     for (int &x:a) cin>>x;
//     smaller_left(a,n,L);
//     smaller_right(a,n,R);
//     for (int i=0;i<n;i++) {
//         // a[i] = height 
//         int w = R[i] - L[i] - 1;
//         long long s = 1ll* w * a[i];
//         max_s = max(s,max_s);
//     }
//     cout <<max_s<<endl;
// }


// tim phan tu dau tien lon hon ben phai va tim phan tu dau tien nho hon ben phai cua phan tu do 
// #include<bits/stdc++.h>
// using namespace std;

// void greater_right(int a[],int n,int GR[]) {
//     stack<int> st;
//     for (int i=0;i<n;i++) {
//         while(!st.empty() && a[i]>a[st.top()]) {
//             GR[st.top()] = i;
//             st.pop();
//         }
//         st.push(i);
//     }

//     while(!st.empty()) {
//         GR[st.top()] = -1;
//         st.pop();
//     }
// }

// void smaller_right(int a[],int n,int SR[]) {
//     stack<int> st;
//     for (int i=0;i<n;i++) {
//         while(!st.empty() && a[i]<a[st.top()]) {
//             SR[st.top()] = i;
//             st.pop();
//         }
//         st.push(i);
//     }
//     while(!st.empty()) {
//         SR[st.top()] = n;
//         st.pop();
//     }
// }

// int main() {
//     // SR[i] : chi so phan tu dau tien nho hon a[i] 
//     // GR[i] : chi so phan tu dau tien lon hon a[i] 
//     int n; cin>>n; 
//     int a[n],GR[n],SR[n];
//     for (int &x:a ) cin>>x;
//     greater_right(a,n,GR);
//     smaller_right(a,n,SR);
//     for (int i=0;i<n;i++) {
//         if(GR[i]!=-1) {
//             cout <<a[SR[GR[i]]]<<' ';
//         }
//         else cout <<-1<<' ';
//     }
// }

// DSA07001 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     stack<int> st;
//     string command;
//     // chung nao van con input  
//     while (getline(cin, command)) {
//         if (command.find("push") == 0) {
//             int value = stoi(command.substr(5));  // Trích xuất giá trị sau từ "push "
//             st.push(value);
//         } else if (command == "pop") {
//             if (!st.empty()) {
//                 st.pop();
//             }
//         } else if (command == "show") {
//             if (st.empty()) {
//                 cout << "empty" << endl;
//             } else {
//                 vector<int> temp;
//                 while (!st.empty()) {
//                     temp.push_back(st.top());
//                     st.pop();
//                 }
//                 reverse(temp.begin(), temp.end());
//                 for (int val : temp) {
//                     cout << val << " ";
//                     st.push(val);  // Đẩy lại các phần tử vào ngăn xếp
//                 }
//                 cout << endl;
//             }
//         }
//     }
//     return 0;
// }

// DSA07002
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     cin.ignore();  // Loại bỏ ký tự xuống dòng còn lại trong bộ đệm
//     stack<int> st;
//     while (t--) {
//         string s;
//         getline(cin, s);
//         if (s.substr(0, 4) == "PUSH") {
//             int val = stoi(s.substr(5));
//             st.push(val);
//         } else if (s == "POP") {
//             if (!st.empty()) {
//                 st.pop();
//             } else {
//                 cout << "NONE\n";
//             }
//         } else if (s == "PRINT") {
//             if (st.empty()) {
//                 cout << "empty\n";
//             } else {
//                 vector<int> v;
//                 while (!st.empty()) {
//                     v.push_back(st.top());
//                     st.pop();
//                 }
//                 reverse(v.begin(), v.end());
//                 for (int val : v) {
//                     cout << val << " ";
//                     st.push(val);  // Đẩy lại các phần tử vào ngăn xếp
//                 }
//                 cout << endl;
//             }
//         }
//     }
//     return 0;
// }


// DSA07008. 
#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

// Hàm xác định độ ưu tiên của các toán tử
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

// Hàm chuyển đổi biểu thức trung tố sang hậu tố
string infixToPostfix(string exp) {
    stack<char> operators;
    string postfix;
    
    for (char c : exp) {
        if (isalpha(c)) {
            // Nếu là toán hạng (biến), thêm vào kết quả
            postfix += c;
        } else if (c == '(') {
            // Nếu là dấu mở ngoặc, đẩy vào ngăn xếp
            operators.push(c);
        } else if (c == ')') {
            // Nếu là dấu đóng ngoặc, bật các toán tử cho đến khi gặp dấu mở ngoặc
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Bỏ dấu mở ngoặc
        } else {
            // Nếu là toán tử, bật các toán tử có độ ưu tiên cao hơn hoặc bằng
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }
    
    // Bật các toán tử còn lại trong ngăn xếp
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }
    
    return postfix;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Loại bỏ ký tự xuống dòng còn lại trong bộ đệm
    vector<string> results;
    
    for (int i = 0; i < T; ++i) {
        string exp;
        getline(cin, exp);
        results.push_back(infixToPostfix(exp));
    }
    
    for (const string &result : results) {
        cout << result << endl;
    }
    
    return 0;
}
