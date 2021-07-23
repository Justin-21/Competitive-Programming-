#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}

int main ()
{
	debugMode();
	int test,first,second;
	scanf("%d",&test);

	while(test--)
	{
		int d,x,y,z;
		scanf("%d%d%d%d",&d,&x,&y,&z);
		first = x*7;
		second = y*d + (7-d) *z;

		cout << max(first,second) << endl;
	}



	return 0;
}