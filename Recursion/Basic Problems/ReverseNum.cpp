#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Method 1
void revDig(int n,int &ans){
    if(n==0){

        // cout<<ans<<endl; 
        return;
    }

    // recursive call;
    int rem = n%10;
    ans = ans*10 + rem ;
    revDig(n/10, ans);
    
    
}
 

// method 2
int helper(int n, int digits){
    if(n%10==n){
        return n;
    }

    // recurusive call
    int rem = n%10;
    return rem*pow(10,digits-1)+helper(n/10,digits-1);
}
int rev(int n){
    int digits = log10(n)+1;
    return helper(n,digits);
}
int main()
{   
    int ans = 0;
    revDig(123490,ans);

    cout<<ans<<endl;

    int sol = rev(12345);
    cout<<sol<<endl;
    return 0;
}