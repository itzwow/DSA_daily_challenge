/*  Delete middle element of a stack 
Given a stack with push(), pop(), empty() operations, delete the middle of the stack without using any additional data structure.
Middle: ceil((size_of_stack+1)/2) (1-based index)
 

Example 1:

Input: 
Stack = {1, 2, 3, 4, 5}
Output:
ModifiedStack = {1, 2, 4, 5}
Explanation:
As the number of elements is 5 , 
hence the middle element will be the 3rd
element which is deleted
Example 2:

Input: 
Stack = {1 2 3 4}
Output:
ModifiedStack = {1 3 4}
Explanation:
As the number of elements is 4 , 
hence the middle element will be the 2nd
element which is deleted
 

Your Task:
You don't need to read input or print anything. Complete the function deleteMid() which takes the stack and its size as input parameters and modifies the stack in-place.
Note: The output shows the stack from top to bottom.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
2 ≤ size of stack ≤ 100     */

#include<bits/stdc++.h>
using namespace std;

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++ 

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int n)
    {   
        int mid = n%2==0?n/2: n/2+1;
        stack<int> dum;
        while(!s.empty()){
            if(n!=mid){
                dum.push(s.top());
            }
            s.pop();
            n--;
        }
        while(!dum.empty()){
            s.push(dum.top());
            dum.pop();
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends


//   Recursive approach
void solve(stack<int>&s, int cnt, int size){
//     Base case
    if(cnt==size/2){
        s.pop();
        return;
    }
    
    int num = s.top();
    s.pop();
    
//     Recursive call
    solve(s,cnt+1, size);
    
    s.push(num);
    
}

void deleteMiddle(stack<int>&s, int n){
	
   // Write your code here
   int cnt =0;
   solve(s,cnt,n);
    
   
}