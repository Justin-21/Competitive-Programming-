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

	int tst;
	cin >> tst;
	while(tst--)
	{
		int x, D,d,P,Q;
		cin >> D >> d >> P >> Q;
		long long count = 0;
	      x = D/d;
	      
	      if(x%2 == 0){
	          
	          count = d*((x/2)*(2 * P +(x-1)*Q));
	      }
	      else{
	          count = d * (x * (P+((x-1)/2)*Q));
	      }
	      
	      count +=(D % d) * (P+(x)*Q);
	      cout<<count<<endl;
	  }
}
