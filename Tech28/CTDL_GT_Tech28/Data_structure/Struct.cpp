// #include <bits/stdc++.h>
// using namespace std;

// struct sv{
//   string name;
//   double point;

//   //Constructor ko tham so
//   sv(){
//     name="chuong";
//     point=10;
//   }
//   // constructor co tham so
//   //   sv(string name, double point){
//     //     this-> name=name;
//     //     this-> point=point;
//     // }
//     //c2
//   sv(string name , double point){
//      name=name;
//      point=point;
//   }
//   void nhap(){
//     cin>>name;
//     cin.ignore();
//     cin>>point;
//   }  
  
//   void in(){
//     cout <<name<<" "<<point<<endl;
//   }
// };


// // khai bao struct trong main ko co struct dung trc
// // int main(){
// //  sv x;
// //  sv y;
// //  x.nhap();
// //  x.in();
// //  y.in();
// //  sv z("chuong",10);
// //  z.in();
// //  return 0;
// // }

// // operator:
// // syntax: kieutrave + operator + (+/-/*?..) (ds tham so) {code}
// // cap tham so -> friend
// struct sophuc{
//     int a,b;// a+bj
// sophuc operator + (const sophuc other){
//     sophuc tong;
//     tong.a=a+other.a; // phan thuc so phuc hien tai + phan thuc so phuc sau no
//     tong.b=b+other.b;
//     return tong;
// }
  
//    friend sophuc operator +  (const sophuc x, const sophuc y){
//     sophuc tong; 
//     tong.a=x.a+y.a;// phan thuc tong
//     tong.b=x.b+y.b; // phan ao tong
//     return tong;
//    }
// // int main(){
// //     sophuc a{1,2},b{3,4};
// //     sophuc c = a+b;
// //     cout <<c.a<<" "<<c.b;
// // }

// // insertion >> : istream& : kieutrave cua >>
//  friend istream& operator >> ( istream& in, sophuc &x ) {
//      in>> x.a>>x.b;
//      return in;
//  }
//  // extraction <<
//  friend ostream& operator << ( ostream& out, sophuc x) {
//     out <<x.a<<" "<<x.b;
//     return out;
//  }
// //  int main(){
// //     sophuc a,b;
// //     cin>>a>>b;
// //     sophuc c=a+b;
// //     cout <<c;
// // }

// // ss 2 so phuc bang nhau ko 
// bool operator == (const sophuc other){
//     return a == other.a && b==other.b; 
// }

// // c2
// friend bool operator == (const sophuc x, const sophuc y){
//     return x.a==y.a && x.b==y.b; // phan thuc = phan ao
// }
// // so sanh so phuc nao lon hon : binh phuong phan thuc vs phan ao r ss
// friend bool operator < (const sophuc x, const sophuc y){
//     return x.a*x.a + x.b*x.b <y.a*y.a + y.b*y.b;
// }
// };
// // int main(){
// //     sophuc a,b;
// //     cin>>a>>b;
// //     if(a==b) cout 1;
// //     else cout <<0;
// // }

// // sap xep theo gpa
// struct sv1{
//     string name;
//     double gpa;
//     bool operator < ( const sv1& other){
//         // sx tang dan diem gpa
//         return gpa < other.gpa; 
//     }
// };
// // int main(){
// //     int n;cin>>n;
// //     cin.ignore();// xoa enter truoc khi nhap chuoi
// //     sv1 ds[n];
// //     for (int i=0;i<n;i++){
// //         getline(cin,ds[i].name);// chuoi co dau cach
// //         cin>>ds[i].gpa;
// //         cin.ignore();// xoa enter sau khi nhap xong cho1 sv
// //     }
// //     sort (ds,ds+n);
// //     for (sv1 x:ds) cout <<x.name<<" "<<x.gpa<<endl;

// // }

// // struct long nhau
// struct Time{
//     int hour,minute,second;
// };

// struct ve{
//     string name;
//     Time tg;
// };

// // int main(){
// //     ve a;
// //     cin>>a.tg.hour>>a.tg.minute;
// //     cout<<a.tg.hour<<a.tg.minute;

