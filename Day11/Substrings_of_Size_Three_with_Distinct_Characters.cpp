/*1876. Substrings of Size Three with Distinct Characters

A string is good if there are no repeated characters.

Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A substring is a contiguous sequence of characters in a string.

 

Example 1:

Input: s = "xyzzaz"
Output: 1
Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
The only good substring of length 3 is "xyz".
Example 2:

Input: s = "aababcabc"
Output: 4
Explanation: There are 7 substrings of size 3: "aab", "aba", "bab", "abc", "bca", "cab", and "abc".
The good substrings are "abc", "bca", "cab", and "abc".
 

Constraints:

1 <= s.length <= 100
s​​​​​​ consists of lowercase English letters.      */

#include<bits/stdc++.h>
using namespace std;

// Brute force approach:
class Solution {
public:
    int countGoodSubstrings(string s) {
        int n= s.length();
        map<char,int> m;
        int i=0,j=2,cnt=0;
        while(j<n){
            for(int t=i;t<=j;t++){
                m[s[t]]++;
            }
            int test =1;
            for(auto t:m){
                if(t.second>1){test = 0;}
            }
            if(test)cnt++;
            cout<<cnt<<" ";
            m.clear();
            i++;
            j++;
            
        }
        return cnt;
    }
};

// optimesd one:
class Solution {
public:
    int countGoodSubstrings(string s) {
        int n= s.length();
        
        int cnt=0;
        for(int i=0;i<n-2;i++){
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i] !=s[i+2])cnt++;
        }
        
        return cnt;
    }
};