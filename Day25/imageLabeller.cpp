#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<double>&nums, int m){
    int n = nums.size();
    double  ans = 0.00;
    int i=0;
    while(m>1){
        ans+=nums[i];
        i++;m--;
    }
    cout<<ans<<endl;
    sort(nums.begin(),nums.end());
    int l = nums.size();
    if((l&1))ans+=nums[l/2];
    else ans+=(nums[l/2]+nums[l/2-1])/2.00;

    cout<<fixed<<setprecision(1)<<ans<<endl;
}
 
int main()
{
    int t;
    cin>>t;


    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<double>nums;
        for(ll i=0;i<n;i++){
            double  temp;
            cin>>temp;
            nums.push_back(temp);
        }

        sort(nums.begin(), nums.end(), greater<double>());
        solve(nums,m);
        // cout<<ans<<endl;
    }
    return 0;
}