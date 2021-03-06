/* 149. Max Points on a Line

Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane, return the maximum number of points that lie on the same straight line.

Example 1:


Input: points = [[1,1],[2,2],[3,3]]
Output: 3
Example 2:


Input: points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
Output: 4
 

Constraints:

1 <= points.length <= 300
points[i].length == 2
-104 <= xi, yi <= 104
All the points are unique.          */

#include<bits/stdc++.h>
using namespace std;

// Idea: Three points lie in a same straight line if slopes among them are equal.
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if(n<=2)return n;
        int ans = 2;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int total =2;
                for(int k=0;k<n;k++){
                    if(k!=i && k!=j){
                        if((points[i][1]-points[k][1])*(points[i][0]-points[j][0]) == (points[i][1]-points[j][1])*(points[i][0]-points[k][0]))total ++;
                    }
                    ans = max(ans,total);
                }
            }
        }
        return ans;
    }
};