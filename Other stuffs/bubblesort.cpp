#include<bits/stdc++.h>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}

void bubble_sort(int n , int a[]) 
{
	int flag = 0,tmp;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (a[j] > a[j+1])
			{
				swap(a[j],a[j+1]);
				flag = 1;
			}
		}

	if(flag == 0) {
		break;
	}
		}
}

void print_array(int n, int a[]) {
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main(){

	debugMode();
	int n,flag;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	bubble_sort(n,arr);
	print_array(n,arr);
	return 0;
}
	