// #include <bits/stdc++.h>
// using namespace std;
//  // tach doi so
//  // 0, 9 , 8 -> 0 ; 1 -> 1 
//  // chuoi co mot so khac 4 so tren -> INVALID 
//  // chuoi 9810 -> 10 ( bo di so 0 dang truoc)
//  // chuoi 0980 -> 0000 -> INVALID
//  // chuoi 1980 - > 1000
// int main()
//  {
//    int t=4;
//     while(t--) 
//     {
//         string s;int cnt=0;
//    cout <<"Nhap so: ";
//    getline(cin,s);
//    for (int i=0;i<s.size();i++) 
//    {
//     if(s[i]!='0' && s[i]!='9' && s[i]!='8' &&s[i]!='1') {cout <<"INVALID!";++cnt;}
//     if(cnt) break;
//     else 
//     {
//         if(s[i]=='0'|| s[i]=='8'|| s[i]=='9') s[i]='0';
//         else s[i]='1';
//     }
//    }
//    int cnt2=0;
//    if(cnt==0) 
//    {
//     for (int i=0;i<s.size();i++) 
//     {
//         if(s[i]=='0')++cnt2;  
//     }
//     if(cnt2 == s.size()) cout<< "INVALID!"<<endl;// chuoi toan so 0
//     else 
//     {
//         while(s[0]=='0') s.erase(0,1); // s.erase(index,count)  bo so 0 dang truoc chuoi
//         cout <<s<<endl;
//     }
//    }
//    else cout <<endl;
//     } 
//  }