// // #include <bits/stdc++.h>
// // using namespace std;

// // using ll = long long ;

// // Bai toan quan hau : in ra so cach ma sap xep 8 con hau vao ban co 8x8 ma ko an lan nhau 
// // (X[i] ,i ) = (cot, dong) : con queen dang dung 
// // cot,cheo1,cheo2 : nhung vi tri ma con queen co the an 
// // int X[100] , cot[100] ,cheo1[100] ,cheo2[100], cnt = 0 ,n;
// // void Queen(int i) {
//     // duyet cot 
// //     for (int j=1;j<=n;j++) {
// //         if(cot[j] ==0 && cheo1[i-j+n]==0 && cheo2[i+j-1]==0) {
// //             cot[j] = cheo1[i-j+n] = cheo2[i+j-1] = 1;
// //             // danh dau cot ma con hau co the an 
// //             X[i] = j;
// //             // tang cau hinh sap xep 
// //             if(i==n) ++cnt;
// //             // duyet dong tiep theo 
// //             Queen(i+1);
// //             // reset lai cac vi tri da danh dau de to hop mot cach sx moi 
// //             cheo1[i-j+n] = cot[j] = cheo2[i+j-1] = 0;
// //         }
// //     }
// // }

// // 8x8 co 92 cach sx queen 

// // queen 2 : tim tong diem lon nhat (mot vi tri queen => xd point)
// // int X[100],cheo1[100],A[100][100],cheo2[100],cot[100],max_sum=0,n;
// // void Queen2(int i) {
// //     for (int j=1;j<=n;j++) {
// //         if(cot[j]==0 && cheo1[i-j+n]==0 && cheo2[i+j-1]==0) {
// //             cot[j] = 1; cheo1[i-j+n]=1; cheo2[i+j-1]=1;
// //             X[i]=j;
// //             if(i==n) {
// //                 int sum = 0;
//                 //    duyet tat ca cac vi tri con hau (hang i , cot x[i]) 
// //                 for (int i=1;i<=n;i++) {
// //                     sum+=A[i][X[i]]; 
// //                 }
// //                 max_sum = max(max_sum,sum);
// //             }
// //             else {
// //                 Queen2(i+1);
// //             }
// //             cot[j]=0;cheo1[i-j+n]=0;cheo2[i+j-1]=0;
// //         }
// //     }
// // }

// // void Nhap(int A[][100],int &size) {
// //     for (int i=0;i<size;i++) {
// //         for (int j=0;j<size;j++) {
// //             cin>>A[i][j];
// //         }
// //     }
// // }
// // void solve_queen2() {
// //     cin>>n;
// //     Nhap(A,n);
// //     Queen2(1);
// //     cout<<max_sum;
// // }
// // 8
// // 1 2 3 4 5 6 7 8
// // 9 10 11 12 13 14 15 16
// // 17 18 19 20 21 22 23 24
// // 25 26 27 28 29 30 31 32
// // 33 34 35 36 37 38 39 40
// // 41 42 43 44 45 46 47 48
// // 48 50 51 52 53 54 55 56
// // 57 58 59 60 61 62 63 64


// // bai toan Nguoi Du Lich 
// // x[i] = j : lan di thu i qua tp j 
// // c[i][j] : chi phi tu tp i -> j  
// // int visited[100], x[100],c[100][100], ans = INT_MAX, n,dis=0;
// // void People_visit(int i) {
// //     for (int j=1;j<=n;j++) {
// //         if(!visited[j]) {
// //             x[i]=j;
// //             // danh dau 
// //             visited[j]=1;
// //             // tinh chi phi tu tp x[i-1] -> x[i]
// //             dis+=c[x[i-1]][x[i]];
// //                 // tim cost nho nhat 
// //             if(i==n){
// //                 // chi phi tu tp n -> 1 
// //                 ans = min(ans,dis + c[x[n]][1]);
// //             }
// //             else {
// //                 // duyet toi tp tiep theo 
// //                 People_visit(i+1);
// //             }
// //             // reset lai (backtrack)-> duyet to hop duong di moi 
// //             visited[j]=0;
// //             dis-=c[x[i-1]][x[i]];
// //         }
// //     }
// // }
// // void solve_People_visit() {
// //     cin>>n;
// //     // ma tran chi phi 
// //     for (int i=1;i<=n;i++) {
// //         for (int j=1;j<=n;j++) cin>>c[i][j];
// //     }
// //     x[1]=1;
// //     visited[1]=1;
// //     People_visit(2);
// //     cout <<ans;
// // }
// // c[1][2] = 20 = chi phi tu tp 1->2
// // 4
// // 0 20 35 10
// // 20 0 90 50
// // 35 90 0 12
// // 10 50 12 0
// // 117


// // Nguoi du lich nang cap 
// // int visited[100], x[100],c[100][100], ans = INT_MAX, n,dis=0,cmin;
// // void People_visit(int i) {
// //     for (int j=1;j<=n;j++) {
// //         if(!visited[j]) {
// //             x[i]=j;
// //             // danh dau 
// //             visited[j]=1;
// //             // tinh chi phi 
// //             dis+=c[x[i-1]][x[i]];
// //                 // tim cp nho nhat 
// //             if(i==n){
// //                 // chi phi tu tp n -> 1 
// //                 ans = min(ans,dis + c[x[n]][1]);
// //             }
// //             // toi uu tong chi phi duong di 
// // co the toi uu chi phi ( do chi phi hien tai (ans)> chi phi toi uu (di n-i+1 doan con lai voi cmin : toi uu ) )
// //             else if(dis + (n-i+1)*cmin < ans) {
// //                 // duyet toi tp tiep theo 
// //                 People_visit(i+1);
// //             }
// //             // reset lai (backtrack)-> duyet to hop duong di moi 
// //             visited[j]=0;
// //             dis-=c[x[i-1]][x[i]];
// //         }
// //     }
// // }

// // void solve_People_visit() {
// //     cin>>n;
// //     // ma tran chi phi 
// //     for (int i=1;i<=n;i++) {
// //         for (int j=1;j<=n;j++) {
// //             cin>>c[i][j];
// //             if(c[i][j]) {
// //                 cmin = min(cmin,c[i][j]);
// //             }
// //         }
// //     }
// //     x[1]=1;
// //     visited[1]=1;
// //     People_visit(2);
// //     cout <<ans;
// // }
// // int main() {
// //     solve_People_visit();
// // }

// // #Problem1
// // dem so cau hinh co tong s, so phan tu max cua moi cau hinh: k, chu so de tao cau hinh 1->n 
// //  input n k s , out: so cau hinh