// // }


// // cach in va nhap mot mang cac sinh vien :
// // struct sv2{
// //     string msv,name;
// //     double gpa;
// // };

// // // dung pointer
// // // void nhap( sv2 *a){
// // //     cin>>a->msv;cin.ignore();
// // //     getline(cin,a->name);
// // //     cin>>a->gpa;
// // // }

// // // ko dung pointer
// // void nhap( sv2 &a){
// //     cin>>a.msv;cin.ignore();
// //     getline(cin,a.name);
// //     cin>>a.gpa;
// // }

// // void in(sv2 &a) {
// //     cout <<a.msv<<" "<<a.name<<" "<<a.gpa<<endl;
// // }
// // int main(){
// //     int n;cin>>n;cin.ignore();
// //     sv2 ds[n];
// //     for (int i=0;i<n;i++) nhap(ds[i]);
// //     for (int i=0;i<n;i++) in(ds[i]);
// // }


// // sap xep theo gpa
// // struct SV{
// //     string msv,name;
// //     double gpa;
// //     bool operator < (const SV other ){
// //         return gpa < other.gpa;
// //     }
// // };

// // void nhap(SV *a){
// //     cin>>a->msv;cin.ignore();
// //     getline(cin,a->name);
// //     cin>>a->gpa;
// //     cin.ignore();
// // }
// // void in(SV a){
// //     cout <<a.msv<<" "<<a.name<<" "<<a.gpa<<endl;
// // }

// // int main(){
// //     int n;cin>>n;cin.ignore();
// //     SV ds[n];
// //     for (int i=0;i<n;i++) nhap(&ds[i]);
// //     sort(ds,ds+n);
// //     for (int i=0;i<n;i++) in(ds[i]);
// //     // for (SV x:ds) cout <<x.name<<" "<<x.msv<<" "<<x.gpa<<endl;
// // }




// // BT 
// #include <bits/stdc++.h>
// using namespace std;

// // // bai 1 rut gon ps
// int gcd(int a, int b) {
//     if(b){
//         return gcd(b,a%b);
//     }
//     return a;
// }

// struct phanso{
//     int tu,mau;
// };

// void nhap(phanso &a) {
//     cin>>a.tu>>a.mau;
// }
// void rutgon(phanso &a){
//     int tmp = gcd(a.tu,a.mau);
//      a.tu/=tmp;
//     a.mau/=tmp;
// }

// // bai 2 cong phan so
// //lcm 
// int lcm(int &a, int &b){
//     return (a*b)/(gcd(a,b));
// }
// // cong phan so
// phanso cong(phanso a, phanso b) {
//   a.tu = a.tu * (lcm(b.mau,a.mau)/(a.mau));
//   b.tu = b.tu * (lcm(b.mau,a.mau)/(b.mau));
//   a.tu +=b.tu; a.mau = lcm(a.mau,b.mau);
//   rutgon(a);
//   return a;
// }
// // }
// // int main(){
// //   phanso a,b;
// //   nhap(a);nhap(b);
// //   phanso t =cong(a,b);
// //   cout <<t.tu<<" "<<t.mau;
// // }

// // bai 3 tim khoang cach 2 diem 
// struct kc{
//     int x,y;
// };

// void nhap1(kc &a){
//     cin>>a.x>>a.y;
// }

// double tinh(kc &a, kc &b){
//     double kq = sqrt(pow(b.x-a.x,2) + pow(b.y-a.y,2));
//     return kq;
// }

// // int main() {
// //     kc a,b;
// //     nhap1(a); nhap1(b);
// //     cout <<fixed<<setprecision(4)<<tinh(a,b);
// // }

// // bai 4 cau truc thi sinh
// struct thisinh{
//     string name,ns;
//     double a,b,c;
// };

// void nhap2(thisinh &c) {
//        getline(cin,c.name);
//        cin>>c.ns;
//        cin>>c.a>>c.b>>c.c;
// }

