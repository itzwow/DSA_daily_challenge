/* Problem statement
Given a list arr of N integers, print sums of all subsets in it.

 

Example 1:

Input:
N = 2
arr[] = {2, 3}
Output:
0 2 3 5
Explanation:
When no elements is taken then Sum = 0.
When only 2 is taken then Sum = 2.
When only 3 is taken then Sum = 3.
When element 2 and 3 are taken then 
Sum = 2+3 = 5.
Example 2:

Input:
N = 3
arr = {5, 2, 1}
Output:
0 1 2 3 5 6 7 8
Your Task:  
You don't need to read input or print anything. Your task is to complete the function subsetSums() which takes a list/vector and an integer N as an input parameter and return the list/vector of all the subset sums.

Expected Time Complexity: O(2N)
Expected Auxiliary Space: O(2N)

Constraints:
1 <= N <= 15
0 <= arr[i] <= 104

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Solution
{
public:
    void subsetsum(vector<int>&arr, int i, vector<int>&ans, int sum){
        if(i==arr.size()){
            ans.push_back(sum);
            return;
        }
        
        // pick element
        
        subsetsum(arr,i+1,ans,sum+arr[i]);
        
        
        // don't pick
        subsetsum(arr,i+1,ans,sum);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int>ans;
        subsetsum(arr,0,ans,0);
        return ans;
    }
};

//  Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  
 