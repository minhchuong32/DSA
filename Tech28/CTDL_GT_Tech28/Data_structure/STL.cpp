#include <bits/stdc++.h>
using namespace std;

// VECTOR 
// truy cap phan tu rieng le (O(1));
// chen dau /cuoi 

    // // khai bao 5 vector mot chieu rong (2chieu)
    // vector < vector <int> > ve(5);

    // vector<int> v;
    // // iterator 
    // vector<int> :: iterator it ;
    // // tro den vi tri phan tu dau tien trong vector 
    // it = v.begin();
    // // tro den vi tri sau phan tu cuoi 
    // it = v.end();
    // // iterator ngc 
    // vector<int> :: reverse_iterator r_it;
    // // tro den vi tri cua phan tu cuoi vector 
    // r_it = v.rbegin();
    // // khoi tao array_2_side : 5x10: all value = 1
    // // vector< vector <int> > v(5,vector<int> (10,1)); 

    // // push value vao dau vector 
    // v.push_back(10);
    // // erase value cuoi vector 
    // v.pop_back();
    // // in ra phan tu dau tien 
    // v.front();
    // // in ra phan tu cuoi 
    // v.back(); 

    // for (int i=1;i<=5;i++) v.push_back(i);
    // // xoa tu phan tu 1-> thu 3 
    // v.erase(v.begin(),v.begin()+3);
    // // for (auto it:v) cout <<it<<' ';
    
    // // chen vao dau vector 
    // v.insert(v.begin(),100);
    // // chen sau phan tu cuoi 
    // v.insert(v.end(),100);


    // //  duyet xuoi theo iterator 
    // // for (it=v.begin();it!=v.end();it++)  cout <<*it;

    // // duyet ngc theo iterator nguoc
    // // for (r_it=v.rbegin();r_it!=v.rend();r_it++) cout <<*r_it;



    // duyet ds ke n vertices m edge
//     vector < vector<int> > a(100001);
//     int m,n,i,j,u,v;
// int main() {
//     cin>>m>>n;
//     for (i=1;i<=m;i++) {
//         cin>>u>>v;
//         a[u].push_back(v);
//         a[v].push_back(u);
//     }

// //    sort canh ke 
//     for (i=1;i<=m;i++) 
//     sort(a[i].begin(),a[i].end());
    
//     for (i=1;i<=m;i++) {
//         for (j=0;j<a[i].size();j++) cout <<a[i][j]<<' ';
//         cout <<endl;
//     }
//     system ("pause");
// }



// DEQUE : double-ended queue (hanh doi hai dau)
// #include <deque>


// Capacity:
// - size : trả về số lượng phần tử của deque. ĐPT O(1).
// - empty : trả về true(1) nếu deque rỗng, ngược lại là false(0). ĐPT
// O(1).
// Truy cập phần tử:
// - operator [] : trả về giá trị phần tử thứ []. ĐPT O(1).
// - at : tương tự như trên. ĐPT O(1).
// - front: trả về giá trị phần tử đầu tiên. ĐPT O(1).
// - back: trả về giá trị phần tử cuối cùng. ĐPT O(1).
// Chỉnh sửa:
// - push_back : thêm phần tử vào ở cuối deque. ĐPT O(1).
// - push_front : thêm phần tử vào đầu deque. ĐPT O(1).
// - pop_back : loại bỏ phần tử ở cuối deque. ĐPT O(1).
// - pop_front : loại bỏ phần tử ở đầu deque. ĐPT O(1).
// - insert (iterator,x): chèn “x” vào trước vị trí “iterator” ( x có thể
// là phần tử hay iterator của 1 đoạn phần tử...). ĐPT O(n).
// - erase : xóa phần tử ở vị trí iterator. ĐPT O(n).
// - swap : đổi 2 deque cho nhau (ví dụ: first.swap(second);). ĐPT O(n).
// clear: xóa vector. ĐPT O(1).



