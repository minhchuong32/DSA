// #include <bits/stdc++.h>
// #include <stdio.h>
// #include <string.h>
// using namespace std;
// // ki thuat dua tung tu vao mang dung pointer strtok
// void Tachtu(char kq[100][100], char c[50],int &n){
//     n=0;
//     const char delin[]=" ";
//     char *token =strtok(c,delin);
//     while(token!=NULL){
//       strcpy(kq[n++],c);
//       token=strtok(NULL,delin);
//     }
// }
// void PrintWord(){
//     char kq[100][100],c[50]; int n;
//     Tachtu(kq,c,n);
//     for (int i=0;i<n;i++)cout <<kq[i]<<" ";
// }
// // ham kt kitu
// int is_anlpha(char c)
// {
//     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//         return 1;
//     return 0;
// }
// // ham chuyen in hoa sang thuong
// char to_upper(char c)
// {
//     if (c >= 'A' && c <= 'Z')
//         c += 32;
//     return c;
// }
// // toan tu 3 ngoi min
// int min(int a, int b)
// {
//     return a < b ? a : b; //( ? true : false)
// }
// // ham ss thu tu tu dien 2 xau
// int strcmp(char c[], char d[])
// {
//     int n1 = strlen(c);
//     int n2 = strlen(d);
//     for (int i = 0; i < min(n1, n2); i++)
//     {
//         if (c[i] != d[i])
//         {
//             if (c[i] > d[i])
//                 return 1;
//             else
//                 return -1;
//         }
//     }
//     if (n1 == n2)
//         return 0;
//     else if (n1 < n2)
//         return -1;
//     else
//         return 1;
// }
// // ham chuyen chuoi sang so
// long long atoll(char c[])
// {
//     long long res = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         res = res * 10 + c[i] - '0';
//     }
//     return res;
// }
// // tao ham dao nguoc strrev
// char *strrev(char c[])
// {
//     int l = 0, r = strlen(c) - 1;
//     while (l < r)
//     {
//         swap(c[l], c[r]);
//         ++l;
//         --r;
//     }
//     return c;
// }
// // char string[]=" hello world";
// //    cout << strrev(string);
// // -> dlrow olleh


// *BT Char 
// // chuyen ki tu trong xau sang in thuong
// void bai1(char c[])
// {
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i] >= 'A' && c[i] <= 'Z')
//             c[i] = tolower(c[i]);
//     }
//     cout << c;
// } // fgets(c,50,stdin)
// void bai2(char c[])
// {
//     int c1 = 0, c2 = 0, c3 = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
//             ++c1;
//         else if (c[i] >= '0' && c[i] <= '9')
//             ++c2;
//         else
//             ++c3;
//     }
//     cout << c1 << " " << c2 << " " << c3;
// }
// // tao mang danh dau
// // cho tan xuat tat ca cac ki tu =0 , chuyen ki tu sang ma aski tuong ung  gan cho mang danh dau tan xuat ( ung voi moi so (aski)-> 1 tan xuat)
// //   input:   aaabb
// // index=maaski=kitu(int)=i  : [0...97(a) 98(b) 99(c) 100(d) .. 256]
// // value=tanxuat=cnt[c[i]]   :  0....3      2     0     0      .. 0
// void bai3(char c[])
// {
//     int cnt[256] = {0}; // cho tan xuat cua tat ca ki tu =0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         cnt[(int)c[i]]++; // chuyen sang aski
//     }
//     for (int i = 0; i < 256; i++)
//     {
//         if (cnt[i])
//         {
//             cout << (char)i << " " << cnt[i] << endl;
//         }
//     }
// }
// // c2
// void bai3_c2(char c[])
// {
//     // index: aski
//     // value : tanxuat
//     int cnt[26] = {0};
//     for (int i = 0; i < strlen(c); i++)
//     {
//         cnt[c[i] - 'a']++;
//     }
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (cnt[c[i] - 'a'])
//         {
//             cout << c[i] << " " << cnt[c[i] - 'a'] << endl;
//             cnt[c[i] - 'a'] = 0;
//         }
//     }
// }

// // in ra ki tu co tan xuat nhiu nhat
// void bai6(char c[])
// {
//     int cnt[256] = {0};
//     for (int i = 0; i < strlen(c); i++)
//     {
//         cnt[(int)c[i]]++;
//     }
//     int max = 0;
//     int index = 0;
//     for (int i = 255; i >= 0; i--)
//     {
//         if (cnt[i] > max)
//         {
//             max = cnt[i];
//             index = i;
//         }
//     }
//     cout << (char)index;
// }
// // in ra ki tu xh o ca 2 xau
// // idea : danh dau ki tu ( maaski giong thi in ra)
// void bai7(char c1[], char c2[])
// {
//     int cnt[256] = {0};
//     for (int i = 0; i < strlen(c1); i++)
//     {
//         cnt[(int)c1[i]] = 1;
//     }
//     for (int i = 0; i < strlen(c2); i++)
//     {
//         if (cnt[(int)c2[i]] == 1)
//             cout << c2[i];
//     }
// }
// // ki tu chi xh o xau thu nhat ma khong xh o xau thu hai
// void bai8(char c1[], char c2[])
// {
//     int cnt[256] = {0};
//     for (int i = 0; i < strlen(c2); i++)
//     {
//         cnt[(int)c2[i]] = 1;
//     }
//     for (int i = 0; i < strlen(c1); i++)
//     {
//         if (cnt[(int)c1[i]] != 1)
//         {
//             cout << c1[i];
//             cnt[(int)c1[i]] = 1;
//         }
//     }
// }
// // kitu xh xau 1 or xau 2
// void bai9(char c1[], char c2[])
// {
//     int cnt[256] = {0};
//     for (int i = 0; i < strlen(c1); i++)
//     {
//         cnt[(int)c1[i]] = 1;
//     }
//     for (int i = 0; i < strlen(c2); i++)
//     {
//         cnt[(int)c2[i]] = 1;
//     }
//     for (int i = 0; i < 256; i++)
//     {
//         if (cnt[i])
//             cout << (char)i;
//     }
// }
// // xau pangram
// int bai10(char c[])
// {
//     int cnt[256] = {0};
//     int dem = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i] >= 'a' && c[i] <= 'z')
//         {
//             if (!cnt[(int)c[i]])
//             {
//                 cnt[(int)c[i]] = 1; // danh dau tung ki tu dong thoi tang bien dem 
//                 ++dem;
//             }
//         }
//     }
//     return dem == 26;
// }
// // xau pangram ko phan biet hoa
// int bai11(char c[])
// {
//     int cnt[256] = {0};
//     int dem = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
//         {
//             if (!cnt[(int)c[i]])
//             {
//                 cnt[(int)c[i]] = 1;
//                 ++dem;
//             }
//         }
//     }
//     return dem;
// }
// // xau doi xung
// int bai12(char c[])
// {
//     int n = strlen(c);
//     int cnt = 0;
//     for (int i = 0; i < n / 2; i++)
//     {
//         if (c[i] != c[n - i - 1])
//             return 0;
//     }
//     return 1;
// }
// // xau doi xung bien doi 1 ki tu
// int bai13(char c[])
// {
//     int n = strlen(c);
//     int cnt = 0;
//     for (int i = 0; i < n / 2; i++)
//     {
//         if (c[i] != c[n - i - 1])
//             ++cnt;
//     }
//     if (cnt == 1 || bai12(c))
//         return 1;
//     return 0;
// }
// //
// void strtok()
// {
//     char str[] = "Hello, World! This is a test.";
//     const char delim[] = " ,.!"; // Các ký tự phân cách

//     // Lần đầu gọi hàm
//     char *token = strtok(str, delim);

//     // Gọi hàm cho đến khi không còn token nào
//     while (token != NULL)
//     {
//         printf("Token: %s\n", token);

//         // Gọi hàm để lấy token tiếp theo
//         token = strtok(NULL, delim);
//     }
// }
// // Token: Hello
// // Token: World
// // Token: This
// // Token: is
// // Token: a
// // Token: test

// // kiem tra tu co phai in hoa khong neu co in ra tu do
// // ham kt tu do co phai in hoa khong
// int check(char c[])
// {
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (islower(c[i]))
//             return 0;
//     }
//     return 1;
// }
// void bai14()
// {
//     int t;
//     cout << "Nhap so lan thu: ";
//     cin >> t;
//     getchar();
//     while (t--)
//     {
//         char c[10001];
//         gets(c);
//         char *token = strtok(c, " ");
//         while (token != NULL)
//         {
//             if (check(token))
//                 cout << token << " ";
//             token = strtok(NULL, " ");
//         }
//         cout << endl;
//     }
// }
// // tao mang luu tu
// void arraychar()
// {
//     char kq[50][50], s[50];
//     gets(s);
//     s[strlen(s)] = ' ';
//     s[strlen(s) + 1] = 0;
//     int j = 0, i = 0;
//     for (; i < strlen(s); i++)
//     {
//         if (s[i] == ' ')
//         {
//             strncpy(kq[j++], s, i);
//             kq[j][i] = 0;
//             strcpy(s, s + i + 1);
//             i = 0;
//         }
//     }
//     for (int i = 0; i < j; i++)
//         cout << kq[i] << endl;
//     cout << strlen(kq[j - 1]) << endl
//          << strlen(kq[0]) << endl
//          << strlen(kq[1]);
// }
// // mang luu tu cach 2
// void araystring2(char c[],char kq[][500],int &n) 
// {
//     int d=0;int inx=0;
//     c[strlen(c)]=' ';c[strlen(c)+1]=0;
//     for (int i=0;i<strlen(c);i++) 
//     {
//         if(c[i]==' ') 
//         {
//             strncpy(kq[inx++],c+d,i-d);
//             d=i+1;
//         }
//     }
// }
// // ham kiem tra theo thu tu tu dien
// int kt(char c1[], char c2[])
// {
//     int n1 = strlen(c1), n2 = strlen(c2);
//     for (int i = 0; i < min(n1, n2); i++)
//     {
//         if (c1[i] < c2[i])
//             return 1;
//         else
//             return -1;
//     }
//     if (n1 == n2)
//         return 0;
//     else if (n1 > n2)
//         return -1;
//     else
//         return 1;
// }
// // in ra choi theo thu tu tu dien
// // dung strcmp (aa,za) -> <0 (1-26<0)(lay chi so ki tu dau tien cua xau 1 - xau 2)
// // strcmp(zz,ax) -> >0 (z(26) lon hon a(1))
// // strcmp(a,a)=0;

