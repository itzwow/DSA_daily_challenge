#include<bits/stdc++.h>
using namespace std;
#define ll long long

int find(vector<int> arr, int target, int idx){
    // Base condition
    if(idx<0){
        return idx;
    }

    // recursion call
    return arr[idx]==target?idx:find(arr, target, idx-1); 
}

vector<int> findAll(vector<int> arr, int target, int idx, vector<int> &ans){
    // Base condition
    if(idx<0){
        return ans;
    }

    // recursion call
    if(arr[idx]==target)ans.push_back(idx);
    return findAll(arr, target, idx-1,ans); 
}




int main()
{
    vector <int> arr = {1,2,12,45,123, 123,6,78,90,123};
    int target = 123;
    int i=arr.size();
    vector<int>ans;
    int idx = find(arr, target, i-1);
    // cout<<typeid(findAll(arr,target,i-1,ans)).name()<<endl;
    ans = findAll(arr,target,i-1,ans);
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
    // if(idx==-1)cout<<"Not found"<<endl;
    // else cout<<"Element found at index: " <<idx<<endl;
    return 0;
}