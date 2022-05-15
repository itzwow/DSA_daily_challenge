/*  680. Valid Palindrome II
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.        */

#include<bits/stdc++.h>
using namespace std;

bool canPalindrome(string s, int l, int r, int count){
    //  Base case 
    if(count>1)return false;

    while(l<=r){
        if(s[l]==s[r]){
            l++;r--;
        }else{
            return (canPalindrome(s,l+1,r,count+1) || canPalindrome(s,l,r-1,count+1));
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    bool ans = canPalindrome(s,0,s.length()-1,0);

    if(ans)cout<<"yes it's possible to make a palindrome after removing one charcter"<<endl;
    else cout<<"No it's not possible to make a palindrome after removing one charcter"<<endl;
}