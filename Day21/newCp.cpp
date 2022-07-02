#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin>>n;
    vector <int>  arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    // int ans = largeNeg(arr);
    cout<<"Printinig ans"<<endl;

    sort(arr.begin(), arr.end(), greater<int>());
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;

   int i=0;
   while(arr[i]>=0)i++;
   int neg = -1;
   bool notFound = true;
   while(notFound && i<n){
    if(arr[i]!=neg){

        notFound = false;
    }
    else if(arr[i+1]==neg){i++;}
    else{neg--;
    i++;}
   }
   cout<<neg<<endl;
    return 0;
}