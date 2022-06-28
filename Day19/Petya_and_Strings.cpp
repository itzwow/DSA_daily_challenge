#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int sum1=0,sum2=0;
    transform(s1.begin(), s1.end(),s1.begin(),::tolower);
    transform(s2.begin(), s2.end(),s2.begin(),::tolower);
    int ans = 0,i=0;
    while(ans==0 && i<s1.length()){
        if((s1[i]-'a') > (s2[i]-'a'))ans=1;
        else if((s1[i]-'a') < (s2[i]-'a'))ans=-1;
        i++;
    }
    
   cout<<ans<<endl;
    
}