// // int n,k,s, cnt = 0, x[500];
// // void ql(int i,int bd,int sum) {
// //     // i: index cau hinh , j : value cho cau hinh
// //     for (int j=bd;j<=n;j++) {
// //         x[i] = j;
// //         if(i==k) 
// //            { if(sum+j==s) ++cnt;}
// //         else ql(i+1,j+1,sum+j);
// //     }
// // }

// // void solve(int i,int bd,int sum) {
// //     for (int j=bd;j<=n;j++ ) {
// //         x[i] = j;
// //         sum+=j;
// //         if(sum==s && i==k) ++cnt;
// //         else solve(i+1,j+1,sum);
// //         reset sum 
// //         sum-=j;
// //         sau khi reset xong ->chay vong lap thu bd+1 cua j ban dau 
// //     }
// // }

// // void solve2(int i,int bd, int sum) {
// //     if(i==k+1) {
//     // sum: luu tong k gia tri truoc 
// //         if(sum==s) ++cnt;
// //         return;
// // //        backtracking (j=bd+1,..)
// //     }
// //     for (int j=bd;j<=n;j++) {
// //         x[i] = j;
// //         solve2(i+1,j+1,sum+j);
// //     }
// // }
// // void solve1() {
// //     cin>>n>>k>>s;
// //     solve2(1,1,0);
// //     cout <<cnt;
// // }
// // 16 8 91
// // 28

// // #Problem2: cho day A[] , k , dem so day con co tong = k 
// // int n,s,cnt=0,a[100],x[100];
// // x[i]: mang luu gia tri tung cau hinh 
// // i: index mang quay lui , j : index de duyet phan tu trong mang 
// // void solve_2(int i,int bd,int sum) {
// //     for (int j=bd;j<=n;j++) {
// //         x[i] = a[j];
// //         cout <<sum<<endl;
// //         if(sum+a[j]==s) {
// //             for (int u=1;u<=i;u++) {cout << x[u]<<' ';}
// //             ++cnt;
// //             cout <<endl;
// //         }
// //         else if(sum+a[j]<s) {
// //             solve_2(i+1,j+1,sum+a[j]);
// //         }
// //     }
// // }
// // int main() {
// //     cin>>n>>s;
// //     for (int i=1;i<=n;i++) cin>>a[i];
// //     solve_2(1,1,0);
// //     sort(a+1,a+n+1);
// //     cout <<cnt;
// // }
// // 5 50
// // 5 10 15 20 25
// // out :
// // 5 10 15 20 
// // 5 20 25 
// // 10 15 25 
// // 3

// // #Problem 3: in ra so to tien phai tra de tong >= s
// // in: n (so to tien), s(tong)
// // out : so to tien de co tong >=s

// // int n,s, x[100], a[100], res = 1e9; 
// // void solve3(int i,int bd,int sum) {
// //     for (int j=bd;j<=n;j++) {
// //         x[i] = a[j];
// //         if(sum+a[j] == s) {
// //             res = min(res,i);
// //         }
// //         else if(sum+a[j]<s) solve3(i+1,bd+1,sum+a[j]);
// //     }
// // }
// // // 6 30 
// // // 10 4 10 5 8 8
// // // 4

// // int main() {
// //     cin>>n>>s;
// //     for (int i=0;i<n;i++) cin>>a[i];
// //     solve3(1,1,0);
// //     cout <<res;
// // }


// // #Problem 4: in ra tat ca day con tang dan 
// // idea: Neu gia tri hien tai lon hon truoc do thi cho vao cau hinh ( size cau hinh > 2 -> in )
// // int n, a[100],x[100];
// // // x[i] : luu value mang con tang dan  
// // void solve4(int i,int bd) {
// //     for (int j=bd;j<=n;j++) {
//     // ss gia tri hien tai voi gia tri trc do ( value mang quay lui)
//     // x[i-1] : gia tri a[j] cua vong de quy truoc do 
// //         if(a[j]>x[i-1]) {
// //             // luu value vao mang quay lui 
// //             x[i] = a[j];
// //             // co tu 2 gia tri tro len -> cout 
// //             if(i>=2) {
// //                 // in ra tung gia tri thoa man 
// //                 for (int u=1;u<=i;u++) cout <<x[u]<<' ';
// //                 cout <<endl;
// //             }
// //             solve4(i+1,j+1);
// //         }
// //     }
// // }
// // 7
// // 4 8 6 7 3 5 2
// // out :
// // 4 8 
// // 4 6 
// // 4 6 7 
// // 4 7 
// // 4 5
// // 6 7
// // 3 5


// // #Problem 5: kiem tra co the chia mang lam 2 mang con co tong bang nhau k 

// // ham tinh tong nua mang con lai 
// //  int s,n,a[100],ok=0;
// // void solve5(int i,int bd,int sum) {
// //     if(ok) return;
// //     for (int j=bd;j<=n;j++) {
// //         if(sum+a[j]<=s) {
// //             // x[i] = a[j];
// //             if(sum+a[j]==s) ok = 1;
// //            else solve5(i+1,j+1,sum+a[j]);
// //         }
// //     }
// // }
// // int main() {
// //     cin>>n; for (int i=1;i<=n;i++) {cin>>a[i];s+=a[i];}
// //     if(s%2 == 1) {cout <<0;return 0;}
// //     s/=2;
// //     solve5(1,1,0);
// //     cout <<ok;
        
// // }
// // 4     
// // 1 2 3 4
// // 1

// // 5
// // 9 9 4 4 5
// // 0


// // #Problem 6: kiem tra 1 so co phai la so xa cach : so co cac chu so khac nhau va hieu 2 chu so lien tiep != 1
// // int n, x[100];
// // bool visited[100];

// // void solve6(int i){
// //     for (int j=1;j<=n;j++) {
// //         if(!visited[j] && abs(j-x[i-1])!=1) {
// //             visited[j] = true;
// //             x[i] = j;
// //             if(i==n) {
// //                 for (int u=1;u<=n;u++) cout <<x[u];
// //                 cout <<endl;
// //             }
// //             else {
// //                 solve6(i+1);
// //             }
// //             // reset -> tim cau hinh khac 
// //                 visited[j] = false;
// //         }
// //     }
// // }
// // // 4
// // // 2413
// // // 3142


// // int main() {
// //     cin>>n;
// //     x[0] = -1;
// //     solve6(1);
// // }
// // # Problem 7 : In ra tat ca day con tang dan co tong bang s 

// // int n, s,x[100], a[100];
// // vector <vector<int>> v;
// // bool visited[10];

// // void solve7(int i,int bd,int sum) {
// //     for (int j=bd;j<=n;j++) {
// //         if(sum+a[j]<=s) {
// //             x[i] = a[j];
// //             if(sum + a[j] == s) {
//     // luu cau hinh vao vector 
// //                 vector <int> tmp (x+1,x+i+1);
// //                 v.push_back(tmp);
// //             }
// //             else solve7(i+1,j,sum+a[j]);
// //         }
// //     }
// // }

