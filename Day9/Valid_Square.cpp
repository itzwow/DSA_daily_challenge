/* 593. Valid Square

Given the coordinates of four points in 2D space p1, p2, p3 and p4, return true if the four points construct a square.

The coordinate of a point pi is represented as [xi, yi]. The input is not given in any order.

A valid square has four equal sides with positive length and four equal angles (90-degree angles).

 

Example 1:

Input: p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,1]
Output: true
Example 2:

Input: p1 = [0,0], p2 = [1,1], p3 = [1,0], p4 = [0,12]
Output: false
Example 3:

Input: p1 = [1,0], p2 = [-1,0], p3 = [0,1], p4 = [0,-1]
Output: true
 

Constraints:

p1.length == p2.length == p3.length == p4.length == 2
-104 <= xi, yi <= 104                                           */




#include<bits/stdc++.h>
using namespace std;

class Solution {

    int distance(vector<int>& p1, vector<int>& p2){
        return (p2[1]-p1[1])*(p2[1]-p1[1]) + (p2[0]-p1[0])*(p2[0]-p1[0]);
        
    }
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {

        // If 2 points are same then it can never form a square
        if(p1==p2|| p1==p3||p1==p4||p2==p3||p2==p4||p3==p4)return false;
    vector<int> sides = {
        distance(p1,p2),
        distance(p1,p3),
        distance(p1,p4),
        distance(p2,p3),
        distance(p2,p4),
        distance(p3,p4),};
        
    
        // creating an unordered map for storing the distance count
        unordered_map<int,int> m;
        for(auto& s:sides){
            if(!m.count(s))m.insert({s,1});
            else m[s]++;
        }
        cout<<m.size()<<endl;
        if(m.size()!=2) return false;
        for(auto& p:m) return (p.second == 4) || (p.second==2);
        return false;
    }
};