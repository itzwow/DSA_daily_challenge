/*  Adding Ones gfg

You start with an array A of size N. Also, A[i] = 0 for i = 1 to N. You will be given K positive integers. Let j be one of these integers, you have to add 1 to all A[i], for i ≥ j. Your task is to print array A after all these K updates are done.


Example 1:

Input:
3 4
1 1 2 3
Output:
2 3 4
Explanation:
Initially the array is {0, 0, 0}. After the
first 1, it becomes {1, 1, 1}. After the
second 1 it becomes {2, 2, 2}. After 2, it 
becomes {2, 3, 3}. After 3 it becomes, {2, 3, 4}. 
 

Example 2:

Input:
2 3
1 1 1
Output:
3 3 
Explanation:
Initially the array is {0, 0}. After the
first 1, it becomes {1, 1}. After the
second 1 it becomes {2, 2}. After the
third 1, it becomes {3, 3}.
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function update() which takes the array A[] and its size N as inputs and make the updates and fill the array A[].

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 ≤ N, K ≤ 105


 */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        map<int,int>m;
        for(int i=0;i<k;i++){
            a[updates[i]-1]++;
        }
      
       
       for(int i=1;i<n;i++){
           a[i] = a[i]+a[i-1];
       }
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n]={0}, updates[k]={0};
		for(int i = 0; i < k; i++)
		cin>>updates[i];
		Solution ob;
		ob.update(a, n, updates, k);
		
		for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends