#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    string s;
    cin>>s;
    map<char, int> m;
    for(auto i:s){
        if(i=='1' || i=='2' || i=='3')m[i]++;
    }
    string ans="";
    for(auto i:m){
        int j=1;
        cout<<i.first<<endl;
        while(j<=i.second){ans+=(i.first);ans+='+';j++;}
    }
    ans = ans.substr(0,ans.length()-1);
    cout<<ans<<endl;
    return 0;
}