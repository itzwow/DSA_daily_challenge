// Given a string return all the subsequences of the string

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// method 1
void subSeq(string p,string up,int i){

    // base condition
    if(i==up.size()){
        cout<<p<<endl;
        return;
    }

    char ch = up[i];
    // take it
    subSeq(p+ch, up, i+1);

    // ignore it
    subSeq(p,up,i+1);

}

// method 2
vector<string> subSeq2(vector<string> &ans,string p,string up,int i){

    // base condition
    if(i==up.size()){
        ans.push_back(p);
       return ans;
        
    }

    char ch = up[i];
    // take it
    subSeq2(ans,p+ch, up, i+1);

    // ignore it
    subSeq2(ans,p,up,i+1);
 return ans;
}

// method 3
vector<string> subSeq3(string p,string up,int i){

    vector<string>ans;
    // base condition
    if(i==up.size()){
        ans.push_back(p);      
        return ans;
    }

    char ch = up[i];
    // take it
    vector<string> left = subSeq3(p+ch, up, i+1);

    // ignore it
    vector<string> right = subSeq3(p,up,i+1);
    for(auto i:right)left.push_back(i);
    return left;
}


int main()
{
    string s = "abc";
    // cin>>s;
    vector<string> ans;
    subSeq("",s,0);
    // vector<string> sol = subSeq2(ans,"",s,0);
    // vector<string> sol = subSeq3("",s,0);

    s[1] = 'z';
    // cout<<s<<endl;
    // for(int i=0;i<sol.size();i++){
    //     cout<<sol[i]<<" ";
    // }

    return 0;
}