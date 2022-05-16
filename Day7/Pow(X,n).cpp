/*  50. Pow(x, n)

Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
 

Constraints:

-100.0 < x < 100.0
-231 <= n <= 231-1
-104 <= xn <= 104       */

#include<bits/stdc++.h>
using namespace std;

// My approach which passes 291/305 test cases
// Error given for x= 0.00001  n= 2147483647


class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0 )return 1;
        if(n==1)return x;
        
        if(n>0)
        return x*myPow(x,n-1);
        
        else return (1/x*myPow(x,n+1));
    }

};

// Optimized approach

class Solution {
public:
    double power(double x, int n){
        if(n==0 )return 1;
        if(n==1)return x;
        int check =0;
        
        
        double ans = power(x,n/2);
        
        if(n%2==0) return ans*ans;
        
        else return ans*ans*x;
    }
    double myPow(double x, int n) {
        double sol = power(x,abs(n));
        
        if(n<0)return 1/sol;
        else return sol;
       
    }

};