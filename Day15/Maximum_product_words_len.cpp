/*  318. Maximum Product of Word Lengths     

    Given a string array words, return the maximum value of length(word[i]) * length(word[j]) where the two words do not share common letters. If no such two words exist, return 0.

 

Example 1:

Input: words = ["abcw","baz","foo","bar","xtfn","abcdef"]
Output: 16
Explanation: The two words can be "abcw", "xtfn".
Example 2:

Input: words = ["a","ab","abc","d","cd","bcd","abcd"]
Output: 4
Explanation: The two words can be "ab", "cd".
Example 3:

Input: words = ["a","aa","aaa","aaaa"]
Output: 0
Explanation: No such pair of words.
 

Constraints:

2 <= words.length <= 1000
1 <= words[i].length <= 1000
words[i] consists only of lowercase English letters.


   */ 


#include<bits/stdc++.h>
using namespace std;

// Idea : The idea is to map each character of the words to rescpective binary numbers.Now 
// loop over the numbers using two for loops and check if the "&" operation of the two numbers considered 
// equals 0 or not. If it is "0" it implies that the words, don't have any common character so compute the 
//  multilication of it's length and compare with current max_product

//  Return the max_product


class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n= words.size();
        
        vector<int> word_int(n,0);
        vector<int> word_len(n,0);
        
        for(int i=0;i<n;i++){
            string w=words[i];
            int len = w.length();
            int w_int = 0;
            for(int j=0;j<len;j++){
                w_int |= 1 << (w[j]-'a');
                word_int[i] = w_int;
                word_len[i] = len;
            }
        }
        
        int max_pro=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((word_int[i] & word_int[j]) == 0){
                    max_pro = max(max_pro , word_len[i]*word_len[j]);
                }
            }
        }
        return max_pro;
    }
};