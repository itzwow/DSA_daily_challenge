/*169. Majority Element

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?        */

#include<bits/stdc++.h>
using namespace std;

// Using sorting O(nlogn);
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt =1;
        int ans=0;
        
        int n = nums.size();
        if(n==1)return nums[0];
        else{
            for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])cnt++;
            if(cnt>n/2){
                ans=nums[i];
                break;}
        }}
        return ans;
        
    }
};