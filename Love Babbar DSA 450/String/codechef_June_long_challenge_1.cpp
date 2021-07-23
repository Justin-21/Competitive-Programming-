#include<bits/stdc++.h>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}

int main()
{
	debugMode();
	int t;
	cin >> t;
	while(t--)
	{
		int xa,xb,Xa,Xb;
		cin >> xa >> xb	>> Xa >> Xb;
		int A,B;
		A=Xa/xa;
		B=Xb/xb;
		cout << A+B <<endl;
	}

	
}