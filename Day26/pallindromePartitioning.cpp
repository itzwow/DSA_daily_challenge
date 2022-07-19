/*
131. Palindrome Partitioning

Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.

A palindrome string is a string that reads the same backward as forward.

 

Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
Example 2:

Input: s = "a"
Output: [["a"]]
 

Constraints:

1 <= s.length <= 16
s contains only lowercase English letters.


*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        solve(s,0,ans,path);
        return ans;
    }
    
    void solve(string &s, int idx, vector<vector<string>>&ans, vector<string>&path){
        if(idx==s.size()){
            ans.push_back(path);
            return;
        }
        
        for(int i=idx;i<s.size();i++){
            if(isPallindrome(s,idx,i)){
                path.push_back(s.substr(idx,i-idx+1));
                solve(s,i+1,ans,path);
                path.pop_back();
            }
        }
    }
    
    bool isPallindrome(string &s, int start, int end){
        while(start<=end){
            if(s[start]!=s[end])return false;
            start++;
            end--;
        }
        return true;
    }
};
 
int main()
{
    
    return 0;
}