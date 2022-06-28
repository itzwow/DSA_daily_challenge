#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int cntz = 0,cnto=0;
    int i=0;
    if(n<7)cout<<"NO"<<endl;
    else{
    while(i<n && cntz<7 && cnto<7){
        if(s[i]=='1'){cntz=0;cnto++;}
        else{cnto=0;cntz++;}
        i++;

    }
    // cout<<cntz<<" "<<cnto<<endl;
    if(cntz==7 || cnto==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}