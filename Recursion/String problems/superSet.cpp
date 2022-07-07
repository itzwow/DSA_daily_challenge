#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<int>nums, vector<int> outer, int i, vector<vector<int>> &ans){
    // Base condition 
    if(i==nums.size()){
        ans.push_back(outer);
        return;
    }

    // ignore
    solve(nums,outer,i+1, ans);

    // take or consider
    int temp = nums[i];
    outer.push_back(temp);
    solve(nums, outer, i+1, ans);

}
 
int main()
{
    vector<vector<int>> ans;
    vector<int> nums = {1,2,3};
    for(auto i:nums){
        cout<<i<<endl;
    }
    vector<int> outer;
    int i=0;

    solve(nums, outer, i, ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}