// // ham so sanh 2 tu theo thu tu tu dien
// void compare(char a[][500], int n) // n :so tu ( 50 so ki tu trong 1 tu)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (strcmp(a[j], a[i]) < 0)
//                 min = j;
//         }
//         swap(a[min], a[i]);
//         // char tmp[1000];
//         // strcpy(tmp,a[min]);
//         // strcpy(a[min],a[i]);
//         // strcpy(a[i],tmp);
//     }
// }
// //
// void bai15_c1()
// {
//     char c[500];
//     gets(c);
//     char a[200][500];
//     int n = 0;
//     char *token = strtok(c, " ");
//     while (token != NULL)
//     {
//         strcpy(a[n++], token);
//         token = strtok(NULL, " ");
//     }
//     compare(a, n);
//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";
// }
// void bai15_c2()
// {
//     char kq[500][500], s[500];
//     gets(s);
//     s[strlen(s)] = ' ';
//     s[strlen(s) + 1] = 0;
//     int j = 0, i = 0;
//     for (; i < strlen(s); i++)
//     {
//         if (s[i] == ' ')
//         {
//             strncpy(kq[j++], s, i);
//             kq[j][i] = 0;
//             strcpy(s, s + i + 1);
//             i = 0;
//         }
//     }
//     // sd ham compare de sap xep tu theo thu tu tu dien
//     compare(kq, j);
//     for (int i = 0; i < j; i++)
//         cout << kq[i] << " ";
// }
// // ham sap xep ki tu theo chieu dai
// void sx(char a[][500], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (strlen(a[i]) > strlen(a[j]))
//                 min = j;
//             else if (strlen(a[i]) == strlen(a[j]))
//             {
//                 if (strcmp(a[j], a[i]) < 0)
//                     swap(a[j], a[i]);
//             }
//         }
//         swap(a[min], a[i]);
//     }
// }
// //
// void bai16()
// {
//     char kq[500][500], s[500];
//     gets(s);
//     s[strlen(s)] = ' ';
//     s[strlen(s) + 1] = 0;
//     int j = 0, i = 0;
//     for (; i < strlen(s); i++)
//     {
//         if (s[i] == ' ')
//         {
//             strncpy(kq[j++], s, i);
//             kq[j][i] = 0;
//             strcpy(s, s + i + 1);
//             i = 0;
//         }
//     }
//     for (int i = 0; i < j; i++)
//         cout << kq[i] << " ";
//     cout << endl;
//     compare(kq, j);
//     sx(kq, j);
//     for (int i = 0; i < j; i++)
//         cout << kq[i] << " ";
// }
// // ham viet thuong cac ki tu trong chuoi mang va sx ki tu theo ma aski
// void sort(char c[])
// {
//     for (int i = 0; i < strlen(c); i++)
//     {
//         c[i] = tolower(c[i]);
//     }
//     // danh dau theo ma aski
//     int cnt[256] = {0};
//     for (int i = 0; i < strlen(c); i++)
//     {
//         cnt[c[i]]++;
//     }
//     for (int i = 0; i < 255; i++)
//     {
//         if (cnt[i])
//         {
//             for (int j = 0; j < cnt[i]; j++)
//                 cout << (char)i;
//         }
//     }
// }
// // ham chuan hoa chuoi
// string chuanhoa(char s[], char sn[])
// {
//     int cnt = 0;
//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] != ' ')
//             sn[cnt++] = s[i];
//         else if (s[i - 1] != ' ' && i > 0)
//             sn[cnt++] = ' ';
//     }
//     if (sn[cnt - 1] != ' ')
//         sn[cnt] = 0;
//     else
//         sn[cnt - 1] = 0;
//     return sn;
// }
// // chuan hoa ten xXX xXx xxX -> Xxx Xxx Xxx (standardized)
// void standardized(char c[])
// {
//     char sn[500];
//     chuanhoa(c, sn);
//     for (int i = 0; i < strlen(sn); i++)
//     {
//         sn[i] = tolower(sn[i]);
//     }
//     sn[0] = toupper(sn[0]);
//     for (int i = 0; i < strlen(sn); i++)
//     {
//         if (sn[i] == ' ')
//             sn[i + 1] = toupper(sn[i + 1]);
//     }
//     cout << sn;
// }
// void standardized2(char c[])
// {
//     c[0] = toupper(c[0]);
//     // tu dau tien
//     for (int i = 1; i != ' '; i++)
//     {
//         if (isupper(c[i]))
//             c[i] = tolower(c[i]);
//     }
//     // cho cac tu tiep theo
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i] == ' ' && c[i + 1] != ' ')
//         {
//             c[i + 1] = toupper(c[i + 1]);
//             for (int j = i + 2; j != ' '; j++)
//             {
//                 if (isupper(c[i]))
//                     c[i] = tolower(c[i]);
//             }
//         }
//     }
//     cout << c;
// }
// // cach tong quat de chuan hoa ten -> luu cac tu vao mang 2 chieu -> xu li
// // ham dua cac tu vao mang hai chieu
// void arraystring(char c[], char kq[][500], int &n)
// {
//     int d = 0;
//     n = 0;
//     c[strlen(c)] = ' ';
//     c[strlen(c) + 1] = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i] == ' ')
//         {
//             strncpy(kq[n++], c + d, i - d);
//             d = i + 1;
//         }
//     }
// }
// // ham chuan hoa cho 1 tu
// void stand(char c[])
// {
//     c[0] = toupper(c[0]); // viet hoa ki tu dau
//     for (int i = 1; i < strlen(c); i++)
//     {
//         if (isupper(c[i]))
//             c[i] = tolower(c[i]); // neu no la ki tu hoa thi viet thuong lai cho ki tu do
//     }
// }
// // ham chuan hoa
// void standardized3(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     cout << n << endl;
//     for (int i = 0; i < n; i++)
//     {
//         stand(kq[i]);
//     }
//     for (int i = 0; i < n; i++)
//         cout << kq[i] << " ";
// }
// // chuan hoa : Pham, Minh Chuong
// void standardized4(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     cout << n << endl;
//     for (int i = 0; i < n; i++)
//     {
//         stand(kq[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0)
//             cout << kq[i] << ","
//                  << " ";
//         else
//             cout << kq[i] << " ";
//     }
// }
// // chuan hoa : Chuong, Pham Minh
// void standardized5(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     for (int i = 0; i < n; i++)
//     {
//         stand(kq[i]);
//     }
//     cout << kq[n - 1] << ","
//          << " ";
//     for (int i = 0; i < n - 1; i++)
//     {
//         cout << kq[i] << " ";
//     }
// }
// // chuan hoa : CHUONG, Pham Minh
// void standardized6(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     for (int i = 0; i < n; i++)
//         stand(kq[i]);
//     while (1)
//     {
//         // CHUONG 
//         for (int j = 0; j < strlen(kq[n - 1]); j++)
//         {
//             kq[n - 1][j] = toupper(kq[n - 1][j]);
//         }
//         break;
//     }
//     cout << kq[n - 1] << ","
//          << " ";
//     for (int i = 0; i < n - 1; i++)
//         cout << kq[i] << " ";
// }
// // tao email: chuongpm@gmail.com
// void standardized7(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     while (1)
//     {
//         for (int j = 0; j < strlen(kq[n - 1]); j++)
//         {
//             kq[n - 1][j] = tolower(kq[n - 1][j]);
//         }
//         break;
//     }
//     cout << kq[n - 1];
//     kq[0][0] = tolower(kq[0][0]);
//     kq[1][0] = tolower(kq[1][0]);
//     cout << kq[0][0];
//     cout << (kq[1][0]);
//     cout << "@gmail.com";
// }
// // dem so lan xh cua cac tu ko phan biet hoa thuong
// // ham chuyen tat cac cac ki tu cua 1 tu sang in thuong
// void to_lower(char c[])
// {
//     for (int i = 0; i < strlen(c); i++)
//     {
//         c[i] = tolower(c[i]);
//     }
// }
// // ham dem so lan xuat hien cua mot tu trong chuoi
// int demtu(char s[], char t[])
// {
//     int vt = 0;
//     int dem = 0;
//     char kq[100];
//     if (strstr(s + vt, t) != NULL)
//     {
//         for (; strstr(s + vt, t) != NULL;)
//         {
//             dem++;
//             strcpy(kq, strstr(s + vt, t));
//             vt = (strlen(s) - strlen(kq));
//             vt++;
//         }
//         return dem;
//     }
//     else
//         return dem = 0;
// }

