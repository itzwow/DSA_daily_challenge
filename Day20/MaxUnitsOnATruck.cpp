/*
Problem statement:
1710. Maximum Units on a Truck

You are assigned to put some amount of boxes onto one truck. You are given a 2D array boxTypes, where boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:

numberOfBoxesi is the number of boxes of type i.
numberOfUnitsPerBoxi is the number of units in each box of the type i.
You are also given an integer truckSize, which is the maximum number of boxes that can be put on the truck. You can choose any boxes to put on the truck as long as the number of boxes does not exceed truckSize.

Return the maximum total number of units that can be put on the truck.

 

Example 1:

Input: boxTypes = [[1,3],[2,2],[3,1]], truckSize = 4
Output: 8
Explanation: There are:
- 1 box of the first type that contains 3 units.
- 2 boxes of the second type that contain 2 units each.
- 3 boxes of the third type that contain 1 unit each.
You can take all the boxes of the first and second types, and one box of the third type.
The total number of units will be = (1 * 3) + (2 * 2) + (1 * 1) = 8.
Example 2:

Input: boxTypes = [[5,10],[2,5],[4,7],[3,9]], truckSize = 10
Output: 91
 

Constraints:

1 <= boxTypes.length <= 1000
1 <= numberOfBoxesi, numberOfUnitsPerBoxi <= 1000
1 <= truckSize <= 106

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// my approach:
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        int row = boxTypes.size();
        
        map<int,int,greater<int>> m;
        for(int i=0;i<row;i++){
            m[boxTypes[i][1]] += boxTypes[i][0];
        }
        
        int ans = 0;
       vector <int> arr;
        
        for(auto i:m){
            arr.push_back(i.first);
            arr.push_back(i.second);
        }
        int i=0;
        // for(auto i:m){
        //     cout<<i.first<<" -> "<<i.second<<endl;
        // }
        // for(int i=0;i<arr.size();i++){
        //     cout<<arr[i]<<" ";
        // }
        int maxTruck = 0;
        
        for(int i=1;i<arr.size();i+=2){
            maxTruck+=arr[i];
        }
        // cout<<endl;
        while(truckSize>0 && maxTruck>0){
            if(arr[i+1]<truckSize)
                {ans+=(arr[i]*arr[i+1]);
                truckSize-=arr[i+1];
                maxTruck-=arr[i+1];
                }
            else if(truckSize>0){
                ans+=truckSize*arr[i];
                truckSize=0;
            }
            i=i+2;
        }
        return ans;
    }
};
 

int func(int n){
    while (n>1)
    {
       n--;
       return (n/2);
    }
    
}

int main()
{
    cout<<func(90)<<endl;
    return 0;
}