// void out(thisinh kq) {
//     cout <<kq.name<<" "<<kq.ns<<" "<<kq.a+kq.b+kq.c;
// }
// // int main(){
// //     thisinh a;
// //     nhap2(a);
// //     out(a);
// // }

// // chuan hoa ngay sinh 
// // 3/2/2005 -> 03/02/2005

// // void chuanhoa(structName a) {
// //     if(a.ns[1]=='/') {a.ns+='0';}
// //     if(a.ns[4]=='/') {a.ns.insert(3),'0'};
// // }

// // chuan hoa stt
// // void chuanhoa(structName a[],int n) {
// //     for (int i=0;i<n;i++) {
// //         s += string(s.size()-i,'0') ; // lay s.size()-i ki tu 0 gan cho s
// //      }
// // }

// // gia nhat tre nhat -> ki thuat so sanh ngay thang nam sinh
// // tao 3 vien luu ngay thang nam cua moi nguoi -> so sanh tuoi
// // void check( structName a, structName b) {
// //     int n1 = (a.ns[0]-'0')*10 + a.ns[1]-'0', t1 = (a.ns[3]-'0')*10 + a.ns[4]-'0', na1 = stoi (ns.substr(6));
// //     int n2 = (b.ns[0]-'0')*10 + b.ns[1]-'0' , t2 = (b.ns[3]-'0')*10 + b.ns[4]-'0', na2 = stoi (ns.substr(6)); 
// //     if(n1!=n2) return n1<n2;
// //     if(t1!=t2) return t1<t2;
// //     return na1<na2;
// // }


// // danh sach nhan vien

// struct nhanvien{
//     string ma,ten,gt,dc,mst,hd;
// };

// void nhap(nhanvien &a){
//     while(a.ma.size()<6) {
//         a.ma +='0';
//     }
//     cin.ignore();
//     getline(cin,a.ten);
//     cin>>a.gt>>a.mst;
//     cin.ignore();
//     getline(cin,a.dc);
//     cin>>a.mst>>a.hd;
// }

// void inds(nhanvien a[],int n){
//     for (int i=0;i<n;i++){
//         string s = to_string(i+1); // chuyen so thu tu sang chuoi
//         s = string(5-s.size(),'0'); // chen 5-s.size() so 0 vao s
//         cout <<s<<" ";
//         cout <<a[i].ten<<" "<<a[i].gt<<" ";// con nua .. 
//     }
// }
// // int main(){
// //     int N;
// //     cin>>N;
// //     nhanvien ds[N];
// //     for (int i=0;i<N;i++) {
// //         nhap(ds[i]);
// //     }
// //     inds(ds,N);
// // }


// // baitap quan li sinh vien

// struct sv{
//     string ma,ten,lop,ns;
//     double gpa;
// };

// void nhap(sv &a){
//      cout <<"Nhap ma sinh vien: ";cin>>a.ma;
//      cout <<"Nhap ten sinh vien: ";
//      cin.ignore(); // bo phim enter cua sv trc do
//      getline(cin,a.ten);
//      cout <<"Nhap lop sinh vien: ";cin>>a.lop;
//      cout <<"Nhap ngay sinh: ";cin>>a.ns;
//      cout <<"GPA: "; cin>>a.gpa;
// }


// void in(sv a){
//    cout <<"_____________________________________\n";
//    cout <<"Ma sinh vien: "<<a.ma<<endl;
//    cout <<"Ten sinh vien: "<<a.ten<<endl;
//    cout <<"Lop: "<<a.lop<<endl;
//    cout <<"Ngay sinh: "<<a.ns<<endl;
//    cout <<"GPA: "<<fixed<<setprecision(2)<<a.gpa<<endl;
//    cout <<"_____________________________________\n";
// }

// // in ds sv
// void inds( sv a[], int n){
//     for (int i=0;i<n;i++){
//         in(a[i]);
//     }
// }
// // search theo ma
// void tkma2(sv a[],int n){
//     string ma;
//     cout <<"Nhap ma sv can tim kiem : ";
//     cin>>ma;
//     for (int i=0;i<n;i++){
//         if(ma == a[i].ma) {
//             in(a[i]);
//             return;
//         }
//     }
//     cout <<"Khong tim thay sinh vien ! "<<endl;
// }