// void standardized8(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     for (int i = 0; i < n; i++)
//     {
//         to_lower(kq[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (demtu(c, kq[i]) >= 1)
//         {
//             cout << kq[i] << " " << demtu(c, kq[i]) << endl;
//         }
//     }
// }
// // cach 2 : dung mang danh dau
// void standardized8_2(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     for (int i = 0; i < n; i++)
//     {
//         to_lower(kq[i]);
//     }
//     int b[n] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         if (b[i] == 0)
//         {
//             int cnt = 1;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (strcmp(kq[j], kq[i]) == 0)
//                 {
//                     ++cnt;
//                     b[j] = 1; // ko dem lai trong vong for i
//                 }
//             }
//             cout << kq[i] << " " << cnt << endl;
//         }
//     }
// }
// // dem so lan xh cua tu trong xau in ra tu theo thu tu tu dien tang dan
// void standardized9(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     compare(kq, n);
//     int b[n] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         if (b[i] == 0)
//         {
//             int cnt = 1;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (strcmp(kq[j], kq[i]) == 0)
//                 {
//                     cnt++;
//                     b[j] = 1;
//                 }
//             }
//             cout << kq[i] << " " << cnt << endl;
//         }
//     }
// }
// // in ra tu xh nhieu nhat neu cung so lan xh in tu co thu tu tu dien nho hon
// void standardized10(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     compare(kq, n);
//     int b[n] = {0};
//     int max = 0;
//     int index = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (b[i] == 0)
//         {
//             int cnt = 1;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (strcmp(kq[j], kq[i]) == 0)
//                 {
//                     cnt++;
//                     b[j] = 1;
//                 }
//             }
//             if (cnt > max)
//             {
//                 max = cnt;
//                 index = i;
//             }
//         }
//     }
//     cout << kq[index] << " " << max;
// }
// // ko lay tu bi lap
// void standardized11(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     int b[n] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         if (b[i] == 0)
//         {
//             cout << kq[i] << " ";// tu chua bi lap
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (strcmp(kq[j], kq[i]) == 0)
//                 {
//                     b[j] = 1; 
//                 }
//             }
//         }
//     }
// }
// // ham max
// int max(int a, int b)
// {
//     return a > b ? a : b;
// }
// // liet ke cac tu chi xh trong xau 1 ko co trong xau 2 ( liet ke theo thu tu tu dien)
// void standardized12(char c1[], char c2[])
// {
//     char kq1[500][500];
//     int n1;
//     arraystring(c1, kq1, n1);
//     compare(kq1, n1);
//     char kq2[500][500];
//     int n2;
//     arraystring(c2, kq2, n2);
//     compare(kq2, n2);
//     int b1[n1] = {0};
//     int b2[n2] = {0};
//     for (int i = 0; i < n1; i++)
//     {
//         while (strcmp(kq1[i], kq1[i + 1]) == 0)
//             ++i; // loai bo tu bi trung trong xau 1
//         int ok = 0;
//         for (int j = 0; j < n2; j++)
//         {
//             if (strcmp(kq1[i], kq2[j]) == 0)
//             {
//                 ok = 1;
//                 break;
//             } // phat hien tu giong vs xau 2 thi ket thuc loop
//         }
//         if (!ok)
//             cout << kq1[i] << " "; // ok=0 -> tu dang xet kq1[i] trong xau 1 ko xh trong xau 2 -> in ra
//     }
// }
// // xoa tu trong xau voi tu can xoa duoc nhap tu ban phim
// void bai19(char c[], char t[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     // viet thuong tat ca tu trong xau
//     for (int i = 0; i < n; i++)
//     {
//         to_lower(kq[i]);
//     }
//     int b[n] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(kq[i], t) == 0)
//             b[i] = 1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (!b[i])
//             cout << kq[i] << " ";
//     }
// }
// // tu bi lap dau tien trong xau
// void bai20(char c[])
// {
//     char kq[500][500];
//     int n;
//     arraystring(c, kq, n);
//     int ok = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (strcmp(kq[j], kq[i]) == 0)
//             {
//                 ok = 1;
//                 break;
//             }
//         }
//         if (ok = 1)
//             cout << kq[i];
//         break;
//     }
//     if (!ok)
//         cout << -1;
// }
// // cho 2 xau in yes neu xau 1 xh trong xau 2
// // void arraystring (char c[],char kq[500][500],int &n)
// // {
// //     int d=0;
// //     c[strlen(c)]=' ';
// //     c[strlen(c)+1]=0;
// //     for (int i=0;i<strlen(c))
// //     {
// //         if(c[i]==' ') {strncpy(kq[n++],c+d,i-d);d=i+1;}
// //     }
// // }

// // kt chuoi t co xh trong chuoi  c?
// void bai21()
// {
//     char c1[500], t[500];
//     cout << "Nhap chuoi c1: ";
//     gets(c1);
//     cout << "Nhap chuoi t: ";
//     gets(t);
//     if (strstr(c1, t) != NULL)
//         cout << "yes";
//     else
//         cout << "no";
// }
// // kiem tra 1 chuoi co the tao thanh chuoi doi xung hay ko
// // idea: cac ki tu phai xh chan lan or chi mot ki tu dc phep xh le lan con lai phai xh chan lan
// void bai22(char c[])
// {
//     int cnt[256] = {0};
//     for (int i = 0; i < strlen(c); i++)
//     {
//         cnt[(int)c[i]]++;
//     }
//     int ok = 0;
//     for (int i = 0; i < 256; i++)
//     {
//         if (cnt[i] % 2 != 0)
//             ok++;
//     }
//     if (ok == 1 || ok == 0)
//         cout << "Yes";
//     else
//         cout << "No";
// }
// // in ra cac ki tu ko lap theo thu tu tu dien trong xau
// void bai23(char c[])
// {
//     int cnt[256] = {0};
//     for (int i = 0; i < strlen(c); i++)
//     {
//         cnt[(int)c[i]]++;
//     }
//     for (int i = 0; i < 256; i++)
//     {
//         if (cnt[i] == 1)
//             cout << (char)i << " ";
//     }
// }
// // tinh tong cac chu so co mat trong xau
// // ham dua cac ki tu so vao trong mot mang
// // atoi(str)=number (ham chuyen chuoi sang int)
// // void arraynumber(char c[],char kq[][500],int &n)
// // {
// //     int d=0;n=0;
// //     for (int i=0;i<strlen(c);i++)
// //     {
// //         if(c[i]>='0' && c[i]<'9')
// //         {
// //             for (int j=i;j<strlen(c);j++)
// //             {
// //                 if(c[j]>='a' && c[j]<='z') {d=j;break;}
// //             }
// //            strncpy(kq[n++],c+i,d-i);
// //         }
// //     }
// // }

// // void bai24(char c[])
// // {
// //     char kq[500][500];int n;
// //     arraynumber(c,kq,n);
// //     for  (int i=0;i<n;i++) cout <<kq[i]<<" ";

// // }
// // input : abc10bf3bfv -> output:13
// void bai24_tech28(char c[])
// {
//     int res = 0, sum = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         while (c[i] >= '0' && c[i] <= '9')
//         {
//             res = res * 10 + c[i] - '0';
//             i++;
//         }
//         sum += res;
//         res = 0;
//     }
//     cout << sum;
// }
// // tim so lon nha trong xau
// void bai24_2(char c[])
// {
//     int res = 0, max = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         while (c[i] >= '0' && c[i] <= '9')
//         {
//             res = res * 10 + c[i] - '0';
//             i++;
//         }
//         if (res > max)
//             max = res;
//         res = 0;
//     }
//     cout << max;
// }
// // tinh tong hai da thuc
// int dt[10000];
// int cnt = 0;
// // ham tinh tong cac da thuc
// void solve(char c[])
// {
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (isdigit(c[i]))
//         {
//             int heso = 0;
//             while (c[i] != '*')
//             {
//                 heso = heso * 10 + c[i] - '0';
//                 i++;
//             }
//             i += 3;
//             int mu = 0;
//             while (isdigit(c[i]))
//             {
//                 mu = mu * 10 + c[i] - '0';
//                 i++;
//             }
//             dt[mu] += heso;
//         }
//     }
// }

// // int main()
// // {
// //   int t;cout <<"Nhap test case: ";cin>>t;
// //   getchar();
// //   while(t--)
// //   {
// //       char c1[10000];char c2[10000];
// //   gets(c1);  gets(c2);
// //   memset(dt,0,sizeof(dt)); // reset array dt ve 0 de thuc hien test case tiep theo
// //     solve(c1);solve(c2);
// //     int cnt=0;
// //     for (int i=10000;i>=0;i--) if(dt[i]) ++cnt;
// //     for (int i=10000;i>=0;i--) {
// //         if(dt[i]!=0)
// //         {
// //             cout <<dt[i]<<"*x^"<<i;
// //             --cnt;
// //             if(cnt!=0) cout <<" + ";
// //         }
// //     } cout<<endl;
// //   }
// // }

// // chen baonhiu ki tu nx de tao chuoi co du 26 ki tu anlpha
// void insert(char c[])
// {
//     int cnt[256] = {0};
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i] >= 'a' && c[i] <= 'z')
//             cnt[c[i]]++;
//     }
//     int cnt1 = 0;
//     for (int i = 0; i < 256; i++)
//     {
//         if (cnt[i])
//             ++cnt1;
//     }
//     cout << " can chen : " << 26 - cnt1 << " ki tu";
// }
// // dem day con ki tu lien tuc dai nhat
// // ex: abczzzzx -> day con dai nhat la abcz -> 4 can chen 22 ki tu de du 26 ki tu
// void daycon(char c[])
// {
//     int cnt[256] = {0};
//     int dem = 1;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i + 1] - c[i] > 0)
//             ++dem; // theo ma aski a(97)b(98)c(99).. ki tu sau - ki tu tr >0
//     }
//     cout << "can chen : " << 26 - dem << " ki tu";
// }
// // lay n vien da ra sao cho so da con lai co mau khac nhau
// // idea : dem so da bi trung lien ke (1 vong loop)
// void layda(char c[])
// {
//     int cnt = 0;
//     for (int i = 0; i < strlen(c) - 1; i++)
//     {
//         if (c[i + 1] - c[i] == 0)
//             ++cnt;
//     }
//     cout << cnt;
// }
// // kiem tra xau co the tao ra tu hello hay ko
// void hello(char c[])
// {
//     char hl[] = "hello"; // char hl[5]={'h','e','l','l','o'};
//     int cnt = 0;
//     int dem = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i] == hl[cnt])
//         {
//             ++dem;
//             ++cnt;
//         }
//     }
//     if (dem == 5)
//         cout << "YES";
//     else
//         cout << "NO";
// }
// // chuoi nhi phan lien ke : 01110 , 111110 , 0000111111 -> Yes ; 000111001 -> No ( chuoi so 1 lien ke -> yes)
// void binary(char c[])
// {
//     int cnt = 0;
//     for (int i = 0; i < strlen(c) - 1; i++)
//     {
//         if (((c[i + 1] - c[i]) < 0))
//             ++cnt;
//     }
//     if (cnt > 1 || (cnt == 0 && c[strlen(c) - 1] == '0'))
//         cout << "No"; // 0101011100 ; 0011110000111000111
//     else if ((cnt == 0 && c[strlen(c) - 1] == '1'))
//         cout << "yes"; // 00001111 ; 111111
//     else if (cnt == 1 && (c[strlen(c) - 1] == '1'))
//         cout << "no"; // 001100111
//     else
//         cout << "yes"; // 00001111000
// }
// // can xoa bao nhiu so 0 de tao chuoi nhi phan lien ke
// void binary2(char c[])
// {
//     int index = -1;
//     int cnt = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i] != '0' && index == -1) // truong hop co so 0 dang tr: 0000100011
//         {
//             index = i;
//         }
//         else
//         {
//             if (c[i] == '1')
//             {
//                 cnt += i - index - 1; // tinh so luong so 0 o giua 2 so 1
//                 index = i;
//             }
//         }
//     }
//     cout << cnt;
// }
// // kiem tra sdt cho 1 day so co the tao ra sdt hay khong neu co xoa bao nhieu ki tu de no tao ra sdt
// // ex: 09181231583902 (14 so) -> xoa 3 chu so dau -> 11 so (co so 8 dau tien ) -> output : 3 (yes)
// // ex : 098142985304535 (15 so) -> xoa 2 chu so dau va 2 chu so bat ki -> 11 so -> ouput : 4 (yes)
// // ex: 0912348281932 (13 so) -> ko the xoa de du 11 so va so 8 dau -> output : 0 (no)
// void sdt(char c[])
// {
//     int number;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i] == '8')
//         {
//             number = i;
//             break;
//         }
//     }
//     if ((strlen(c) - 11) >= (number) && strlen(c) >= 11)
//         cout << "yes";
//     else
//         cout << "No";
// }

