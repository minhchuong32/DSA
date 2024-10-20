// #include <bits/stdc++.h>
// #include <fstream>
// using namespace std;

// 	//fstream fs;// fstream ten;
	
// 	//fs.open("file.txt");//ten.open("duong dan file ")
// 	// neu cung cap voi file code thi ko can cop duong dan
// 	// neu khac cap : "C:\\user\\hello\\PLDC.txt"
// 	// if (fs.is_open()) {
// 	// 	cout << "Mo file thanh cong";
// 	// } 
// 	// else cout <<"Mo that bai";

// 	// ghi file 
// 	// fs << "Hello world " ; -> Hello world in file text
// 	// fs<<1;

// 	// doc file 
// 	// string str;int a;
// 	// getline(fs,str); fs <=> cin
// 	// fs >> a ; 
// 	// cout <<str<<a; -> Hello world 1

// 	// dong file
// 	// fs.close();
 
// // luu data struct
// struct person{
// 	string name;
// 	int age;
// 	// constructor
// 	person(){}
// 	person(string _name,int _age){
//           name = _name ;
// 		  age = _age;
// 	}
// };
// // ghi du lieu struct vao file
// void dataStruct(){
// 	// person[2] -> constructor ko co tham so 
// 	person *per = new person[2];
// 	per[0] = person("Minh Chuog",18); // co tham so
// 	per[1] = person("Chuong MInh",18);
// 	fstream fs; fs.open("file.txt");
// 	for (int i=0;i<2;i++){
// 		fs << per[i].name<<endl; // ghi vao file (in ra console)
// 		fs << per[i].age<<endl;
// 	}
// }
// // lay du lieu tu file ghi vao struct
// void dataFile(){
// 	person *per = new person[2];
// 	fstream fs;
// 	fs.open("file.txt");
// 	for (int i=0;i<2;i++){
// 		getline(fs,per[i].name);
// 		// lay du lieu tu file >> 
// 		fs >> per[i].age;
// 		fs.ignore();
// 	}
// 	for (int i=0;i<2;i++){
// 		cout <<per[i].name<<" "<<per[i].age<<endl;
// 	}
// }

//  // cac che do lam viec voi file
//     //  fs.open("namefile",mode(che_do)) 
// 	// che_do:ios::in -> mo file o che do doc (ko ghi dc du lieu vao file (fs<<data) )
// 	// che_do:ios::out -> mo file o che do ghi ( neu co file -> thay doi nd trong file = nd moi : fs << data _new; neu chua co thi tu dong tao file va ghi data)
//     // che_do:ios::app (Append mode)-> mo file o che do ghi ( fs<< data_new -> ghi nd moi ko xoa nd cu)
// 	// che_do:ios::ate -> mo file len thi con tro o cuoi file (vd: hi| )  -> ko dc dc data trong file
// 	// che_do:ios::binary ->

// // file binary 
// void binary_file(){
	
// }
// int main () {
// 	// dataStruct();
// 	dataFile();
// }
   

   // ifstream: doc file ( >> )
// ofstream: ghi file, tao moi file (<<)
// fstream: ca doc vs ghi

// ifstream in;
// in.open("input.txt",mode)
// input.txt <=> duong dan : :C/CNTT/...
// mode: 
//   ios::in -> doc file 
//   ios::out -> ghi file
//   ios::binary -> mo file kieu nhi phan
//   ios::app -> mo file de ghi (ko xoa nd cu -> ghi vao cuoi file)
//   ios::ate -> dat vi tri con tro cui file(mac dinh dau file)
//   ios::trunc -> mo file de ghi (xoa nd cu)


#include <bits/stdc++.h>
using namespace std;


// output.txt : 
// 6
// 1 2 3 4 5 6 

void docfile() {
    fstream in;
    in.open("output.txt",ios::in);
    int n;
    in>> n;
    int a[n];
    for (auto &x:a) in>>x;
    for (auto&x:a) cout <<x<<" ";
    in.close();
//    -> 1 2 3 4 5 6 
}

