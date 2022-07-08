/*  Combination sum2
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]
 

Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
//  Brute force approach
class Solution {

public:
    void findCombination(int idx, int target, vector<int> & arr,set<vector<int>>&ans, vector<int>&ds){
        
        if(idx==arr.size()){
            if(target==0)ans.insert(ds);
            return;
        }
        
        //pick it
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            findCombination(idx+1,target-arr[idx], arr, ans, ds);
            ds.pop_back();
        }
        
//         Don't pick
            findCombination(idx+1,target, arr, ans, ds);
    }
    


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<vector<int>> sol;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        findCombination(0,target, candidates, ans,ds);
        
        for(auto i:ans){
            vector<int> temp = i;
            sol.push_back(temp);
        }
        return sol;
    }
};




// Optimised solution using 
class Solution {

public:
    void findCombination(int idx, int target, vector<int> & arr,vector<vector<int>>&ans, vector<int>&ds){
        
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
        for(int i=idx;i<arr.size();i++){
            if(i>idx && arr[i]==arr[i-1])continue;
            if(arr[i]>target)break;
            ds.push_back(arr[i]);
            findCombination(i+1,target-arr[i], arr,ans,ds);
            ds.pop_back();
            
        }
    }
    


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        findCombination(0,target, candidates, ans,ds);
        
       
        return ans;
    }
};


int main()
{
    
    return 0;
}