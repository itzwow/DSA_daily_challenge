/*Print all the duplicates in the input string:
Write an efficient program to print all the duplicates and their counts in the input string     */

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> m;

    for(auto i:s){
        m[i]++;
    }
    for(auto i:m){
        if(i.second >=2)cout<<i.first<<" "<<i.second<<endl; 
    }
}

