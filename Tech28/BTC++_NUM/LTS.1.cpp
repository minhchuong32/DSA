// #include <iostream>
// #include <math.h>
// using namespace std;
// // kt nt
// int check(int n)
// {
// 	for (int i = 2; i <= sqrt(n); i++)
// 	{
// 		if (n % i == 0)
// 			return 0;
// 	}
// 	return n > 1;
// }

// int check2(int n)
// {
// 	int cnt = 0;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		if (n % i == 0)
// 		{
// 			++cnt;
// 		}

// 		if (cnt == 2)
// 		{
// 			return 1;
// 		}
// 		else
// 		{
// 			return 0;
// 		}
// 	}
// }

// int check3(int n)
// {
// 	int cnt = 1;

// 	cin >> n;
// 	for (int i = 0; i <= n / 2; i++)
// 	{
// 		if (n % i == 0)
// 		{
// 			++cnt;
// 		}
// 		if (cnt == 2)
// 		{
// 			return 1;
// 		}
// 		else
// 		{
// 			return 0;
// 		}
// 	}
// }
// int main()
// {
// 	int n;

// 	cin >> n;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		if (check3(i) == 1)
// 		{
// 			cout << i;
// 		}
// 	}
// }