// LIST 
// #include <list>
// Truy cập phần tử:
// - front: trả về giá trị phần tử đầu tiên. ĐPT O(1).
// - back: trả về giá trị phần tử cuối cùng. ĐPT O(1).
// Chỉnh sửa:
// - push_back : thêm phần tử vào ở cuối list. ĐPT O(1).
// - push_front : thêm phần tử vào đầu list. ĐPT O(1).
// - pop_back : loại bỏ phần tử ở cuối list. ĐPT O(1).
// - pop_front : loại bỏ phần tử ở đầu list. ĐPT O(1).
// - insert (iterator,x): chèn “x” vào trước vị trí “iterator” ( x có thể
// là phần tử hay iterator của 1 đoạn phần tử...). ĐPT là số phần tử thêm
// vào.
// - erase : xóa phần tử ở vị trí iterator. ĐPT là số phần tử bị xóa đi.
// - swap : đổi 2 list cho nhau (ví dụ: first.swap(second);). ĐPT O(1).
// - clear: xóa list. ĐPT O(n).
// Operations:
// - splice : di chuyển phần tử từ list này sang list khác. ĐPT O(n).
// - remove (const) : loại bỏ tất cả phần tử trong list bằng const. ĐPT
// O(n).
// - remove_if (function) : loại bỏ tất các phần tử trong list nếu hàm
// function return true . ĐPT O(n).
// - unique : loại bỏ các phần tử bị trùng lặp hoặc thỏa mãn hàm nào đó.
// ĐPT O(n). Lưu ý: Các phần tử trong list phải được sắp xếp.
// - sort : sắp xếp các phần tử của list. O(NlogN)
// - reverse : đảo ngược lại các phần tử của list. O(n).


// STACK 
// #include <stack>

// - size : trả về kích thước hiện tại của stack. ĐPT O(1).
// - empty : true stack nếu rỗng, và ngược lại. ĐPT O(1).
// - push : đẩy phần tử vào stack. ĐPT O(1).
// - pop : loại bỏ phẩn tử ở đỉnh của stack(cuoi array). ĐPT O(1).
// - top : truy cập tới phần tử ở đỉnh stack. ĐPT O(1).


// QUEUE : FIFO 
// #include <queue>
// Các hàm thành viên:
// - size : trả về kích thước hiện tại của queue. ĐPT O(1).
// - empty : true nếu queue rỗng, và ngược lại. ĐPT O(1).
// - push : đẩy vào cuối queue. ĐPT O(1).
// - pop: loại bỏ phần tử (ở đầu). ĐPT O(1).
// - front : trả về phần tử ở đầu. ĐPT O(1).
// - back: trả về phần tử ở cuối. ĐPT O(1).

// PRIORIRY_QUEUE 
// #include <queue>
// using namespace std;

// int main() {
//     // tang dan 
// priority_queue < int,vector<int>,greater<int> > pq;

// // khoi tao ham giam dan 
// struct cmp {
//     bool operator() (int a,int b) {return a<b;}
// };
// // giam dan 
// priority_queue <int,vector<int>,cmp> p;
// for (int i=1;i<=5;i++) {
//     int x; cin>>x;
//     pq.push(x);
//     p.push(x);
// }
// // tang dan 
// for (int i=1;i<=5;i++ ){
//     cout <<pq.top();
//     pq.pop();
// }
// cout <<endl;
// // giam dan 
// for (int i=1;i<=5;i++ ){
//     cout <<p.top();
//     p.pop();
// }
// }



// SET 
// #include <set>
// set <int> s;
// s.begin(),s.end() : iterator 
// set <int, greater<int> > s;
// Hoặc viết class so sánh theo ý mình:
// struct cmp{
// bool operator() (int a,int b) {return a<b;}
// };
// set <int,cmp > myset ;
// Capacity:
// - size : trả về kích thước hiện tại của set. ĐPT O(1)
// - empty : true nếu set rỗng, và ngược lại. ĐPT O(1).
// Modifiers:
// - insert : Chèn phần tử vào set. ĐPT O(logN).
// - erase : có 2 kiểu xóa: xóa theo iterator, hoặc là xóa theo khóa. ĐPT
// O(logN).
// - clear : xóa tất cả set. ĐPT O(n).
// - swap : đổi 2 set cho nhau. ĐPT O(n).
// Operations:
// - find : trả về itarator trỏ đến phần tử cần tìm kiếm. Nếu không tìm
// thấy itarator trỏ về “end” của set. ĐPT O(logN).
// - lower_bound : trả về iterator đến vị trí phần tử bé nhất mà không bé
// hơn (lớn hơn hoặc bằng) khóa (dĩ nhiên là theo phép so sánh), nếu
// không tìm thấy trả về vị trí “end” của set. ĐPT O(logN).
// - upper_bound: trả về iterator đến vị trí phần tử bé nhất mà lớn hơn
// khóa, nếu không tìm thấy trả về vị trí “end” của set.. ĐPT O(logN).
// - count : trả về số lần xuất hiện của khóa trong container. Nhưng trong
// set, các phần tử chỉ xuất hiện một lần, nên hàm này có ý nghĩa là sẽ
// return 1 nếu khóa có trong container, và 0 nếu không có. ĐPT O(logN).

