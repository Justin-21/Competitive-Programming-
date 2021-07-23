#include<bits/stdc++.h>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}

int main (){
    debugMode();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
    int first = 0;
    int last = n;
    int count=0;

    for (int i = 0; i < n/2; i++)
    {   
        if(n>1){
        while(first!=last ){
            first++,last--;
            count++;
        }
}
    else
        count = 1;
    }
    cout << count <<endl;
    }

return 0;
}