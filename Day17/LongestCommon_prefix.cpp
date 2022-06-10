/* 14. Longest Common Prefix   
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lower-case English letters.              


*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // 1. Find the string with minimum length from strs
         string strmin = strs[0];
        for(int i =1;i<strs.size();i++){
            if(strs[i].length()<strmin.length()){
                strmin = strs[i];
            }
        }

        // 2. Initialize the counter variable for counting the length upto which we get the commonprefix
        int count = 0;
        for(int i=0;i<strmin.length();i++){
            for(int j=0;j<strs.size();j++){
                // The moment you find that the substrings are not equal return
                if(strs[j][i] != strmin[i])return strmin.substr(0,count);
            }
            count++;
        }
        
        //  if all the strings are of same.
        return strmin.substr(0,count);
        
    }
};

int main()
{
    
    return 0;
}