// // sprintf(xau,dacta,number) ( chuyen int -> chuoi)
// // ham atoi(string) -> int  Ex: cout<< atoi("23") +3; -> 26

// // dem xau con chu so chan trong 1 xau
// // ex: 0123569 -> 2;6;012;12;012356;12356;2356;356;56
// // idea: ki tu chan(index) -> co index+1 xau con chan
// // c[i]-'0' -> kieu int c[i] ( '2' -> 2 )
// void demxau(char c[])
// {
//     int s = 0;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if ((int)c[i] % 2 == 0)
//             s += i + 1; // so chan co ma aski chan
//     }
//     cout << s;
// }
// // chuyen ki tu la ma sang dang thap phan
// // I (1) ; V(5) ;X(10);L(50);C(100);D(500);M(1000)
// // duyet nguoc neu ki tu trai co value(cnt[c[i]]) < value phai -> s (s=value ki tu cuoi) tru di nguoc lai thi cong
// // ex : IX -> 9
// void lama(char c[])
// {
//     int cnt[256] = {0};
//     for (int i = 0; i < strlen(c); i++)
//     {
//         if (c[i] == 'I')
//             cnt[c[i]] = 1;
//         else if (c[i] == 'V')
//             cnt[c[i]] = 5;
//         else if (c[i] == 'X')
//             cnt[c[i]] = 10;
//         else if (c[i] == 'L')
//             cnt[c[i]] = 50;
//         else if (c[i] == 'C')
//             cnt[c[i]] = 100;
//         else if (c[i] == 'D')
//             cnt[c[i]] = 500;
//         else
//             cnt[c[i]] = 1000;
//     }
//     int s = cnt[c[strlen(c) - 1]];
//     for (int i = (strlen(c) - 1); i > 0; i--)
//     {
//         if (cnt[c[i]] > cnt[c[i - 1]])
//             s -= (cnt[c[i - 1]]);
//         else
//             s += cnt[c[i - 1]];
//         cout << s << " ";
//     }
//     cout << s;
// }
// // dem so ki tu cua xau con khac nhau dai nhat
// // ex: abcccdez -> xau con cdez ( 4kitu) dai nhat -> output: 4
// // int max(int a, int b)
// // {
// //     return a > b ? a : b;
// // }
// int dem(char c[])
// {
//     int res = 1;
//     int cnt = 1;
//     for (int i = 0; i < strlen(c)-1 ; i++)
//     {
//         if (c[i] != c[i+1]) // chuoi xau con giong nhau thi ==
//           {  ++cnt;}
//         else
//         {
//             cnt = 1;
//         }
//     res=max(res,cnt);
//     }
//     return res;
// }
// // cong chuoi ki so
// void sum(char c1[],char c2[]) 
// {
//    long long s= atoi(c1) + atoi(c2);
//    cout <<s;
// }
// // cong theo logic chuoi
// // tao ham reverse ( or sd ham co san trong c++) 
// void reverse(int a[],int n) 
// {
//     int l=0,r=n-1;
//     while(l<r) 
//     {
//         int tmp=a[l];
//         a[l]=a[r];
//         a[r]=tmp; 
//        l++;r--;
//     }
// }
// // ham cong chuoi ki so -> kq la chuoi
// // vd :       x1 =[6,7,9],x2[9,8,9]
// // reverse -> x1=[9,7,6],x2[9,8,9]
// //cong     -> z = [8,6,6] nho=1 -> gan nho vao cuoi mang z -> z[8,6,6,1]
// // reverse (chuoi z) -> z=[1,6,6,8] 
// void sumstring(char c1[],char c2[]) 
// {
//     int n1=strlen(c1);int n2=strlen(c2);
//     int x1[n1];int x2[n1];int z[n1+1] ;// luu kq  (n1+1 -> co bien nho)
//     int n=0;// luu index cua z[]
//     // chuyen chuoi -> int -> luu vao mang
//     for (int i=0;i<strlen(c1);i++) x1[i]=c1[i]-'0';
//     for (int i=0;i<strlen(c2);i++) x2[i]=c2[i]-'0';
//      // them cac so 0 vao chuoi ngan hon
//     for (int i=n2;i<n1;i++) x2[i]=0;
//     // dao ngc chuoi
//     reverse(x1,n1);reverse(x2,n1);
//     // cong chuoi x1 ,x2
//     int  nho=0;
//     for (int i=0;i<n1;i++) 
//     {
//         int tmp=x1[i] +x2[i]+nho;
//         z[n++]=tmp%10;// luu kq
//         nho=tmp/10;
//     }
//     // truong hop cobien nho ngay dau chuoi so
//     if(nho) z[n++]=nho;
//     // in chuoi kq
//     for (int i=n-1;i>=0;i--) cout <<z[i];
// }
// // tru chuoi ki so -> kq la chuoi
// void sub(char c1[],char c2[]) 
// {
//     int n1=strlen(c1);int n2=strlen(c2);
//     int x1[n1],x2[n1],kq[n1];int n=0;
//     for (int i=0;i<strlen(c1);i++) x1[i]=c1[i]-'0';
//     for (int i=0;i<strlen(c2);i++) x2[i]=c2[i]-'0';
//     // dao ngc
//     reverse(x1,n1);reverse(x2,n1);
//     //chuyen so 0 vao chuoi ngan hon
//     for (int i=n2;i<n1;i++) x2[i]=0;
//     int nho=0;
//     for (int i=0;i<n1;i++) {
//         int tmp=x1[i]-x2[i]-nho;
//         if(tmp<0) 
//         {
//             kq[n++]=tmp+10;
//             nho=1;
//         }
//         else 
//         {
//             kq[n++]=tmp;
//             nho=0;
//         }
//     }
//     // dinh dang lai kq ( 0003 -> 3 ;0000-> 0)
//     int ok=0;
//     for (int i=n-1;i>=0;i--) 
//     {
//         if(ok==0 && kq[i]) 
//         {
//             ok=1;
//         }
//         if(ok) cout <<kq[i]; //(0003 ->3;12345;...)
//     }
//     if(ok==0) cout <<0; //(00000)
// }
// // int main()
// // {
// //     char c1[500],c2[500];
// //     cout << "Nhap chuoi1: ";
// //     gets(c1);
// //     cout <<"nhap chuoi2: ";
// //     gets(c2);
// //     if((strlen(c1)>strlen(c2)) || ((strlen(c1)==strlen(c2)) && (strcmp(c1,c2)>0)))
// //     // thu tu tu dien lon hon -> chuoi so do lon hon
// //    {  sub(c1,c2);}
// //    else {sub(c2,c1);}
// //    cout <<endl;
// // }

// // tinh tong cac chu so nguyen cua mot chuoi
// // Ex : 123->6
// void sumnumber(char c[]) 
// {
//     int n=strlen(c);int x[n];int s=0;
//     for (int i=0;i<strlen(c);i++) x[i]=c[i]-'0';
//     for (int i=0;i<n;i++) s+=x[i]; 
//     cout  <<s;
// }
// // kiem tra mot chuoi ki so co phai la so thuan nghich + toan so chan ?
// // ham kiem tra so thuan nghich trong chuoi
// int tn(char c[]) 
// {
//     int l=0;int r=strlen(c)-1;
//     while(l<=r) 
//     {
//         if(c[l]!=c[r]) return 0;
//         l++;r--;
//     }
//     return 1;
// }
// // ham kt so chan trong chuoi
// int evan(char c[]) 
// {
//     for (int i=0;i<strlen(c);i++) 
//     {
//         if(c[i]-'0'%2==1) return 0;
//     } return 1;
// }
// // ham kt so tn + chan
// void evan_tn(char c[]) 
// {
//     if(evan(c) && tn(c)) cout <<"yes";
//    else cout <<"no";
// }
// // ham kt chuoi tat ca cac ki tu co phai la so dep ( so nt va tong cac chu so = n(tan cung =0))
// // ham kt nt
// int nt(char n) 
// {
//   for (int i=2;i<sqrt(n-'0');i++) 
//   {
//     if((n-'0')%2==0) return 0; 
//   } return (n-'0')>1;
// }
// // ham kt chuoi nt
// int ktnt(char c[]) 
// {
//     for (int i=0;i<strlen(c);i++) 
//     {
//         if(nt(c[i])==0)  return 0;
//     } return 1;
// }
// //ham tinh sum chuoi ki so co tan cung bang 0 hay khong
// int su(char c[]) 
// {
//     int s=0;
//     for (int i=0;i<strlen(c);i++) 
//     {  
//        s+=c[i]-'0';
//     }
//     if(s%10==0) return 1;
//     else return 0;
// }
// // ham solve so dep (nt + sum co chu so tan cung bang 0) 
// void sodep(char c[]) 
// {
//   if( ktnt(c) && su(c)) cout <<"yes";
//   else cout <<"No";
// }
// // sodep2 : chi chua cac so nt va no la chuoi so tn
// void sodep2(char c[]) 
// {
//     if(tn(c) && ktnt(c)) cout <<"yes";
//     else cout <<"no";
// }
// // kiem tra xem chuoi ki so co chia het cho 6 ( chia het cho 2 vs 3)
// // ham kt chia het cho2
// int chia2(char c[]) 
// {
//     return (c[strlen(c)-1] - '0' )%2 == 0;
// }
// // ham kt so chia het cho3
// int chia3(char c[]) 
// {
//     int s=0;
//     for (int i=0;i<strlen(c);i++) s+=c[i]-'0';
//     if(s%3==0) return 1;
//     else return 0;
// }
// // ham kt chia het 6
// int chia6(char c[]) 
// {
//     if(c[strlen(c)-1]-'0'%2==1) return 0;
//    int s=0;
//     for (int i=0;i<strlen(c);i++) s+=c[i]-'0';
//     if(s%3==0) return 1;
//     else return 0;
// }
// // so chia het cho 4 neu 2 chu so tan cung chia het cho 4
// int chia4(char c[]) 
// {
//    if(strlen(c)==1) 
//    {
//     if((c[0]-'0') %4==0 )return 1;
//    }  
//    else 
//    {
//     return (((c[strlen(c)-1] - '0')+(c[strlen(c)-2] - '0')*10)  % 4 )==0 ;
//    }
   
