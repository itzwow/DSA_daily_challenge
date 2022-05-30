#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    stack<char> stk;

    for(int i=0;i<s.length();i++){
        stk.push(s[i]);
    }

    string rev = "";
    while(!stk.empty()){
        rev+=stk.top();
        stk.pop();
    }
    cout<<"Reverse string is: "<<" "<<rev<<endl; 
}