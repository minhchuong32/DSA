// #include <bits/stdc++.h>
// using namespace std;
// //tool compiler option  > seting > code generation > Language Standard > c++ 11
// // tool > editor option> snipets > default source > code san form

// //add
// string addS(const string &n1, const string &n2)
// {
//     int i = n1.size() - 1, j = n2.size() - 1, carry = 0;
//     string result;
//     while (i >= 0 || j >= 0 || carry)
//     {
//         int sum = carry;
//         if (i >= 0)
//             sum += n1[i--] - '0';
//         if (j >= 0)
//         sum += n2[j--] - '0';
//         result = (sum % 10 + '0') + result;
//         carry = sum / 10;
//     }
//     return result;
// }

// * ADD
// #include <iostream>

// using namespace std;

// int main()
// {
//     string so1, so2;
//     cout << "Nhap so 1 va so 2: ";
//     cin >> so1 >> so2;
//     while(so1.size() < so2.size()) {
//         so1 = '0' + so1;
//     }
//     while(so2.size() < so1.size()) {
//         so2 = '0' + so2;
//     }
//     string result = "";
//     int carry = 0;
//     for (int i = so1.size() - 1; i >= 0; i--)
//     {
//         int sum = ((so1[i] - '0') + (so2[i] - '0')) + carry;
//         if (sum >= 10)
//         {
//             carry = sum / 10;
//             sum %= 10;
//         }
//         result = to_string(sum) + result;
//     }
//     cout << result;
// }

// * SUB
// #include <iostream>
// using namespace std;
// int main()
// {
//     string so1, so2;
//     cin >> so1 >> so2;
    
//     while (so1.size() < so2.size())
//     {
//         so1 = '0' + so1;
//     }
//     while (so2.size() < so1.size())
//     {
//         so2 = '0' + so2;
//     }

//     string result = "";
//     int c = 0;

//     string so01 = so1;
//     string so02 = so2;
//     bool negative = false;

//     if ((so01[0] - '0' < so02[0] - '0' || (so01.size() < so02.size())))
//     {
//         negative = true;
//         so2 = so01;
//         so1 = so02;
//     }
//     else
//     {
//         so1 = so01;
//         so2 = so02;
//     }

//     cout << so1 << ' ' << so2 << endl;
//     for (int i = so1.size() - 1; i >= 0; i--)
//     {
//         int sub = ((so1[i] - '0') - (so2[i] - '0')) - c;
//         c = 0;
//         if (sub < 0)
//         {
//             sub = 10 + sub;
//             c = 1;
//         }
//         result = to_string(sub) + result;
//     }
//     while (result[0] == '0')
//     {
//         result = result.substr(1);
//     }
//     if (negative)
//         result = "-" + result;


//     cout << result;
// }
// 48956723 999685325
// 91823731092381092328471611298123 1928312737213727391238801238338273127712
// 1928312737213727391238801238338273127712 0000000091823731092381092328471611298123
// -1928312645389996298857708909866661829589


// * MUL 
#include <iostream>
using namespace std;

string add(string so1, string so2) {
    cin >> so1 >> so2;
    while(so1.size() < so2.size()) {
        so1 = '0' + so1;
    }
    while(so2.size() < so1.size()) {
        so2 = '0' + so2;
    }
    string result = "";
    int carry = 0;
    for (int i = so1.size() - 1; i >= 0; i--)
    {
        int sum = ((so1[i] - '0') + (so2[i] - '0')) + carry;
        if (sum >= 10)
        {
            carry = sum / 10;
            sum %= 10;
        }
        result = to_string(sum) + result;
    }
    return result;
}

int main() {
    string num1, num2;
    cin>>num1, num2;
    string result = "";
    for (int i=num2.size()-1;i>=0;i--) {
        string mul = "";
        int c = 0;
        for (int j=num1.size()-1;j>=0;j--) {
            int res = (num2[i]-'0' * num1[j]-'0') + c;
            c=0;
            if (res >= 10) c = 1;
            mul = to_string(res) + mul;
        }
        mul += '0';
        result = add(result, mul);
    }
}
// string subS(const string &n1, const string &n2)
// {
//     int i = n1.size() - 1, j = n2.size() - 1, borrow = 0;
//     string result;
//     while (i >= 0 || j >= 0)
//     {
//         int diff = (n1[i] - '0') - borrow;
//         if (j >= 0)
//             diff -= (n2[j--] - '0');
//         if (diff < 0){ diff += 10; borrow = 1;}
//         else borrow = 0;
//         result += diff + '0';
//         i--;
//     }
//     while (result.size() > 1 && result.back() == '0')
//         result.pop_back();
//     reverse(result.begin(), result.end());
//     return result;
// }

