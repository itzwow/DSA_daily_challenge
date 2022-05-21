/*628. Maximum Product of Three Numbers

Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 

Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6
 

Constraints:

3 <= nums.length <= 104
-1000 <= nums[i] <= 1000   */


#include<bits/stdc++.h>
using namespace std;

// Brute force O(n^3) TLE after 71/92 Test Cases

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(),greater<int>());
        int n= nums.size();
        long long ans = INT_MIN;
        if(n==3) return nums[0]*nums[1]*nums[2];
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    long long temp = nums[i]*nums[k]*nums[j];
                    if(temp>ans)ans = temp;
                }
            }
        }
        
        return ans;
    }
};

// Optimal and logical solution:
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        // if(n==3) return nums[0]*nums[1]*nums[2];
        int ans = max(nums[0]*nums[1]*nums[n-1], nums[n-1]*nums[n-2]*nums[n-3]);
        return ans;
    }
};