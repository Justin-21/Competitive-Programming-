#include<iostream>
#include<vector>
using namespace std;

int main() {
	// single vector ..
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		v.push_back(i);
	}
	 // Printing vector 
	for (int i = 0; i < n; i++)
	{
		cout<< v[i] << endl;
	}
}