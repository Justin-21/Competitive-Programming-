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

	// Note : If the solution can solve easily then no need to think hardly keep it easy Bro ....
	debugMode();
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int exp1=a+b+c;
	int exp2=a*b*c;
	int exp3=a+b*c;
	int exp4=a*b+c;
	int exp5=a*(b+c);
	int exp6=(a+b)*c;
	cout<<max(exp1,max(exp2,max(exp3,max(exp4,max(exp5,exp6)))));


 	return 0;
}

