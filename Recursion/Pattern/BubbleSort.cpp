#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void bubbleSort(vector<int> &arr, int n){
    if(n==1)return;

    int cnt =0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
        swap(arr[i], arr[i+1]);
        cnt++;
    }}
    // if cnt==0 => the array is already sorted and no swapping is required
    if(cnt==0)return;

    bubbleSort(arr, n-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        
        cin>>temp;
        arr.push_back(temp);

    }

    bubbleSort(arr, n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}