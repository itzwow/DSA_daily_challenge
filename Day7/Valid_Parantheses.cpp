/*  20. Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.        */

#include<bits/stdc++.h>
using namespace std;

// implementation using stack;

class Solution {
public:
    bool isValid(string s) {
        stack <int> st;
        int n=s.length();
        
        
        for(int i=0; i<n;i++){
            if(s[i] =='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
            
            else{
                if(st.empty())return false;
                
                char c=st.top(); st.pop();
                if((s[i] ==')' && c!='(' ) || (s[i] =='}' && c!='{' )  || (s[i] ==']' && c!='[' ) ) return false;
            }
        }
        if(st.empty())return true;
        else return false;
    }
};