/*
496. Next Greater Element I

https://leetcode.com/problems/next-greater-element-i/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long


// brute force
class Solution {
public:
    
    int solve(stack<int>s,int ele){
        int ans=-1;
        while(s.top()!=ele){
            if(s.top()>ele)ans=s.top();
            s.pop();
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>s1,s2;
        for(int i=0;i<nums2.size();i++){
            s1.push(nums2[i]);
        }
        
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(solve(s1,nums1[i]));
        }
        
        return ans;
    }
};
 
int main()
{
    
    return 0;
}