#include <bits/stdc++.h>
using namespace std;

// bai1 tim thua so co so mu lon nhat in ra so nho hon neu co so mu nhu nhau
void bai1(int n) {
    int dem=0,mu=0,res=0;
    for (int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
           while(n%i==0) {
            ++dem;
            n/=i;
           }
           if(dem>mu){ mu=dem;res=i;}
        }
    }
    if(n!=1) {
        if(mu==0) 
       { mu=1;
        res=n;}
    }
    cout <<res<<" "<<mu;
}
// bai2 mang tang chat : tang mot luong = boi so cua d(input) sao cho mang tang chat 
// Ex : 3(d) 3(n:so phan tu)  15 17 9 -> out : 3(3*3=9 -> 9+9=18 -> mang tang chat) 
void bai2(int a[],int n,int d) {
    int res=0,sub=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=1;i<n;i++) {
        if(a[i]<a[i-1]) {
         if((a[i-1]-a[i]+1)%d==0) sub=((a[i-1]-a[i]+1)/d);
         else sub=(((a[i-1]-a[i]+1)/d)+1);
         a[i]=a[i]+sub*d;
         res+=sub;sub=0;
        }
    } cout <<res;   
}

// bai3 : tinh chu vi 
int m,n,a[100][100],b[100][100],cnt,dem;
void nhap(){
    cin>>m>>n;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
     {   cin>>a[i][j];
        b[i][j]=a[i][j];}
    }
}
void loang (int i,int j){
    int dx[4]={-1,0,0,1};
    int dy[4]={0,-1,1,0};
    a[i][j]=0;
     dem=0;
    for (int k=0;k<4;k++) {
      int imoi=i+dx[k];
      int jmoi=j+dy[k];
      if(imoi>=0 && imoi<m && jmoi >=0 && jmoi <n &&b[imoi][jmoi]==1) {
        ++dem;// so luong phan tu 1 xung quanh phan tu dang xet
        // dung mang b(copy tu a) do mang a xoa cac phan tu 1 -> ko dem day du cac phan tu cac phan tu xung quanh 
      }
    }
     cnt+=(4-dem); //(cv = 4 -dem)
     for (int k=0;k<4;k++) {
      int imoi=i+dx[k];
      int jmoi=j+dy[k];
      // mang a nhay qua phan tu khac sau khi goi de quy dung mang b de dem
      if(imoi>=0 && imoi<m && jmoi >=0 && jmoi <n &&a[imoi][jmoi]==1) {
        loang(imoi,jmoi);
      }
     }
}
//    nhap();
//    int cv=0;
//    for (int i=0;i<m;i++) {
//     for (int j=0;j<n;j++) {
//         cnt=0;
//         if(a[i][j]) loang(i,j);
//         cv+=cnt;
//     }
//    }
//    cout <<cv;

int main() {
    int a[4]={0,3,1,5};
    sort(a,a+4);
    for (auto&x:a)cout <<x<<" ";
    cout <<endl;
    cout <<lower_bound(a,a+4,3);
}



