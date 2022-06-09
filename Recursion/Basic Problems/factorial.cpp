#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int fact(int n){
    // base condition
    if(n==1){
        return 1;
    }

    // recursive call 
    return n*fact(n-1);
} 
int main()
{
    cout<<fact(10);
    return 0;
}