// // int main() {
// //     cin>>n>>s;
// //     for (int i=1;i<=n;i++) cin>>a[i];
// //     sort(a+1,a+n+1);
// //     solve7(1,1,0);
// //     if(v.size()==0) cout <<-1;
// //     else {
// //         cout <<v.size()<<endl;
// //         for (auto it : v) {
// //             cout <<"{";
// //             for (int i=0;i<it.size();i++) {cout <<it[i];
// //             if(i<it.size()-1) cout <<' ';}
// //         cout <<"}";
// //         cout <<endl;
// //         }
// //         }
// // }
// // 3 10
// // 4 2 3
// // 5
// // {2 2 2 2 2}
// // {2 2 2 4}
// // {2 2 3 3}
// // {2 4 4}
// // {3 3 4}


// // #P8 
// // #include<bits/stdc++.h>
// // #define MAX 10000
// // using namespace std;

// // // Input : n,k,s : value dc sd - so phan tu trong moi tap con - tong tap con
// // //  Dem co bao nhieu tap con ma 
// // // - Tong cac phan tu = s
// // // - Value dc sd 1->n 
// // // - So phan tu trong moi tap con = k 

// // int x[MAX],n,k,s,cnt=0; 
// // vector<vector<int>> v;
// // void Try(int i,int bd, int sum) {
// //     for (int j=bd;j<=n;j++) {
// //         x[i] = j;
// //         if(i==k && sum+j==s) {
// //             vector<int> tmp (x+1,x+i+1);
// //             v.push_back(tmp);
// //             ++cnt;
// //         }
// //         else {
// //             Try(i+1,j+1,sum+j);
// //         }

// //     }
// // }

// // int main() {
// //     int t;
// //     cin>>t;
// //     while(t--) {
// //     cnt = 0;
// //     memset(x,0,sizeof(x));
// //     cin>>n>>k>>s;
// //     Try(1,1,0);
// //     for (auto it:v) {
// //         cout <<"{";
// //         for (int i=0;i<k;i++) cout <<it[i]<<' ';
// //         cout <<"}";
// //         cout<<endl;
// //     }
// //     cout <<cnt<<endl;
// //     }
// // }



// // #P9 
// // #include <iostream>
// // #define MAX 100
// // using namespace std;



// // // Dòng đầu tiên đưa vào số lượng bộ test T.
// // // Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N số của mảng A[].
// // // T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10;
// // // 1
// // // 5
// // // 1 2 3 4 5
// // // [1 2 3 4 5]
// // // [3 5 7 9]
// // // [8 12 16]
// // // [20 28]
// // // [48]


// // int a[MAX],n;
// // void Try(int n) {
// //     if(n==0) return;
// //     cout <<"[";
// //     for (int i=0;i<n;i++) {
// //         cout <<' '<<a[i];
// //         if(i!=n-1) cout <<',';
// //         else cout <<' ';
// //     }
// //     cout <<"]"<<endl;
// //     for (int i=0;i<n-1;i++) {
// //         a[i] += a[i+1];
// //     }
// //      Try(n-1);
// // }

// // int main() {
// //     cin>>n;
// //     for (int i=0;i<n;i++) cin>>a[i];
// //     Try(n);
// // }


// // #P10
// // [48]
// // [20, 28]
// // [8, 12, 16]     
// // [3, 5, 7, 9 ]
// // [1, 2, 3, 4, 5 ]
// // Input:
// // Dòng đầu tiên đưa vào số lượng bộ test T.
// // Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N số của mảng A[].
// // T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10;

// // #define MAX 100
// // vector <vector<int>> v;
// // int a[MAX],n;
// // void Try(int n){
// //     if(n==0) return;
// //         vector<int> tmp;
// //     for (int i=0;i<n;i++) {
// //         tmp.push_back(a[i]);
// //     }
// //         v.push_back(tmp);
// //     for (int i=0;i<n-1;i++) {
// //         a[i]+=a[i+1];
// //     }
// //     Try(n-1);
// // }

// // int main() {
// //     cin>>n;
// //     for (int i=0;i<n;i++) cin>>a[i];
// //     Try(n);
// //     reverse(v.begin(),v.end());
// //     for (auto it:v) {
// //         cout <<"[";
// //         for (int i=0;i<it.size();i++) {
// //             cout <<" "<<it[i];
// //             if(i!=it.size()-1) cout <<",";
// //             else cout <<' ';
// //         }
// //         cout <<"]";
// //         cout <<endl;
// //     }
// //     // for (int i=v.size()-1;i>=0;i--) {
// //     //     for (int j=0;j<v[i].size();j++) {
// //     //         cout <<v[i][j];
// //     //     }
// //     //         cout <<endl;
// //     // }
// // }



// // #P11 : hoan vi xau ki tu 

// // Input:
// // Dòng đầu tiên đưa vào số lượng bộ test T.
// // Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test là một xâu ký tự S được viết trên 1 dòng.
// // T, S thỏa mãn ràng buộc: 1≤T≤10; 1≤length(S) ≤10;
// // Output:
// // Đưa ra kết quả mỗi test theo từng dòng.
 
// // Input
// // Output
// // 2
// // AB
// // ABC
// // AB BA
// // ABC ACB BAC BCA CAB CBA 


// // cout << a[i] == s[a[i]] : bien xau abc => 012 hoan vi 
// // #define ms(s,n) memset(s,n,sizeof(s))
// // #define MAX 100
// // string s; int n;
// // // luu chi so cau hinh xau
// // // a[3] = 4 => chi so thu 3 cua cau hinh cua xau moi la chi so thu 4 cua xau cu  
// // int a[MAX];
// // bool check[MAX];
// // void input() {
// //     cin>>s;
// //     n = s.length();
// //     ms(check,false);
// // }

// // void Try(int i) {
// //     for (int j=0;j<n;j++) {
// //         if(!check[j]) {
// //             check[j] = true;
// // chi so thu i cua xau moi = chi so j xau cu 
// //             a[i] = j;
// // 3ki tu = 012 (i=2  +1 )
// //             if(i+1==n) {
// //                 for (int i=0;i<n;i++) {
// //                     cout <<s[a[i]];
// //                 }
// //                 cout <<endl;
// //             }
// //             else Try(i+1);
// //             check[j] = false;
// //         }
// //     }
// // }
// // // abc
// // // abc
// // // acb
// // // bac
// // // bca
// // // cab
// // // cba

// // int main() {
// //     input();
// //     Try(0);
// // }



// // #P12: to hop  C n k
// // int a[MAX], n,k;

