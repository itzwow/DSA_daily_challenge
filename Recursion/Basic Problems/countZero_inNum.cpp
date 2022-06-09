#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int countz(int n, int cnt){
    if(n==0){
        return cnt;
    }

    int digit = n%10;
    if(digit == 0)countz(n/10, cnt+1);
    else countz(n/10,cnt);
}

int main()
{
    int n;
    cin>>n;
    cout<<"Number of zeroes in the number is:"<<endl;
    int ans = countz(n,0);
    cout<<ans;
    return 0;
}