// // search ma part 2 : 18823 , 18824 -> in ra info sv theo 188 = ma
// // ham find -> return pointer neu ko tim thay chuoi -> return string::npos
// void tkma(sv a[], int n){
//     string ma; cout <<"Nhap ma can tim: ";cin>>ma;
//     bool flag = false;
//     for (int i=0;i<n;i++){
//         if(a[i].ma.find(ma) != string::npos ) {
//             flag=true;
//             in(a[i]);
//         } 
//     }
//     if(!flag) cout <<"Ko tim thay sinh vien !"<<endl;
// }
// // liet ke tat ca gpa cao nhat
// void gpa(sv a[], int n){
//     int res=0;
//     for(int i=0;i<n;i++){
//         if(a[i].gpa>res) res=a[i].gpa;
//      }
//      cout <<"Danh sach sinh vien co diem GPA cao nhat : \n";
//      for (int i=0;i<n;i++){
//         if(a[i].gpa==res) {
//             in(a[i]); // cout <<a[i] nap chong toan tu istream&
//         }
//      }
// }
// // cach 2 
// void gpa2(sv a[], int n){
//    int res=0; vector <int> idx;
//    for (int i=0;i<n;i++){
//     if(a[i].gpa>res) {
//         res=a[i].gpa;// cap nhat ki luc
//         idx.clear();// xoa vecto cu
//         idx.push_back(i);// them ki luc
//     }
//     else if(a[i].gpa==res) idx.push_back(i);
//    }
//    cout <<"Sinh vien co diem GPA cao : ";
//    for (auto&x:idx) in(a[x]);
// }
// // liet ke cac ban co gpa >=2.5 , sap xep theo diem giam dan
// bool cmp2(sv a, sv b) {
//     return a.gpa>b.gpa;
// }
// void gpa25 (sv a[], int n) {
//    vector <sv> v;
//    for (int i=0;i<n;i++){
//     if(a[i].gpa>=2.5) v.push_back(a[i]);
//    }
//     cout <<"Danh sach sv co diem gpa >=2.5 \n";
//     sort(v.begin(),v.end(),cmp2);
//     for (auto&x:v)  in(x);
// }
// // sap xep ten , ten dem , ho theo thu tu alpha
// // ham tach cac tu va dao nguoc thu tu : Pham Chuong -> chuongpham
// string chuanhoa(string name) {
//     stringstream ss(name) ;
//     vector<string> v;
//     string token="";
//     while(ss>>token){
//         v.push_back(token);
//     }
//     string res="";
//     for (int i=v.size()-1;i>=0;i--) {
//         res+=v[i];
//     }
//     return res;
// }
// // ss chuoi
// bool cmp(sv a, sv b){
//     string ten1=chuanhoa(a.ten);
//     string ten2=chuanhoa(b.ten);
//     return ten1<ten2;
// }
// // sapxep theo ten
// void sx(sv a[], int n){
//     sort(a,a+n,cmp);
// }

// void sinhvien(){
//    sv a[1000];
//    int n=0;
//    while(1) {
//     cout <<"_______________MENU_____________\n"<<endl;
//     cout <<"1.Nhap thong tin sinh vien\n";
//     cout <<"2.Hien thi toan bo danh sach sinh vien\n";
//     cout <<"3.Tim kiem sinh vien theo ma\n";
//     cout <<"4.Liet ke sinh vien co diem gpa cao nhat \n";
//     cout <<"5.Liet ke cac sinh vien co diem gpa >=2.5\n";
//     cout <<"6.Sap xep sinh vien theo ten \n";
//     cout <<"_______________________________\n";
//     cout <<"Nhap lua chon\n";
//     cout <<"0.Thoat\n";
//     int lc;cin>>lc;
//     if(lc==1) {
//         nhap(a[n]);
//         n++;
//     }
//     else if(lc==2) {
//        inds(a,n);
//     }
//     else if(lc==3){
//         tkma(a,n);
//     }
//     else if(lc==4){
//         gpa(a,n);
//     }
//     else if(lc==5){
//         gpa25(a,n);
//     }
//     else if(lc==6){
//         sx(a,n);
//     }
//     else if(lc==0) break;
//    }
// }

