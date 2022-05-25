/*  78. Subsets  
    Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.

*/
#include<bits/stdc++.h>
using namespace std;


// approach is to either consider an element or exclude that element
class Solution {
    private:
        void solve(vector<int>nums, vector<int> output, int i, vector<vector<int>> &ans){
//             base case
            if(i>=nums.size()){
                ans.push_back(output);
                return;
            }
            
//             exclude
            solve(nums,output,i+1,ans);
            
//             include
            int temp = nums[i];
            output.push_back(temp);
            solve(nums,output,i+1,ans);
        }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> ans;
        int i =0;
        vector<int> output;
        solve(nums,output,i,ans);
        return ans;
    }
};