// DEMO1
// #include <iostream>
// #include <set>
// using namespace std;
// main() {
// set <int> s;
// set <int> ::iterator it;
// s.insert(9); // s={9}
// s.insert(5); // s={5,9}
// cout << *s.begin() << endl; //In ra 5
// s.insert(1); // s={1,5,9}
// cout << *s.begin() << endl; // In ra 1
// it=s.find(5);
// if (it==s.end()) cout << "Khong co trong container" << endl;
// else cout << "Co trong container" << endl;
// s.erase(it); // s={1,9}
// s.erase(1); // s={9}
// s.insert(3); // s={3,9}
// s.insert(4); // s={3,4,9}
// it=s.lower_bound(4);
// if (it==s.end()) cout << "Khong co phan tu nao trong set khong be hon 4" << endl;
// else cout << "Phan tu be nhat khong be hon 4 la " << *it << endl; // In ra 4
// it=s.lower_bound(10);
// if (it==s.end()) cout << "Khong co phan tu nao trong set khong be hon 10" << endl;
// else cout << "Phan tu be nhat khong be hon 10 la " << *it << endl; // Khong co ptu nao
// it=s.upper_bound(4);
// if (it==s.end()) cout << "Khong co phan tu nao trong set lon hon 4" << endl;
// else cout << "Phan tu be nhat lon hon 4 la " << *it << endl; // In ra 9
// /* Duyet set */
// for (it=s.begin();it!=s.end();it++) {
// cout << *it << " ";
// }
// // In ra 3 4 9
// cout << endl;
// system("pause");
// }


// DEMO2
// #include <iostream>
// #include <set>
// #include <vector>
// using namespace std;
// main() {
// set <int, greater <int> > s;
// set <int, greater <int> > :: iterator it; // Phép toán so sánh là greater
// s.insert(1); // s={1}
// s.insert(2); // s={2,1}
// s.insert(4); // s={4,2,1}
// s.insert(9); // s={9,4,2,1}
// /* Tim phần tử lớn nhất bé hơn hoặc bằng 5 */
// it=s.lower_bound(5);
// cout << *it << endl; // In ra 4
// /* Tim phần tử lớn nhất bé hơn 4 */
// it=s.upper_bound(4);
// cout << *it << endl; // In ra 2
// system("pause");
// }


// MUTISET 
// Capacity:
// - size : trả về kích thước hiện tại của multiset. ĐPT O(1)
// - empty : true nếu multiset rỗng, và ngược lại. ĐPT O(1).
// Chỉnh sửa:
// - insert : Chèn phần tử vào set. ĐPT O(logN).
// - erase :
// o xóa theo iterator ĐPT O(logN)
// o xóa theo khóa: xóa tất cả các phần tử bằng khóa trong multiset
// ĐPT: O(logN) + số phần tử bị xóa.
// - clear : xóa tất cả set. ĐPT O(n).
// - swap : đổi 2 set cho nhau. ĐPT O(n).
// Operations:
// - find : trả về itarator trỏ đến phần tử cần tìm kiếm. Nếu không tìm
// thấy itarator trỏ về “end” của set. ĐPT O(logN). Dù trong multiset có
// nhiều phần tử bằng khóa thì nó cũng chỉ iterator đến một phần tử.
// - lower_bound : trả về iterator đến vị trí phần tử bé nhất mà không bé
// hơn (lớn hơn hoặc bằng) khóa (dĩ nhiên là theo phép so sánh), nếu
// không tìm thấy trả về vị trí “end” của set. ĐPT O(logN).
// - upper_bound: trả về iterator đến vị trí phần tử bé nhất mà lớn hơn
// khóa, nếu không tìm thấy trả về vị trí “end” của set.. ĐPT O(logN).
// - count : trả về số lần xuất hiện của khóa trong multiset. ĐPT O(logN)
// + số phần tử tìm được.