// // void in() {
// //     for (int i=1;i<=k;i++) cout <<a[i];
// // }

// // void Try(int i) {
// //     for (int j=a[i-1]+1;j<=n-k+i;j++) {
// //         a[i] = j;
// //         if(i==k) {
// //             in();
// //             cout <<endl;
// //         }
// //         else Try(i+1);
// //     }
// // }
// // // 5 3
// // // 123
// // // 124
// // // 125
// // // 134
// // // 135
// // // 145
// // // 234
// // // 235
// // // 245
// // // 345
// // int main() {
// //     cin>>n>>k;
// //     Try(1);
// // }

// // #P13: Hoan vi 
#include <bits/stdc++.h>
using namespace std;

vector<int> a; // Sử dụng vector<int> thay cho mảng a[MAX]
int n;
vector<bool> check; // Sử dụng vector<bool> thay cho mảng bool check[MAX]

void in() {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) { // Vòng lặp từ 1 đến n tương đương với index từ 0 đến n-1 của vector
        if (!check[j]) {
            check[j] = true;
            a[i] = j;
            if (i == n - 1) { // Thay đổi điều kiện dừng khi i đạt n-1
                in();
            } else {
                Try(i + 1);
            }
            check[j] = false;
        }
    }
}

int main() {
    cin >> n;
    a.resize(n);
    check.resize(n + 1, false); // Resize vector check với kích thước n+1 và giá trị mặc định là false
    Try(0); // Gọi hàm Try với i ban đầu là 0
    return 0;
}

// // // 4
// // // 1234
// // // 1243
// // // 1324
// // // 1342
// // // 1423
// // // 1432
// // // 2134
// // // 2143
// // // 2314
// // // 2341
// // // 2413
// // // 2431
// // // 3124
// // // 3142
// // // 3214
// // // 3241      
// // // 3412
// // // 3421
// // // 4123
// // // 4132
// // // 4213
// // // 4231
// // // 4312
// // // 4321

// // #P14 : duong di con chuot

// // R->D
// // int dx[2] = {0,1};
// // int dy[2] = {1,0};
// // string path = "RD",s="";
// // vector <string> res;
// // void Try(int i,int j) {
// //     if(i==n && j==n) res.push_back(s);
// //     for (int k=0;k<2;k++) {
// //     int imoi = i + dx[k];
// //     int jmoi = j + dy[k];
// //     if(imoi>=1 && imoi<=n && jmoi >=1 && jmoi <=n && a[imoi][jmoi]) {
// //         a[imoi][jmoi] = 0 ;
// //         s+=path[k];
// //         Try(imoi,jmoi);
// //         a[imoi][jmoi] = 1;
// //         s.pop_back();
// //     }
// // }
// // }

// // 4
// // 1 0 0 0 
// // 1 1 0 1
// // 0 1 0 0
// // 1 1 1 1
// // DRDDRR

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);
// //     cin>>n; 
// //     for (int i=1;i<=n;i++) {
// //         for (int j=1;j<=n;j++) cin>>a[i][j];
// //     }
// //     Try(1,1);
// //     if(a[1][1]) a[1][1] = 0;
// //     for (auto it:res) {
// //         cout <<it<<endl;
// //         }
// //     return 0;
// // }

// // In ra tat ca day con co tong bang k 

// // int x[100],a[100],k,n,sum=0;
// // void Try(int i,int bd,int sum) {
// //     for (int j=bd;j<=n;j++){
// //         if(sum+a[j]<=k) {
// //             x[i] = a[j];
// //             if(sum+a[j]==k) {
// //                 for (int u=1;u<=i;u++) cout <<x[u]<<' ';
// //                 cout <<endl;
// //             }
// //             else {
// //             Try(i+1,j+1,sum+a[j]);
// //             }
// //         }
// //     }
// // }

// // // 8 53
// // // 15 22 14 26 32 9 16 8
// // // 8 9 14 22
// // // 8 14 15 16
// // // 15 16 22
// // int main() {
// //     cin>>n>>k;
// //     for (int i=1;i<=n;i++) {
// //         cin>>a[i];
// //     }
// //     sort(a+1,a+n+1);
// //     Try(1,1,0);
// // }
// // 5 50
// // 5 10 15 20 25

// // Bai 7 Tap con bang nhau 

// // int n,a[100],x[100],s=0;
// // bool ok = false;
// // void sum(int a[],int n) {
// //     for (int i=1;i<=n;i++) s+=a[i];
// // }

// // void Try(int i,int bd,int sum) {
// //     for (int j=bd;j<=n;j++) {
// //         if(a[j]+sum==s/2) {
// //             ok = true;
// //             return;
// //         }
// //         else if(a[j]+sum<s/2) {
// //             Try(i+1,j+1,sum+a[j]);
// //         }
// //     }
// // }
// // int main() {
// //     cin>>n;
// //     for (int i=1;i<=n;i++) cin>>a[i];
// //     sum(a,n);
// //     Try(1,1,0);
// //     if(s%2==0) {
// //     if(ok) cout <<"YES";
// //     else cout <<"NO";
// //     }
// //     else cout <<"NO";
    
// // }


// // Bai 8 Dem tat ca duong di tu A[0][0] -> A[m-1][n-1]  : move down or right 
// // #define MAX 1000
// // int a[MAX][MAX],b[MAX][MAX],m,n;
// // string s=to_string(a[1][1]),path="RD";
// // vector <string> v;
// // void input(int a[][MAX],int &m,int &n) {
// //     for (int i=1;i<=m;i++) {
// //         for (int j=1;j<=n;j++) {
// //             cin>>b[i][j];
// //             a[i][j] = b[i][j];
// //             }
// //     }
// // }
// // void Try(int i,int j) {
// //     if(i==m && j==n) {
// //         v.push_back(s);
// //     }
// //     int dx[2] = {0,1};
// //     int dy[2] = {1,0};
// //     for (int k=0;k<2;k++) {
// //         int imoi = i + dx[k];
// //         int jmoi = j + dy[k];
// //         if(imoi>=1 && imoi<=m && jmoi >=1 && jmoi <=n) {
// //             s+=to_string(a[imoi][jmoi]);
// //             Try(imoi,jmoi);
// //             s.pop_back();
// //         }
// //     }
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
 
// // #define ms(s,n) memset(s,n,sizeof(s))
// // #define all(a) a.begin(),a.end()
// // #define present(t, x) (t.find(x) != t.end())
// // #define sz(a) int((a).size())
// // #define FOR(i, a, b) for (int i = (a); i < (b); ++i)
// // #define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
// // #define pb push_back
// // #define pf push_front   
// // #define fi first
// // #define se second
// // #define mp make_pair
 
