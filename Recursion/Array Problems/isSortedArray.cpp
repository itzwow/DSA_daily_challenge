#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isSort(vector <int> arr , int i){
    // base case
    if(i==arr.size()){
        return true;
    }

    // recursive call
    return ((arr[i]<=arr[i+1] ) && isSort(arr,i+1));
} 

int main()
{
    vector <int> arr = {12,23,3,45,6,78,9,5};
    // vector <int> arr = {1,2,3,4,5,6,7,8};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<endl;
    bool ans = isSort(arr,0);
    if(ans)cout<<"Array is sorted"<<endl;
    else cout<<"Array is not sorted"<<endl;
    return 0;
}