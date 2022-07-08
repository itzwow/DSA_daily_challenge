#include<bits/stdc++.h>
using namespace std;
#define ll long long

// method 1 with extra space complxity
void solve(vector<int>&ds, vector<int> nums, vector<vector<int>>&ans, int freq[]){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                solve(ds,nums,ans, freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }

// Method 2: using only single matrix
void recurPermute(vector<int>&nums,vector<vector<int>>&ans, int i){
    if(i==nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int j=i;j<nums.size();j++){
        swap(nums[i], nums[j]);
        recurPermute(nums, ans,i+1);
        swap(nums[i],  nums[j]);
    }
}

 vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)freq[i]=0;
        // solve(ds,nums, ans, freq);

        recurPermute(nums, ans,0);
        return ans;
    }

int main()
{
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp; 
        cin>>temp;
        nums.push_back(temp);
    }

    vector<vector<int>> sol = permute(nums);
    cout<<"here are the permutations"<<endl;
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}   