// // typedef long long ll;
// // typedef unsigned long long ull;
// // typedef long double ld;
// // typedef pair<int,int> pi;
// // typedef vector<int> vi;
// // typedef vector<pi> vii;
 
// // const int MOD = (int) 1e9+7;
// // const int INF = (int) 1e9+1;
// // inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
// // inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
// // int main() {
// //     cin>>m>>n;
// //     input(a,m,n);
// //     Try(1,1);
// //     for (auto it:v) cout <<it<<endl;
// // }
// // #define FOR(i,a,b) for (int i=(a);i<=(b);i++)


// // Sap xep n Queen ko an lan nhau 
// // int n,x[100],a[100],cheo1[100],cheo2[100],cnt;
// // void inp() {
// //     cin>>n;
// //     FOR(i,1,100){
// //         a[i]=cheo1[i]=cheo2[i]=1;
// //     } 
// //     cnt=0;
// // }
// // void Try(int i) {
// //     for (int j=1;j<=n;j++) {
// //     if(a[j] && cheo1[i-j+n] && cheo2[i+j-1]) {
// //         a[j]=cheo1[i-j+n]=cheo2[i+j-1]=0;
// //         x[i]=j;
// //         if(i==n) ++cnt;
// //         else Try(i+1);
// //         a[j]=cheo1[i-j+n]=cheo2[i+j-1]=1;
// //     }
// //     }
// // }

// // int main() {
// //     inp();
// //     Try(1);
// //     cout <<cnt;
// // }


// // Duong di con chuot 
// // #define FOR(i,a,b) for (int i=a;i<=b;i++)
// // #define MAX 10000
// // char c[MAX];
// // int a[MAX][MAX],ok,n;
// // void inp() {
// //     cin>>n;
// //     FOR(i,1,n) {
// //         FOR(j,1,n)cin>>a[i][j];
// //     }

// // }
// // void Try(int i, int j,int k) {
// //     if(i==n && j==n) {
// //         for (int i=1;i<k;i++) {
// //             cout <<c[i];
// //         }
// //         cout <<' ';
// //         ok=1;
// //         return;
// //     }
// //     if(i+1<=n && a[i+1][j]) {
// //         c[k]='D';
// //         a[i+1][j]=0;
// //         Try(i+1,j,k+1);
// //         a[i+1][j]=1;
// //     }
// //     if(j+1<=n && a[i][j+1]) {
// //         c[k]='R';
// //         a[i][j+1]=0;
// //         Try(i,j+1,k+1);
// //         a[i][j+1]=1;
// //     }
// //     if(i-1>=1 && a[i-1][j]) {
// //         c[k]='U';
// //         a[i-1][j]=0;
// //         Try(i-1,j,k+1);
// //         a[i-1][j]=1;
// //     }
// //     if(j-1>=1 && a[i][j-1]) {
// //         c[k]='L';
// //         a[i][j-1]=0;
// //         Try(i,j-1,k+1);
// //         a[i][j-1]=1;
// //     }
// // }
// // int main() {
// //     int t; cin>>t;
// //     while(t--) {
// //         inp();
// //         ok=0;
// //         if(a[1][1] && a[n][n]) {
// //             a[1][1]=0;
// //             Try(1,1,1);
// //         }
// //         if(ok) cout <<"\n";
// //         else cout <<"-1\n";
// //     }
// // }


// // doi cho chu so 

// // string s;
// // int k;
// // void solve() {
// //     cin>>k>>s;
// //     for (int i=0;i<s.size();i++){
// //         if(!k) break;
// //         int max_val = s.back(); int idx=s.length()-1;
// //         for (int j=i+1;j<s.size();j++) {
// //             if(s[j]>=max_val) {
// //                 max_val = s[j];
// //                 idx = j;
// //             }
// //         }

// //         if(max_val>s[i]) {
// //             swap(s[i],s[idx]);
// //             --k;
// //         }
// //     }
// //     cout <<s;
// // }
// // int main() {
// //     solve();
// //     return 0;
// // }

// // 2
// // 1034
// // 4301


// // S P N : Sum,Prime,Number : in to hop so nt tu P tro di co sum S va N value
// // ex: 23 2 3 -> out: 2 | 3 7 13 | 5 7 11
// // int p[MAX] = {};
// // void sieve() {
// //     p[0] = p[1] = 0;
// //     for (int i=2;i<=1000000;i++) {
// //         p[i] = 1;
// //     }
// //     for (int i=2;i<=sqrt(1000000);i++) {
// //         if(p[i]) {
// //             for (int j=i*i;j<=1000000;j+=i) p[j]=0;
// //         } 
// //     }
// // }


// // bool check_prime(int num) {
// //     if (num <= 1) return false;
// //     for (int i = 2; i * i <= num; i++) {
// //         if (num % i == 0) return false;
// //     }
// //     return true;
// // }

// // int x[100], n, p, s, sum = 0, cnt = 0;

// // void ql(int i, int bd, int sum, int &cnt) {
// //     for (int j = bd; j <= s; j++) {
// //         if (check_prime(j)) {
// //             x[i] = j;
// //             if (sum + j == s && i == n) {
// //                 for (int k = 1; k <= i; k++) cout << x[k] << ' ';
// //                 cnt++;
// //                 cout << endl;
// //             } else if (sum + j <= s) {
// //                 ql(i + 1, j + 1, sum + j, cnt);
// //             }
// //         }
// //     }
// // }

// // int main() {
// //     cin >> n >> p >> s;
// //     ql(1, p, 0, cnt);
// //     cout << "Total count: " << cnt << endl;
// //     return 0;
// // }


// // Dat quan hau vơi số điểm lớn nhất 
// // #define FOR(i,a,b) for (int i=a;i<=b;i++)
// // #define ms(s,n) memset(s,n,sizeof(s))
// // int a[100][100], cheo1[100], cheo2[100], x[100], cot[100], n, max_point;

// // void inp(int a[][100]) {
// //     FOR(i, 1, n)
// //         FOR(j, 1, n) cin >> a[i][j];
// //     ms(cot,1);
// // 	ms(cheo1,1);
// // 	ms(cheo2,1);max_point=0;
// // }

// // void queen(int i) {
// //     FOR(j,1,n) {
// //         if (cot[j] && cheo1[i + j - 1] && cheo2[i - j + n]) {
// //             cot[j] = cheo1[i + j - 1] = cheo2[i - j + n] = 0;
// //             x[i] = j;
// //             if (i == n) {
// //                 int res = 0;
// //                 FOR(k, 1, n) {
// //                     res += a[k][x[k]];
// //                 }
// //                 max_point = max(max_point, res);
// //             } else {
// //                 queen(i + 1);
// //             }
// //             cot[j] = cheo1[i + j - 1] = cheo2[i - j + n] = 1;
// //         }
// //     }
// // }

