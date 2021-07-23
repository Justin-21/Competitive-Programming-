#include<bits/stdc++.h>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}

int main ()
{
	debugMode();
	int t;
	cin >> t;
	while (t--) 
	{
		int no_pair,sum, flag = 0;
		pair<int , int >p;
		cin >> no_pair;
		for (int i = 0; i < no_pair; i++)
		{

			cin >> p.first >>p.second;
			sum = p.first + p.second;

			if(sum %2 != 0){
				flag++;
			}
		}
		if (flag==no_pair)
		{
			cout<< "YES"<< endl;
		}
		else
			cout << "NO"<<endl;
		
	}



	return 0;
}