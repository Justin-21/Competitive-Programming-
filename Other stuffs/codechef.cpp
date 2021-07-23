#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int lli;

inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}

int main()
{
	debugMode();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int  t;
	cin >> t;
	while(t--) {
	
		int n,x,k;
		cin >> n >> x >> k ;
		if (x == 0 || x == k || x == 2*k)
		{
			cout << "YES"<<endl;
		}
		else
			cout << "NO" << endl;

}
		return 0;

}	
