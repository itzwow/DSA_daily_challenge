#include<bits/stdc++.h>
using namespace std;

// calling functions again and again
/*{void message(){
    cout<<"Hello world"<<endl;
    message1();
}
void message1(){
    cout<<"Hello world"<<endl;
    message2();
}
void message2(){
    cout<<"Hello world"<<endl;
    
}};*/

// displaying any message n number of times
void message(int n){
    if(n==0)return;

    cout<<"Hello world"<<endl;
    message(n-1);
}

// printing number from 1-n;
void printNum(int n){
    if(n==0)
    return;

    
    printNum(n-1);
    cout<<n<<endl;
    
}

int main(){
    // message(6);

    // print number 1-n recursively
    printNum(6);
}