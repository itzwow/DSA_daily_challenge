#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Printing number n-1;
void fun(int n){
    // Base condition
    if(n==1){
        cout<<1<<endl;
        return;
    }

    // recursiive call
    cout<<n<<" ";
    fun(n-1);
}

// Printing number 1-n;
void funrev(int n){
    // Base condition
    if(n==1){
        cout<<n<<" ";
        return;
    }

    // recursive call
    funrev(n-1);
    cout<<n<<" ";
}

// printing in both order
void funboth(int n){
     // Base condition
    if(n==1){
        cout<<n<<" ";
        return;
    }

    // recursive call
    cout<<n<<" ";
    funboth(n-1);
    cout<<n<<" ";
}
 
int main()
{
    fun(9);
    funrev(9);
    funboth(5);
    return 0;
}