#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}



int main()
{
	debugMode();
	int tst;
	// cin >> tst;
	// while(tst--) {
	// }
	int n;
	cin >> n;
	int ans = 1;
	for (int i = 0; i < n; i++)
	{
		ans = (ans*2)% mod;
	}
	cout << ans ;
	return 0;
}