// // int main() {
// //     cin >> n;
// //     inp(a);
// //     queen(1);
// //     cout << max_point << endl;
// //     return 0;
// // }
// // 1
// // 1 2 3 4 5 6 7 8
// // 9 10 11 12 13 14 15 16
// // 17 18 19 20 21 22 23 24
// // 25 26 27 28 29 30 31 32
// // 33 34 35 36 37 38 39 40
// // 41 42 43 44 45 46 47 48
// // 48 50 51 52 53 54 55 56
// // 57 58 59 60 61 62 63 64



// // tim to hop co tong bang x trong mang 
// // int a[100],x[100],n,k;
// // void inp(int a[],int &n) {
// //     cin>>n>>k;
// //     FOR(i,1,n) cin>>a[i];
// // }
// // void ql(int i,int bd,int sum) {
// //     for (int j=bd;j<=n;j++) {
// //         x[i] = a[j];
// //         if(sum+a[j]==k) {
// //             FOR(k,1,i) cout <<x[k]<<' ';
// //             cout <<endl;
// //         } 
// //         else if(sum+a[j]<k ){
// //             ql(i+1,j,sum+a[j]);
// //         }
// //     }
// // }

// // int main() {
// //     inp(a,n);
// //     ql(1,1,0);
// // }

// // chia mang : A[],k -> out: 1(neu chia duoc k tap con co tong bang nhau) || 0

// // int a[100],x[100],n,k,sum=0,S=0,cnt=0;
// // void sum_a(int a[],int &n,int &S){
// //     FOR(i,1,n) S+=a[i]; 
// // }
// // void ql(int i,int bd,int sum){
// //     FOR(j,bd,n) {
// //         x[i] = a[j];
// //         if(sum+a[j]==S/k) {
// //             FOR(k,1,i) cout <<x[k]<<' ';
// //             ++cnt;
// //             cout <<endl;
// //         }
// //         else if(sum+a[j]<S/k) ql(i+1,j+1,sum+a[j]);
// //     }
// // }

// // int main() {
// //     cin>>n>>k;
// //     FOR(i,1,n)cin>>a[i];
// //     sum_a(a,n,S);
// //     ql(1,1,0);
// //     if(cnt==k) cout <<1;
// //     else cout <<0<<endl;
// // }

// // ATM 
// // int a[100],x[100],n,k,res = INT_MAX,s=0;
// // void ql(int i,int bd,int s) {
// //     FOR(j,bd,n) {
// //         x[i] = a[j];
// //         if(s+a[j]==k) {
// //             res = min(res,i);
// //         }
// //         else if(s+a[j]<k) ql(i+1,j+1,s+a[j]);
// //     }
// // }
// // int main() {
// //     cin>>n>>k;
// //     FOR(i,1,n) cin>>a[i];
// //     ql(1,1,0);
// //     cout <<res;
// // }

// // nguoi du lich 
// // x[i] = j : lan di thu i la tp j 
// // int n,x[100],c[100][100],cost=0,min_cost = INT_MAX;
// // bool visited[100] = {false};
// // int MIN_cost = INT_MAX;
// // void inp(int c[][100],int &n) {
// //     cin>>n;
// //     FOR(i,1,n) 
// //     FOR(j,1,n) {
// //         cin>>c[i][j];
// //         if(c[i][j]<MIN_cost) MIN_cost = c[i][j];
// //         }
// // }

// // void ql(int i) {
// //     for (int j=1;j<=n;j++) {
// //         if(!visited[j]) {
// //             visited[j]=true;
// //             x[i] = j;
// //             cost+=c[x[i-1]][x[i]];
// //             if(i==n) {
// //                 min_cost=min(min_cost,cost+c[x[n]][1]);
// //             }
// //             // co the toi uu 
// //             else if((cost + (n-i+1)*MIN_cost)<min_cost) ql(i+1);
// //             visited[j]=false;
// //             cost-=c[x[i-1]][x[i]];
// //         }
// //     }
// // }

// // int main() {
// //     inp(c,n);
// //     x[1]=1;
// //     visited[1]=true;
// //     ql(2);
// //     cout <<min_cost<<endl;
// // }

// // Bài 18. Từ điển
// // Cho tập từ ghi trong trừ điển dic[] và một bảng hai chiều A[M][N] các ký tự. Hãy tạo nên tất cả các từ có mặt trong từ điển dic[] bằng cách nối các ký tự kề nhau trong mảng A[][]. Chú ý, phép nối các ký tự kề nhau trong mảng A[][] được thực hiện theo 8 hướng nhưng không có phần tử A[i][j] nào được lặp lại. Ví dụ với từ điển dic[] ={ “GEEKS”, “FOR”, “QIUZ”, “GO”} và mảng A[][] dưới đây sẽ cho ta kết quả: “GEEKS”, “QUIZ”
 
// // G
// // I
// // Z
// // U
// // E
// // K
// // Q
// // S
// // E

// // Input:
// // Dòng đầu tiên đưa vào số lượng bộ test T.
// // Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào ba số K, M, N tương ứng với số từ của từ điển dic[], số hàng và số cột của ma trận ký tự A[M][N]; dòng tiếp theo đưa vào K từ của từ điển dic[]; dòng cuối cùng đưa vào các phần tử A[i][j].
// // T, K, M, N thỏa mãn ràng buộc: 1≤T ≤10; 1≤K≤100; 1≤ M, N ≤3.
// // Output:
// // Đưa ra theo thứ tự tăng dần các từ có mặt trong từ điển dic[] được tạo ra từ ma trận A[][]. Đưa ra -1 nếu không thể tạo ra từ nào thuộc dic[] từ A[][].
// // Input
// // Output
// // 1
// // 4  3  3
// // GEEKS FOR QUIZ GO
// // G I Z
// // U E K
// // Q S E
// // GEEKS QUIZ   

// // vector <string> v,res;
// // int dx[8]={-1,-1,-1,0,1,1,1,0};
// // int dy[8]={-1,0,1,1,1,0,-1,-1};
// // char c[100][100];
// // bool used[100][100];
// // int n,m,k;
// // void dfs(int i,int j, string s) {
// //     for (int it=0;it<k;it++) {
// //         // neu s bang 1 tu trong chuoi tu dien -> push vao res 
// //         if(v[it] == s) res.push_back(s);
// //     }
// // // khoi tao s bang cach duyet 8 huong chuoi mang ki tu 
// //     for (int k=0;k<8;k++) {
// //         int imoi = i+dx[k];
// //         int jmoi = j+dy[k];
// //         if(imoi>=1 && imoi<=m && jmoi>=1 && jmoi <=n  && !used[imoi][jmoi]) {
// //             used[imoi][jmoi] = true;
// //             dfs(imoi,jmoi,s+c[imoi][jmoi]);
// //             used[imoi][jmoi]=false;
// //         }
// //     }
// // }