// //F8
// // nhap r -> chu vi vs dien tich hinh tron
// const float PI = 3.14;
// struct circle {
//       float cir;
//      // friend data_type operator +-*.. (para)
//       friend istream& operator >> (istream& in ,  circle &Cir){
//       cout <<"Nhap r: ";
//       in >> Cir.cir;
//       return in; // in <=> cin
//       }

//       float chuvi(){
//       return cir*2*PI;
//       }
//       float dientich(){
//         return cir*cir*PI;
//       }
// };

// void bai1(){
//     circle cir;
//     cin>>cir;
//     cout <<cir.chuvi()<<endl;
//     cout <<cir.dientich()<<endl;
// }
// // ct quan li product ( dung nap chong toan tu nhap xuat)
// //  thiet ke de co nhung chuc nang sau:  Xem ds san phan , them/xoa mot san pham

// struct product{
//     string name;
//     int price;
//     int quantity; // so luong

//     friend istream& operator >> (istream& in , product &pro){
//         cout <<"Input name of product: ";
//         cin.ignore();
//         getline(in,pro.name);
//         cout <<"Input price vs quantity: ";
//         in>>pro.price>>pro.quantity;
//         return in;
//     } 
//     friend ostream& operator << (ostream& os, product pro){
//         os<<"Name: "<<pro.name;
//         os<<",Price: "<<pro.price;
//         os<<",Quantity: "<<pro.quantity;
//         cout <<endl;
//         return os;
//     }

 
// };
// // show menu
// int show_menu(){
//     system("cls");// clear console
//     int choose;
//     cout <<"__________MENU__________\n";
//     cout <<"1.Xem danh sach san pham\n";
//     cout <<"2.Them san pham\n";
//     cout <<"3.Xoa san pham\n";
//     cout <<"0.Exit\n";
//     cout <<"Lua chon cua ban la: ";
//     cin>>choose;
//     return choose;
// }

// // in tat ca danh sach ( con tro quan li mang dong )
// // tuong tu in ra tat ca phan tu trong mang
// void print_pro(product *pro , int size){
//     if(!size) cout <<"Chua co san pham nao! ";
//     else {
//         cout <<"Danh sach san pham: \n";
//         for (int i=0;i<size;i++){
//             cout << pro[i];
//         }
//     }
// }
// // them 1 san pham ( tham chieu con tro)
// // size thay do -> truyen & -> thay doi tren main
// void add_pro(product* &pro, int &size) {
//     product new_pro;
//     cout <<"Nhap thong tin cho san pham moi: \n";
//     cin>>new_pro; // new_element 
//     int new_size = size + 1;
//     // mang dong quan li sp ( phan tu)
//     product *tmp_pro = new product[new_size];
//     // copy mang cu sang mang moi
//     for (int i=0;i<size;i++){
//         tmp_pro[i] = pro[i];
//     }
//     // them sp ( them phan tu )
//     tmp_pro[new_size-1] = new_pro;
//     // xoa data mang cu
//     delete [] pro;
//     pro = tmp_pro;
//     size = new_size;
//     cout <<"them sp thanh cong! \n";
// }
// // xoa san pham (xoa 1 value in array)
// void erase_pro(product* &pro,int &size){
//     string deleted_name ; cin.ignore();
//     cout <<"Nhap ten sp can xoa: ";
//     getline(cin,deleted_name);
//     int deleted_index = -1;
//     // tim idx cua ten sp co trung vs ten can xoa
//     for (int i=0;i<size;i++){
//         //s1.compare(s2); =0 (s1=s2)
//         if(!deleted_name.compare(pro[i].name)) {
//             deleted_index = i;
//             break;
//         }
//     }
//     if(deleted_index==-1) {cout <<"Ko tim thay san pham!" ;return;}
//     for (int i=deleted_index;i<size-1;i++){
//        pro[i]=pro[i+1];
//     } 
//     size--;
//    product *tmp_pro = new product[size];
//    // copy mang cu -> moi
//    for (int i=0;i<size;i++){
//     tmp_pro[i] = pro[i];
//    }
//    // xoa data mang cu
//     delete [] pro;
//     // copy mang moi -> cu
//     pro = tmp_pro;
//     cout <<"Xoa san pham thanh cong !";
// }
// void bai2(){
//     int size = 0;
//     // con tro quan li tung phan tu mang dong
//     product *pro = new product[size]; 
//     while(true){
//         int chose = show_menu();
//         switch(chose){
//             case 1 : 
//             print_pro(pro,size);
//             break;
//             case 2:
//             add_pro(pro,size);
//             break;
//             case 3:
//             erase_pro(pro,size);
//             break;
//             case 0: 
//             cout <<"Bye!";break;
//             default:
//             cout <<"Lua chon khong hop le."<<endl;
            
