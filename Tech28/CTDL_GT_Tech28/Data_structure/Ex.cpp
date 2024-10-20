#include <bits/stdc++.h>
using ll = long long;
using namespace std;



int binPow(int a,int b) {
    int res = 1;
    while(b) {
        if(b%2!=0) {
            res*=a;
        }
        a*=a;
        b/=2;
    }
    return res;
}


int binPow2(int a,int b) {
    if(b==0) return 1;
    ll tmp = binPow2(a,b/2);
    if(b%2!=0) return tmp*tmp*a;
    else return tmp*tmp;
}

int main() {
    cout <<binPow(2,5);
}
