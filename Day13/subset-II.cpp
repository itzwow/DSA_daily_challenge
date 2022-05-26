/*  90. Subsets II

Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10            */
#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    void solve(vector<int> nums, vector<int> output, int i, vector<vector<int>>& ans){
//         base case
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        
//         consider
        output.push_back(nums[i]);
        solve(nums, output, i+1, ans);
        output.pop_back();
        
//         ignore
        while(i+1<nums.size() && nums[i] == nums[i+1]  )i++;
        solve(nums,output,i+1,ans);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        vector<int> output;
        vector<vector<int>> ans;
        solve(nums,output, i,ans);
        return ans;
    }
};