// // void solve() {
// //     res.clear();
// //     v.clear();
// //     cin>>k>>m>>n;
// //     // nhap tu chuoi tu dien 
// //     for (int i=0;i<k;i++) {
// //         string s; cin>>s;
// //         v.push_back(s);
// //     }
// //     // nhap mang ki tu 
// //     FOR(i,1,m)
// //     FOR(j,1,n) cin>>c[i][j];
// //     FOR(i,1,m)
// //     FOR(j,1,n) {
// //         ms(used,false);
// //         used[i][j]=true;
// //         string s="";
// //         // dfs no chi danh dau tu ki tu thu imoi jmoi tro di 
// //         dfs(i,j,s+c[i][j]);
// //         // tra lai ki tu da danh dau dau tien 
// //         used[i][j]=false;
// //     }

// //     if(res.empty()) cout <<"-1\n"<<endl;
// //     else {
// //         for (auto it:res) cout <<it<<' ';
// //     }
// // }
// // int main() {
// //     int t; cin>>t;
// //     while(t--) {
// //         solve();
// //     }
// // }


// // Duong di dai nhat (dfs) 

// // bool mark[100][100];
// // vector <vector<int>> adj(100);
// // int cnt=0,ans=0,n,m;
// // void inp() {
// //     cin>>n>>m;
// //     ans=0;
// //     for (int i=0;i<n;i++) adj[i].clear();
// //     for (int i=0;i<m;i++) {
// //         // tao danh sach ke 
// //         int x,y; cin>>x>>y;
// //         adj[x].push_back(y);
// //         adj[y].push_back(x);
// //     }
// // }

// // void dfs(int u,int cnt) {
// //     // duyet dinh ke 
// //     for (auto x:adj[u]) {
// //         if(!mark[x][u] && !mark[u][x]) {
// //             // danh dau canh da di qua 
// //             mark[x][u] = mark[u][x] = true;
// //             dfs(x,cnt+1);
// //             // xoa danh dau de tao cau hinh moi 
// //             mark[x][u] = mark[u][x] = false;
// //         }
// //     }
// //     // cap nhat duong di dai nhat (chu trinh euler)
// //     ans=max(ans,cnt);
// // }

// // int main() {
// //     int t; cin>>t;
// //     while(t--) {
// //         inp();
// //         // dinh tang dan theo stt 
// //         for (int i=0;i<n;i++) {
// //         ms(mark,false);
// //         dfs(i,0);
// //         }
// //     cout <<ans<<endl;
// //     }
// // }


// // 1
// // 15 16
// // 0 2
// // 1 2
// // 2 3
// // 3 4
// // 3 5
// // 4 6
// // 5 7
// // 6 8
// // 7 8
// // 7 9
// // 8 10
// // 9 11
// // 10 12
// // 11 12
// // 10 13
// // 12 14

// // out : 12 


// // so nho nhat co N uoc so 
// // input : so N 
// // output : so k min co dung N uoc so


// // int countOfdivisor(int n) {
// //     int cnt=0;
// //     for (int i=1;i<=sqrt(n);i++) {
// //         if(n%i==0 ){
// //         if(i*i!=n) cnt+=2;
// //         else cnt++;
// //         }
// //     }
// //     return cnt;
// // }

// // void solve() {
// //     int t; cin>>t;
// //     while(t--) {
// //         int n;
// //         cin>>n;
// //         int k=1;
// //         while(countOfdivisor(k)<n) {
// //             ++k;
// //         }
// //         cout <<k<<endl;
// //     }
// // }
// // int main() {
// //     solve();
// // }

// // Cho số nguyên dương N. Hãy đếm số bước ít nhất để đưa N về 1 bằng cách thực hiện ba thao tác dưới đây:
// // Nếu N chia hết cho 2 bạn có thể giảm N = N/2.
// // Nếu N chia hết cho 3 bạn có thể giảm N = N/3.
// // Giảm N đi 1.

// // int x = 1+n%2+cnt(n/2);
// // int y = 1+n%3+cnt(n/3);


// // int x[100],n,s=0,cnt=0;
// // void ql(int i,int bd,int s) {
// //     for (int j=bd;j>=1;j--) {
// //         x[i]=j;
// //         if(s+x[i]==n) {
// //             FOR(k,1,i)cout <<x[k]<<' ';
// //             ++cnt;
// //             cout <<endl;
// //         }
// //         else if(s+x[i]<n) ql(i+1,j,s+j);
// //     }
// // }

// // int main() {
// //     int t; cin>>t;
// //     while(t--) {
// //     cin>>n;
// //     ql(1,n,0);
// //     cout <<cnt;
// //     }
// // }



// // # Doi cho chu so cho mang A ; Hay chia mag thanh k tap con khac rong 
// // sao cho tong cac phan tu tap con bang nhau 
// #include <bits/stdc++.h>
// using namespace std;
// bool used[105];
// bool ok=false;
// int n,k,a[100],sum=0,x[100];
// void ql(int i,int bd,int cur_sum,int cnt) {
//     // da xay dung xong k cap 
//     if(cnt==k+1) {
//         ok=true;
//         return;
//     }
//     for (int j=bd;j<=n;j++) {
//         if(!used[j] && cur_sum+a[j]<=sum){
//             x[i] = a[j];
//             used[j] = true;
//             if(cur_sum+a[j]==sum) {
//                 // duyet lai bd = 1
//                 ql(i+1,1,0,cnt+1);
//             }
//             else{
//                 ql(i+1,j+1,cur_sum+a[j],cnt);
//             }
//             used[j] = false;
//         }
//     }
// }
// int main() {
//     cin>>n>>k;
//     for (int i=1;i<=n;i++) {
//         cin>>a[i];
//         sum+=a[i];
//     }
//     if(sum%k==0) {
//         sum/=k;
//         ql(1,1,0,1);
//     }
//     cout <<ok;
// }



// *Theory:
// #include <bits/stdc++.h>
// #define MAX 100
// using namespace std;
// using ll = long long;

// // QUAY LUI

// // sinh nhi phan
// // int a[100],n;
// // void in() {
// //     for (int i=1;i<=n;i++) {
// //         cout <<a[i];
// //     }
// // }

// // void Try(int i){
// //     for (int j=0;j<=1;j++) {
// //         a[i] = j;
// //         // da du bit -> in cau hinh
// //         if(i==n) {
// //         in();
// //         cout <<endl;
// //         }
// //         else {
// //             Try(i+1);
// //         }
// //     }
// // }

// // int main() {
// //     cin>>n;
// //     Try(1);
// // }

