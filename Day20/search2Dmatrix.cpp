/*Problem statement:

Search a 2D Matrix

Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// using matrix and binary search approach method:1
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int endcol = col-1;
        int strow = 0;
        int endrow = row-1;
        int check=0;
        while(strow<=endrow){
            if(target<=matrix[strow][endcol]){
                int s = 0;
                int e = endcol;
                
                while(s<=e){
                    int mid = s+(e-s)/2;
                    if(target == matrix[strow][mid])return true;
                    else if(target>matrix[strow][mid])s=mid+1;
                    else e=mid-1;
                }
                return false;
            }
            strow++;
        }
        return false;
        
    }
};
 
// Method 2
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int s=0;
        int e = row*col-1;
        int mid = s+(e-s)/2;
        
        while(s<=e){
            int ele = matrix[mid/col][mid%col];
            
            if(ele == target){
                return true;
            }
            else if(target>ele){
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid = s+(e-s)/2;
                
        }
        return false;
        
    }
};


int main()
{
    
    return 0;
}