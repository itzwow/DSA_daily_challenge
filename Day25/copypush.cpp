#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(string &s,int n){
    if(s=="" || n==1)return true;
    
    if(n%2==0){
        if(s.substr(0,n/2)==s.substr(n/2,n/2))solve(s,n/2);
        else return false;
    }else{
        n=n-1;
        
        if(s.substr(0,n/2)==s.substr(n/2,n/2))solve(s,n/2);
        else return false;
    }
    // return false;
}

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    bool ans;
	    
	  ans = solve(s,n);
	    if(ans)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
