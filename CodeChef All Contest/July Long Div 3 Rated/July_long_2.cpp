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

	int test;
	scanf("%d", &test);

	while(test--)
	{
		int g,c,length,num,dem ;
		scanf("%d%d",&g,&c);
		num = c*c;
		dem = 2*g;
		length = num/dem;
		printf("%d\n", length );

	}

	return 0 ;
}