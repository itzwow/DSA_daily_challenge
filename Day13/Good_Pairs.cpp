/*  Codechef starters 40

Good Pairs

Problem
Chef has two arrays AA and BB, each of length NN.

A pair (i,j)(i,j) (1 \leq i \lt j \leq N)(1≤i<j≤N) is said to be a good pair if and only if A_i \oplus A_j = B_i \oplus B_jA 
i ⊕A 
j
​
 =B 
i
​
 ⊕B 
j
​
 

Here, \oplus⊕ denotes the bitwise XOR operation.

Determine the number of good pairs.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases. The description of the test cases follows.
Each test case consists of three lines of input:
The first line contains a single integer NN — the size of the arrays AA and BB.
The second line contains NN space-separated integers A_1, A_2, \ldots, A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
  — the elements of array AA.
The third line contains NN space-separated integers B_1, B_2, \ldots, B_NB 
1
​
 ,B 
2
​
 ,…,B 
N
​
  — the elements of array BB.
Output Format
For each test case, output on a new line the number of good pairs.

example:
2
4
1 2 3 4   
4 3 2 1   
2 -------------->> output
5
1 3 4 7 9 
5 1 0 5 13
4 ----->> output            */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    
	    ll a[n];
	    ll b[n];
	    ll cnt =0;
	    for(ll i=0;i<n;i++)cin>>a[i];
	    for(ll i=0;i<n;i++)cin>>b[i];
	    ll i=0,j=n-1;
	  
	    
	    map<ll,ll>m;
	    for(ll i=0;i<n;i++){
	        m[(a[i]^b[i])]++;
	    }
	    for(auto i:m){
	        if(i.second>1){
	            cnt+=(i.second)*(i.second -1)/2;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
