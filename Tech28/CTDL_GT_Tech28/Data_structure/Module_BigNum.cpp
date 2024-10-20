#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define mod 1000000007
using ll = long long;

// (A+B) % C = ((A%C) + (B%C)) % C
// (A-B) % C = ((A%C) - (B%C)) % C
// (A*B) % C = ((A%C) * (B%C)) % C
// (A/B) % C = ((A%C) * (B^-1%C)) % C

// (N!%mod)
// Ex : 100
// 437918130
void gt() {
    ll res = 1;
    int n; cin>> n;
    for (int i=1;i<=n;i++) {
         res = (res * i) % mod;
        // res = (res%mod) * ( i%mod) % mod;
    }
    // cout << res%mod;
    cout <<res<<endl;
}

// a^b mod 1e9+7
void bai1() {
    int a,b;
    cin>>a>>b;
    ll kq = 1;
    for (int i=1;i<=b;i++) {
        kq*=a;
        kq%=mod;
    }
    cout <<kq<<endl;
}

// a^ reverse(a) mod 1e9+7
int reverse_num(int n) {
    string num = to_string(n);
    reverse(num.begin(),num.end());
    return stoll(num);

}
void bai2() {
    int a,b;
    cin>>a;
    b = reverse_num(a);
    ll kq = 1;
    for (int i=1;i<=b;i++) {
        kq*=a;
        kq%=mod;
    }
    cout <<kq;
}
// luy thua nhi phan a^b
ll binpow(ll a, ll b) {
    if (b == 0) return 1; 
    ll x = binpow(a, b / 2);
    x = x * x;
    if (b % 2 != 0) x = x * a;
    return x;
}

// a^b mod c
ll binpow_mod(ll a, ll b, ll c) {
    if(b==0) return 1;
    ll x = binpow_mod(a,b/2,c);
    if(x%2==0) {
        // (x*x) %c 
        return ((x%c) * (x%c)) %c;
    }
    else {
        // ((x*x) * a) %c == ((x*x) %c * a%c) %c
        return (((x%c) * (x%c)) %c) * (a%c) %c;
    }
} 
int main() {
    cout << binpow_mod(2,1000000000,10);
}