// }
// // kiem tra so co chia het cho 8 hay khong ( 3 chu so cuoi chuoi chia het cho 8 )
// // truong hop co 2 hoac 1 chu so -> tach ra 
// int chia8(char c[]) 
// {
//     if(strlen(c)==1) if(c[0]-'0' %8==0) return 1;
//     else return 0;
//     if(strlen(c)==2) 
//     {
//         return ((c[strlen(c)-1]-'0') + (( c[strlen(c)-2]-'0')*10)) %8==0;
//     }
//     if(strlen(c)>=3) 
//     {
//          return ((c[strlen(c)-1]-'0') + (c[strlen(c)-2]-'0') +(( c[strlen(c)-3]-'0')*10)) %8==0;
//     }
// }

// // tim so du vs so nguyen lon
// int mod(char c[],int m) 
// {
//      int res=0;
//     for (int i=0;i<strlen(c);i++) 
//     {
//        res=(res*10 +c[i]-'0')%m;
//     } 
//     return res;
// }
// // ham gcd
// int gcd(long long a, long long b) {
//     if(b==0) return a;
//     else return (b,a%b);
// }
// // muon tim gcd (a,b) vs a b 2 so vo cung lon -> ta a mod b truoc bang ham mod roi moi dung ham gcd
// // (a^b)%c = ((a%c)^b) %c : ham powmod  ( a*c)%d =(a%d)*(a%c)%d
// // ham powmod
// int powmod(int a,int b,int M) {
//     int res=1;
//     while(b) {
//         if(b%2==1) {
//             res*=a;
//             res/=M;
//         }
//         a*=a;
//         a/=M;
//         b/=2;
//     } return res;
// }
// // 1101 -> (1*2+1=3) -> (3*2+0=6) -> (6*2+1=13) (bat dau tu trai -> phai : lay 1 or 0 * 2 + gia tri cua vi tri tiep theo )
// // in ra xau co thu tu tu dien lon nhat ma giu nguyen xau cu
// void inxau(char c[]) 
// {
//     int cnt[356]={0};
//     for (int i=0;i<strlen(c);i++) {
//         cnt[c[i]]++;
//     }
//     for (int i=255;i>=0;i--) {
//         if(cnt[i]) {
//             for (int j=0;j<cnt[i];j++) cout <<(char)i;
//         }
//     }
// }
//  int main() 
// {
//  char c[500];cout <<"Nhap chuoi: ";gets(c);
//  inxau(c);
// }


// *Bai tap string 
// #include <bits/stdc++.h>
// using namespace std;
// //Xoa tu trong cau, ko co dau cach o tu cuoi cung
// void bai1() 
// {
//     string s1,s2;
//     cout <<"Nhap chuoi : ";
//     getline(cin,s1);
//     cout <<"Nhap tu can xoa: ";
//     getline(cin,s2);
//     stringstream ss (s1);
//     vector <string> v;
//     string tmp ;
//     while(ss>>tmp) 
//     {
//         if (tmp!=s2) 
//         {
//            v.push_back(tmp);
//         }
       
//     }
//     for (int i=0;i<v.size();i++) 
//     {
//         cout <<v[i];
//         // ko in dau cach o cuoi chuoi
//         if(i!=v.size()-1) cout <<" ";
//     }
// }

// //Tao email
// void bai2() 
// {
   
//     string s,d,c;
//     cout <<"Nhap chuoi: ";
//     getline(cin,s);
//     cin.ignore();
//     vector<string> v;
//     stringstream ss (s);
//     string tmp;
//     while(ss>>tmp) 
//     {
//         v.push_back(tmp);
//     }
//     for (int i=0;i<v.size();i++) 
//     {
//         for (auto &x : v[i] ) x=tolower(x);// lower case
//         for (auto &x : v[0]) {d=x;break;}// lay ki tu dau cua tu thu nhat
//         for (auto &x : v[1]) {c=x;break;} // lay ki tu dau cua tu thu hai
//     }
//     cout << v[v.size()-1] + d + c + "@gmail.com";
    
// }
// //c2
// void bai2_tech28() 
// {
//     string s;cout <<"Nhap chuoi: ";
//     getline (cin,s);
//     for (int i=0;i<s.size();i++) s[i]=tolower(s[i]);
//     stringstream ss (s);
//     string token;
//     vector<string> v;
//     while(ss>>token) 
//     {
//         v.push_back(token);
//     }
//     // lowercase
//     cout << v[v.size()-1];
//     for (int i=0;i<v.size()-1;i++) 
//     {
//         cout <<v[i][0];// duyet toi ki tu dau cua tu thu i
//     }
//     cout <<"@gmail.com";
// }
// // tao email (neu trung ten thi them stt)
// void bai2_2() 
// {
//  int t;cout <<"Nhap so testcase: ";cin>>t;
//  cin.ignore(); // loai bo dau enter 
//  map<string,int> mp; // danh dau tan xuat cua chuoi
//  while(t--) 
//  {
//     string s,res="";cout <<"Nhap chuoi: ";
//     getline(cin,s);
//     for (int i=0;i<s.size();i++) s[i]=tolower(s[i]);
//     stringstream ss (s);
//     string token;
//     vector<string> v;
//     while(ss>>token) 
//     {
//         v.push_back(token);
//     }
//     for(int i=0;i<v.size()-1;i++) 
//     {
//         res+=v[i][0];// ex: pham minh chuong -> res= pm : ki tu dau cua moi tu
//     }
//     if(mp[res]==0) cout << res + v[v.size()-1] + "@gmail.com"<<endl;
//      else 
//      {
//          cout << res + v[v.size()-1] << mp[res]+1<<"@gmail.com"<<endl;
//      }
//      mp[res]++;
//  }
// }
// // chuan hoa ten 1 ( Xxx Xxx XXX)
// void bai3() 
// {
//   string s;cout <<"Nhap chuoi: ";
//   getline(cin,s);
//   for (int i=0;i<s.size();i++) s[i]=toupper(s[i]);
//   stringstream ss (s);
//   string token;
//   vector<string> v;
//   while(ss>>token) {
//     v.push_back(token);
//   }
//   for (int i=0;i<v.size()-1;i++) 
//   {
//      for (auto &x :v[i]) x=tolower(x); // viet thuong tat ca tu (ko co tu cuoi : i< v.size()-1)
//      for (auto &x:v[i]) {x=toupper(x);break;} // viet hoa ki tu dau cua moi tu

//   }
//   for (int i=0;i<v.size();i++) 
//   {
//     if(i==v.size()-2) 
//     {
//         cout <<v[i]<<","<<" ";
//     }
//     else cout <<v[i]<<" ";
//   }
// }
// // ham viet hoa
// void viethoa(string &s) {
//     for (int i=0;i<s.size();i++){
//         s[i]=tolower(s[i]);
//     }
// }
// // ham chuan hoa ten viet hoa ki tu dau moi tu
// void chuanhoa(string &s) {
//     s[0]=toupper(s[0]);
//     for (int i=1;i<s.size();i++){
//         s[i]=tolower(s[i]);
//     }
// }
// // chuan hoa ten 2 (Xxx Xxx Xxx)
// void bai4() 
// {
//     string s;cout <<"Nhap chuoi: ";
//     getline(cin,s);
//     viethoa(s);
//     stringstream ss (s);
//     string token;
//     vector<string> v;
//     while(ss>>token) 
//     {
//         v.push_back(token);
//     }
//     for (int i=0;i<v.size();i++) 
//     {
//         chuanhoa(v[i]);
//     }
//     for (int i=0;i<v.size();i++) 
//     {
//         if(i==0) 
//         {
//             cout <<v[i]<<","<<" ";
//         }
//         else cout <<v[i]<<" ";
//     }
// }
// // Xau Pangram
// void bai5_1_tech28() 
// {
//     string s;cin>>s;
//     set<char> se;
//     for (char x:s) se.insert(x);
//     if(se.size()==26) cout <<"yes";
//     else cout <<"No";
//     cout <<endl;
//     for (auto &x:se) cout <<x<<" ";
// }
// // Xau Pangram
// void bai5_2_tech28() 
// {
//     string s;cin>>s;int k;cin>>k;
//     set<char> se;
//     for (auto &x:s)se.insert(x);
//     if(se.size()- 26<=k) cout <<"yes";else cout <<"no"; 
// }
// // dem tu trong xau
// void bai6() 
// {
//     string s;
//     cout <<"Nhap chuoi: ";
//     getline (cin,s);
//     stringstream ss(s);
//     string token;
//     int cnt=0;
//     while(ss>>token) 
//     {
//         ++cnt;
//     }
//     cout <<"Co "<<cnt<<" tu";
// }
// // dau cuoi giong nhau
// void bai7() 
// {
// string s;
// cout <<"Nhap chuoi: ";
// getline(cin,s);
// int cnt=0;
// for (int l=0;l<s.size()-1;l++) 
// {
//     for (int i=l+1;i<s.size();i++) 
//     {
//       if(s[l]==s[i]) ++cnt;
//     }
// }
// cout << "co "<<s.size()+cnt<<" chuoi con";
// }
// // c2
// // idea : output = size(s) + n.(n-1)/2 (n : tan xuat cua ki tu) C2n
// void bai7_tech28_c2() 
// {
//     string s;cout <<"Nhap chuoi: ";
//     getline(cin,s);
//     map <char,int> mp;
//     // danh dau tung ki tu trong chuoi s
//     for (auto x :s) 
//     {
//         mp[x]++;
//     }
//     // khoi tao bang size s
//     long long ans =s.size();
//     // second = tan xuat cua ki tu trong chuoi 
//     for (map <char,int> ::iterator it=mp.begin();it!=mp.end();it++) 
//     {
//         ans+=(((*it).second) * (((*it).second)-1) /2);// ct to hop 
//     }
//     cout <<ans;
// }
// // c3
// void bai7_tech28_c3() 
// {
//     string s;
//     cout <<"Nhap chuoi: ";
//     getline(cin,s);
//     int a[256]={0};
//     //danh dau ki tu trong chuoi s
//     for (auto &x:s) 
//     {
//         a[x]++;
//     }
//     long long ans=s.size();
//     for (int i=0;i<256;i++) 
//     {
//         if(a[i]) ans+=a[i]*(a[i]-1)/2; // ct to hop
//     }
//     cout <<ans;
// }

