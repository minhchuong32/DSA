


#include<bits/stdc++.h>
using namespace std;
long long C[1005][1005],n,k;
void solve(){
	for (int i=0;i<1005;i++){
		for (int j=0;j<=i;j++){
			if (j == 0 || i == j){
                // cot ngoai cung va cot dau tien tg pascal 
				C[i][j] = 1;
			}
			else {
				C[i][j] = C[i-1][j-1] + C[i-1][j];
			}
		}
	}
}
int main(){
	cin >> n >> k;
	solve();
	cout << C[n][k];
	return 0;
}


// #include <iostream>
// using namespace std;

// // Hàm tính tổ hợp chập k của n phần tử
// long long combination(int n, int k) {
//     long long result = 1;
//     if (k > n - k) {
//         k = n - k;
//     }
//     for (int i = 0; i < k; ++i) {
//         result *= (n - i);
//         result /= (i + 1);
//     }
//     return result;
// }

// int main() {
//     int n, k;
//     cin >> n >> k;

//     // Tính và in ra kết quả
//     cout << combination(n, k) << endl;

//     return 0;
// }