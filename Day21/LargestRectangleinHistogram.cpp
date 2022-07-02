/*  Problem Statement:
84. Largest Rectangle in Histogram

Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:


Input: heights = [2,4]
Output: 4
 

Constraints:

1 <= heights.length <= 105
0 <= heights[i] <= 104

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Brute force approach using loops O(n^2) passed 87/98
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int ans = INT_MIN;
        
        for(int i=0;i<n;i++){
            int l=i-1,r=i+1;
           
            int cnt = 1;
            while(l>=0 && (heights[l]>=heights[i])){
                cnt++;
                l--;
            }
            
            while(r<=n-1 && (heights[r]>=heights[i])){
                cnt++;
                r++;
            }
            int area = heights[i]*cnt;
            ans = max(area,ans);
        }
        return ans;
    }
};

// optimised solution using stack O(n)
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int lsmall[n], rsmall[n];
        stack<int>s;
        
        // finding left smaller element
        for(int i=0;i<n;i++){
            while(!s.empty()&& heights[s.top()]>=heights[i]){
                s.pop();
            } 
            
            if(s.empty())lsmall[i]=0;
            else lsmall[i] = s.top()+1;
            
            s.push(i);
            
        }
        
        // clearing stack to reuse
        while(!s.empty())s.pop();
        
        // finding right smaller element
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            
            if(s.empty())rsmall[i] = n-1;
            else rsmall[i] = s.top()-1;
            
            s.push(i);
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            int area = (rsmall[i]-lsmall[i]+1)*heights[i];
            ans = max(area,ans);
        }
        return ans;
    }
};
 
int main()
{
    
    return 0;
}