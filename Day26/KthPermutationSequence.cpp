/*
60. Permutation Sequence

The set [1, 2, 3, ..., n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.

 

Example 1:

Input: n = 3, k = 3
Output: "213"
Example 2:

Input: n = 4, k = 9
Output: "2314"
Example 3:

Input: n = 3, k = 1
Output: "123"
 

Constraints:

1 <= n <= 9
1 <= k <= n!

*/



#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Solution {
public:
    string getPermutation(int n, int k) {
        string ans="";
        vector<int> nums;
        int fact = 1;
        
        for(int i=1;i<n;i++){
            fact*=i;
            nums.push_back(i);
        }
        nums.push_back(n);
        k=k-1;
        
        while(true){
            ans+=to_string(nums[k/fact]);
            nums.erase(nums.begin()+k/fact);
            if(nums.size()==0)break;
            k = k%fact;
            fact=fact/nums.size();
        }
        return ans;
    }
};
 
int main()
{
    
    return 0;
}