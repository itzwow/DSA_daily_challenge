/*Problem statement
Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Solution
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int total = row*col;
        int stcol = 0;
        int strow = 0;
        int enrow = row-1;
        int encol = col-1;
        vector<int> ans;
        int count = 0;
        
        while(count<total){
            for(int i=stcol;count<total && i<=encol;i++){
                ans.push_back(matrix[strow][i]);
                count++;
            }
            strow++;
            
             for(int i=strow;count<total && i<=enrow;i++){
                ans.push_back(matrix[i][encol]);
                count++;
            }
            encol--;
            
             for(int i=encol;count<total && i>=stcol;i--){
                ans.push_back(matrix[enrow][i]);
                count++;
            }
            enrow--;
                
             for(int i=enrow;count<total && i>=strow;i--){
                ans.push_back(matrix[i][stcol]);
                count++;
            }
            stcol++;
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}