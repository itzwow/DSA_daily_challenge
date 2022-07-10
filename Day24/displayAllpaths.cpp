#include<bits/stdc++.h>
using namespace std;
#define ll long long

void paths(string p, int r,int c){
    if(r==1 && c==1){cout<<p<<endl;
        return;
    }
    if(r>1 && c>1)paths(p+"d",r-1,c-1);

    if(r>1){
        paths(p+'D',r-1,c);
    }

    if(c>1){
        paths(p+'R',r,c-1);
    }
}
 
int main()
{
    int m = 3,n=3;
    paths("",m,n);
    return 0;
}