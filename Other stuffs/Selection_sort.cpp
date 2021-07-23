#include<bits/stdc++.h>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}

void selection_sort(int n, int a[]) 
{
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i+1; j < n-1; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
			swap(a[min], a[j]);
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
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	selection_sort(n,arr);
	print_array(n,arr);

	return 0;
}
	