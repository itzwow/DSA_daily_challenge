/* problem statement:
240. Search a 2D Matrix II

Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Example 1:


Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true
Example 2:


Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= n, m <= 300
-109 <= matrix[i][j] <= 10^9
All the integers in each row are sorted in ascending order.
All the integers in each column are sorted in ascending order.
-10^9 <= target <= 10^9


*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// sol1:
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row  = matrix.size();
        int col = matrix[0].size();
        
        int rowidx = 0;
        int colidx = col-1;
        
        while(rowidx<row && colidx>=0){
            int ele = matrix[rowidx][colidx];
            
            if(ele==target)return true;
            else if(ele>target) colidx--;
            else rowidx++;
        }
        return false;
    }
};
 
int main()
{
    
    return 0;
}