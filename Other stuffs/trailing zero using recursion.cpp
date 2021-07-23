#include <bits/stdc++.h>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}
long long fact(int n){
	if(n==0|| n==1)
		return 1;
	else
		return n * (fact (n-1));
}
long long trailing_zero(int n){
	int count = 0;
	for (int i = 5; n/i >= 1; i *= 5)
	{
		count += n/i;
	}
	return count;
}
int main()
{
	debugMode();
	
	long long n;
	cin >> n;
	fact(n);
	cout<<trailing_zero(n)<<endl;
	return 0;
}