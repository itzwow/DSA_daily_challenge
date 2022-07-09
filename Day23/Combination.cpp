/*
 Combinations

 Given two integers n and k, return all possible combinations of k numbers out of the range [1, n].

You may return the answer in any order.

 

Example 1:

Input: n = 4, k = 2
Output:
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]
Example 2:

Input: n = 1, k = 1
Output: [[1]]
 

Constraints:

1 <= n <= 20
1 <= k <= n
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Approach take not take
class Solution {
public:
    void combination(int idx, int n, int k,vector<int> &nums, vector<int>&ds, vector<vector<int>>&ans){
        if(idx==n || k==0){
            if(k==0)ans.push_back(ds);
            return;
        }
        
//         take
        ds.push_back(nums[idx]);
        combination(idx+1,n,k-1,nums, ds,ans);
        ds.pop_back();
        
//         don't take
        combination(idx+1,n,k, nums,ds,ans);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> nums;
        for(int i=0;i<n;i++){
            nums.push_back(i+1);
        }
        combination(0,n,k,nums,ds,ans);
        return ans;
    }
};
 
int main()
{
    
    return 0;
}