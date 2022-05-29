/*   844. Backspace String Compare
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
 

Constraints:

1 <= s.length, t.length <= 200
s and t only contain lowercase letters and '#' characters.
 

Follow up: Can you solve it in O(n) time and O(1) space?

       */

#include<bits/stdc++.h>
using namespace std;

// using stack
class Solution {
    string solve(string s, stack<char> stack){
           for(int i = 0;i<s.length();i++){
            if(s[i]=='#' && stack.empty()==false){
                stack.pop();
            }else if(s[i]!='#'){
                stack.push(s[i]);
            }
        }
        string ans = "";
        while(!stack.empty()){
            ans+=stack.top();
            stack.pop();
        }
        return ans;
    }
    
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk1;
        stack<char> stk2;
        string ans1 = solve(s,stk1);
        string ans2 = solve(t,stk2);
        
        cout<<ans1<<" "<<ans2<<endl;
        return (ans1==ans2);
        
    }
     
};