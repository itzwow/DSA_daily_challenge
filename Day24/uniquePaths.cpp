/*  62. Unique Paths

There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The test cases are generated so that the answer will be less than or equal to 2 * 109.

 

Example 1:


Input: m = 3, n = 7
Output: 28
Example 2:

Input: m = 3, n = 2
Output: 3
Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down
 

Constraints:

1 <= m, n <= 100


*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
//  Brute force recursive approach
class Solution {
public:
    int totalPaths(int m,int n,int total){
        if(m==1 || n==1){
            
            return 1;
        }
        
        
        total= total+totalPaths(m-1,n,total)+totalPaths(m,n-1,total);
        
        
        return total;
    }
    int uniquePaths(int m, int n) {
        int ans= totalPaths(m,n,0);
        return ans;
    }
};
// Intermediate dp approach will code later after learning


// Most optimal approach
class Solution {
public:
    
    
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = m-1;
        double res = 1;
        
        for(int i=1;i<=r;i++){
            res = res*(N-r+i)/i;
        }
        
        // int ans= totalPaths(0,0,dp,m,n);
        return (int)res;
    }
};
int main()
{
    
    return 0;
}