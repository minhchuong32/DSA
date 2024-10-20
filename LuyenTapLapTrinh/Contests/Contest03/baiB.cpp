#include <bits/stdc++.h>
#define ll long long
#define MAXN (ll)(1e6)
#define FOR(a,b,i) for(int i = a; i<=b;i++)
using namespace std;
vector<bool> isPrime(MAXN+7, true);
void sieveOfEratosthenes(int n) {
      // Khởi tạo mảng đánh dấu các số là nguyên tố
    isPrime[0] = isPrime[1] = false;  // 0 và 1 không phải là số nguyên tố

    // Bắt đầu sàng các số từ 2
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {  // Nếu p là số nguyên tố
            // Đánh dấu tất cả các bội của p là không phải số nguyên tố
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
}

// ham tim day con tang dai nhat 
// f[]: luu index  , vd: f[2]=3 : day con tang dai nhat = 2 ket thuc tai chi so 3
int solve(vector<int>& a){
    vector<int> f(MAXN);
    f[1] = 1;
    int res = 1;
    int mid;
    for (int i = 2; i <= a.size()-1; i++) {
        int l = 1, r = res, j = 0;
        while (l <= r) {
            mid = (r + l) / 2;
            if (a[i] >= a[f[mid]]) {
                j = mid;
                // tim ben phai con gia tri nao lon hon k 
                l = mid + 1;
            } else
                r = mid - 1;
        }
        if (j == res)
            f[++res] = i;
            // dich chi so (f[])qua phai neu value phai < value trai( 11 2)
        else if (a[i] <= a[f[j + 1]])
            f[j + 1] = i;
    }
    // do dai day con tang dai nhat 
    return res;
}



vector<int> a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    sieveOfEratosthenes(MAXN);
    a.push_back(0);
    for(int i = 1; i <= n; i++) {
        int t;
        cin>>t;
        if (isPrime[t]) a.push_back(t);
        }
    cout<<solve(a);
    return 0;
}