// doc data output.txt -> ghi vao output1.txt
// output1.txt
// 6 
// 1 2 3 4 5 6
void docfile_2() {
    fstream in;
    fstream out;
    in.open("output.txt",ios::in);
    // xoa nd cu output1 -> ghi nd moi 
    // ios::app -> giu lai nd cu output1 
    out.open("output1.txt",ios::out | ios::app);
    int n; in>>n;
    out << n << endl;
    for (int i=0;i<n;i++) {
        int x; in>> x;
        out << x <<" ";
    }
    out.close();
    in.close();
}

// output.txt:
//  Pham minh Chuong
//  18
// output1.txt:
// Pham minh Chuong
//  18
void docfile_3(){
    fstream in;
    fstream out;
    in.open("output.txt",ios::in);
    out.open("output1.txt",ios::out);
    string s;
    int n;
    getline(in,s);
    in>>n;
    out <<s<<n;
    out.close();
    in.close();
}

// output.txt :
// Pham Minh CHuong
// 183
// 829 
// output1.txt: Pham Minh CHuong183829
    void doc_file_4() {
    fstream f;
    fstream fi;
    f.open("output.txt",ios::in);
    fi.open("output1.txt",ios::out);
    string s;
    // doc data tu output
    getline(f,s);
    // ghi data vao file output1 
    fi<<s;
    // string s;
    // while(f>>s) { fi<<s; }
    // -> doc tung tu 
    int n;
    while(f >> n) {
        fi << n;
    }
    f.close();
    fi.close();
    }

// output.txt
// Pham Minh Chuong
// Nguyen Tan Tai 
// Nguyen Khac Duong 
// Bui Thanh Tung
// Phan Le Tung 
// Nguyen Nhut Hao 

// output1.txt
// Pham Minh Chuong
// Nguyen Tan Tai 
// Nguyen Khac Duong 
// Bui Thanh Tung
// Phan Le Tung 
// Nguyen Nhut Hao


// *Part 2 
// void doc_file_5() {
//     fstream f;
//     fstream fi;
//     f.open("output.txt",ios::in);
//     fi.open("output1.txt",ios::out);
//     vector <string> res;
//     string s;
//     // doc data tu file (lay ca cum tu co dau cach)
//     while(getline(f,s)) {
//         // lay data tu file output push vao vectot 
//         res.push_back(s);
//     }
//     // ghi data vao file output1.txt
//     for (auto&x:res) {
//         fi << x <<endl;
//     } 
//     f.close();
//     fi.close();
// }

// // tao email mat khau -> ghi vao file
// // name :Pham Minh Chuong
// string taoEmail(string name) {
//     stringstream ss(name);
//     string token;
//     string res="";
//     vector <string> v;
//     while(ss>>token) {
//         v.push_back(token);
//     }
//     for (auto &x : v.back()) {
//         // chuong 
//         res+=tolower(x);
//     }
//     for (int i=0;i<v.size()-1;i++) {
//         // chuongpm 
//         res+=tolower(v[i][0]);
//     }
//     res+="@xyz.edu.vn";
//     return res;
// }
// // tao mat khau 
// string taoMatkhau(string name, string ns ){
//     string res="";
//     for (auto&x:name) res+=toupper(x);
//     for (auto&x:ns) {
//         if(x!='/') res+=x;
//     }
//     // PHAMMINHCHUONG322005
//     return res;
// }
// // doc data tu file sinhvien.txt -> tao mk vs gamil-> ghi vao file email.txt;
// void bai1() {
//     ifstream in;
//     ofstream out;
//     in.open("sinhvien.txt");
//     out.open("email.txt",ios::trunc);
//     vector <string> v;
//     string token;
//     // lay data tung dong trong file push vao vector 
//     while(getline(in,token)) {
//         v.push_back(token);
//     }
//     // tach tung tu trong tung dong cua file 
//     for (auto&x:v) {
//         stringstream ss(x);
//         string res;
//         string name="",ns="";
//         while(ss>>res) {
//             cout <<res[0]<<endl;
//             // res[0] -> ki tu dau tien cua moi tu 
//             if(isdigit(res[0]))  {
//                 ns = res;
//                 // 3/2/2005 
//             }
//             else {
//                 name += res;
//                 // pham minh chuong 
//             }
//         }
//     out << taoEmail(name) <<" "<<taoMatkhau(name,ns)<<endl;
//     }
// }
// int main() {
//     bai1();
// }

