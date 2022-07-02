#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isSub(string str, string seq){
    int n = str.length(), m=seq.length();
    int i=0,j=0;
    while(i<n && j<m){
        if(str[i]==seq[j])j++;
        i++;
    }
    if(j==m)return true;
    else return false;
}
 
int main()
{   
    string str,seq;
    cin>>str;
    cin>>seq;

    cout<<isSub(str,seq)<<endl;
    
    return 0;
}