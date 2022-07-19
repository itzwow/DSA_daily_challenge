/*
503. Next Greater Element II
https://leetcode.com/problems/next-greater-element-ii/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Brute force
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int temp=-1;
            int j=(i+1)%n;
            while(j!=i){
                if(nums[j]>nums[i]){
                    temp=nums[j];
                    break;
                }
                j++;
                j=j%n;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
 
// Using rotated array concept
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        stack<int>st;
        
        for(int i=n-1;i>=0;i--){
            st.push(nums[i]);
        }
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            
            if(!st.empty()){
                ans.push_back(st.top());
                
            }else{
                ans.push_back(-1);
            }
            st.push(nums[i]);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main()
{
    
    return 0;
}