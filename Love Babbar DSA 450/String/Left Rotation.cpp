#include<bits/stdc++.h>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}

	vector<int> array_left_rotation(vector<int> a, int n, int k) {
    k %= n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        vec[(n+i-k)%n] = a[i];
    }
    return vec;
}

int main(){
	debugMode();
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}