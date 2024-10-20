    #include <bits/stdc++.h>
    #define ll long long
    #define MAXN (ll)(1e6)
    #define FOR(a,b,i) for(int i = a; i<=b;i++)
    using namespace std;

    vector<pair<int,int>> a(1007);

    bool clp(pair<int,int>& a, pair<int,int>& b){
        if (a.first != b.first) return a.first > b.first;
        else return a.second > b.second;
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n,m;
        cin>>n>>m;
        FOR(1,n,i) {
            int t =0;
            FOR(1,m,j){ int k;
            cin>>k;
            if(k) t++;
        }
        // count of num 1 : t
        a[i].first = t;
        // dong i
        a[i].second = i;
        }
        sort(a.begin()+1,a.end(), clp);
        int k;
        cin>>k;
        // chi so dong co tan xuat so 1 nho thu k : n-k+1 
        cout<<a[n-k+1].second; 
        return 0;
    }