// DEMO
// #include <iostream>
// #include <set>
// using namespace std;
// main() {
// multiset <int> s;
// multiset <int> :: iterator it;
// int i;
// for (i=1;i<=5;i++) s.insert(i*10); // s={10,20,30,40,50}
// s.insert(30); // s={10,20,30,30,40,50}
// cout << s.count(30) << endl; // In ra 2
// cout << s.count(20) << endl; // In ra 1
// s.erase(30); // s={10,20,40,50}
// /* Duyet set */
// for (it=s.begin();it!=s.end();it++) {
// cout << *it << " ";
// }
// // In ra 10 20 40 50
// cout << endl;
// system("pause");
// }


// MAP 
// #include <map>
// ...
// map <kiểu_dữ_liệu_1,kiểu_dữ_liệu_2>
// // kiểu dữ liệu 1 là khóa, kiểu dữ liệu 2 là giá trị của khóa.
// Sử dụng class so sánh:
// Dạng 1:
// struct cmp{
// bool operator() (char a,char b) {return a<b;}
// };
// .....
// map <char,int,cmp> m;
// - Truy cập đến giá trị của các phần tử trong map khi sử dụng iterator:
// Ví dụ ta đang có một iterator là it khai báo cho map thì:
// (*it).first; // Lấy giá trị của khóa, kiểu_dữ_liệu_1
// (*it).second; // Lấy giá trị của giá trị của khóa, kiểu_dữ_liệu_2
// (*it) // Lấy giá trị của phần tử mà iterator đang trỏ đến, kiểu pair
// it->first; // giống như (*it).first
// it->second; // giống như (*it).second
// Capacity:
// - size : trả về kích thước hiện tại của map. ĐPT O(1)
// - empty : true nếu map rỗng, và ngược lại. ĐPT O(1).
// Truy cập tới phần tử:
// - operator [khóa]: Nếu khóa đã có trong map, thì hàm này sẽ trả về giá
// trị mà khóa ánh xạ đến. Ngược lại, nếu khóa chưa có trong map, thì
// khi gọi [] nó sẽ thêm vào map khóa đó. ĐPT O(logN)
// Chỉnh sửa
// - insert : Chèn phần tử vào map. Chú ý: phần tử chèn vào phải ở kiểu
// “pair”. ĐPT O(logN).
// - erase :
// o xóa theo iterator ĐPT O(logN)
// o xóa theo khóa: xóa khóa trong map. ĐPT: O(logN).
// - clear : xóa tất cả set. ĐPT O(n).
// - swap : đổi 2 set cho nhau. ĐPT O(n).
// Operations:
// - find : trả về itarator trỏ đến phần tử cần tìm kiếm. Nếu không tìm
// thấy iterator trỏ về “end” của map. ĐPT O(logN).
// - lower_bound : trả về iterator đến vị trí phần tử bé nhất mà không bé
// hơn (lớn hơn hoặc bằng) khóa (dĩ nhiên là theo phép so sánh), nếu
// không tìm thấy trả về vị trí “end” của map. ĐPT O(logN).
// - upper_bound: trả về iterator đến vị trí phần tử bé nhất mà lớn hơn
// khóa, nếu không tìm thấy trả về vị trí “end” của map. ĐPT O(logN).
// - count : trả về số lần xuất hiện của khóa trong multiset. ĐPT O(logN)

// STL _ALGORITHM 

// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// max(a,b,c)-> return max
// min(a,b,c)-> return min
// min/max_element(a,a+n) -> min value
// *min/max_element(v.begin(),v.end()) -> return min value in vector
// accumulate(a,a+n,sum_first) -> return sum of array , sum_first: gia tri khoi tao cho accumulate-> cho bang 0 -> return sum of array
// swap 
// sort
// stable_sort(a,a+n,function()) -> sort theo abs (thay doi vi thu tu value), khi truyen ham thi se sort theo ham -> ko thay doi thu tu value
// sort(a,a+n,greater <data> ()):giam dan
// ex:
// bool cmp(int a,int b){
//     return abs(a)<abs(b);
// }
// int main(){
//     int a[5]={1,2,3,-1,2};
//     stable_sort(a,a+5,cmp);
//     for (auto&x:a) cout <<x<<" ";
// }
// -> 1 -1 2 2 33
// find(a,a+n,value) -> return con tro cua value
// ex:
// int main(){
//     int a[5]={1,2,3,4,5};
//     auto it = find(a,a+5,3);
//     if(it!=a+5) cout <<"FOUND";
//     else cout <<"NOT FOUND";
// }
// -> FOUND
// binary_search(a,a+n,value) -> return true / false khi tim thay value trong mang (chi ap dung cho mang tang dan)
// lower_bound(a,a+n,x) -> return vi tri dau tien >= x
// upper_bound(a,a+n,x) -> return vi tri dau tien >x


