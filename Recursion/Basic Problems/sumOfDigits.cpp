#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int sumDigits(int n){
    // base condition
    if(n==0){
        return 0;
    }

    // recursive call
    int rem = n%10;

    return rem + sumDigits(n/10); 


}

int main()
{
    cout<<sumDigits(3421);
    return 0;
}