// // in to hop

// // int a[100],n,k;
// // void in() {
// //     for (int i=1;i<=k;i++) {
// //         cout <<a[i];
// //     }
// // }

// // // bit thu i co value trong khoang [bit[i-1] + 1 , n - k + i]; bit nho nhat =  bit trc do +1 , bit max : n-k+i
// // void Try(int i) {
// //     for (int j = a[i-1]+1;j<=n-k+i;j++) {
// //         a[i] = j;
// //         // da du bit -> in cau hinh
// //         if(i==k) {in();cout <<endl;}
// //         // khoi tao bit tiep theo
// //         else Try(i+1);
// //     }
// // }

// // int main() {
// //     cin>>n>>k;
// //     Try(1);
// // }

// // sinh hoan vi

// // int a[100], daxet[100], n;
// // void in()
// // {
// //     for (int i = 1; i <= n; i++)
// //     {
// //         cout << a[i];
// //     }
// // }

// // void Try_4(int i)
// // {
// //     for (int j = 1; j <= n; j++)
// //     {
// //         // check j gan a[i] , ko dung lai cac bit da dung
// //         if (daxet[j] == 0)
// //         {
// //             // gan gia tri co the cho bit thu i
// //             a[i] = j;
// //             // danh dau da dung
// //             daxet[j] = 1;
// //             if (i == n)
// //             {
// //                 in();
// //                 cout << endl;
// //             }
// //             else
// //             {
// //                 Try_4(i + 1);
// //             }
// //             // sau khi in cau hinh dau tien reset lai ve 0 (bo danh dau)
// //             daxet[j] = 0;
// //         }
// //     }
// // }

// // // coi lai !!! 
// // void solve_4()
// // {
// //     memset(daxet, 0, sizeof(daxet));
// //     cin >> n;
// //     Try_4(1);
// // }

// // void Try_5(int i, int pos)
// // {
// //     for (int j = pos; j <= n; j++)
// //     {
// //         X[i] = a[j];
// //         sum += a[j];
// //         if (sum == k)
// //         {
// //             for (int l = 1; l <= i; l++)
// //             {
// //                 cout << X[l];
// //             }
// //             cout << endl;
// //         }
// //         else
// //             Try_5(i + 1, j + 1);
// //         sum -= a[j];
// //     }
// // }
// // void solve_5()
// // {
// //     int n, k;
// //     cin >> n >> k;
// //     int a[n];
// //     for (auto x : a)
// //         cin >> x;
// //     memset(daxet, 0, sizeof(daxet));
// //     Try_5(1, 1);
// //     cout << endl;
// // }

// // tim duong di cua con chuot 
// // int a[100][100];
// // int n;
// // string s = "";

// // void Try_6(int i,int j) {
// //     if(i==n || j==n) cout <<s<<' ';
// // neu duong di phai con nam trong o va co the di duoc 
// //     if(j+1<=n && a[i][j+1]==1) {
// //         s+="R";
// //         a[i][j+1] = 0;
// //         Try_6(i,j+1);
// //         // xoa nuoc di cuoi 
// //         s.pop_back();
// //         a[i][j+1] = 1;
// //     }
// //     if(i+1<=n && a[i+1][j]==1) {
// //         s+="D";
// //         a[i+1][j]=0;
// //         Try_6(i+1,j);
// //         s.pop_back();
// //         a[i+1][j]=1;
// //     }
// // }
// // void solve_6() {
// //     cin>>n;
// //     for (int i=1;i<=n;i++) {
// //         for (int j=1;j<=n;j++) cin>>a[i][j];
// //     }
// //     Try_6(1,1);
// //     return 0;
// // }

// // cach2 :
// // int a[MAX][MAX];
// // int n; 
// // string s;
// // void nhap() {
// //     cin>>n;
// //     for (int i=1;i<=n;i++) {
// //         for (int j=1;j<=n;j++) cin>>a[i][j];
// //     }
// // }
// // int check = 0;
// // int dx[2] = {0,1};
// // int dy[2] = {1,0};
// // string path = "RD";
// // vector <string> res;
// // void Try(int i,int j) {
// //     if(i==n && j==n) {
// //         check = 1;
// //         // khi tao thanh 1 cau hinh -> push vao vector res 
// //         res.push_back(s);
// //     }
// //     for (int k=0;k<2;k++) {
// //         int i1 = i+dx[k];
// //         int j1 = j+dy[k];
// //         if(i1>=0 && i1<=n && j1>=0 && j1<=n && a[i1][j1]) {
// //             a[i1][j1] = 0;
// //             s+=path[k];
// //             Try(i1,j1);
// //             // reset
// //             a[i1][j1] = 1;
// //             s.pop_back();
// //         }
// //     }
// // }
// // 4
// // 1 1 0 1
// // 1 1 1 1
// // 1 0 1 1
// // 1 1 1 1
// // DDDRRR
// // DRRDDR
// // DRRDRD
// // DRRRDD
// // RDRDDR
// // RDRDRD
// // RDRRDD

// // di 4 huong 

// int n;
// int a[MAX][MAX];
// void nhap() {
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             cin>>a[i][j];
//         }
//     }
// }
// vector<string> res;
// string s;
// bool check = false;
// string path = "ULRD";
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};

// void Try(int i,int j) {
//     if(i==n && j==n) {
//         check = true;
//         res.push_back(s);
//     }
//     for (int k=0;k<4;k++) {
//         int i1 = i + dx[k];
//         int j1 = j + dy[k];
//         if(i1<=n && i1>=1 && j1<=n && j1>=1 && a[i1][j1]) {
//             a[i1][j1] = 0;
//             s+=path[k];
//             Try(i1,j1);
//             a[i1][j1] = 1;
//             s.pop_back();
//         }
//     }
// }



// 4
// 1 1 1 1
// 1 1 0 1
// 1 1 1 1
// 0 1 1 1
// LLLUUDDULL
// LLLUUDUL
// LLLUUU
// LUDULLLU
// LUDULLUL
// LUDULULL
// LUDULULRLU
// LUULLU
// LUULUL
// LUUULL
// LUUULRLU
// ULRLLUUDDULL
// ULRLLUUDUL
// ULRLLUUU
// ULULLU
// ULULUL
// ULUULL
// ULUULRLU
// UULLLU
// UULLUL
// UULRRLLUUDUL
// UULRRLLUUU
// UULULL
// UULULRLU
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     nhap();
//     if(a[1][1]) {
//     a[1][1] = 0;
//     Try(1,1);
//     sort(res.begin(),res.end());
//     if(!check) cout <<"-1\n"<<endl;
//     for (auto it:res) cout <<it<<endl;
//     }
//     else {
//         cout <<"-1\n"<<endl;
//     }

// }