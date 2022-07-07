#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(string str, string &ans, int i){
    // Base condition
    if(i==str.size())return ans;

    if(str[i]!='a')ans.push_back(str[i]);

    // recursive call
    solve(str,ans, i+1);
    return ans;
}

string solve2(string str, int i){
    
    // Base condition
    if(i==str.size())return "";

    char ch= str[i];
    // recursive call
    if(str[i]=='a')return  solve2(str,i+1);
    
    // return ch+ solve2(str,i+1);
    return solve2(str,i+1)+ch;
    
   
    
}
 
 
int main()
{
    string s;
    cin>>s;
    string ansStr = "";
    // string ans = solve(s,ansStr,0);
    string ans = solve2(s,0);
    cout<<ans<<endl;
    return 0;
}