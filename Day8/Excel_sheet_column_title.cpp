/*168. Excel Sheet Column Title

Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnNumber = 1
Output: "A"
Example 2:

Input: columnNumber = 28
Output: "AB"
Example 3:

Input: columnNumber = 701
Output: "ZY"
 

Constraints:

1 <= columnNumber <= 231 - 1        */

#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber) {
        char arr[26] = {'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
        string ans="";
        if(columnNumber ==1)return "A";
        while(columnNumber>0){
            int rem = columnNumber%26;
            
            ans+=arr[rem];
            if(rem!=0)
            columnNumber/=26;
            else columnNumber = (columnNumber/26)-1;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

int main(){
    int n;
    cout<<"Enter Coluuumn Number"<<endl;
    cin>>n;
    string ans = convertToTitle(n);
    cout<<"Entered Column Number Corresponds to : "<<ans<<endl;

}