#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> mp;
    string s;
    cin>>s;

    for (auto c : s) {
        mp[c] ++;
    }

    for (auto i : s) {
        cout << mp[i] <<' ';
    }
}