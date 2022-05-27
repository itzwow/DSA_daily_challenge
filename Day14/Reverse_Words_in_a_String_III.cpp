/*  557. Reverse Words in a String III
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "God Ding"
Output: "doG gniD"
 

Constraints:

1 <= s.length <= 5 * 104
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space.
    */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string ans="";
        string temp="";
        
        for(int i =0;i<=s.length();i++){
            if(s[i]!=' '&& s[i]!='\0')temp+=s[i];
            else{
                
                reverse(temp.begin(), temp.end());
                // cout<<temp<<" ";
                v.push_back(temp);
                temp ="";
            }
            
        }
        for(int i=0;i<v.size();i++){
            ans+=v[i];
            if(i!=v.size()-1)ans+=" ";
        }
        return ans;
    }
};