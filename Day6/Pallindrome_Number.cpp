/*

9. Palindrome Number
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?  */

#include<bits/stdc++.h>
using namespace std;

// using string
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i=0,j=s.length()-1;
        
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;j--;
        }
        return true;
    }
};


// without converting int to string
class Solution {
public:
    bool isPalindrome(int x) {
        int rev=x;
        long long ans=0;
        while(rev>0){
            ans = ans*10+(rev%10);
            rev=rev/10;
        }
        if(ans==x)
        return true;
        else return false;
    }
};