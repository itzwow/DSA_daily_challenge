/* PROBLEM STATEMENT:

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

examples: 
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]

Constraints:

->n == nums.length
->1 <= n <= 300
->nums[i] is either 0, 1, or 2.  */


#include<bits/stdc++.h>
using namespace std;

// Brute force apply any sorting algo

// Counting sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int co=0;int cz=0;int ct=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)cz++;
            else if(nums[i]==1)co++;
            else ct++;
        }
        int k=cz;
        for(int i=0;i<cz;i++)nums[i]=0;
        k+=co;
        for(int i=cz;i<k; i++)nums[i]=1;
        // k+=ct;
        for(int i=cz+co;i<cz+co+ct; i++)nums[i]=2;
        
        // return nums;
    }
};

// Optimal solution : Dutch National Flag algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0,e=nums.size()-1,m=0;
        while(m<=e){
            if(nums[m]==0){
                swap(nums[s++],nums[m++]);
                
            }else if(nums[m]==2){
                swap(nums[m],nums[e--]);
            }else{
                m++;
            }
        }
    }
};