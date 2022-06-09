#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int target, int s, int e){
    
    if(s>e){
        return -1;
    }

    int mid = s+(e-s)/2;

    if(arr[mid] == target){
        return mid;
    }else if(arr[mid]>target){
        return bs(arr, target, s,mid-1);

    }else {
        return bs(arr, target,mid+1,e);
    }

}

int main(){
    int arr[] = {12,34,5,6,90,0,12};
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int ans = bs(arr,34,0,n);
    for(auto i:arr)cout<<i<<" ";
    cout<<endl;
    cout<<ans<<endl;

}