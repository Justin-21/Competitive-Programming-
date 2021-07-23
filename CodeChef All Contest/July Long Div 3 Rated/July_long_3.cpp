#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  
  int t;
  cin >> t;
  int ans;
  int n, k;
  while(t--){
      cin >>n >> k;
      vector<int> a(n);
      for(int& i : a){
          cin >> i;
      }
    
      vector<int> nSetBit(31);
      int count;
      int term;
      for(int bit =0; bit<=30;bit++){
         
          count = 0;
          for(int& i : a){
              if(i%2!=0){
                  count ++;
                 
              }
             
              i/=2;
          }
         
          nSetBit[bit] = count;
      }
     
     
      ans = 0;
            for(int bit =0; bit<=30;bit++){
                if(nSetBit[bit]%k == 0){
                    ans += nSetBit[bit]/k;
                }
                else{
                    ans += nSetBit[bit]/k + 1;
                }
     
     
  }
 
  cout << ans << endl;
  }
  return 0;
}