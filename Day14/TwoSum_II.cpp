/* 167. Two Sum II - Input Array Is Sorted

    Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.

 

Example 1:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
Example 2:

Input: numbers = [2,3,4], target = 6
Output: [1,3]
Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
Example 3:

Input: numbers = [-1,0], target = -1
Output: [1,2]
Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].
 

Constraints:

2 <= numbers.length <= 3 * 104
-1000 <= numbers[i] <= 1000
numbers is sorted in non-decreasing order.
-1000 <= target <= 1000
The tests are generated such that there is exactly one solution.

 */

#include<bits/stdc++.h>
using namespace std;

// brute force passed 17/21 and then gave tle
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            int rem = target-nums[i];
            for(int j= i+1;j<n;j++){
                if(rem == nums[j]){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    break;
                }
            }
        }
        return ans;
    }
};


// Optimal solution using hash table
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int rem = target-nums[i];
                if(m.find(rem)!=m.end()){
                    ans.push_back(i+1);
                    ans.push_back(m[rem]+1);
                }
                m[nums[i]]=i;
            }
        
       sort(ans.begin(), ans.end());
        return ans;
    }
};