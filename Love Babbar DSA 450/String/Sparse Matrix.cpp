#include<bits/stdc++.h>
using namespace std;


inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
}




typedef long long LL;            //"%lld"
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ULL;  //"%llu"


short COUNT_;
#define sf scanf
#define pf printf
#define NL pf("\n");
#define put(x_) pf("%d", x_)
#define read(x_) sf("%d", &x_)
#define readf(x_) sf("%f", &x_)
#define SS pf(">_<LOOOOOK@MEEEEEEEEEEEEEEE<<( %d )>>\n",++COUNT_);
#define DD(x_) cout<<">>>>( "<<++COUNT_<<" ) "<<#x_<<": "<<x_<<endl;
#define EXT(st_) cout<<"\n>>>Exicution Time: "<<(double)(clock()-st_)/CLOCKS_PER_SEC<<endl;

//constants
const int SZ= 1E4;
const int INF= (1<<29);
const double EPS= 1E-9;
const double PI= 2*acos(0.0);


char str[1000][23];
char query[1000][23];

void solve(void)
{
    int n, q, occurance;
 
    read(n);
    for(int i= 0; i<n; i++){
        sf("%s", str[i]);
    }
    read(q);
    for(int i= 0; i<q; i++){
        sf("%s", query[i]);
    }
    
    for(int i= 0; i<q; i++)
    {
        occurance= 0;
        for(int j= 0; j<n; j++)
        {
            if(!strcmp(query[i], str[j]) )
                occurance++;
        }
        pf("%d\n",occurance++);
    }
    
}



int main(void)
{
    debugMode();
    solve();
    return 0;
    
}