// // ki tu khong lap
// void bai8() 
// {
//     string s;cout <<"Input ur str: ";
//     getline(cin,s);
//     map <char,int> mp;
//     // danh dau tung ki tu trong chuoi
//     for (auto &x:s) 
//     {
//         mp[x]++;
//     }
//     cout <<"Ki tu khong lap: ";
//     for (map <char,int> :: iterator it=mp.begin();it!=mp.end();it++) 
//     {
//         if(((*it).second)==1) cout <<((*it).first);
//     }
// }
//     // c2
// void bai8_c2() {
//     string s;
//     getline(cin,s);
//     int a[256]={0};
//     for (auto&x:s) a[x]++;
//     for (int i=0;i<256;i++){
//         if(a[i]==1) cout <<(char)i<<" "; 
//     }
// }
// // lon nhat,nho nhat
// void bai9() 
// {
//    int sum,count ;cout <<"Nhap tong vs so luong chu so:  ";cin>>sum>>count;
//    int max[count]={0};int min[count]={0};
//    int temp=sum;
//    for (int i=0;i<count;i++) 
//    {
//     if(sum>=9) 
//     {
//         // dua so 9 vao dau so max
//         max[i]=9;sum-=9;
//     }
//     else if(sum!=0) 
//     {
//         max[i]=sum;sum=0;
//     }
//     else break;
//    }
//    temp--; // cong 1 vao hang dau tien cua so be ( lay 1 don vi tu tong )
//    for (int i=count-1;i>0;i--) 
//    {
//     // dua so 9 vao cuoi so min
//      if(temp>=9) 
//      {
//         min[i]=9;temp-=9;
//      }
//      else if (temp!=0)
//      {
//         min[i]=temp;temp=0;
//      }
//      // con du vi tri thi vi tri do bang 0 do min[count]={0};
//      else break;
//    }
//    cout <<temp<<endl;
//    min[0]=temp + 1; // chu so dau cua so be
//    for (int i=0;i<count;i++) cout <<max[i];
//    cout <<" ";
//    for (int i=0;i<count;i++) cout <<min[i];
// }
// // so chuoi khac nhau
// void bai10() 
// {
//     string s;
//     int n;cout <<"Nhap so chuoi: ";cin>>n;
//     cin.ignore();
//     set<string> se;
//     for (int i=0;i<n;i++) 
//     {
//         getline(cin,s);
//         se.insert(s);
//     }
//     cout <<se.size();
// }
// // so dep: so thuan nghich + toan so chan

// bool bai11(string &s) {
//     int cnt=0;
//     for (int i=0;i<=(s.size()-1)/2;i++){
//            if(((s[i]-'0')%2==0) && ((s[i]-'0')==(s[s.size()-1-i]-'0'))) 
//            ++cnt;
//     }
//     return ( cnt==s.size()/2-1 || cnt==s.size()/2);
// }
// // cach 2
// bool check(string s) {
//     string t=s;
//     reverse(s.begin(),s.end());
//     if(t!=s) return false;
//     for (auto &x:s) {
//         if((x-'0')%2!=0) return false; 
//     }    
//     return true;
// }
// // tim so lon nhat nho hon N
// void bai12(){
//     string s;
//     getline(cin,s);
//    int a[256]={0};
//    for (auto &x:s) a[x]++;
//    for (int i=255;i>=0;i--) {
//     if(a[i]){
//         int maxvalue=i ;
//         for (int j=i-1;j>=0;j--) {
//             if(a[j]) for (int i=0;i<a[j];i++) cout <<(char)j;
//         }
//         cout <<(char)maxvalue;
//         break;
//          }
//    }
    
// }

// // tech 28
// void bai12_c2() {
//     string s;
//     getline(cin,s);
//     int i=s.size()-2;
//     while(i>=0 && s[i]<s[i+1]) --i;
//     if(i==-1) {cout <<"-1\n";return;}
//     int j=s.size()-1;
//     while(s[i]<=s[j] || s[j-1]==s[j] && s[j]<s[i]) {
//         --j;
//     }
//     swap (s[i],s[j]);
//     if(s[0]=='0') {
//         cout <<"-1\n";
//     }
//     else cout<< s<<endl;
// }
// // co the chuyen doi thanh xau co 2 ki tu lien ke khac nhau -> yes
// // idea: so ki tu giong nhau -> dem . neu dem -so ki tu khac nhau <=1 -> yes
// void bai13(){
//     int cnt=0;
//     string s;getline(cin,s);
//     map<char,int> mp;
//     for(auto &x:s) {
//         mp[x]++;
//     }
//     int max=0;
//     for (map<char,int>:: iterator it=mp.begin();it!=mp.end();it++) {
//         if(((*it).second)==1) ++cnt;
//         else {
//         if((*it).second>max) max=(*it).second;
//         }
//     }
//     if(abs(max-cnt)>1) cout<<"NO";
//    else  cout <<"YES";
// }

// // bai 14 chuyen doi so max min ( 5->6 , 6-> 5) 
// //ex: 645 666 -> min = 1100 , max = 1312
// // ham tinh min
// void min_value(string a,string b){
//     for (auto &x:a) {
//         if(x=='6') x='5';
//     }
//     for (auto &x:b) {
//         if(x=='6') x='5';
//     }
//     cout <<"Min la: "<<stoll (a) + stoll (b)<<endl;
// }
// void max_value (string a,string b) {
//     for (auto &x:a) {
//         if(x=='5')x='6';
//     }
//     for (auto&x:b) {
//         if(x=='5') x='6';
//     }
//     cout <<"Max la: "<<stoll (a)+stoll (b);
// }
// void bai14(){
//   min_value("645","666");
//   max_value("645","666");
// }

// // tinh tong cac so co trong xau
// using ll= long long;
// void sum(string s) {
//     ll sum=0;ll S=0;int d=0;
//     for (int i=0;i<s.size();i++) {
//     while(isdigit(s[i])) {
//     sum=sum*10 + (s[i]-'0');
//       i++;
//  }
//   S+=sum;
//   sum=0;
//     }
//     cout << "tong la: "<<S;
// }
// // tim so lon  nhat co trong xau
// void max(string s) {
//     set<int> se;
//     ll sum=0;
//     for (int i=0;i<s.size();i++) {
//         while(isdigit(s[i])) {
//            sum=sum*10 + (s[i]-'0');++i;
//         }

//         se.insert(sum);
//         sum=0;

//     }
//    cout <<*(se.rbegin());
// }
// int main() 
// {
  
//     max("1abc233chong100");
// }

// *Bt String part 2 :
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <string>
// #include <map>
// using namespace std;

// //bai17
// // nhap chuoi va k -> in ra so xau con co k ki tu khac nhau
// // ham return so ki tu khac nhau trong xau
// int check(string s) {
//     int cnt=0;
//     set<char> se;
//     for (int i=0;i<s.size();i++) {
//         se.insert(s[i]);
//     }
//     return se.size();
// }
// void bai17() {
//     string s;
//     getline (cin,s);
//     int k;cin>>k;
//     int dem=0;
//     for (int i=0;i<s.size()-1;i++) {
//         for (int j=i+1;j<s.size();j++) {
//             if(check((s.substr(i,j-i+1)))==k) dem++;
//         }
//     }
//     cout << dem;
// }

// // bai18
// // 
// void bai18() {
//      string s1,s2;getline(cin,s1);getline(cin,s2);
//   string token1;
//   string token2;
//   vector <string> v1;
//   vector <string> v2;
//   stringstream ss (s1);
//   while(ss>>token1) {
//     v1.push_back(token1);
//   }
//   stringstream ss2(s2);
//   while(ss2>>token2) {
//     v2.push_back(token2);
//   }
//   map <string,int> mp;
//   for (auto&x:v1) {
//     mp[x]=1;
//   }
//   set <string> se1;// in theo thu tu tu dien
//   cout <<"Tu chi xuat hien trong xau thu hai: ";
//   for (auto &x:v2){
//     if(!mp[x]) {se1.insert(x);mp[x]=1;} // chp mp[x]=1 -> tranh bi lap
//     mp[x]=2;
//   }
//   for (auto &x:se1) cout <<x<<" ";
//   cout <<endl;
//   set <string> se2;
//   cout <<"Tu cho xh trong xau thu nhat: ";
//   for (auto &x:v1) {
//     if(mp[x]==1) {se2.insert(x); mp[x]=0;} // mp[x]=0 -> tranh bi lap
//   }
//   for (auto &x:se2) cout <<x<<" ";
// }
//   // bai 19 :bien so xe 
//   // ham lay 5 so cuoi cua xe
//   string soxe(string s) {
//     string kq="";
//     for (int i=0;i<s.size();i++) {
//         if(s[i]==' ') {
//             for (int j=i+1;j<s.size();j++) {
//                 while(isdigit(s[j])) {
//                     kq+=s[j]; j++;
//                 }
//             }
//         }
//    }
//         return kq; 
//   }
//   // ham kiem tra so do co tang chat hay khong
//   int tangchat(string s) {
//      for (int i=0;i<s.size()-1;i++) {
//         if(s[i+1]<=s[i] ) return 0; 
//      } return 1;
//   }
// // ham kiem tra tat ca cac so co giong nhau ko
// bool giongnhau(string s) {
//    string sn=s;
//    reverse(s.begin(),s.end());
//    return s==sn;
// }
// // 3 chu so dau va 2 chu so cuoi giong
// int giongnhau2(string s) {
//    string s1=s.substr(0,3);
//    string s2=s.substr(3,2);
//    if(giongnhau(s1) && giongnhau(s2) ) return 1;
//    return 0;
// }
// // ham kt chi toan so 6 va 8 
// int locphat(string s) {
//     for (int i=0;i<s.size();i++) {
//         if(s[i]!='6' && s[i]!='8') return 0;
//     }
//     return 1;
// }