// ex
// int main(){
//     int a[5]={1,2,3,4,5};
//     auto it = lower_bound(a,a+5,2);
//     auto it2 = upper_bound(a,a+5,2);
//     cout <<*it<<" "<<*it2<<endl;
//     -> 2 3 : value
//     cout <<it-a<<" "<<it2-a;
//     -> 1 2 : index
// }

// ex:
// int main(){
//     vector<int> v={1,2,2,4,4,5};
//     auto it = upper_bound(v.begin(),v.end(),2);
//     cout <<*it<<endl; -> 4
//     cout <<(it-v.begin()); -> 3
// }

// set_union(a,a+n,b,b+n,v.begin()) -> luu tat ca phan tu chung 2 mang a b vao vecto
// int main(){
//     int a[3]={1,2,3};
//     int b[3]={2,3,4};
//     vector <int> res(6);
//     auto it=set_union(a,a+3,b,b+3,res.begin());
//     res.resize(it-res.begin()); -> reset lai kich thuoc vecto
//     for (auto&x:res) cout <<x<<" "; -> 1 2 3 4 
// }

// set_intersection() -> tuong tu syntax set_union -> lay phan chung
// set_difference() -> lay phan tu thuoc a ma ko thuoc b
// set_symetric_difference() -> nguoc lai cua intersection


// memset(a,value*,sizeofa) -> reset value cho tat cac phan tu array = value*
// fill(a.begin(),a.end(),value*) -> dung nhu memset cho vecto
// merge(a.begin(),a.end(),b.begin(),b.end(),res.begin()); -> tron 2 mang -> 1 mang ( tron don thuan ko sap xep)
// reverse (a,a+n)
 

//  *Tech :BUOI 1
 // VECTOR :
//v.insert(v.begin()+index,value);
//v.erase(v.begin()+index)
// for (auto it=v.beign();it!=v.end();it++)  ==  for (vector <int>::iterator it=v.begin();it!=v.end();it++)
// vector <int> v(3,100) -> 100 100 100 
// vector <int> it =v.begin();
// cout <<v.begin()+1 -> value(index=1) 
// v.pop_back () -> xoa 1 phan tu cuoi
//v.assign(5,100)-> gan 5 phan tu 100 vao vector
// resize(n)-> thay doi kich thuoc vecto -> n phan tu

// PAIR
// pair <int,int> p =make_pair {10,20};
// pair <int,int> p={10,20};
// pair <int,int> p1=p;
//cout <<p1.first -> 10
// pair <int,pair<int,int>> p {10,{20,30}}  ->p.second.first -> key cua cai pair   :20
// vector <pair<int,int>>

//SET
//  -> sx tang dan cac phan tu khac nhau ( luu cac chuoi theo thu tu tu dien)
//set <int> se;
// int a[3] = {1,2,3};
// set <int> s(a,a+3); -> dua all value of array vao set 
// se.find(value) -> iterator tro den value else tra ve se.end() (O(logn))
// se.count(value) -> true / false (search value)  (O(logn))
// se.insert(value)  (O(logn)) 
//se.insert(value);(chi insert value khac nhau)  (O(logn))
// se.erase(it); -> xoa value tai vi tri it  (O(logn))
// distance (se.begin(),it) -> return k/c giua 2 iterator
// array ,vector -> cau truc du lieu kieu linear
// set -> ctdl kieu cay -> for (auto x:se) cout <<x<<" "; or dung iterator de duyet cac phan tu trong set 
// iterator it =se.begin();
// it++ (hop le); (ko hop le: it+=1 hay it += n ( n>1) -> set : ctdl kieu cay )
// for (set<int>:: iterator it=se.rbegin();it!=se.rend();it++) -> duyet ngc set
// auto it =se.find(value) -> return vi tri cua value (auto = set<int> :: iterator )


// MULTISET 
//  -> sx tang dan cac phan tu ( trung nhau van dc) 
// se.empty() (O(1))    
// se.find(value) -> return iterator of value dau tien (O(1))
// se.erase(value) -> xoa tat ca value trong multiset (truyen iterator de xoa mot phan tu)
// Ex:
// for (multiset <int> ::iterator it=se.begin();it!=se.end();it++) {
    //     if(*it == 2){ se.erase(it);break;}
    // } 
    //  -> xoa so 2 dau tien trong mang 

