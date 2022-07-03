#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Printing triangle in reverse order
void revTriangle(int row,int col){
    if(row==0)return;

    if(col==row){
        cout<<endl;
        revTriangle(row-1,0);
    }
    else
    {
    cout<<'*'<<" ";
    revTriangle(row,col+1);
    }
}

// Printing triangle
void triangle(int row,int col){
    if(row==0)return;

    if(col==row){
        
        triangle(row-1,0);
        cout<<endl;
    }
    else
    {
    
    triangle(row,col+1);
    cout<<'*'<<" ";
    }
}
 
int main()
{   
    cout<<"printing reverse traingle"<<endl;
    revTriangle(4,0);
    cout<<"printing triangle"<<endl;
    triangle(4,0);
    return 0;
}