// void solvebai19() {
   
//     int t;cin>>t;
//     cin.ignore();
//     while(t--) {
//       string s;getline(cin,s);
//       if(tangchat(soxe(s)) || giongnhau2(soxe(s)) || giongnhau(soxe(s)) || locphat(soxe(s))) {
//         cout  <<"so dep "<<endl;
//     } 
//     else cout <<"Ko phai so dep "<<endl;
//     cin.ignore();
//     }
    
// }

// // bai 20 : kiem tra 1 xau chu so co day du tat ca so 0 -> 9 ko
// // co ki tu thi in invalid
// void bai20() {
//     int t;cin>>t;while(t--){
//     cin.ignore();
//     string s;getline(cin,s);
//     int a[256]={0};int cnt=0;
//     for (auto &x:s) {
//        if(isdigit(x)) a[x]=1;
//     }
//     for (int i=0;i<256;i++) {
//         if(a[i]) ++cnt;
//     }
//     int cnt2=0;
//     if(cnt==10) cout <<"YES"<<endl;
//     else {
//         for (auto&x:s) {
//             if(isdigit(x))++cnt2;
//         }
//         if(cnt2<s.size()) cout <<"INVALID"<<endl; // co ki tu ko phai so
//         else cout <<"NO"<<endl;// ko du 9 so
//     }
//     }
   
// }
// // bai20 cach 2
// void bai20_c2() {
//     int t;cin>>t;
//     while(t--) {
//     cin.ignore();
//     string s;getline(cin,s);
//     set<char>  se;
//     for (auto &x:s) se.insert(x);
//     for (auto &x:s) {
//         if(!isdigit(x)){ cout <<"INVALID";break; }
//     }  
//     if(se.size()==10) cout <<"YES";
//     else cout <<"NO";

//         }
//     }

// // bai 20.2
// // tim xau con ngan nhat chua tat ca cac ki tu cua xau 
// // ex: s1:timetopractice , s2=toc -> out: toprac
// void bai20_1() {
    
//     string s1;getline(cin,s1);
//     string s2;getline(cin,s2);
//     map<char,int> mp;
//     // danh dau ki tu dau va cuoi cua xau s2 can tim ngan nhat trong s1
//     mp[s2[0]]=1;mp[s2[s2.size()-1]]=3;
//     // danh dau cac ki tu o giua 
//     for (int i=1;i<s2.size()-1;i++) mp[s2[i]]=2;
//     int d,c;
//     for (int i=0;i<s1.size();i++){
//         if(mp[s1[i]]==2) break;
//       else if(mp[s1[i]]==1) d=i;
//     }

//     //
//     for (int i=s1.size()-1;i>=0;i--){
//      if(mp[s1[i]]==2) break;
//      else if(mp[s1[i]]==3) c=i;         
//     }
//     cout <<s1.substr(d,c-d+1);
// }
// // bai20-2 toi uu hon tech 28
// // s1= zoomlazapzo ,s2 =oza -> apzo
// void bai20_1_tech28(){
//     string s1,s2;cin>>s1>>s2;
//     int ans=INT_MAX,left=0,cnt=0,idx=-1;
//     int dem1[256]={0},dem2[256]={0};
//     for (auto &x:s2) dem2[x]++;
//     for (int i=0;i<s1.size();i++) {
//         dem1[s1[i]]++;
//         // danh dau xau con (nhung chua phai ngan nhat) 
//         if(dem1[s1[i]] <=dem2[s1[i]]) {++cnt;}
//         // da du cac ki tu cua xau s2 trong xau s1
    
//         if(cnt==s2.size()) {
//             // i dang la vi tri cuoi cua xau con
//             // neu tan xuat cua ki tu do >= tx trong con hoac ki tu do ko co trong xau con
//             // -> day left qua ben phai de duyet ki tu tiep theo
//             while(dem1[s1[left]] >dem2[s1[left]] || dem2[s1[left]]==0 ) {
//                 // neu tan xuat lon hon thi tru di vi dang tim xau con ngan nhat
//                if(dem1[s1[left]]>dem2[s1[left]]) {dem1[s1[left]]--;}
//                ++left;
//             }
//             // loop end -> left return index dau tien cua xau con ngan nhat
//          idx=i;
//         }
         
//     }
//     if(idx==-1) cout <<-1;
//     else cout <<s1.substr(left,idx-left+1)<<endl;
// }


// // tim do dai xau con nho nhat chua tat ca cac ki tu trong xau 
// void bai20_2(){
//     string s;cin>>s;
//     set <char> se;
//     for (auto &x:s) se.insert(x);
//     cout <<se.size();
// }
// // in ra xau con nhỏ nhat chua tât cả các kí tự khác nhau trong xâu mẹ
// void bai21(){
//     string s;cin>>s;map<char,int> mp;
//     // danh dau cac ki tu khac nhau
//     // chuchuo-> 2 2 2 2 2 2 1
//     for (auto &x:s) mp[x]++;
//     // kich thuoc map -> so luong ki tu khac nhau trong xau (size of key khac nhau)
//     int len=mp.size(); 
//     cout <<len;
//     int dem[256]={0};
//     int cnt=0,left=0,ans=INT_MAX,idx=-1;
//     for (int i=0;i<s.size();i++){
//         dem[s[i]]++;
//         if(dem[s[i]]==1) ++cnt;
//         if(cnt==len) {
//             // i dang la vi tri cuoi cua xau con ngan nhat
//             while(dem[s[left]]>1) {
//                 dem[s[left]] --;
//                 // day con tro left qua ben phai de tim xau con ngan nhat
//                 left++;
//               }
//               // loop end -> left la vi tri dau cua xau con ngan nhat
//         }
//          int idx=i;
//     }
//     if(idx==-1) cout <<-1;
//     else cout <<s.substr(left,idx-left+1)<<endl;
// }

// // kiem tra xau co sumstring  ?
// // input : 123436 -> 12 +34 =36 -> mot xau sumstring
// string sum(string a,string b){
//     if(a.length()<b.length()) swap(a,b);
//     reverse(a.begin(),a.end());
//     reverse(b.begin(),b.end());
//     int m=a.length(); int n=b.length();
//     // them so 0 vao xau nho hon 
//     // string(so ki tu muon them , ki tu)
//     b+=string(m-n,'0');
//     // xau luu kq
//     string sum="";
//     int nho=0,tmp=0;
//     for (int i=0;i<m;i++){
//         tmp=(a[i]-'0') + (b[i]-'0') +nho;
//         //a +'0' -> chuyen a qua ma aski (92(int) -> 92(aski) -> a (char))
//         sum+=(char)(tmp%10 + '0');
//         nho=tmp/=10; 
//     }
//     // truong hop co bien nho trong lan cong cuoi cung ( dau tien cua 2 so )
//     if(nho) {
//         sum+=(char)(nho +'0');
//     }
//     reverse(sum.begin(),sum.end());
//     return sum;
// }
// // ham de quy duyet tung cap sumstring
// bool kt(string s, int left , int len1, int len2 ){
//    string s1=s.substr(left,len1);
//    string s2=s.substr(left+len1,len2);
//    cout <<s1<<" "<<s2<<endl;
//    string s3=sum(s1,s2);
//    // neu xau sum co chieu dai lon hon cac ki tu con lai trong xau -> return false
//    if(s3.length() > (s.length()-left-len1-len2)) return false;
//     // kiem tra xau s3 co bang cai xau dang xet ko
//     if(s3==s.substr(left+len1+len2,s3.length())) 
//     {
//        return true;
//        // goi de quy dich xau de xet cap tiep theo
//        return  kt(s,left+len1,len2,s3.length());
//    } 
//    return false;
// }
// // solve sumstring
// void bai22(){
//     string s;cin>>s;
//     // i, j  : len1 vs len2 
//     for (int i=1;i<s.length();i++){
//         // len 2(j) =len s - len1(i)
//         for (int j=1;j<=s.length()-i;j++){
//             if(kt(s,0,i,j)) cout <<"Yes";
//             return;
//         }
//     }
//     cout <<"No";
// }
// // ham tinh giai thua
// int s=1;
// int gt1(int n){
//     if(n) {
//         s*= n;
//         return gt1(n-1);
//     }
//     return s;
// }

// long long gt[22];
// void init(){
//     gt[0]=1;
//     for (int i=1;i<=20;i++){
//         gt[i]=i*gt[i-1];
//     }
// }
// // bai 23 rgb 
// // input n,r,g,b -> tim tat ca cac cap ma n= r+g+b;
// void bai23(){
//      int n,g,r,b,res=0;
//      cin>>n>>g>>r>>b;
//      for (int R=n;R>=r;R--){
//          for (int G=n-R;G>=g;G--) {
//              int B=n-G-R;
//              if(B>=b) {
//                 // n=4 ; r=1 , g=2 , b=1 -> 4!/1!*2!*1! =12 
//                 // n=4 ; r=1 , g=1 , b=2 -> 4!/1!*1!*2! =12 
//                 // n=4 ; r=2 , g=1 , b=1 -> 4!/2!*1!*1! =12 

//                 res+=gt[n] /  (gt[R] * gt[G] * gt[B]);
//              }
//          }
//      }
//      cout <<res;
// }
// // in chuoi dao nguoc
// void bai24(){
//     string s; getline (cin,s);
//     string token="";
//     stringstream ss(s);
//     vector<string> v;
//     while(ss>>token){
//         v.push_back(token);
//     }
//    for (int i=v.size()-1;i>=0;i--) {
//     cout <<v[i]<<" ";
//    }
    
