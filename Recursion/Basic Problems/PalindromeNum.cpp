#include<bits/stdc++.h>
using namespace std;
#define ll long long

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


bool isPalindrome(int n){
    return n == rev(n);
}
int main()
{
    int n;
    cin>>n;
    if(isPalindrome(n))cout<<"YES palindrom number"<<endl;
    else cout<<"NO not a palindrome"<<endl;

    // bool ans = (n == rev(n));
    // cout<<ans;
    return 0;
}