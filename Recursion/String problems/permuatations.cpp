#include<bits/stdc++.h>
using namespace std;
#define ll long long

void permute(string p, string up, int i){

    if(i==up.size()){
        cout<<p<<endl;
        return;
    }

    char ch = up[i];
    for(int j=0;j<p.size();j++){
        string ini = p.substr(0,j);
        string end = p.substr(j,p.size()-j-1);
        permute(ini+ch+end, up, i+1);
    }
}

int main()
{
    string s;
    s= "abc";
    permute("",s,0);
    return 0;
}   