#include<iostream>
using namespace std;
int a;
int b;
int c;
int d;
int n;
int main(){
     cin>>n;
    while (n--)
    {
        cin>>a>>b>>c>>d;
    }
    
    if(a=b && b==c && c==d){
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }




}