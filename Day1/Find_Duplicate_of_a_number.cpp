/* problem statement:Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

Input: nums = [1,3,4,2,2]
Output: 2 

Input: nums = [3,1,3,4,2]
Output: 3

Constraints:

-1 <= n <= 105
-nums.length == n + 1
-1 <= nums[i] <= n
-All the integers in nums appear only once except for precisely one integer which appears two or more times.  */


#include<bits/stdc++.h>
using namespace std;

// Brute force solution:
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){return nums[i];}
        }
        return 0;
    }
};


// Optimal solution
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            slow=nums[slow];
            fast = nums[nums[fast]];
            
        }while(slow!=fast);
        
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
