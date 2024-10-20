// #include <bits/stdc++.h>
// using namespace std;
// const int MOD=1e9;
// using ll =long long;
// // mod = % 
// // (a-b) mod m = (a modm - b modm) mod m
// // (a+b) mod m = (a modm + b modm) mod m
// // (a.b) mod m = ((a modm).(b modm) mod m)
// // a^b mod m   = ((a modm)^b) mod m
// // *max_element(a,a+n) -> return value max in arrarray
// // phep toan modulo (Modular Arthimetic)
// void modulo(){
//     ll res=1;
//     int n;cin>>n;int a[n];
//     for (auto &x:a) cin>>x;
//     for (int i=0;i<n;i++){
//         res*=a[i];
//         res%MOD;
//     }
//     cout <<res%MOD;
// }

// // Giai thuat Euclid mo rong 
// // Ex: gcd(55,80)=5=55*3 + 80*(-2) -> output : 3 -2
// // vd : gcd: 240(a) - 46(b)
// //            46(b) - 10(a%b)
// //            10    -  6
// //            6     -  4
// //          (a)4(x)   + (b)2(y) =gcd=2
// //         (a`)2(x`)  + (b`)0(y`) (*) => gcd=2.
// // Euclid nang cao: tim moi lien he x vs x` ; y vs y`
// //    a`=b ; b`=a%b=a-[a/b]*b.The a`,b` vao Pt(*) rut tach he so a va b , ta co:
// // =>   a.y` +  b.(x`-[a/b]*y`) = gcd=2.
// // =>   x=y` ; y= (x`-[a/b]*y`).voi x`=1,y`=0 (gia tri x`,y` la co so)   

// // Euclid nang cao sd quy hoach dong
// int d=0,x[20],y[20];
// void ExtendedEuclid(int a,int b) {
//     if(b==0) {
//         x[0]=1;// x`=1
//         y[0]=0; // y`=0
//         return;
//         // ket thuc vong de quy thu d=0;
//     }
//     ExtendedEuclid(b,a%b);
//     // de quy lồng đệ quy . khi return thì chỉ 1 đệ quy đc phá vỡ 
//     d++;
//     // phép toán sẽ thực hiện từ phần tử cơ sở đi lên
//     x[d]=y[d-1];
//     y[d]=(x[d-1]-a/b * y[d-1]);
//     cout <<a<<" "<<b<<" ";
//     cout <<x[d]<<" "<<y[d]<<" "<<d<<endl;

//  // in: ExtendedEuclid(240,46);
// // out put:
// // d=0 la co so cho 2.1 + 0.0 =2
// // a b x y : ax +by=g=2
// // 4 2 0 1 (d=1)
// // 6 4 1 -1  (d=2)
// // 10 6 -1 2  (d=3)
// // 46 10 2 -9  (d=4)
// // 240 46 -9 47   (d=5)
// }

// // ham Extended Euclid ko dung quy hoach dong
// int X,Y;
// void extendedEuclid(int a,int b) {
//     if(b==0) {
//         // tao co so x y cho cap cuoi cua euclid
//         // vd : 2.1 + 0.0 =2 voi cap 240,46
//         X=1;
//         Y=0;
//         return;
//     }
//     else {
//    extendedEuclid(b,a%b);
//    // de quy se duyet len tu co so
//    int tmp=X; // tao bien de luu X truoc do
//       X=Y; // X sau bang Y truoc do (trong de quy)
//       Y=tmp - a/b * Y; // Y sau bang X truoc do - [a/b] * Y(truoc do) 
//     }
//     cout <<a<<" "<<b<<" "<<X<<" "<<Y<<endl;
// }

// // nghich dao modul
// // vd: gcd(a,m)=1 => a vs m nguyen to cung nhau 
// //   => a.x + m.y = 1 (%m 2 ve)
// //   => (a.x) % m =1 % m =1     x: la nghich dao modul
// // tim x sao cho ( a.x )mod m = 1

// // ham Euclid mo rong cho nghich dao modul
// int xx,yy,Gcd;
// void extended(int a, int b){
//     if(b==0) {
//       xx=1;//ax1
//       yy=0;//by1
//       Gcd=a;
//     }
//     else {
//         extended(b,a%b);
//         int tmp=xx;
//         xx=yy;
//         yy=tmp - a/b * yy;
//     }
// }
// void Modul_nghichdao(int a,int m){
//     extended(a,m);
//     // 2 so ko phai la  2 so nguyen to cung nhau 
//     if(Gcd!=1) {
//         cout <<"Ko ton tai nghich dao modul !";
//     }
//     else {
//         cout <<(xx%m + m)%m; // truong hop x am 
//         // x duong chi can in ra x
//     }
// }

// // To hop 
// // khoi tao c[i][j]
// // c[i][j]=c[i-1][j]+c[i-1][j-1].
// int C[1000][1000];
// void init(){
//     for (int i=0;i<=1000;i++){
//         for (int j=0;j<=i;j++){
//             if(j==0 || i==j){ C[i][j]=1;}
//             else {
//                   C[i][j]=C[i-1][j] + C[i-1][j-1];
//                   C[i][j]%=MOD;
//             }
//         }
//     }
// }

// // mang cong don prefix_sum
// void prefix_sum(){
// 	int n;cin>>n;
// 	int a[n];
// 	for (auto&x:a) cin>>x;
// 	int prefix[n];
// 	for (int i=0;i<n;i++){
// 	   if(i==0) {
// 	   	prefix[0] = a[0];
// 	   }
// 	   else {
// 	   	prefix[i]=prefix[i-1]+a[i];
// 	   }
// 	} 
// 	for (auto&x:prefix) cout <<x<<" ";
// 	// tinh tong tu left -> right
// 	int l,r;
// 	cout <<"Nhap l vs r: ";
// 	cin>>l>>r;
// 	if(l==0 ) cout <<prefix[r];
// 	else {
// 		cout <<prefix[r]-prefix[l-1];
// 	}
// }
// // thuat toan kanade -> tim day con lien tiep co tong lon nhat
// void kanade(){
// 	int n;cin>>n;int a[n];
// 	for (auto&x:a) cin>>x;
// 	int sum1=0,sum2=-1e9;
// 	for (int i=0;i<n;i++){
// 		sum1+=a[i];
// 		// cap nhat ki luc
// 		sum2=max(sum2,sum1);
// 		if(sum1<0) sum1=0;
// 	}
// 	cout <<sum2;
// }



// int main(){
//    kanade();
// }