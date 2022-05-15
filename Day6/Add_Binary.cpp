/*  67. Add Binary

Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.      */


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
        string ans="";
        int n1 = a.length();
        int n2 = b.length();
        
        int i=0;
        while(i<n1 || i<n2 || c!=0){
            int x=0;
            if(i<n1 && a[n1-i-1]=='1'){x=1;}
            
            int y=0;
            if(i<n2 && b[n2-1-i]=='1'){y=1;}
            
            ans=to_string((x+y+c)%2)+ans;
            c = (x+y+c)/2;
            i+=1;
        }
        
        return ans;
    }
};