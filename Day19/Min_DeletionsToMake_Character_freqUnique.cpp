/*
Problem:
1647. Minimum Deletions to Make Character Frequencies Unique
Medium

2109

39

Add to List

Share
A string s is called good if there are no two different characters in s that have the same frequency.

Given a string s, return the minimum number of characters you need to delete to make s good.

The frequency of a character in a string is the number of times it appears in the string. For example, in the string "aab", the frequency of 'a' is 2, while the frequency of 'b' is 1.

 

Example 1:

Input: s = "aab"
Output: 0
Explanation: s is already good.
Example 2:

Input: s = "aaabbbcc"
Output: 2
Explanation: You can delete two 'b's resulting in the good string "aaabcc".
Another way it to delete one 'b' and one 'c' resulting in the good string "aaabbc".
Example 3:

Input: s = "ceabaacb"
Output: 2
Explanation: You can delete both 'c's resulting in the good string "eabaab".
Note that we only care about characters that are still in the string at the end (i.e. frequency of 0 is ignored).
 

Constraints:

1 <= s.length <= 105
s contains only lowercase English letters.
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Using freq array technique
class Solution {
public:
    int minDeletions(string s) {
        unordered_map<int,int> m;
        for(auto ch:s){
            m[ch - 'a']++;
        }
        vector<int> freq;
        for(auto i:m){
            freq.push_back(i.second);
        }
        
        sort(freq.begin(), freq.end(), greater<int>());
        int max_freq = freq[0];
        int n=s.length();
        
        int ans = 0;
        for(auto i:freq){
            if(i>max_freq){
                if(max_freq>0) ans+=(i-max_freq);
                else ans+=i;
            }
            max_freq = min(max_freq-1, i-1);
        }
        return ans;
    }
};
 
int main()
{
    
    return 0;
}