// se.count(value) -> count of value 


// UNORDERED_SET 
// ->  luu cac value khac nhau nhung ko co thu tu 


// MAP -> xu li problem use flag 
// -> nhu pair , map save cap key - value (key khac nhau)
// map <int> mp;
// mp.insert({key,value}); key = index 

// Ex: 
//  for (int i=0;i<n;i++) {
//     int  x ; cin>>x;
//     mp[x] = 2 ; // cung key 
//  }
//  cout <<mp.size() -> so value khac nhau 

// Ex: 
// for (auto it:mp) {
//     cout <<it.first<< " "<<it.second<<endl;
// }

//  for (map<int,int> :: iterator it=mp.begin();it!=mp.end();it++) {
//         cout <<(*it).first<<" "<<(*it).second;
//     }
 
// Ex: key : gia tri , value :tan suat
// for (int i=0;i<n;i++) {
//     mp[ a[i] ] ++;
// } 

// * 
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// tang toc do doc ghi ( cin, cout )

// #include <bits/stdc++.h>
// using namespace std ;

// // baitap vd
// void bai1() 
// {
//     vector <int> v;
//     int t;cin>>t;
//     while(t--) {
//         int n;cin>>n;
//         if(n==1) {
//             int k;cin>>k;
//             v.push_back(k);
//         }
//         else {
//             if(!v.empty()) 
//             v.pop_back();
//         }
//     }
//             if(v.empty()) 
//              cout <<"EMPTY !";
//     for (auto it =v.begin();it!=v.end();it++) 
//     {
//         cout <<*it<<" ";
//     }
// }

// int main() {
//     map <int,int> mp;
//     mp.insert({1,2});
//     mp.insert({2,3});
//     for (map<int,int> :: iterator it=mp.begin();it!=mp.end();it++) {
//         cout <<(*it).first<<" "<<(*it).second;
//     }
    
// }


// BUOI 2
// sort (a,a+n) => [0,n-1]; a+i -> con tro 
// sort (v.begin()+x,v.end()+y+1) ; => sort tu x-> y 
// sort (a,a+n,greater<int>()) -> giam dan (theo thu tu tu dien neu dung vecto <string> v)
// pair -> sort theo key ( trung key sx theo value)
// sap xep tu dien  sort (v.begin(),v.end(),greater<string>()) tham so thu 3 : comparision function
// vector< pair<int,int>> a(n);
// stable_sort => dam bao thu tu cua cac phan tu


// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// using ll= long long;
// void thu_tu(){
// 	int n;cin>>n;
// 	vector<string> v(n);
// 	for (int i=0;i<n;i++){
// 		cin>>v[i];
// 	}
// 	sort (v.begin(),v.end());
// 	for (auto&x:v) cout <<x<<" ";
// }

// // neu co mot cap vector - pair . khi sort thi sx firt truoc
// // sx theo tong chu so
// int tong (int n){
// 	int ans=0;
// 	while(n){
// 		ans+=n%10;
// 		n/=10;
// 	}
// 	return ans;
// }
// // neu cung tong thi so lon hon dung truoc
// // sap xep theo tieu chinh truoc (tong truoc)
// bool cmp(ll a, ll b) {
// 	if(tong(a)!=tong(b)) {
// 		return tong(a)<tong(b);
// 	}
// 	return a>b;
// }
// void sapxep(){
// 	int n;cin>>n; int a[n];
// 	for (auto&x:a) cin>>x;
// 	sort(a,a+n,cmp);
// 	for (auto&x:a) cout <<x<<" ";
// }

// // sap xep toa do

// ll kc(pair <ll,ll> a ) {
// 	return 1ll*a.first*a.first + 1ll*a.second*a.second;
// }
// bool check(pair<ll,ll> a, pair<ll,ll> b){
// 	 if(kc(a)!=kc(b)) return kc(a) < kc(b);
// 	 else {
// 	 	if(a.first!=b.first) return a.first<b.first;
// 	 	else return a.second<b.second;
// 	 }
// }
// void toado(){
// 	ll n;cin>>n;
// 	vector<pair<ll,ll>> v(n);
// 	for (int i=0;i<n;i++){
// 		cin>>v[i].first>>v[i].second;
// 	}
// 	sort(v.begin(),v.end(),check);
// 	for (int i=0;i<n;i++) cout <<v[i].first<<" "<<v[i].second<<endl;
// }

