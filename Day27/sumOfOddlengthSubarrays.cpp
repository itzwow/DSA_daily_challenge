/*
1588. Sum of All Odd Length Subarrays
Given an array of positive integers arr, return the sum of all possible odd-length subarrays of arr.

A subarray is a contiguous subsequence of the array.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// brute force solution
class Solution {
public:
    
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int s=0,e=n-1;
        int ans =0;
        
        for(int i=0;i<n;i++){
            int j=i+1;
            while(j<=n){
                for(int k=i;k<j;k++){
                    ans+=arr[k];
                }
                j+=2;
            }
        }
        return ans;
    }
};

// optimal O(n) solution
class Solution {
public:
    
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int start = n-i;
            int end = i+1;
            int total = start*end;
            
            int odd = (total+1)/2;
            ans+= odd*arr[i];
        }
        return ans;
    }
};
 
int main()
{
    
    return 0;
}