// int cmpS(const string &n1, const string &n2)
// {
//     if (n1.size() != n2.size())
//         return n1.size() > n2.size() ? 1 : -1;
//     return n1.compare(n2);
// }
// string add(const string &a, const string &b)
// {
//     bool A_am = (a[0] == '-');
//     bool B_am = (b[0] == '-');
//     string n1 = A_am ? a.substr(1) : a;
//     string n2 = B_am ? b.substr(1) : b;
//     string result;
//     if (A_am == B_am)
//     {
//         result = addS(n1, n2);
//         if (A_am)
//             result = "-" + result;
//     }
//     else
//     {
//         int cmp = cmpS(n1, n2);
//         if (cmp == 0)
//         {
//             result = "0";
//         }
//         else if (cmp > 0)
//         {
//             result = subS(n1, n2);
//             if (A_am)
//                 result = "-" + result;
//         }
//         else
//         {
//             result = subS(n2, n1);
//             if (B_am)
//                 result = "-" + result;
//         }
//     }
//     return result;
// }

// //mul
// string mulS(const string &n1, const string &n2)
// {
//     int len1 = n1.size();
//     int len2 = n2.size();
//     if (len1 == 0 || len2 == 0)
//         return "0";
//     vector<int> result(len1 + len2, 0);
//     int i_n1 = 0;
//     int i_n2 = 0;
//     for (int i = len1 - 1; i >= 0; i--)
//     {
//         int carry = 0;
//         int nu1 = n1[i] - '0';
//         i_n2 = 0;
//         for (int j = len2 - 1; j >= 0; j--)
//         {
//             int nu2 = n2[j] - '0';
//             int sum = nu1 * nu2 + result[i_n1 + i_n2] + carry;
//             carry = sum / 10;
//             result[i_n1 + i_n2] = sum % 10;
//             i_n2++;
//         }
//         if (carry > 0)
//             result[i_n1 + i_n2] += carry;
//         i_n1++;
//     }
//     int i = result.size() - 1;
//     while (i >= 0 && result[i] == 0)
//         i--;
//     if (i == -1)
//         return "0";
//     string s;
//     while (i >= 0)
//         s += to_string(result[i--]);
//     return s;
// }

// string mul(const string &a, const string &b)
// {
//     bool A_am = (a[0] == '-');
//     bool B_am = (b[0] == '-');
//     string n1 = A_am ? a.substr(1) : a;
//     string n2 = B_am ? b.substr(1) : b;
//     string result = mulS(n1, n2);
//     if (A_am != B_am && result != "0")
//     {
//         result = "-" + result;
//     }
//     return result;
// }
// //div
// pair<string, string> divS(const string &n1, const string &n2)
// {
//     if (n2 == "0")
//         throw invalid_argument("Division by zero");
//         // qu: ket qua , re:du
//     string qu, re = "0";
//     for (char digit : n1)
//     {
//         re += digit;
//         while (re.size() > 1 && re[0] == '0')
//         {
//             re.erase(re.begin());
//         }
//         int count = 0;
//         while (cmpS(re, n2) >= 0)
//         {
//             re = subS(re, n2);
//             count++;
//         }
//         qu += (count + '0');
//     }
//     while (qu.size() > 1 && qu[0] == '0')
//     {
//         qu.erase(qu.begin());
//     }
//     return {qu, re};
// }

// string div(const string &a, const string &b)
// {
//     bool A_am = (a[0] == '-');
//     bool B_am = (b[0] == '-');
//     string n1 = A_am ? a.substr(1) : a;
//     string n2 = B_am ? b.substr(1) : b;
//     pair<string, string> result = divS(n1, n2);
//     string qu = result.first;
//     if (A_am != B_am && qu != "0")
//     {
//         qu = "-" + qu;
//     }
//     return qu;
// }

// //mod
// string mod(const string &a, const string &b)
// {
//     bool A_am = (a[0] == '-');
//     bool B_am = (b[0] == '-');
//     string n1 = A_am ? a.substr(1) : a;
//     string n2 = B_am ? b.substr(1) : b;
//     pair<string, string> result = divS(n1, n2);
//     string re = result.second;
//     if (A_am && re != "0")
//     {
//         re = "-" + re;
//     }
//     return re;
// }

// // sub
// string sub(const string &a, const string &b) {
//     bool A_am = (a[0] == '-');
//     bool B_am = (b[0] == '-');
//     string n1 = A_am ? a.substr(1) : a;
//     string n2 = B_am ? b.substr(1) : b;
//     string result;
//     if (A_am && B_am) {
//         if (cmpS(n1, n2) > 0) { result =  (n1, n2);result = "-" + result; }
//          else result = subS(n2, n1);
//     } else if (!A_am && B_am) { result = addS(n1, n2);
//     } else if (A_am && !B_am) {result = addS(n1, n2); result = "-" + result;
//     } else {
//         if (cmpS(n1, n2) >= 0)   result = subS(n1, n2);
//         else { result = subS(n2, n1);   result = "-" + result; }
//     }
//      while (result.size() > 1 && result[0]=='0') result.erase(0,1);
//     if (result == "-0") result = "0"; return result;
// }

// int main(){
//     string a,b; cin>>a>>b;
//     cout <<"sub "<<sub(a,b)<<endl;
//     cout <<"add "<<add(a,b)<<endl;
//     cout <<"mul "<<mul(a,b)<<endl;
//     cout <<"div "<<div(a,b)<<endl;
//     cout <<"mod "<<mod(a,b)<<endl;
// }