// // sap xep so
// ll odd(ll n) {
// 	int ans=0;
// 	while(n){
// 		if((n%10)%2!=0) {
// 			ans++;
// 		}
// 		n/=10;
// 	}
// 	return ans;
// }

// bool cmp1(int a,int b) {
// 	if(odd(a)!=odd(b)) return a>b;
// 	return a<b;
// }
// void countofodd(){
// 	int n;cin>>n;int a[n];
// 	 for (auto&x:a) cin>>x;
// 	 sort(a,a+n,cmp1);
// 	 for (auto&x:a) cout <<x<<" ";
// 	 }
// // lower_bound(a,a+n,value) -> return vi tri phan tu dau tien >= value
// // upper_bound -> vi tri phan tu dau tien lon hon value
// // set_union (a,a+n,b,b+n,v.begin()) -> lay cac phan tu chung 2 mang bo vao vecto 	 
// int main(){
// 	int a[3]={0,1,2};
// 	cout <<* lower_bound(a,a+3,0);
	

// }

// *BUOI 3 :
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <sstream>
// using namespace std;

// // sap xep theo abs(x-a[i]) tang dan . chan dung truoc tang dan, le dung sau giam dan
// int x;
// bool check(int a,int b) {
// 	int a1=a%2,b1=b%2;
// 	if(a1==0 && b1==0) {
// 		//cung chan
// 		return a<b;
// 	}
// 	if(a1!=0 && b1!=0) {
// 		return a>b;
// 	}
// 	// da dung thu tu chan , le
// 	if(a1==0 && b1!=0) {
// 		return true;
// 	}
// 	return false;
// }
// void bai1(){
// 	int n;cin>>n;
// 	int a[n];
// 	for(auto&x:a) cin>>x;
// 	sort(a,a+n,check);
// 	for (auto&x:a) cout <<x<<" ";
// }
// // in ra vi tri dau tien va vi tri cuoi va so lan xh cua 1 so trong mang
// void bai2(){
// 	int n,k;cin>>n>>k;int a[n];
// 	for (auto&x:a) cin>>x;
// 	auto it=upper_bound(a,a+n,k);
// 	auto it1=lower_bound(a,a+n,k);
// 	if(it!=a+n) {
// 		cout <<"vi tri dau tien lon hon  : "<<it-a<<endl;
// 	}
// 	else cout <<" -1\n ";
// 	if(it1!=a+n) {
// 		cout <<"vi tri dau : "<<it1-a<<endl;
// 	}
// 	else cout <<"-1\n";
// 	int p1=-1,p2=-1;
// 	if(*it1==k) p1=it1-a;
// 	--it;
// 	if(*it==k) p2=it-a; 
// 	if(p1!=-1) cout <<"so lan xh cua k : "<<p2-p1+1<<endl;
	
// }
// dem so lan xh -> duung multiset , se.insert(a[i]),cout << se.count(a[i])

// string
// s.insert(index,chuoi)
// s.push_back(char) -> them 1 kitu or chuoi vao cuoi
// s.pop_back(char) -> xoa 1 ki tu or chuoi cuoi
// s.erase(index,count)
// s.substr(index,count)
// s.find(t) => vi tri dau cua chuoi t trong chuoi s

//string s ;while(cin>>s) {cout <<s<<endl} -> in ra tung tu

// string s,t;
// s.find(t)!=string::npos ;cout <<s.find(t) => vi tri chuoi con
// islower/isupper/isdigit/isalpha/tolower/toupper
// stoi(s) -> int  (string to integer =stoi)
// stoll(s) -> ll
// stod(s) -> double
// to_string(int)
// reverse(s.begin(),s.end());
// mang chuoi string a[n];
// transform(s.begin(),s.end(),s.begin(), ::toupper) 
// while(cin>>s)  => nhap chuoi chua dau cach , dau enter 

// stringstream ss(s) -> tach cac tu boi dau cach 
// while (ss>>word) -> tach tung tu trong xau s luu vao xau word
// while(getline(ss, word,'-')) {
	// cout <<word<<endl; 
	// moi dau cach (-) -> delin 
// }
// neu kophai dau cach thi ta chuyen doi bang for
// for (int i=0;i<s.size();i++) { if s[i]='!' s[i] = ' '} 

