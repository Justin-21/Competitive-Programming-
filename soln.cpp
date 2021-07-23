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
	int n;
	cin >> n;
	int nums[n];
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}
	   int j=1,size;
	   size = nums[0]/n;

        for (int i=0 ; i<n ; i++){
            if(nums[i]==nums[j]){
                nums[j]=nums[j+1];
                j++,nums.size--;
            }
        }
        cout << nums;

	return 0;
}