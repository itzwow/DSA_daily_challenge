/*  Problem Statement:
119. Pascal's Triangle II

Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]
Example 2:

Input: rowIndex = 0
Output: [1]
Example 3:

Input: rowIndex = 1
Output: [1,1]
 

Constraints:

0 <= rowIndex <= 33

*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans;
        long long res = 1;
        for(int i=0;i<=rowIndex;i++){
            ans.push_back(res);
            res*=(rowIndex-i);
            res/=i+1;
        }
        return ans;
    }
};
 
int main()
{
    
    return 0;
}