// dem so tu khac nhau (ko phan biet hoa thuong -> chuyen ve thuong)
// set <string> se;
// string s;
// while(cin>>s){
// 	transform(s.begin(),s.end(),s.begin(),::tolower);
// 	se.insert(s);
// }
// cout <<se.size();

// in tan xuat moi tu 
// map <string,int>mp;
// string s;
// while(cin>>s) {
// 	mp[s]++;
// }
// for (auto it:mp) {
// 	cout <<it.first<<' '<<it.second<<endl;
// }
// using ll = long long ;
// int mod = 1e9;
// ll C[1005][1005];
// // triangle pascal C n k = C n-1 k + C n-1k-1
// void ktao() {
// 	for (int i=0;i<100;i++) {
// 		for (int j =0;j<=i;j++) {
// 			if(j==0 || j==1) {
// 				C[i][j]=1;
// 			}
// 			else {
// 				C[i][j] = C[i-1][j-1] + C[i-1][j];
// 				C[i][j] %= mod;
// 			}
// 		}
// 	}
// }
// int main(){
// 	ktao();
// 	for (int i=0;i<=100;i++) {
// 		for (int j=0;j<=i;j++) {
// 			cout <<C[i][j]<<' ';
// 		}
// 		cout <<endl;
// 	}
// }


// *Function in al 
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// max(a,b,c)-> return max
// min(a,b,c)-> return min
// min/max_element(a,a+n) -> min value
// *min/max_element(v.begin(),v.end()) -> return min value in vector
// accumulate(a,a+n,sum_first) -> return sum of array , sum_first: gia tri khoi tao cho accumulate-> cho bang 0 -> return sum of array
// swap 
// sort
// stable_sort(a,a+n,function()) -> sort theo abs (thay doi vi thu tu value), khi truyen ham thi se sort theo ham -> ko thay doi thu tu value
// sort(a,a+n,greater <data> ()):giam dan
// ex:
// bool cmp(int a,int b){
//     return abs(a)<abs(b);
// }
// int main(){
//     int a[5]={1,2,3,-1,2};
//     stable_sort(a,a+5,cmp);
//     for (auto&x:a) cout <<x<<" ";
// }
// -> 1 -1 2 2 33
// find(a,a+n,value) -> return con tro cua value
// ex:
// int main(){
//     int a[5]={1,2,3,4,5};
//     auto it = find(a,a+5,3);
//     if(it!=a+5) cout <<"FOUND";
//     else cout <<"NOT FOUND";
// }
// -> FOUND
// binary_search(a,a+n,value) -> return true / false khi tim thay value trong mang (chi ap dung cho mang tang dan)
// lower_bound(a,a+n,x) -> return vi tri dau tien >= x
// upper_bound(a,a+n,x) -> return vi tri dau tien >x


// ex
// int main(){
//     int a[5]={1,2,3,4,5};
//     auto it = lower_bound(a,a+5,2);
//     auto it2 = upper_bound(a,a+5,2);
//     cout <<*it<<" "<<*it2<<endl;
//     -> 2 3 : value
//     cout <<it-a<<" "<<it2-a;
//     -> 1 2 : index
// }

// ex:
// int main(){
//     vector<int> v={1,2,2,4,4,5};
//     auto it = upper_bound(v.begin(),v.end(),2);
//     cout <<*it<<endl; -> 4 (value)
//     cout <<(it-v.begin()); -> 3 (index)
// }

// set_union(a,a+n,b,b+n,v.begin()) -> luu tat ca phan tu chung 2 mang a b vao vecto
// int main(){
//     int a[3]={1,2,3};
//     int b[3]={2,3,4};
//     vector <int> res(6);
//     auto it=set_union(a,a+3,b,b+3,res.begin());
//     res.resize(it-res.begin()); -> reset lai kich thuoc vecto
//     for (auto&x:res) cout <<x<<" "; -> 1 2 3 4 
// }

// set_intersection() -> tuong tu syntax set_union -> lay phan chung
// set_difference() -> lay phan tu thuoc a ma ko thuoc b
// set_symetric_difference() -> nguoc lai cua intersection


// memset(a,value*,sizeofa) -> reset value cho tat cac phan tu array = value*
// fill(a.begin(),a.end(),value*) -> dung nhu memset cho vecto
// merge(a.begin(),a.end(),b.begin(),b.end(),res.begin()); -> tron 2 mang -> 1 mang ( tron don thuan ko sap xep)
// reverse (a,a+n)
 