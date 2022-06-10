/* 3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
// little bit brute forced
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        // for(int i=0;i<=25;i++){
        //     m[i]=0;
        // }
        int n = s.length();
        if(n==0 || n==1)return n;
        int i=0,j=0,cnt=0,ans=0;
        // m[s[i]-'a']++;
        // cout<<s.length()<<endl;
        while(i<s.size() && j<s.size()){
            if(m[s[j]]!=1){
                cnt++;
                m[s[j]]++;
                j++;
            }else{
                
                ans = max(ans, cnt);
                m[s[i]]=0;
                i++;
                cnt--;
                
            }
        }
        ans = max(ans,cnt);
        return ans;
    }
};
 
int main()
{
    
    return 0;
}