// }
// // tich giai thua cac chu so
// void bai25(){
//     int n;cin>>n;
//     string s;
//     n=s.length();
//     cin>>s;
//     for (int i=0;i<s.size();i++){
//         if(s[i]=='1' || s[i]=='0') {
//            s.erase(i,1);
//         }
//         else {
//             if(s[i]=='4') {
//         s.replace(i,1,"223");
//         }
//         else if(s[i]=='6') {
//             s.replace(i,1,"35");
//         }
//         else if(s[i]=='8') {
//             s.replace(i,1,"2227");
//         }
//         else if(s[i]=='9'){
//             s.replace(i,1,"3327");
//         }
//         }
        
//     }
//     // buble sort
//     // for (int i=0;i<s.size();i++){
//     //     for (int j=i+1;j<s.size();j++){
//     //         if((s[j]-'0') >(s[i]-'0')) swap(s[j],s[i]);
//     //     }
//     // }
//     // sx bang ham
//     sort(s.begin(),s.end(),greater<char>());
//     cout <<s;
// }
// // xoa bo chuoi 100 va in ra length cua chuoi con bi xoa
// void bai27(string s){
//     int cnt=0;
//     for (int i=0;i<s.size()-2;i++){
//    if(s=="")break;
//    if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='0') {
//         s.erase(i,3);
//         cnt+=3;
//         i=-1;
//    }
//     }
//    cout <<cnt; 
//    // ham gcd : __gcd(a,b)
// }
// // ham sap xep tu theo thu tu tu dien
// bool compare(pair<string,int> a, pair <string ,int > b){
//     if(a.second!=b.second) 
//     return a.second>b.second;// return theo tan so giam dan
//     return a.first<b.first;// return theo thu tu tu dien 
// }
// // ham kiem tra delin
// bool check(char c){
//     return c=='.' || c=='?' || c=='!' || c=='*' || c=='-';
// }
// void bai29(){
 
//     string s;getline(cin,s);
//     map<string,int> mp;
//     string tmp="";
//     for (int i=0;i<s.length();i++){
//         if(s[i]==' ') continue;
//         while(i<s.length() && !check(s[i])) {
//             tmp+=s[i];
//             i++;
//         }
//      mp[tmp]++;
//      tmp="";
//     }
//     // dua tung cap tu - tanxuat vao vecto
//     vector <pair<string,int>> v;
//     for (auto &x:mp) {
//         v.push_back(x);
//     }
//     // sort theo ham compare
//     sort(v.begin(),v.end(),compare);
//     for (auto&x:v) cout <<x.first<<" "<<x.second<<endl;
// }
// int main() {
//    bai29();
//  }


//  // for (map<char,int> :: iterator it =mp.begin();it!=mp.end();it++){
//     //   cout <<(*it).first<<" "<<(*it).second<<endl;
//     // }
//     // int d,c;
//     // for (int i=0;i<s1.size();i++) {
//     //     if(mp[s1[i]]==1) {d=i;break;}
//     //         else if(mp[s1[i]>1]) {
//     //         while(mp[s1[i]]>2 ) {i++;mp[s1[i]]--;}
//     //         d=i; break;
//     //         }
//     // }
//     // for (int i=s1.size()-1;i>=0;i--) {
//     //     if(mp[s1[i]]==1) {c=i;break;}
//     //         else if(mp[s1[i]>1]) {
//     //         while(mp[s1[i]]>2) {i--;mp[s1[i]]--;}
//     //         c=i; break;
//     //         }
//     // }
//     //     if (d != -1 && c != -1) {
//     //     cout << s1.substr(d, c - d + 1) << endl;
//     // } else {
//     //     cout << "No common substring found." << endl;
//     // }

//     * BT String part 3:
//     #include <bits/stdc++.h>
// #include <string.h>


// using namespace std;
// // 1101-> 13
// int res=0,cnt=0;
// int binary(int n){
//    while(n){
//     res+=(n%10)*(pow(2,cnt++));
//     return binary(n/10);
//    }
//    return res;
// }
// // 13 -> 1101
// string s="";
// string binary2(int n){
//     while(n){
//       s+=to_string((n-((n/2)*2)));
//       return binary2(n/2);
//     }
//      reverse(s.begin(),s.end());
//      return s;
// }
// // bai1: so nhi phan chia het cho 2^x;
// // duyet nguoc ma nhi phan neu co >=x so khong o cuoi thi no chia het cho 2^x ( neu co so 1 thi ko chia het)
// void bai31(){
//     int t;cin>>t;
//     while(t--){
//         int cnt=0;
//         string n;int x;cin>>n>>x;
//         for (int i=n.size()-1;i>=0;i--) {
//             if(n[i]=='0')  ++cnt;
//             else break;
//             if(cnt>x) break;
//         }
//         if(cnt>=x) cout <<"Yes";
//         else cout <<"No";
//     }
// }
// // so nhi phan co chia het cho 5 ?
// void bai32(){
//     int t ;cin>>t;
//     while(t--){
//         string s;cin>>s;
//         int sum=0;
//         for (int i=0;i<s.size();i++){
//             sum=((sum*2) + (s[i]-'0'))%5;
//         }
//         if(sum%5==0) cout <<"yes";
//         else cout <<"no";
//     }
// }
// // phep chia du cua so nguyen lon 
// // 1234  m=5-> (1*10 + 2) % 5 = 2 , (2*10 + 3) %5 =3 ... -> kq =4
// int result=0;
// void bai33(){
//   string s;int m;
//   cin>>s>>m;
//   int r=0;
//   for (auto&x:s) {
//     r=r*10 + (x-'0') ;
//     r%=m;
//   }
//   cout <<r<<endl;
// }
// // (a^b)% m = ((a%m)^b)%m
// // ham tim so du (a%m) voi so nguyen lon
// using ll = long long;
// ll sodu(string a,ll m) {
//     ll r=0;
//     for (auto&x:a) {
//         r=r*10 + (x-'0');
//         r%=m;
//     }
//     return r;
// }
// // ham powmod : (sodu^b)%m
// ll powmod(ll a,ll b,ll m) {
//     ll res=1;
//     while(b) {
//       if(b%2==1) {
//         res*=a;
//         res%=m;
//       }
//       a*=a;
//       a%=m;
//       b/=2;
//     }
//     return res;
// }
// void bai34(){
//     string a; ll b,m;
//     cin>>a>>b>>m;
//     ll r=sodu(a,b);
//     cout <<powmod(r,b,m);
// }
// // GCD mot so nguyen lon voi mot so long long
// // Euclid : gcd(a,b)= gcd(b,a%b);
// // ham tim gcd
// int gcd(ll a, ll b){
//     if(b) {
//         return gcd(b,a%b) ;
//     }
//     return a;
// }
// void bai35(){
//     string a; ll b;
//     cin>>a>>b;
//     ll r = sodu(a,b);
//     cout <<gcd(b,r)<<endl;
// }
// // so nguyen lon chia du cho 11
// // c1: (a%11)=0 
// // c2: ((tong cac chu so chan) -( tong cac chu so le ) )% 11=0 -> true
// // 1234 %11 = (1.1000 + 2.100 + 3.10 + 4)%11 = [1.1000%11 + 2.100 %11 + 3.10 %11 +4%11]%11 = [1.(-1) + 2.1 + 3.(-1) + 4] % 11 = (tong chan - tong le )%11 
// void bai36(){
//     string a; cin>>a;
//     ll res=0;
//     for (auto&x:a) {
//         if(x%2==0) {
//            res+=(x -'0');
//         }
//         else res-=(x-'0');
//     }
//   if (res%11) cout <<"no" ;
//   else cout <<"yes";
// }
// // dem so xau con chia het cho 8 ma ko chia het cho 3
// // ham xau con 
// bool check(string s){
//     if(sodu(s,8)==0 && sodu(s,3)!=0) return true;
//     return false;
// }
// void bai37() {
//     string s;cin>>s;
//     int cnt=0;
//     for (int i=0;i<s.size();i++){
//         for (int j=i;j<s.size();j++) {
//              if(check(s.substr(i,j-i+1))) ++cnt;
//         }
//     }
//     cout <<cnt;
// }
// // bai 38 dem so xau con chia het cho N (tuong tu)
// // bai 39 so may man (neu tong chu so =9 hoac tong cac chu so la mot so may man khac )
// // ex: 666 -> 18 (so may man do 1 + 8 =9 : 18 la mot so may man khac )
// // ham tinh tong cac chu so rat lon dung ham main
// int sum(string n) {
//     ll sum=0;
//     for (auto&x:n) {
//       sum+=(x-'0');
//     }
//     return sum;
// }
// // ham tinh tong cac chuso dung cho ham init
// int tong(int n) {
//     int sum=0;
//     while(n) {
//        sum+=n%10;
//        n/=10;
//     }
//     return sum;
// }
// // ham luu cac so may man [1-> 1000]
// set <int> se;
// void init(){
//    se.insert(9);
//    for (int i=1;i<=1000;i++){
//     // neu tim thay so co tong chu so =9 ( da co trong set )-> luu vao set
//     if(se.find(tong(i))!= se.end()) {
//         se.insert(i);
//     }
//    }
   
// }
// void bai39(){
//      string s;cin>>s;
//      init();
//      if(se.find(sum(s))!=se.end()) cout <<"Yes";
//      else cout <<"No";
// }
// // so lon nhat co duoc bang cach noi cac so co trong mang
// // ham ghep cac chuoi sao cho tao dc chuoi lon nhat
// bool check(string a,string b){
//     string ab=a+b;
//     string ba=b+a;
//     return ab>ba;
// }

// void bai40() {
//     int n;cin>>n;string a[n];
//     for (int i=0;i<n;i++){cin>>a[i];}
//     for (int i=0;i<n;i++){
//         for (int j=i+1;j<n;j++){
//             // a[i] + a[j] -> so chua phai lon nhat -> swap
//         if(!check(a[i],a[j])) swap(a[i],a[j]);
//         }
//     }
//     for (auto&x:a) cout <<x;

// }
// int main(){
//     bai40();
// }