//         }
//         cout <<"Ban co muon tiep tuc khong ? (0/1)";
//         int is_continue;
//         cin>>is_continue;
//         if(!is_continue) {
//             cout <<"Bye!";
//             break;
//         }
//     }
// }
// int main(){
//   bai2();
// }



// *Operator : 
// #include <iostream>
// #include <algorithm> // Để sử dụng hàm std::sort
// using namespace std;

// // Định nghĩa cấu trúc Fraction (phân số)
// struct Fraction {
//     int numerator;   // Tử số
//     int denominator; // Mẫu số

//     // Constructor để khởi tạo một phân số từ tử số và mẫu số
//     Fraction(int num, int denom) : numerator(num), denominator(denom) {}

//     // Hàm toán tử cộng
//     Fraction operator+(const Fraction& other) const {
//         int num = numerator * other.denominator + other.numerator * denominator;
//         int denom = denominator * other.denominator;
//         return simplify(Fraction(num, denom));
//     }

//     // Hàm toán tử trừ
//     Fraction operator-(const Fraction& other) const {
//         int num = numerator * other.denominator - other.numerator * denominator;
//         int denom = denominator * other.denominator;
//         return simplify(Fraction(num, denom));
//     }

//     // Hàm toán tử nhân
//     Fraction operator*(const Fraction& other) const {
//         int num = numerator * other.numerator;
//         int denom = denominator * other.denominator;
//         return simplify(Fraction(num, denom));
//     }

//     // Hàm toán tử chia
//     Fraction operator/(const Fraction& other) const {
//         int num = numerator * other.denominator;
//         int denom = denominator * other.numerator;
//         return simplify(Fraction(num, denom));
//     }

//     // Hàm hỗ trợ rút gọn phân số
//     Fraction simplify(Fraction result) const {
//         int gcd_val = __gcd(result.numerator, result.denominator); // Sử dụng __gcd trong thư viện algorithm
//         result.numerator /= gcd_val;
//         result.denominator /= gcd_val;
//         return result;
//     }

//     // Hàm so sánh để sắp xếp (phân số này < phân số khác nếu tử số * mẫu số của phân số này < tử số * mẫu số của phân số khác)
//     bool operator<(const Fraction& other) const {
//         return numerator * other.denominator < other.numerator * denominator;
//     }

//     // Hàm in ra phân số
//     void print() const {
//         cout << numerator << "/" << denominator;
//     }
// };

// int main() {
//     // Khởi tạo một mảng các phân số
//     Fraction fractions[] = {
//         Fraction(1, 2),
//         Fraction(3, 4),
//         Fraction(1, 3),
//         Fraction(2, 5)
//     };

//     int n = sizeof(fractions) / sizeof(fractions[0]);

//     // Sắp xếp các phân số từ nhỏ đến lớn
//     sort(fractions, fractions + n);

//     // In ra các phân số đã sắp xếp
//     cout << "Fractions sorted in ascending order:" << endl;
//     for (int i = 0; i < n; i++) {
//         fractions[i].print();
//         cout << " ";
//     }
//     cout << endl;

//     return 0;
// }
