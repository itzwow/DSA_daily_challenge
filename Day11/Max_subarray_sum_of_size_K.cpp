/*Max Sum Subarray of size K 
Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

 

Example 1:

Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.
 

Example 2:

Input:
N = 4, K = 4
Arr = [100, 200, 300, 400]
Output:
1000
Explanation:
Arr1 + Arr2 + Arr3  
+ Arr4 =1000,
which is maximum.       */

#include<bits/stdc++.h>
using namespace std;

 int maximumSumSubarray(int k, vector<int> &arr , int n){
        int sum = 0; 
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int curr = sum;
        for(int j=k;j<n;j++){
           curr += arr[j]-arr[j-k];
            sum = max(sum,curr);
        }
        return sum;
    }

int main(){
    int n ,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = maximumSumSubarray(k,arr,n);
    cout<<ans<<endl;
}